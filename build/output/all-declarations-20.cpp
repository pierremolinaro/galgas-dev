#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-20.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@dataPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_dataPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2091)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2092)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cStringRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2099)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_dataPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                     extensionMethod_dataPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getGetterMap (defineExtensionMethod_dataPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@functionPredefinedTypeAST getGetterMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_getterMap & outArgument_outMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2113)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2114)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("resultType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2121)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("formalParameterTypeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2128)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("invoke"), GALGAS_string ("objectlist"), GALGAS_string ("inParameters"), GALGAS_string ("location"), GALGAS_string ("inErrorLocation"), GALGAS_string ("object"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2135)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                     extensionMethod_functionPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionPredefinedTypeAST_getGetterMap (defineExtensionMethod_functionPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@objectPredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_objectPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2149)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectStaticType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2150)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectDynamicType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2157)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_objectPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_objectPredefinedTypeAST.mSlotID,
                                     extensionMethod_objectPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_objectPredefinedTypeAST_getGetterMap (defineExtensionMethod_objectPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@filewrapperPredefinedTypeAST getGetterMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_getterMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2171)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allTextFilePathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2172)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allBinaryFilePathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2179)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allDirectoryPathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2186)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2193)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allFilePathesWithExtension"), GALGAS_string ("string"), GALGAS_string ("inExtension"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2200)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2207)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2214)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2221)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2228)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathForPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2235)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2242)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2249)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2256)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                     extensionMethod_filewrapperPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperPredefinedTypeAST_getGetterMap (defineExtensionMethod_filewrapperPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@timerPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_timerPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_getterMap & outArgument_outMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2271)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("msFromStart"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2272)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2279)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isRunning"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2286)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_timerPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                     extensionMethod_timerPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getGetterMap (defineExtensionMethod_timerPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@bigintPredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bigintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2301)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2302)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2309)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt64"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2316)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt64"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2323)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2330)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("spacedString"), GALGAS_string ("uint"), GALGAS_string ("inSeparation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2337)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2345)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2352)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2363)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForSignedRepresentation"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2370)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForUnsignedRepresentation"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2377)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2384)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2391)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2398)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2405)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("abs"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2412)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2419)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isZero"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2427)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sign"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2434)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForUnsignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2441)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForSignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2448)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForUnsignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2455)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForSignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2462)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForUnsignedRepresentation"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2469)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForSignedRepresentation"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2476)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bigintPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                     extensionMethod_bigintPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getGetterMap (defineExtensionMethod_bigintPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterModifierWithInputArgument'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterModifierWithInputArgument (GALGAS_setterMap & ioArgument_ioSetterMap,
                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                             const GALGAS_string constinArgument_inInputArgumentTypeName,
                                             const GALGAS_string constinArgument_inInputArgumentName,
                                             const GALGAS_string constinArgument_inSetterName,
                                             const GALGAS_bool constinArgument_inHasCompilerArgument,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex_2329 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2329 COMMA_SOURCE_FILE ("semanticsSetters.galgas", 26)) ;
  }
  GALGAS_formalParameterSignature var_argList_2366 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 27)) ;
  var_argList_2366.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 28)), var_argumentTypeIndex_2329, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 28)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 28)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 30))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 30)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 31)), var_argList_2366, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 34)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 29)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'enterModifierWithOutputAndInputArguments'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterModifierWithOutputAndInputArguments (GALGAS_setterMap & ioArgument_ioSetterMap,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                       const GALGAS_string constinArgument_inOutputArgumentTypeName,
                                                       const GALGAS_string constinArgument_inOutputArgumentName,
                                                       const GALGAS_string constinArgument_inInputArgumentTypeName,
                                                       const GALGAS_string constinArgument_inInputArgumentName,
                                                       const GALGAS_string constinArgument_inSetterName,
                                                       const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_outputArgumentTypeIndex_3313 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inOutputArgumentTypeName, var_outputArgumentTypeIndex_3313 COMMA_SOURCE_FILE ("semanticsSetters.galgas", 51)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_inputArgumentTypeIndex_3431 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_inputArgumentTypeIndex_3431 COMMA_SOURCE_FILE ("semanticsSetters.galgas", 52)) ;
  }
  GALGAS_formalParameterSignature var_argList_3468 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 53)) ;
  var_argList_3468.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 54)), var_outputArgumentTypeIndex_3313, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsSetters.galgas", 54)), constinArgument_inOutputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 54)) ;
  var_argList_3468.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 55)), var_inputArgumentTypeIndex_3431, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 55)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 55)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 57))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 57)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 58)), var_argList_3468, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 61)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 56)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterModifierWith2InputArguments'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterModifierWith_32_InputArguments (GALGAS_setterMap & ioArgument_ioSetterMap,
                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                  const GALGAS_string constinArgument_inInputArgument_31_TypeName,
                                                  const GALGAS_string constinArgument_inInputArgument_31_Name,
                                                  const GALGAS_string constinArgument_inInputArgument_32_TypeName,
                                                  const GALGAS_string constinArgument_inInputArgument_32_Name,
                                                  const GALGAS_string constinArgument_inSetterName,
                                                  const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_argList_5318 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 102)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex_5454 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex_5454 COMMA_SOURCE_FILE ("semanticsSetters.galgas", 103)) ;
  }
  var_argList_5318.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 104)), var_argumentTypeIndex_5454, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 104)), constinArgument_inInputArgument_31_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 104)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex_5454 COMMA_SOURCE_FILE ("semanticsSetters.galgas", 105)) ;
  }
  var_argList_5318.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 106)), var_argumentTypeIndex_5454, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 106)), constinArgument_inInputArgument_32_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 106)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 108))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 108)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 109)), var_argList_5318, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 112)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 107)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterModifierWithoutArgument'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterModifierWithoutArgument (GALGAS_setterMap & ioArgument_ioSetterMap,
                                           const GALGAS_string constinArgument_inSetterName,
                                           const GALGAS_bool constinArgument_inHasCompilerArgument,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 156))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 156)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 157)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 158)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 160)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 155)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@stringPredefinedTypeAST getSetterMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringPredefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_setterMap & outArgument_outSetterMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 171)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inCapacity"), GALGAS_string ("setCapacity"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 172)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("incIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 180)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("decIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 188)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inColumnIndex"), GALGAS_string ("appendSpacesUntilColumn"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 196)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 204)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("insertCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 214)) ;
  }
  {
  routine_enterModifierWithOutputAndInputArguments (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("outChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("removeCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 224)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringPredefinedTypeAST_getSetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getSetterMap (defineExtensionMethod_stringPredefinedTypeAST_getSetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@dataPredefinedTypeAST getSetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_dataPredefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_setterMap & outArgument_outSetterMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 241)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendByte"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 242)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortBE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 250)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortLE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 258)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntBE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 266)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntLE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 274)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_string ("appendUTF8String"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 282)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("data"), GALGAS_string ("inValue"), GALGAS_string ("appendData"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 290)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_dataPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                     extensionMethod_dataPredefinedTypeAST_getSetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getSetterMap (defineExtensionMethod_dataPredefinedTypeAST_getSetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@filewrapperPredefinedTypeAST getSetterMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperPredefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_setterMap & outArgument_outSetterMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 306)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inDirectoryPath"), GALGAS_string ("setCurrentDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 307)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                     extensionMethod_filewrapperPredefinedTypeAST_getSetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperPredefinedTypeAST_getSetterMap (defineExtensionMethod_filewrapperPredefinedTypeAST_getSetterMap, NULL) ;

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
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 323)) ;
  {
  routine_enterModifierWith_32_InputArguments (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), GALGAS_string ("inBit"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setBitAtIndex"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 324)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("complementBitAtIndex"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 334)) ;
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
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 350)) ;
  {
  routine_enterModifierWithoutArgument (outArgument_outSetterMap, GALGAS_string ("stop"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 351)) ;
  }
  {
  routine_enterModifierWithoutArgument (outArgument_outSetterMap, GALGAS_string ("resume"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 356)) ;
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
//                                    Routine 'enterInstanceMethodWithoutArgument'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInstanceMethodWithoutArgument (GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                 const GALGAS_string constinArgument_inInstanceMethodName,
                                                 const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 24)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 25)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 26)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 27)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 29)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 23)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'enterInstanceMethodWithInputArgument'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInstanceMethodWithInputArgument (GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                   const GALGAS_string constinArgument_inInputArgumentTypeName,
                                                   const GALGAS_string constinArgument_inInputArgumentName,
                                                   const GALGAS_string constinArgument_inInstanceMethodName,
                                                   const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex_2913 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2913 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 44)) ;
  }
  GALGAS_formalParameterSignature var_argList_2950 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 45)) ;
  var_argList_2950.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 46)), var_argumentTypeIndex_2913, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 46)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 46)) ;
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 48)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 49)), var_argList_2950, GALGAS_location::constructor_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 53)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 47)) ;
  }
}


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
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 88)) ;
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 89)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 97)) ;
  }
  GALGAS_formalParameterSignature var_argList_5034 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 105)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_5138 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_5138 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 106)) ;
  }
  var_argList_5034.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 107)), var_t_5138, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 107)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 107)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_5138 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 108)) ;
  }
  var_argList_5034.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)), var_t_5138, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 111))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 111)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 112)), var_argList_5034, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 114)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 116)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 110)) ;
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
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 127)) ;
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 128)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 136)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 144)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 152)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeSymbolicLinkWithPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 160)) ;
  }
  {
  routine_enterInstanceMethodWithoutArgument (outArgument_outInstanceMethodMap, GALGAS_string ("makeDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 168)) ;
  }
  GALGAS_formalParameterSignature var_argList_7227 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 174)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_7331 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_7331 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 175)) ;
  }
  var_argList_7227.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 176)), var_t_7331, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 176)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 176)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_7331 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 177)) ;
  }
  var_argList_7227.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)), var_t_7331, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 180))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 180)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 181)), var_argList_7227, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 183)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 185)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 179)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToExecutableFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 189))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 189)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 190)), var_argList_7227, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 192)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 194)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 188)) ;
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
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 205)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_bigIntType_8503 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), var_bigIntType_8503 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 207)) ;
  }
  GALGAS_formalParameterSignature var_argList_8540 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 208)) ;
  var_argList_8540.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 209)), var_bigIntType_8503, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 209)), GALGAS_string ("inDivisor")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 209)) ;
  var_argList_8540.addAssign_operation (GALGAS_string ("quotient").getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 210)), var_bigIntType_8503, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 210)), GALGAS_string ("outQuotient")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 210)) ;
  var_argList_8540.addAssign_operation (GALGAS_string ("remainder").getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)), var_bigIntType_8503, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)), GALGAS_string ("outRemainder")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("divideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 213))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 213)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 214)), var_argList_8540, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 216)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 218)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 212)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("floorDivideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 222))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 222)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 223)), var_argList_8540, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 225)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 227)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 221)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("ceilDivideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 231))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 231)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 232)), var_argList_8540, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 234)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 236)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 230)) ;
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
//                                     Routine 'enterClassMethodWithInputArgument'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterClassMethodWithInputArgument (GALGAS_classMethodMap & ioArgument_ioClassMethodMap,
                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                const GALGAS_string constinArgument_inClassMethodName,
                                                const GALGAS_string constinArgument_inArgumentTypeName,
                                                const GALGAS_string constinArgument_inArgumentName,
                                                const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex_2341 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName, var_argumentTypeIndex_2341 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 26)) ;
  }
  GALGAS_formalParameterSignature var_argList_2378 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 27)) ;
  var_argList_2378.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 28)), var_argumentTypeIndex_2341, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 28)), constinArgument_inArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 28)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 30))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 30)), var_argList_2378, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 29)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterClassMethodWith3InputArguments'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterClassMethodWith_33_InputArguments (GALGAS_classMethodMap & ioArgument_ioClassMethodMap,
                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                     const GALGAS_string constinArgument_inClassMethodName,
                                                     const GALGAS_string constinArgument_inArgumentTypeName_31_,
                                                     const GALGAS_string constinArgument_inArgumentName_31_,
                                                     const GALGAS_string constinArgument_inArgumentTypeName_32_,
                                                     const GALGAS_string constinArgument_inArgumentName_32_,
                                                     const GALGAS_string constinArgument_inArgumentTypeName_33_,
                                                     const GALGAS_string constinArgument_inArgumentName_33_,
                                                     const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_argList_3220 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 50)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex_31__3350 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_31_, var_argumentTypeIndex_31__3350 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 52)) ;
  }
  var_argList_3220.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 53)), var_argumentTypeIndex_31__3350, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 53)), constinArgument_inArgumentName_31_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 53)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex_32__3561 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_32_, var_argumentTypeIndex_32__3561 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 55)) ;
  }
  var_argList_3220.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 56)), var_argumentTypeIndex_32__3561, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 56)), constinArgument_inArgumentName_32_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 56)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex_33__3772 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_33_, var_argumentTypeIndex_33__3772 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 58)) ;
  }
  var_argList_3220.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 59)), var_argumentTypeIndex_33__3772, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 59)), constinArgument_inArgumentName_33_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 59)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 61))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 61)), var_argList_3220, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 61)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'enterClassMethodWithStringInputArgument'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterClassMethodWithStringInputArgument (GALGAS_classMethodMap & ioArgument_ioClassMethodMap,
                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      const GALGAS_string constinArgument_inClassMethodName,
                                                      const GALGAS_string constinArgument_inStringArgumentName,
                                                      const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex_4455 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_argumentTypeIndex_4455 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 73)) ;
  }
  GALGAS_formalParameterSignature var_argList_4492 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 74)) ;
  var_argList_4492.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 75)), var_argumentTypeIndex_4455, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 75)), constinArgument_inStringArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 75)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 77))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 77)), var_argList_4492, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 76)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@uintPredefinedTypeAST getClassMethodMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_uintPredefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeMethods.galgas", 89)) ;
  {
  routine_enterClassMethodWithInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setRandomSeed"), GALGAS_string ("uint"), GALGAS_string ("inSeed"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 90)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_uintPredefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                          extensionMethod_uintPredefinedTypeAST_getClassMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uintPredefinedTypeAST_getClassMethodMap (defineExtensionMethod_uintPredefinedTypeAST_getClassMethodMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@applicationPredefinedTypeAST getClassMethodMap'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_applicationPredefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                            GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeMethods.galgas", 106)) ;
  {
  routine_enterClassMethodWith_33_InputArguments (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setBoolOptionValue"), GALGAS_string ("string"), GALGAS_string ("inDomain"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("bool"), GALGAS_string ("inValue"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 107)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setUIntOptionValue"), GALGAS_string ("string"), GALGAS_string ("inDomain"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 119)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setStringOptionValue"), GALGAS_string ("string"), GALGAS_string ("inDomain"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 131)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_applicationPredefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_applicationPredefinedTypeAST.mSlotID,
                                          extensionMethod_applicationPredefinedTypeAST_getClassMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_applicationPredefinedTypeAST_getClassMethodMap (defineExtensionMethod_applicationPredefinedTypeAST_getClassMethodMap, NULL) ;

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
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeMethods.galgas", 151)) ;
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFile"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 152)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFileIfExists"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 159)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeEmptyDirectory"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 166)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeDirectoryRecursively"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 173)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringType_7510 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_7510 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 180)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolType_7619 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_boolType_7619 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 181)) ;
  }
  GALGAS_formalParameterSignature var_argList_7675 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 183)) ;
  var_argList_7675.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 184)), var_stringType_7510, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 184)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 184)) ;
  var_argList_7675.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 185)), var_stringType_7510, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 185)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 185)) ;
  var_argList_7675.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 186)), var_stringType_7510, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 186)), GALGAS_string ("inContents")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 186)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("generateFile"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 188))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 188)), var_argList_7675, GALGAS_bool (true) COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 187)) ;
  }
  var_argList_7675 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 193)) ;
  var_argList_7675.addAssign_operation (GALGAS_string ("startPath").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 194)), var_stringType_7510, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 194)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 194)) ;
  var_argList_7675.addAssign_operation (GALGAS_string ("fileName").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 195)), var_stringType_7510, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 195)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 195)) ;
  var_argList_7675.addAssign_operation (GALGAS_string ("lineComment").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 196)), var_stringType_7510, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 196)), GALGAS_string ("inLineCommentPrefix")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 196)) ;
  var_argList_7675.addAssign_operation (GALGAS_string ("header").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 197)), var_stringType_7510, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 197)), GALGAS_string ("inHeader")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 197)) ;
  var_argList_7675.addAssign_operation (GALGAS_string ("defaultUserZone1").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 198)), var_stringType_7510, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 198)), GALGAS_string ("inDefaultUserZone1")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 198)) ;
  var_argList_7675.addAssign_operation (GALGAS_string ("generatedZone2").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 199)), var_stringType_7510, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 199)), GALGAS_string ("inGeneratedZone2")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 199)) ;
  var_argList_7675.addAssign_operation (GALGAS_string ("defaultUserZone2").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 200)), var_stringType_7510, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 200)), GALGAS_string ("inDefaultUserZone2")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 200)) ;
  var_argList_7675.addAssign_operation (GALGAS_string ("generatedZone3").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 201)), var_stringType_7510, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 201)), GALGAS_string ("inGeneratedZone3")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 201)) ;
  var_argList_7675.addAssign_operation (GALGAS_string ("makeExecutable").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 202)), var_boolType_7619, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 202)), GALGAS_string ("inMakeExecutable")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 202)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("generateFileWithPattern"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 204))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 204)), var_argList_7675, GALGAS_bool (true) COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 203)) ;
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
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeMethods.galgas", 216)) ;
  {
  routine_enterClassMethodWithInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setNodeTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 217)) ;
  }
  {
  routine_enterClassMethodWithInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setAndTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 225)) ;
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
//                                           Once function 'compilerCppName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_compilerCppName (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCompilerCppName ; // Returned variable
  result_outCompilerCppName = GALGAS_string ("inCompiler") ;
//---
  return result_outCompilerCppName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_compilerCppName = false ;
static GALGAS_string gOnceFunctionResult_compilerCppName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_compilerCppName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compilerCppName) {
    gOnceFunctionResult_compilerCppName = onceFunction_compilerCppName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compilerCppName = true ;
  }
  return gOnceFunctionResult_compilerCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_compilerCppName (void) {
  gOnceFunctionResult_compilerCppName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_compilerCppName (NULL,
                                                             releaseOnceFunctionResult_compilerCppName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_compilerCppName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_compilerCppName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_compilerCppName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_compilerCppName ("compilerCppName",
                                                                 functionWithGenericHeader_compilerCppName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_compilerCppName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Once function 'syntaxDirectedTranslationResultVarName'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_syntaxDirectedTranslationResultVarName (C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("ioSyntaxDirectedTranslationResult") ;
//---
  return result_outName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = false ;
static GALGAS_string gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_syntaxDirectedTranslationResultVarName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName) {
    gOnceFunctionResult_syntaxDirectedTranslationResultVarName = onceFunction_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = true ;
  }
  return gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_syntaxDirectedTranslationResultVarName (void) {
  gOnceFunctionResult_syntaxDirectedTranslationResultVarName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_syntaxDirectedTranslationResultVarName (NULL,
                                                                                    releaseOnceFunctionResult_syntaxDirectedTranslationResultVarName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_syntaxDirectedTranslationResultVarName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_syntaxDirectedTranslationResultVarName (C_Compiler * inCompiler,
                                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  return function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_syntaxDirectedTranslationResultVarName ("syntaxDirectedTranslationResultVarName",
                                                                                        functionWithGenericHeader_syntaxDirectedTranslationResultVarName,
                                                                                        & kTypeDescriptor_GALGAS_string,
                                                                                        0,
                                                                                        functionArgs_syntaxDirectedTranslationResultVarName) ;

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
  result_outString = GALGAS_string ("grammar ").add_operation (object->mProperty_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 300)) ;
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
  result_outString = GALGAS_string ("syntax ").add_operation (object->mProperty_mSyntaxComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 307)) ;
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
  result_outString = GALGAS_string ("lexique ").add_operation (object->mProperty_mLexiqueComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 314)) ;
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
  result_outString = GALGAS_string ("predefined type @").add_operation (object->mProperty_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 321)) ;
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
  result_outString = GALGAS_string ("map @").add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 328)) ;
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
  result_outString = GALGAS_string ("map proxy @").add_operation (object->mProperty_mMapProxyTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 335)) ;
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
  result_outString = GALGAS_string ("enum @").add_operation (object->mProperty_mEnumTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 342)) ;
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
  result_outString = GALGAS_string ("sorted list @").add_operation (object->mProperty_mSortedListTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 349)) ;
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
//                         Overriding extension getter '@listDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_listDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  result_outString = GALGAS_string ("list @").add_operation (object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 356)) ;
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
  result_outString = GALGAS_string ("class @").add_operation (object->mProperty_mClassTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 363)) ;
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
  result_outString = GALGAS_string ("array @").add_operation (object->mProperty_mArrayTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 370)) ;
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
  result_outString = GALGAS_string ("listmap @").add_operation (object->mProperty_mListmapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 377)) ;
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
  result_outString = GALGAS_string ("filewrapper @").add_operation (object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticContext.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 384)) ;
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
  result_outString = GALGAS_string ("option ").add_operation (object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 391)) ;
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
  result_outString = GALGAS_string ("graph @").add_operation (object->mProperty_mGraphTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 398)) ;
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
  result_outString = GALGAS_string ("extern @").add_operation (object->mProperty_mExternTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 405)) ;
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
  result_outString = GALGAS_string ("once function ").add_operation (object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("semanticContext.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 412)) ;
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
  result_outString = GALGAS_string ("extern function ").add_operation (object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("semanticContext.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 419)) ;
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
  result_outString = GALGAS_string ("extern routine ").add_operation (object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("semanticContext.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 426)) ;
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
//                                               Routine 'addExtensions'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_addExtensions (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                            const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                            const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                            const GALGAS_lstring constinArgument_inTypeName,
                            GALGAS_getterMap & ioArgument_ioGetterMap,
                            GALGAS_setterMap & ioArgument_ioSetterMap,
                            GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                            C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inExtensionMethodMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 446)) COMMA_SOURCE_FILE ("semanticContext.galgas", 446)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_extensionMethodMapForType var_extensionMethodMapForType_23027 ;
    constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_23027, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 448)) ;
    cEnumerator_extensionMethodMapForType enumerator_23161 (var_extensionMethodMapForType_23027, kENUMERATION_UP) ;
    while (enumerator_23161.hasCurrentObject ()) {
      GALGAS_formalParameterSignature var_formalArgumentList_23193 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 450)) ;
      cEnumerator_formalParameterListAST enumerator_23260 (enumerator_23161.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
      while (enumerator_23260.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_typeIndex_23425 ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_23260.current_mFormalArgumentTypeName (HERE), var_typeIndex_23425 COMMA_SOURCE_FILE ("semanticContext.galgas", 452)) ;
        }
        var_formalArgumentList_23193.addAssign_operation (enumerator_23260.current_mFormalSelector (HERE), var_typeIndex_23425, enumerator_23260.current_mFormalArgumentPassingMode (HERE), enumerator_23260.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 457)) ;
        enumerator_23260.gotoNextObject () ;
      }
      {
      ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_23161.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 461)), var_formalArgumentList_23193, enumerator_23161.current_lkey (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 463)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 465)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 459)) ;
      }
      enumerator_23161.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = constinArgument_inExtensionGetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 471)) COMMA_SOURCE_FILE ("semanticContext.galgas", 471)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_extensionGetterMapForType var_extensionGetterMapForType_23987 ;
    constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_23987, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 473)) ;
    cEnumerator_extensionGetterMapForType enumerator_24121 (var_extensionGetterMapForType_23987, kENUMERATION_UP) ;
    while (enumerator_24121.hasCurrentObject ()) {
      GALGAS_functionSignature var_formalArgumentList_24168 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 475)) ;
      cEnumerator_formalInputParameterListAST enumerator_24215 (enumerator_24121.current_mInputFormalParameterList (HERE), kENUMERATION_UP) ;
      while (enumerator_24215.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_typeIndex_24328 ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_24215.current_mFormalArgumentTypeName (HERE), var_typeIndex_24328 COMMA_SOURCE_FILE ("semanticContext.galgas", 477)) ;
        }
        var_formalArgumentList_24168.addAssign_operation (enumerator_24215.current_mFormalSelector (HERE), var_typeIndex_24328, enumerator_24215.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 478)) ;
        enumerator_24215.gotoNextObject () ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_returnedType_24528 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_24121.current_mResultTypeName (HERE), var_returnedType_24528 COMMA_SOURCE_FILE ("semanticContext.galgas", 480)) ;
      }
      {
      ioArgument_ioGetterMap.setter_insertKey (enumerator_24121.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 483)), var_formalArgumentList_24168, enumerator_24121.current_lkey (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 485)), GALGAS_bool (true), var_returnedType_24528, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 488)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 481)) ;
      }
      enumerator_24121.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = constinArgument_inExtensionSetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 494)) COMMA_SOURCE_FILE ("semanticContext.galgas", 494)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_extensionSetterMapForType var_extensionSetterMapForType_24971 ;
    constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_24971, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 496)) ;
    cEnumerator_extensionSetterMapForType enumerator_25105 (var_extensionSetterMapForType_24971, kENUMERATION_UP) ;
    while (enumerator_25105.hasCurrentObject ()) {
      GALGAS_formalParameterSignature var_formalArgumentList_25159 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 498)) ;
      cEnumerator_formalParameterListAST enumerator_25201 (enumerator_25105.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
      while (enumerator_25201.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_typeIndex_25314 ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_25201.current_mFormalArgumentTypeName (HERE), var_typeIndex_25314 COMMA_SOURCE_FILE ("semanticContext.galgas", 500)) ;
        }
        var_formalArgumentList_25159.addAssign_operation (enumerator_25201.current_mFormalSelector (HERE), var_typeIndex_25314, enumerator_25201.current_mFormalArgumentPassingMode (HERE), enumerator_25201.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 501)) ;
        enumerator_25201.gotoNextObject () ;
      }
      {
      ioArgument_ioSetterMap.setter_insertKey (enumerator_25105.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 505)), var_formalArgumentList_25159, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 508)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 503)) ;
      }
      enumerator_25105.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'elementTypeNameSuffix'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_elementTypeNameSuffix (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("-element") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_elementTypeNameSuffix = false ;
static GALGAS_string gOnceFunctionResult_elementTypeNameSuffix ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_elementTypeNameSuffix (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_elementTypeNameSuffix) {
    gOnceFunctionResult_elementTypeNameSuffix = onceFunction_elementTypeNameSuffix (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_elementTypeNameSuffix = true ;
  }
  return gOnceFunctionResult_elementTypeNameSuffix ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_elementTypeNameSuffix (void) {
  gOnceFunctionResult_elementTypeNameSuffix.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_elementTypeNameSuffix (NULL,
                                                                   releaseOnceFunctionResult_elementTypeNameSuffix) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_elementTypeNameSuffix [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_elementTypeNameSuffix (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_elementTypeNameSuffix (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_elementTypeNameSuffix ("elementTypeNameSuffix",
                                                                       functionWithGenericHeader_elementTypeNameSuffix,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_elementTypeNameSuffix) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'recursivelyEnumerateDirectories'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursivelyEnumerateDirectories (const GALGAS_string constinArgument_inAbsoluteSourcePath,
                                              const GALGAS_string constinArgument_inPathInWrapper,
                                              const GALGAS_wrapperExtensionMap constinArgument_inTextFileExtensionMap,
                                              const GALGAS_wrapperExtensionMap constinArgument_inBinaryFileExtensionMap,
                                              GALGAS_wrapperFileMap & outArgument_outWrapperFileMap,
                                              GALGAS_wrapperDirectoryMap & outArgument_outWrapperDirectoryMap,
                                              GALGAS_uint & ioArgument_ioWrapperFileIndex,
                                              GALGAS_uint & ioArgument_ioWrapperDirectoryIndex,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outWrapperFileMap.drop () ; // Release 'out' argument
  outArgument_outWrapperDirectoryMap.drop () ; // Release 'out' argument
  GALGAS_uint var_currentDirectoryIndex_28158 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 574)) ;
  GALGAS_stringlist var_files_28263 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 576)) ;
  outArgument_outWrapperFileMap = GALGAS_wrapperFileMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 577)) ;
  cEnumerator_stringlist enumerator_28374 (var_files_28263, kENUMERATION_UP) ;
  while (enumerator_28374.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_inTextFileExtensionMap.getter_hasKey (enumerator_28374.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 579)) COMMA_SOURCE_FILE ("semanticContext.galgas", 579)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_absoluteFilePath_28476 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 580)).add_operation (enumerator_28374.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 580)) ;
      {
      outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_28374.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 582))  COMMA_SOURCE_FILE ("semanticContext.galgas", 582)), var_absoluteFilePath_28476, GALGAS_bool (true), var_currentDirectoryIndex_28158, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 581)) ;
      }
      ioArgument_ioWrapperFileIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 588)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = constinArgument_inBinaryFileExtensionMap.getter_hasKey (enumerator_28374.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 589)) COMMA_SOURCE_FILE ("semanticContext.galgas", 589)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_absoluteFilePath_28850 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 590)).add_operation (enumerator_28374.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 590)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_28374.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 592))  COMMA_SOURCE_FILE ("semanticContext.galgas", 592)), var_absoluteFilePath_28850, GALGAS_bool (false), var_currentDirectoryIndex_28158, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 591)) ;
        }
        ioArgument_ioWrapperFileIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 598)) ;
      }
    }
    enumerator_28374.gotoNextObject () ;
  }
  GALGAS_stringlist var_directories_29199 = constinArgument_inAbsoluteSourcePath.getter_directories (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 602)) ;
  outArgument_outWrapperDirectoryMap = GALGAS_wrapperDirectoryMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 603)) ;
  cEnumerator_stringlist enumerator_29325 (var_directories_29199, kENUMERATION_UP) ;
  while (enumerator_29325.hasCurrentObject ()) {
    GALGAS_wrapperFileMap var_internalWrapperFileMap_29371 ;
    GALGAS_wrapperDirectoryMap var_internalWrapperDirectoryMap_29424 ;
    GALGAS_uint var_theDirectoryIndex_29452 = ioArgument_ioWrapperDirectoryIndex ;
    {
    routine_recursivelyEnumerateDirectories (constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 609)).add_operation (enumerator_29325.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 609)), constinArgument_inPathInWrapper.add_operation (enumerator_29325.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 610)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 610)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_29371, var_internalWrapperDirectoryMap_29424, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 608)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_29325.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 619))  COMMA_SOURCE_FILE ("semanticContext.galgas", 619)), var_internalWrapperFileMap_29371, var_internalWrapperDirectoryMap_29424, var_theDirectoryIndex_29452, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 618)) ;
    }
    enumerator_29325.gotoNextObject () ;
  }
}


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
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_30526 = GALGAS_filewrapperTemplateMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 636)) ;
  cEnumerator_filewrapperTemplateListAST enumerator_30599 (object->mProperty_mFilewrapperTemplateList, kENUMERATION_UP) ;
  while (enumerator_30599.hasCurrentObject ()) {
    GALGAS_functionSignature var_templateSignature_30643 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 638)) ;
    cEnumerator_formalTemplateInputParameterListAST enumerator_30704 (enumerator_30599.current_mFilewrapperTemplateFormalInputParameters (HERE), kENUMERATION_UP) ;
    while (enumerator_30704.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_30824 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_30704.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_30824 COMMA_SOURCE_FILE ("semanticContext.galgas", 640)) ;
      }
      var_templateSignature_30643.addAssign_operation (enumerator_30704.current_mFormalTemplateSelector (HERE), var_parameterTypeIndex_30824, enumerator_30704.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 641)) ;
      enumerator_30704.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap_30526.setter_insertKey (enumerator_30599.current_mFilewrapperTemplateName (HERE), var_templateSignature_30643, enumerator_30599.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 643)) ;
    }
    enumerator_30599.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_textExtensionMap_31132 = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 650)) ;
  cEnumerator_lstringlist enumerator_31211 (object->mProperty_mFilewrapperTextFileExtensionList, kENUMERATION_UP) ;
  while (enumerator_31211.hasCurrentObject ()) {
    {
    var_textExtensionMap_31132.setter_insertKey (enumerator_31211.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 652)) ;
    }
    enumerator_31211.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_binaryFileExtensionMap_31329 = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 655)) ;
  cEnumerator_lstringlist enumerator_31410 (object->mProperty_mFilewrapperBinaryFileExtensionList, kENUMERATION_UP) ;
  while (enumerator_31410.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_textExtensionMap_31132.getter_hasKey (enumerator_31410.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("semanticContext.galgas", 657)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_31410.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 658)), GALGAS_string ("the '").add_operation (enumerator_31410.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 658)).add_operation (GALGAS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 658)), fixItArray1  COMMA_SOURCE_FILE ("semanticContext.galgas", 658)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_binaryFileExtensionMap_31329.setter_insertKey (enumerator_31410.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 660)) ;
      }
    }
    enumerator_31410.gotoNextObject () ;
  }
  GALGAS_wrapperFileMap var_regularRootFileMap_31691 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_31734 ;
  GALGAS_string var_absoluteSourcePath_31763 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticContext.galgas", 667)).getter_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 667)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_absoluteSourcePath_31763 = object->mProperty_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticContext.galgas", 668)) ;
  }else if (kBoolFalse == test_2) {
    var_absoluteSourcePath_31763 = object->mProperty_mSourceFileAbsolutePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 670)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 670)).add_operation (object->mProperty_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticContext.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 670)) ;
  }
  const enumGalgasBool test_3 = var_absoluteSourcePath_31763.getter_directoryExists (SOURCE_FILE ("semanticContext.galgas", 672)).operator_not (SOURCE_FILE ("semanticContext.galgas", 672)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticContext.galgas", 673)), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_31763, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 673)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 673)), fixItArray4  COMMA_SOURCE_FILE ("semanticContext.galgas", 673)) ;
    var_regularRootFileMap_31691.drop () ; // Release error dropped variable
    var_wrapperDirectoryMap_31734.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_uint var_wrapperFileIndex_32255 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_wrapperDirectoryIndex_32291 = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_recursivelyEnumerateDirectories (var_absoluteSourcePath_31763, GALGAS_string ("/"), var_textExtensionMap_31132, var_binaryFileExtensionMap_31329, var_regularRootFileMap_31691, var_wrapperDirectoryMap_31734, var_wrapperFileIndex_32255, var_wrapperDirectoryIndex_32291, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 679)) ;
    }
  }
  {
  ioArgument_ioSemanticContext.mProperty_mFilewrapperMap.setter_insertKey (object->mProperty_mFilewrapperName, object->mProperty_mFilewrapperPath, object->mProperty_mFilewrapperTextFileExtensionList, var_regularRootFileMap_31691, var_wrapperDirectoryMap_31734, var_filewrapperTemplateMap_30526, object->mProperty_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 691)) ;
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
  GALGAS_formalParameterSignature var_routineSignature_33340 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 710)) ;
  cEnumerator_formalParameterListAST enumerator_33402 (object->mProperty_mFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_33402.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_33520 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_33402.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_33520 COMMA_SOURCE_FILE ("semanticContext.galgas", 712)) ;
    }
    var_routineSignature_33340.addAssign_operation (enumerator_33402.current_mFormalSelector (HERE), var_parameterTypeIndex_33520, enumerator_33402.current_mFormalArgumentPassingMode (HERE), enumerator_33402.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 713)) ;
    enumerator_33402.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mRoutineMap.setter_insertKey (object->mProperty_mRoutineName, var_routineSignature_33340, object->mProperty_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 716)) ;
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
//                      Overriding extension method '@procDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procDeclarationAST * object = (const cPtr_procDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_procDeclarationAST) ;
  GALGAS_formalParameterSignature var_routineSignature_34326 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 731)) ;
  cEnumerator_formalParameterListAST enumerator_34388 (object->mProperty_mFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_34388.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_34506 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_34388.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_34506 COMMA_SOURCE_FILE ("semanticContext.galgas", 733)) ;
    }
    var_routineSignature_34326.addAssign_operation (enumerator_34388.current_mFormalSelector (HERE), var_parameterTypeIndex_34506, enumerator_34388.current_mFormalArgumentPassingMode (HERE), enumerator_34388.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 734)) ;
    enumerator_34388.gotoNextObject () ;
  }
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_mRoutineInstructionList, ioArgument_ioSemanticContext.mProperty_mTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 737)) ;
  {
  ioArgument_ioSemanticContext.mProperty_mRoutineMap.setter_insertKey (object->mProperty_mRoutineName, var_routineSignature_34326, object->mProperty_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 739)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_procDeclarationAST.mSlotID,
                                               extensionMethod_procDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procDeclarationAST_enterInSemanticContext (defineExtensionMethod_procDeclarationAST_enterInSemanticContext, NULL) ;

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
  GALGAS_functionSignature var_functionSignature_35492 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 754)) ;
  cEnumerator_formalInputParameterListAST enumerator_35547 (object->mProperty_mFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_35547.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_35665 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_35547.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_35665 COMMA_SOURCE_FILE ("semanticContext.galgas", 756)) ;
    }
    var_functionSignature_35492.addAssign_operation (enumerator_35547.current_mFormalSelector (HERE), var_parameterTypeIndex_35665, enumerator_35547.current_mFormalArgumentTypeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 757)) ;
    enumerator_35547.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeIndex_35885 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mResultTypeName, var_resultTypeIndex_35885 COMMA_SOURCE_FILE ("semanticContext.galgas", 760)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (object->mProperty_mFunctionName, var_functionSignature_35492, var_resultTypeIndex_35885, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 762)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeIndex_36710 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mResultTypeName, var_resultTypeIndex_36710 COMMA_SOURCE_FILE ("semanticContext.galgas", 778)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (object->mProperty_mFunctionName, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 780)), var_resultTypeIndex_36710, object->mProperty_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 780)) ;
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
  ioArgument_ioSemanticContext.mProperty_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (object->mProperty_mSyntaxComponentName, object->mProperty_mLexiqueName, object->mProperty_mNonterminalDeclarationList, object->mProperty_mRuleList, object->mProperty_mHasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 791)) ;
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
  GALGAS_grammarLabelMap var_grammarLabelMap_38141 = GALGAS_grammarLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 809)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_38180 (object->mProperty_mStartSymbolLabelList, kENUMERATION_UP) ;
  while (enumerator_38180.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_formalArgumentList_38257 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 812)) ;
    cEnumerator_formalParameterListAST enumerator_38296 (enumerator_38180.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_38296.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentType_38410 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_38296.current_mFormalArgumentTypeName (HERE), var_argumentType_38410 COMMA_SOURCE_FILE ("semanticContext.galgas", 814)) ;
      }
      var_formalArgumentList_38257.addAssign_operation (enumerator_38296.current_mFormalSelector (HERE), var_argumentType_38410, enumerator_38296.current_mFormalArgumentPassingMode (HERE), enumerator_38296.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 815)) ;
      enumerator_38296.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_38141.setter_insertKey (enumerator_38180.current_mLabelName (HERE), var_formalArgumentList_38257, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 821)) ;
    }
    enumerator_38180.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mGrammarMap.setter_insertGrammar (object->mProperty_mGrammarComponentName, var_grammarLabelMap_38141, object->mProperty_mHasIndexing.getter_bool (HERE), object->mProperty_mHasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 827)) ;
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
  GALGAS_lexicalTypeMap var_lexicalTypeMap_39445 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 843)) ;
  GALGAS_lexicalAttributeMap var_lexicalAttributeMap_39513 = GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 844)) ;
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap_39445, object->mProperty_mLexicalAttributeList, var_lexicalAttributeMap_39513, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 845)) ;
  }
  GALGAS_terminalMap var_terminalMap_39690 = GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 851)) ;
  cEnumerator_terminalDeclarationListAST enumerator_39732 (object->mProperty_mTerminalDeclarationList, kENUMERATION_UP) ;
  while (enumerator_39732.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_39760 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 853)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_39819 (enumerator_39732.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_39819.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_39866 ;
      var_lexicalAttributeMap_39513.method_searchKey (enumerator_39819.current_mAttributeName (HERE), var_attributeLexicalType_39866, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 856)) ;
      var_argumentTypeList_39760.addAssign_operation (enumerator_39819.current_mFormalSelector (HERE), enumerator_39819.current_mAttributeName (HERE).getter_string (HERE), var_attributeLexicalType_39866  COMMA_SOURCE_FILE ("semanticContext.galgas", 857)) ;
      enumerator_39819.gotoNextObject () ;
    }
    {
    var_terminalMap_39690.setter_insertKey (enumerator_39732.current_mName (HERE), var_argumentTypeList_39760, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 859)) ;
    }
    enumerator_39732.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_40144 (object->mProperty_mLexicalListDeclarationList, kENUMERATION_UP) ;
  while (enumerator_40144.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_40172 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 863)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_40231 (enumerator_40144.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_40231.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_40278 ;
      var_lexicalAttributeMap_39513.method_searchKey (enumerator_40231.current_mAttributeName (HERE), var_attributeLexicalType_40278, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 866)) ;
      var_argumentTypeList_40172.addAssign_operation (enumerator_40231.current_mFormalSelector (HERE), enumerator_40231.current_mAttributeName (HERE).getter_string (HERE), var_attributeLexicalType_40278  COMMA_SOURCE_FILE ("semanticContext.galgas", 867)) ;
      enumerator_40231.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_40475 (enumerator_40144.current_mEntryList (HERE), kENUMERATION_UP) ;
    while (enumerator_40475.hasCurrentObject ()) {
      {
      var_terminalMap_39690.setter_insertKey (enumerator_40475.current_mTerminalSpelling (HERE), var_argumentTypeList_40172, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 870)) ;
      }
      enumerator_40475.gotoNextObject () ;
    }
    enumerator_40144.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (object->mProperty_mLexiqueComponentName, var_terminalMap_39690, object->mProperty_mIndexingListAST, object->mProperty_mIndexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 874)) ;
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
  GALGAS_lstring var_key_42800 = GALGAS_lstring::constructor_new (GALGAS_string ("grammar ").add_operation (object->mProperty_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 913)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 913)), object->mProperty_mGrammarComponentName.getter_location (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 913)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_42800, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 914)) ;
  }
  cEnumerator_lstringlist enumerator_42971 (object->mProperty_mSyntaxComponents, kENUMERATION_UP) ;
  while (enumerator_42971.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_42800, GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (enumerator_42971.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 916)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 916)), enumerator_42971.current_mValue (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 916)) COMMA_SOURCE_FILE ("semanticContext.galgas", 916)) ;
    }
    enumerator_42971.gotoNextObject () ;
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
  GALGAS_lstring var_key_43678 = GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (object->mProperty_mSyntaxComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 928)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 928)), object->mProperty_mSyntaxComponentName.getter_location (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 928)) ;
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_43678, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 929)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_43678, GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (object->mProperty_mLexiqueName.getter_string (SOURCE_FILE ("semanticContext.galgas", 930)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 930)), object->mProperty_mLexiqueName.getter_location (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 930)) COMMA_SOURCE_FILE ("semanticContext.galgas", 930)) ;
  }
  cEnumerator_syntaxRuleListAST enumerator_43952 (object->mProperty_mRuleList, kENUMERATION_UP) ;
  while (enumerator_43952.hasCurrentObject ()) {
    cEnumerator_syntaxRuleLabelListAST enumerator_43980 (enumerator_43952.current_mLabelList (HERE), kENUMERATION_UP) ;
    while (enumerator_43980.hasCurrentObject ()) {
      cEnumerator_formalParameterListAST enumerator_44016 (enumerator_43980.current_mFormalArguments (HERE), kENUMERATION_UP) ;
      while (enumerator_44016.hasCurrentObject ()) {
        switch (enumerator_44016.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_43678, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_44016.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 935)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 935)), enumerator_44016.current_mFormalArgumentTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 935)) COMMA_SOURCE_FILE ("semanticContext.galgas", 935)) ;
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
        enumerator_44016.gotoNextObject () ;
      }
      enumerator_43980.gotoNextObject () ;
    }
    enumerator_43952.gotoNextObject () ;
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
  GALGAS_lstring var_key_44917 = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (object->mProperty_mLexiqueComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 951)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 951)), object->mProperty_mLexiqueComponentName.getter_location (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 951)) ;
  {
  const GALGAS_lexiqueComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_44917, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 952)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 963)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 974)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 985)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 996)) ;
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
//                                          Routine 'generateInstructionList'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateInstructionList (GALGAS_stringset & ioArgument_ioInclusionSet,
                                      const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 29)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_2778 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_2778.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_2778.current (HERE).getter_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 31)) ;
    enumerator_2778.gotoNextObject () ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 39)) ;
  }
}


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
  result_outName = object->mProperty_mTypeProxy.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 499)) ;
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
  GALGAS_bool result_result ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_result = object->mProperty_mTypeProxy.getter_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 511)) ;
//---
  return result_result ;
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
  result_outHeaderKind = object->mProperty_mTypeProxy.getter_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 517)) ;
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
  result_outName = object->mProperty_mImplementationCppFileName ;
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
  result_outHasHeader = object->mProperty_mHasHeader ;
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
  result_outHeaderKind = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas", 546)) ;
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
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
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
//                                           Routine 'checkAssignmentTypes'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkAssignmentTypes (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetType,
                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSourceType,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_sourceType_33635 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_33661 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (constinArgument_inSourceType)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).isValid ()) {
    uint32_t variant_33699 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).uintValue () ;
    bool loop_33699 = true ;
    while (loop_33699) {
      loop_33699 = var_ok_33661.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).operator_and (var_sourceType_33635.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).isValid () ;
      if (loop_33699) {
        loop_33699 = var_ok_33661.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).operator_and (var_sourceType_33635.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).boolValue () ;
      }
      if (loop_33699 && (0 == variant_33699)) {
        loop_33699 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)) ;
      }
      if (loop_33699) {
        variant_33699 -- ;
        var_sourceType_33635 = var_sourceType_33635.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 443)) ;
        var_ok_33661 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_33635)) ;
      }
    }
  }
  const enumGalgasBool test_0 = var_ok_33661.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 446)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 448)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 448)).add_operation (constinArgument_inSourceType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 448)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 448)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 447)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'checkAssignmentTypeWithImplicitGetterCall'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkAssignmentTypeWithImplicitGetterCall (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetType,
                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSourceType,
                                                        const GALGAS_location constinArgument_inErrorLocation,
                                                        GALGAS_semanticExpressionForGeneration & ioArgument_ioRightExpression,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_sourceType_34412 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_34438 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (constinArgument_inSourceType)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).isValid ()) {
    uint32_t variant_34476 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).uintValue () ;
    bool loop_34476 = true ;
    while (loop_34476) {
      loop_34476 = var_ok_34438.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).operator_and (var_sourceType_34412.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).isValid () ;
      if (loop_34476) {
        loop_34476 = var_ok_34438.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).operator_and (var_sourceType_34412.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).boolValue () ;
      }
      if (loop_34476 && (0 == variant_34476)) {
        loop_34476 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)) ;
      }
      if (loop_34476) {
        variant_34476 -- ;
        var_sourceType_34412 = var_sourceType_34412.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 463)) ;
        var_ok_34438 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_34412)) ;
      }
    }
  }
  GALGAS_bool test_0 = var_ok_34438.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 471)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = constinArgument_inSourceType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 471)).getter_hasKey (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 471)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 471)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_methodKind var_kind_35016 ;
    GALGAS_functionSignature var_argumentTypeList_35063 ;
    GALGAS_bool var_hasCompilerArgument_35103 ;
    GALGAS_unifiedTypeMap_2D_proxy var_returnedType_35127 ;
    GALGAS_location joker_35071 ; // Joker input parameter
    GALGAS_methodQualifier joker_35135_2 ; // Joker input parameter
    GALGAS_string joker_35135_1 ; // Joker input parameter
    constinArgument_inSourceType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 472)).method_searchKey (constinArgument_inTargetType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 473)), var_kind_35016, var_argumentTypeList_35063, joker_35071, var_hasCompilerArgument_35103, var_returnedType_35127, joker_35135_2, joker_35135_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 472)) ;
    var_ok_34438 = GALGAS_bool (kIsEqual, var_argumentTypeList_35063.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 481)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_35127.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 481)) ;
    GALGAS_getterCallExpressionForGeneration var_conversionExpression_35279 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_35016, ioArgument_ioRightExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 488)), constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 489)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 490)), var_hasCompilerArgument_35103  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 483)) ;
    ioArgument_ioRightExpression = var_conversionExpression_35279 ;
  }
  const enumGalgasBool test_2 = var_ok_34438.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 495)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 497)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 497)).add_operation (constinArgument_inSourceType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 497)).add_operation (GALGAS_string ("' object; this type have no '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 497)).add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 498)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 499)).add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 499)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 499)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 496)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'checkDiadicOperator'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkDiadicOperator (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inLeftType,
                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRightType,
                                  const GALGAS_bool constinArgument_inOperandIsHandled,
                                  const GALGAS_string constinArgument_inOperatorNameForErrorMessage,
                                  const GALGAS_location constinArgument_inErrorLocation,
                                  GALGAS_semanticExpressionForGeneration & ioArgument_ioRightExpression,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 513)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type is '@").add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 515)).add_operation (GALGAS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 515)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 515)).add_operation (GALGAS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 515)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 516)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 516)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 514)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_rightType_36528 = constinArgument_inRightType ;
    GALGAS_bool var_ok_36555 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType_36528)) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)).isValid ()) {
      uint32_t variant_36590 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)).uintValue () ;
      bool loop_36590 = true ;
      while (loop_36590) {
        loop_36590 = var_ok_36555.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)).operator_and (var_rightType_36528.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)).isValid () ;
        if (loop_36590) {
          loop_36590 = var_ok_36555.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)).operator_and (var_rightType_36528.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)).boolValue () ;
        }
        if (loop_36590 && (0 == variant_36590)) {
          loop_36590 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)) ;
        }
        if (loop_36590) {
          variant_36590 -- ;
          var_rightType_36528 = var_rightType_36528.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 521)) ;
          var_ok_36555 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType_36528)) ;
        }
      }
    }
    GALGAS_bool test_2 = var_ok_36555.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = constinArgument_inRightType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)).getter_hasKey (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_bool var_hasCompilerArgument_36897 ;
      GALGAS_unifiedTypeMap_2D_proxy var_returnedType_36938 ;
      GALGAS_methodKind var_kind_36961 ;
      GALGAS_functionSignature var_argumentTypeList_37093 ;
      GALGAS_location joker_37103 ; // Joker input parameter
      GALGAS_methodQualifier joker_37165_2 ; // Joker input parameter
      GALGAS_string joker_37165_1 ; // Joker input parameter
      constinArgument_inRightType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 529)).method_searchKey (constinArgument_inLeftType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 530)), var_kind_36961, var_argumentTypeList_37093, joker_37103, var_hasCompilerArgument_36897, var_returnedType_36938, joker_37165_2, joker_37165_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 529)) ;
      var_ok_36555 = GALGAS_bool (kIsEqual, var_argumentTypeList_37093.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 538)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_36938.objectCompare (constinArgument_inLeftType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 538)) ;
      GALGAS_getterCallExpressionForGeneration var_conversionExpression_37315 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inLeftType, constinArgument_inErrorLocation, var_kind_36961, ioArgument_ioRightExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 545)), constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 546)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 547)), var_hasCompilerArgument_36897  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 540)) ;
      ioArgument_ioRightExpression = var_conversionExpression_37315 ;
    }
    const enumGalgasBool test_4 = var_ok_36555.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 552)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 554)).add_operation (GALGAS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 554)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 554)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 554)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 555)).add_operation (GALGAS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 555)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 556)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 557)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 557)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 557)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 553)) ;
    }
  }
}


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
                                                                               const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfCopyInExpressionAST * object = (const cPtr_selfCopyInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfCopyInExpressionAST) ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeProxy (HERE).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 641)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mSelfLocation, GALGAS_string ("'selfcopy' cannot be used in this context"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 642)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_selfCppName_42343 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    outArgument_outExpression = GALGAS_selfCopyInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mSelfCopyTypeProxy (HERE), object->mProperty_mSelfLocation, var_selfCppName_42343  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 645)) ;
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
                                                                         const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_trueExpressionAST * object = (const cPtr_trueExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_trueExpressionAST) ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 666)) ;
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
                                                                          const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_falseExpressionAST * object = (const cPtr_falseExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_falseExpressionAST) ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 686)) ;
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
                                                                                const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalCharExpressionAST * object = (const cPtr_literalCharExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalCharExpressionAST) ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mCharType (HERE), object->mProperty_mCharacter.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 708)), object->mProperty_mCharacter.getter_char (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 709))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 706)) ;
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
                                                                                  const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringExpressionAST * object = (const cPtr_literalStringExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringExpressionAST) ;
  GALGAS_string var_s_45742 = GALGAS_string::makeEmptyString () ;
  cEnumerator_stringlist enumerator_45775 (object->mProperty_mStringSequence, kENUMERATION_UP) ;
  while (enumerator_45775.hasCurrentObject ()) {
    var_s_45742.plusAssign_operation(enumerator_45775.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 732)) ;
    enumerator_45775.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), object->mProperty_mLocation, var_s_45742  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 734)) ;
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
                                                                                  const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalDoubleExpressionAST * object = (const cPtr_literalDoubleExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalDoubleExpressionAST) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mDoubleType (HERE), object->mProperty_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 754)), object->mProperty_mValue.getter_double (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 754))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 754)) ;
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
                                                                                const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUIntExpressionAST * object = (const cPtr_literalUIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalUIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), object->mProperty_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 776)), object->mProperty_mValue.getter_uint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 777))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 774)) ;
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
                                                                                        const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUInt_36__34_ExpressionAST * object = (const cPtr_literalUInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalUInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUInt_36__34_Type (HERE), object->mProperty_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 800)), object->mProperty_mValue.getter_uint_36__34_ (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 801))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 798)) ;
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
                                                                                const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSIntExpressionAST * object = (const cPtr_literalSIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalSIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mSIntType (HERE), object->mProperty_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 822)), object->mProperty_mValue.getter_sint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 822))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 822)) ;
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
                                                                                        const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSInt_36__34_ExpressionAST * object = (const cPtr_literalSInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalSInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mSInt_36__34_Type (HERE), object->mProperty_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 851)), object->mProperty_mValue.getter_sint_36__34_ (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 852))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 849)) ;
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
                                                                                  const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBigIntExpressionAST * object = (const cPtr_literalBigIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBigIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), object->mProperty_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 868)), object->mProperty_mValue.getter_bigint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 869))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 866)) ;
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
//                                       Routine 'analyzeConstructorInvocation'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeConstructorInvocation (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                           const GALGAS_lstring constinArgument_inTypeName,
                                           const GALGAS_lstring constinArgument_inConstructorName,
                                           const GALGAS_actualOutputExpressionList constinArgument_inConstuctorEffectiveParameterExpressions,
                                           GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                           GALGAS_unifiedTypeMap_2D_proxy & outArgument_outConstructorType,
                                           GALGAS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                           GALGAS_bool & outArgument_outHasCompilerArgument,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outConstructorType.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outHasCompilerArgument.drop () ; // Release 'out' argument
  outArgument_outConstructorType = constinArgument_inType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outConstructorType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), constinArgument_inTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 891)) ;
  }
  const enumGalgasBool test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 893)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_inTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 894)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 894)) ;
    outArgument_outReturnedType.drop () ; // Release error dropped variable
    outArgument_outConstructorType.drop () ; // Release error dropped variable
    outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
    outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constructorMap var_constructorMap_52313 = outArgument_outConstructorType.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 897)) ;
    GALGAS_functionSignature var_constructorFormalArgumentTypeList_52434 ;
    const cMapElement_constructorMap * objectArray_52443 = (const cMapElement_constructorMap *) var_constructorMap_52313.readAccessForWithInstruction (constinArgument_inConstructorName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 900))) ;
    if (NULL != objectArray_52443) {
        macroValidSharedObject (objectArray_52443, cMapElement_constructorMap) ;
      var_constructorFormalArgumentTypeList_52434 = objectArray_52443->mProperty_mArgumentTypeList ;
      outArgument_outHasCompilerArgument = objectArray_52443->mProperty_mHasCompilerArgument ;
      outArgument_outReturnedType = objectArray_52443->mProperty_mReturnedType ;
    }else{
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_constructorMap_52313.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 905)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 906)), GALGAS_string ("the '@").add_operation (outArgument_outConstructorType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 907)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 907)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 907)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 906)) ;
        var_constructorFormalArgumentTypeList_52434.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        appendFixItActions (fixItArray5, kFixItReplace, var_constructorMap_52313.getter_keyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 913))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 910)), GALGAS_string ("the '@").add_operation (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 911)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 911)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 911)).add_operation (constinArgument_inConstructorName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 911)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 911)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 911)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 910)) ;
        var_constructorFormalArgumentTypeList_52434.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inConstuctorEffectiveParameterExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 917)).objectCompare (var_constructorFormalArgumentTypeList_52434.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 917)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inConstructorName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 918)), GALGAS_string ("calling the '").add_operation (constinArgument_inConstructorName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 919)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 919)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 919)).add_operation (outArgument_outConstructorType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 919)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 919)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 919)).add_operation (var_constructorFormalArgumentTypeList_52434.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 920)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 920)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 919)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 920)).add_operation (constinArgument_inConstuctorEffectiveParameterExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 921)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 921)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 920)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 921)), fixItArray7  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 918)) ;
    }
    outArgument_outConstructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 923)) ;
    cEnumerator_actualOutputExpressionList enumerator_53769 (constinArgument_inConstuctorEffectiveParameterExpressions, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_53810 (var_constructorFormalArgumentTypeList_52434, kENUMERATION_UP) ;
    while (enumerator_53769.hasCurrentObject () && enumerator_53810.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_54054 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_53769.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_53810.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_54054, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 925)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_53810.current_mFormalArgumentType (HERE), var_exp_54054.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 933)), enumerator_53769.current_mEndOfExpressionLocation (HERE), var_exp_54054, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 933)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_54054  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 934)) ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_53810.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_53769.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_string temp_9 ;
        const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_53810.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_10) {
          temp_9 = enumerator_53810.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 937)) ;
        }else if (kBoolFalse == test_10) {
          temp_9 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_53769.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 936)), GALGAS_string ("the selector should be '!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 937)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 937)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 936)) ;
      }
      enumerator_53769.gotoNextObject () ;
      enumerator_53810.gotoNextObject () ;
    }
  }
}


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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_54812 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mProperty_mTypeName, joker_54812 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 949)) ;
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
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionAST * object = (const cPtr_defaultConstructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_55291 = constinArgument_inType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_type_55291 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 965)) ;
  }
  const enumGalgasBool test_1 = var_type_55291.getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 967)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 968)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 968)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_type_55291.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 971)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 971)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 972)), GALGAS_string ("an abstract class does not support the default constructor"), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 972)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_type_55291.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 973)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 974)), GALGAS_string ("this class does not support the default constructor"), fixItArray6  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 974)) ;
      }
    }
    GALGAS_lstring var_usefulnessName_55861 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_type_55291.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 977)), object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 977))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 977)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 977)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_55861 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 978)) ;
    }
    outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_type_55291, object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 980)) ;
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
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_56437 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioTypeMap, object->mProperty_mTypeName, joker_56437 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 992)) ;
  }
  extensionMethod_enterInSemanticContext (object->mProperty_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 993)) ;
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
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionAST * object = (const cPtr_constructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_57186 ;
  GALGAS_unifiedTypeMap_2D_proxy var_constructorType_57233 ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_57313 ;
  GALGAS_bool var_hasCompilerArgument_57348 ;
  {
  routine_analyzeConstructorInvocation (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, object->mProperty_mTypeName, object->mProperty_mConstructorName, object->mProperty_mExpressions, var_returnedType_57186, var_constructorType_57233, var_constructorEffectiveParameterList_57313, var_hasCompilerArgument_57348, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1006)) ;
  }
  GALGAS_lstring var_constructorTypeUsefulnessName_57388 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_constructorType_57233.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1020)), object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1020))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1020)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1020)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_57388 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1021)) ;
  }
  GALGAS_lstring var_returnedTypeUsefulnessName_57594 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_returnedType_57186.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1022)), object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1022))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1022)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1022)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_57594 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1023)) ;
  }
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_57186, object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1027)), var_constructorType_57233, object->mProperty_mConstructorName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1029)), var_constructorEffectiveParameterList_57313, var_hasCompilerArgument_57348  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1025)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiver.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1040)) ;
  extensionMethod_enterInSemanticContext (object->mProperty_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1041)) ;
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
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getterCallExpressionAST * object = (const cPtr_getterCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_getterCallExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_59053 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiver.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1058)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_59053, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1055)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_59098 = var_receiverExpression_59053.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1063)) ;
  GALGAS_getterMap var_getterMap_59180 = var_receiverType_59098.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1065)) ;
  GALGAS_functionSignature var_getterFormalArgumentTypeList_59277 ;
  GALGAS_methodKind var_kind_59296 ;
  GALGAS_bool var_hasCompilerArgument_59324 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_59361 ;
  GALGAS_stringlist var_fieldList_59385 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1071)) ;
  const cMapElement_getterMap * objectArray_59397 = (const cMapElement_getterMap *) var_getterMap_59180.readAccessForWithInstruction (object->mProperty_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1072))) ;
  if (NULL != objectArray_59397) {
      macroValidSharedObject (objectArray_59397, cMapElement_getterMap) ;
    var_getterFormalArgumentTypeList_59277 = objectArray_59397->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_59324 = objectArray_59397->mProperty_mHasCompilerArgument ;
    var_returnedType_59361 = objectArray_59397->mProperty_mReturnedType ;
    var_kind_59296 = objectArray_59397->mProperty_mKind ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, objectArray_59397->mProperty_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1078)), objectArray_59397->mProperty_mErrorMessage, fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1078)) ;
    }
  }else{
    GALGAS_uint var_matchingReaderCount_59702 = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_receiverType_59098.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1082)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1082)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_getterFormalArgumentTypeList_59277 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1083)) ;
      var_hasCompilerArgument_59324 = GALGAS_bool (true) ;
      var_returnedType_59361 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1085)) ;
      var_kind_59296 = GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1086)) ;
      cEnumerator_typedPropertyList enumerator_59999 (var_receiverType_59098.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1087)), kENUMERATION_UP) ;
      while (enumerator_59999.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_attributeType_60028 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (enumerator_59999.current_mPropertyTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1090)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1090))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1090)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1088)) ;
        GALGAS_getterMap var_aMap_60214 = var_attributeType_60028.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1092)) ;
        const cMapElement_getterMap * objectArray_60256 = (const cMapElement_getterMap *) var_aMap_60214.readAccessForWithInstruction (object->mProperty_mGetterName.getter_string (HERE)) ;
        if (NULL != objectArray_60256) {
            macroValidSharedObject (objectArray_60256, cMapElement_getterMap) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_attributeType_60028.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1094)).objectCompare (enumerator_59999.current_mPropertyName (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_matchingReaderCount_59702.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1095)) ;
            var_getterFormalArgumentTypeList_59277 = objectArray_60256->mProperty_mArgumentTypeList ;
            var_hasCompilerArgument_59324 = objectArray_60256->mProperty_mHasCompilerArgument ;
            var_returnedType_59361 = objectArray_60256->mProperty_mReturnedType ;
            var_kind_59296 = objectArray_60256->mProperty_mKind ;
            var_fieldList_59385.addAssign_operation (enumerator_59999.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1100)) ;
            const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, objectArray_60256->mProperty_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1102)), objectArray_60256->mProperty_mErrorMessage, fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1102)) ;
            }
          }
        }
        enumerator_59999.gotoNextObject () ;
      }
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_matchingReaderCount_59702.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1108)), GALGAS_string ("the '@").add_operation (var_receiverType_59098.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)).add_operation (object->mProperty_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)), fixItArray7  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1108)) ;
        var_getterFormalArgumentTypeList_59277.drop () ; // Release error dropped variable
        var_hasCompilerArgument_59324.drop () ; // Release error dropped variable
        var_returnedType_59361.drop () ; // Release error dropped variable
        var_kind_59296.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_59702.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_string var_s_61115 = GALGAS_string::makeEmptyString () ;
          cEnumerator_stringlist enumerator_61148 (var_fieldList_59385, kENUMERATION_UP) ;
          while (enumerator_61148.hasCurrentObject ()) {
            var_s_61115.plusAssign_operation(enumerator_61148.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1115)) ;
            if (enumerator_61148.hasNextObject ()) {
              var_s_61115.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1116)) ;
            }
            enumerator_61148.gotoNextObject () ;
          }
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1118)), GALGAS_string ("the '@").add_operation (var_receiverType_59098.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)).add_operation (object->mProperty_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)).add_operation (var_s_61115, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1120)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1120)), fixItArray9  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1118)) ;
          var_getterFormalArgumentTypeList_59277.drop () ; // Release error dropped variable
          var_hasCompilerArgument_59324.drop () ; // Release error dropped variable
          var_returnedType_59361.drop () ; // Release error dropped variable
          var_kind_59296.drop () ; // Release error dropped variable
        }
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_getterMap_59180.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1124)), GALGAS_string ("the '@").add_operation (var_receiverType_59098.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1125)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1125)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1125)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1124)) ;
        var_getterFormalArgumentTypeList_59277.drop () ; // Release error dropped variable
        var_hasCompilerArgument_59324.drop () ; // Release error dropped variable
        var_returnedType_59361.drop () ; // Release error dropped variable
        var_kind_59296.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_10) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        appendFixItActions (fixItArray12, kFixItReplace, var_getterMap_59180.getter_keyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1131))) ;
        inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1128)), GALGAS_string ("the '@").add_operation (var_receiverType_59098.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)).add_operation (object->mProperty_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)).add_operation (GALGAS_string ("' getter "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)), fixItArray12  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1128)) ;
        var_getterFormalArgumentTypeList_59277.drop () ; // Release error dropped variable
        var_hasCompilerArgument_59324.drop () ; // Release error dropped variable
        var_returnedType_59361.drop () ; // Release error dropped variable
        var_kind_59296.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, object->mProperty_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1135)).objectCompare (var_getterFormalArgumentTypeList_59277.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1135)))).boolEnum () ;
  if (kBoolTrue == test_13) {
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)), GALGAS_string ("calling the '").add_operation (object->mProperty_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)).add_operation (var_receiverType_59098.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)).add_operation (var_getterFormalArgumentTypeList_59277.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).add_operation (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1138)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1138)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1138)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_13) {
    GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_62438 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1140)) ;
    cEnumerator_actualOutputExpressionList enumerator_62506 (object->mProperty_mExpressions, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_62542 (var_getterFormalArgumentTypeList_59277, kENUMERATION_UP) ;
    while (enumerator_62506.hasCurrentObject () && enumerator_62542.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_62786 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_62506.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_62542.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_62786, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1142)) ;
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_62542.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_62506.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_string temp_16 ;
        const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_62542.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          temp_16 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_17) {
          temp_16 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_62506.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)), GALGAS_string ("the selector should be '!").add_operation (enumerator_62542.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)), fixItArray18  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)) ;
      }
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_62542.current_mFormalArgumentType (HERE), var_exp_62786.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1153)), enumerator_62506.current_mEndOfExpressionLocation (HERE), var_exp_62786, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1153)) ;
      }
      var_constructorEffectiveParameterList_62438.addAssign_operation (var_exp_62786  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1154)) ;
      enumerator_62506.gotoNextObject () ;
      enumerator_62542.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_59361, object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1158)), var_kind_59296, var_receiverExpression_59053, var_fieldList_59385, object->mProperty_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1162)), var_constructorEffectiveParameterList_62438, var_hasCompilerArgument_59324  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1156)) ;
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
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionExpressionAST * object = (const cPtr_optionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionExpressionAST) ;
  GALGAS_lstring var_usefulnessName_64163 = function_optionNameForUsefulEntitiesGraph (object->mProperty_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1185)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_64163 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1186)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_64465 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_64510 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_64555 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_64602 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_64653 ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mOptionComponentMapForSemanticAnalysis (HERE).method_searchKey (object->mProperty_mOptionComponentName, var_optionComponentIsPredefined_64465, var_boolOptionMap_64510, var_uintOptionMap_64555, var_stringOptionMap_64602, var_stringListOptionMap_64653, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1188)) ;
  GALGAS_bool var_found_64671 = var_boolOptionMap_64510.getter_hasKey (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1196)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1196)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_64760 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE) ;
  const enumGalgasBool test_0 = var_found_64671.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1198)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_found_64671 = var_uintOptionMap_64555.getter_hasKey (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1199)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1199)) ;
    var_returnedType_64760 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE) ;
  }
  const enumGalgasBool test_1 = var_found_64671.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1202)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_found_64671 = var_stringOptionMap_64602.getter_hasKey (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1203)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1203)) ;
    var_returnedType_64760 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  }
  const enumGalgasBool test_2 = var_found_64671.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1206)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_found_64671 = var_stringListOptionMap_64653.getter_hasKey (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1207)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1207)) ;
    var_returnedType_64760 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE) ;
  }
  const enumGalgasBool test_3 = var_found_64671.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, object->mProperty_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1211)).objectCompare (GALGAS_string ("value"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_64760, object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1214)), var_optionComponentIsPredefined_64465, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1216)), object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1217))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1212)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mProperty_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1218)).objectCompare (GALGAS_string ("char"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mCharType (HERE), object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1221)), var_optionComponentIsPredefined_64465, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1223)), object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1224))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1219)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, object->mProperty_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1225)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1228)), var_optionComponentIsPredefined_64465, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1230)), object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1231))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1226)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, object->mProperty_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1232)).objectCompare (GALGAS_string ("comment"))).boolEnum () ;
          if (kBoolTrue == test_7) {
            outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1235)), var_optionComponentIsPredefined_64465, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1237)), object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1238))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1233)) ;
          }else if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (object->mProperty_mOptionGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1240)), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1240)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }else if (kBoolFalse == test_3) {
    GALGAS_stringlist var_s_66736 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1243)) ;
    cEnumerator_commandLineOptionMap enumerator_66769 (var_boolOptionMap_64510, kENUMERATION_UP) ;
    while (enumerator_66769.hasCurrentObject ()) {
      var_s_66736.addAssign_operation (enumerator_66769.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1245))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1245)) ;
      enumerator_66769.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_66825 (var_uintOptionMap_64555, kENUMERATION_UP) ;
    while (enumerator_66825.hasCurrentObject ()) {
      var_s_66736.addAssign_operation (enumerator_66825.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1248))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1248)) ;
      enumerator_66825.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_66883 (var_stringOptionMap_64602, kENUMERATION_UP) ;
    while (enumerator_66883.hasCurrentObject ()) {
      var_s_66736.addAssign_operation (enumerator_66883.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1251))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1251)) ;
      enumerator_66883.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray9 ;
    appendFixItActions (fixItArray9, kFixItReplace, var_s_66736) ;
    inCompiler->emitSemanticError (object->mProperty_mOptionEntryName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1253)), GALGAS_string ("the '").add_operation (object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)).add_operation (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)), fixItArray9  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1253)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1265)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1266)) ;
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
                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_68160 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_68160, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1279)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_68434 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_68160.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1291)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_68434, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1288)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_68506 = var_leftExpression_68160.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1297)) ;
  {
  routine_checkDiadicOperator (var_leftType_68506, var_rightExpression_68434.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1300)), var_leftType_68506.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1301)).getter_infixOrOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1301)), GALGAS_string ("|"), object->mProperty_mOperatorLocation, var_rightExpression_68434, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1298)) ;
  }
  outArgument_outExpression = GALGAS_orExpressionForGeneration::constructor_new (var_leftType_68506, object->mProperty_mOperatorLocation, var_leftExpression_68160, var_rightExpression_68434  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1306)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1319)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1320)) ;
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
                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_69927 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_69927, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1333)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_70201 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_69927.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1345)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_70201, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1342)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_70275 = var_leftExpression_69927.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1351)) ;
  {
  routine_checkDiadicOperator (var_leftType_70275, var_rightExpression_70201.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1354)), var_leftType_70275.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1355)).getter_infixOrOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1355)), GALGAS_string ("|"), object->mProperty_mOperatorLocation, var_rightExpression_70201, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1352)) ;
  }
  outArgument_outExpression = GALGAS_orShortExpressionForGeneration::constructor_new (var_leftType_70275, object->mProperty_mOperatorLocation, var_leftExpression_69927, var_rightExpression_70201  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1361)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1373)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1374)) ;
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
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_71715 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_71715, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1387)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_71989 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_71715.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1399)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_71989, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1396)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_72063 = var_leftExpression_71715.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1405)) ;
  {
  routine_checkDiadicOperator (var_leftType_72063, var_rightExpression_71989.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1408)), var_leftType_72063.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1409)).getter_infixAndOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1409)), GALGAS_string ("&"), object->mProperty_mOperatorLocation, var_rightExpression_71989, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1406)) ;
  }
  outArgument_outExpression = GALGAS_andExpressionForGeneration::constructor_new (var_leftType_72063, object->mProperty_mOperatorLocation, var_leftExpression_71715, var_rightExpression_71989  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1415)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1427)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1428)) ;
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
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_73510 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_73510, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1441)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_73784 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_73510.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1453)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_73784, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1450)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_73858 = var_leftExpression_73510.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1459)) ;
  {
  routine_checkDiadicOperator (var_leftType_73858, var_rightExpression_73784.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1462)), var_leftType_73858.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1463)).getter_infixAndOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1463)), GALGAS_string ("&"), object->mProperty_mOperatorLocation, var_rightExpression_73784, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1460)) ;
  }
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::constructor_new (var_leftType_73858, object->mProperty_mOperatorLocation, var_leftExpression_73510, var_rightExpression_73784  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1469)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1481)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1482)) ;
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
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_75300 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_75300, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1495)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_75574 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_75300.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1507)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_75574, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1504)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_75648 = var_leftExpression_75300.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1513)) ;
  {
  routine_checkDiadicOperator (var_leftType_75648, var_rightExpression_75574.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1516)), var_leftType_75648.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1517)).getter_infixXorOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1517)), GALGAS_string ("^"), object->mProperty_mOperatorLocation, var_rightExpression_75574, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1514)) ;
  }
  outArgument_outExpression = GALGAS_xorExpressionForGeneration::constructor_new (var_leftType_75648, object->mProperty_mOperatorLocation, var_leftExpression_75300, var_rightExpression_75574  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1523)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1536)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1537)) ;
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
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inInferenceType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_77140 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_77140, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1551)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_77430 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_77430, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1560)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_77504 = var_leftExpression_77140.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1569)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType_77504.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1570)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_leftExpression_77140.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1571)), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1571)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_77709 = var_rightExpression_77430.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1573)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_rightType_77709.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1574)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_rightExpression_77430.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1575)), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1575)) ;
  }
  outArgument_outExpression = GALGAS_closedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_77140.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1579))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1579)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1579)), object->mProperty_mOperatorLocation, var_leftExpression_77140, var_rightExpression_77430  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1578)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1591)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1592)) ;
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
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inInferenceType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_79253 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_79253, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1606)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_79543 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_79543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1615)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_79617 = var_leftExpression_79253.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1624)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType_79617.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1625)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_leftExpression_79253.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1626)), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1626)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_79822 = var_rightExpression_79543.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1628)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_rightType_79822.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1629)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_rightExpression_79543.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1630)), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1630)) ;
  }
  outArgument_outExpression = GALGAS_openedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_79253.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1634))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1634)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1634)), object->mProperty_mOperatorLocation, var_leftExpression_79253, var_rightExpression_79543  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1633)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1646)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1647)) ;
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
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionAST * object = (const cPtr_equalExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_81319 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_81319, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1661)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_81360 = var_leftExpression_81319.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1669)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_81642 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_81360, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_81642, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1671)) ;
  {
  routine_checkDiadicOperator (var_leftType_81360, var_rightExpression_81642.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1682)), GALGAS_bool (true), GALGAS_string ("=="), object->mProperty_mOperatorLocation, var_rightExpression_81642, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1680)) ;
  }
  outArgument_outExpression = GALGAS_equalExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_81319, var_rightExpression_81642  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1689)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1702)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1703)) ;
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
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionAST * object = (const cPtr_notEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_83109 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_83109, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1716)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_83150 = var_leftExpression_83109.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1724)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_83431 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_83150, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_83431, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1726)) ;
  {
  routine_checkDiadicOperator (var_leftType_83150, var_rightExpression_83431.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1737)), GALGAS_bool (true), GALGAS_string ("!="), object->mProperty_mOperatorLocation, var_rightExpression_83431, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1735)) ;
  }
  outArgument_outExpression = GALGAS_notEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_83109, var_rightExpression_83431  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1744)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1757)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1758)) ;
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
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionAST * object = (const cPtr_lowerOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_84909 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_84909, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1771)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_84950 = var_leftExpression_84909.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1779)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_85231 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_84950, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_85231, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1781)) ;
  {
  routine_checkDiadicOperator (var_leftType_84950, var_rightExpression_85231.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1792)), var_leftType_84950.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1793)).getter_isComparable (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1793)), GALGAS_string ("<="), object->mProperty_mOperatorLocation, var_rightExpression_85231, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1790)) ;
  }
  outArgument_outExpression = GALGAS_lowerOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_84909, var_rightExpression_85231  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1799)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1812)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1813)) ;
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
                                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionAST * object = (const cPtr_greaterOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_86741 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_86741, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1826)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_86782 = var_leftExpression_86741.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1834)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_87063 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_86782, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_87063, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1836)) ;
  {
  routine_checkDiadicOperator (var_leftType_86782, var_rightExpression_87063.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1847)), var_leftType_86782.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1848)).getter_isComparable (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1848)), GALGAS_string (">="), object->mProperty_mOperatorLocation, var_rightExpression_87063, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1845)) ;
  }
  outArgument_outExpression = GALGAS_greaterOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_86741, var_rightExpression_87063  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1854)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1867)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1868)) ;
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
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionAST * object = (const cPtr_strictGreaterExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_88573 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_88573, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1881)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_88614 = var_leftExpression_88573.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1889)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_88895 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_88614, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_88895, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1891)) ;
  {
  routine_checkDiadicOperator (var_leftType_88614, var_rightExpression_88895.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1902)), var_leftType_88614.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1903)).getter_isComparable (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1903)), GALGAS_string (">"), object->mProperty_mOperatorLocation, var_rightExpression_88895, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1900)) ;
  }
  outArgument_outExpression = GALGAS_strictGreaterExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_88573, var_rightExpression_88895  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1909)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1922)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1923)) ;
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
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionAST * object = (const cPtr_strictLowerExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_90399 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_90399, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1936)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_90440 = var_leftExpression_90399.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1944)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_90721 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_90440, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_90721, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1946)) ;
  {
  routine_checkDiadicOperator (var_leftType_90440, var_rightExpression_90721.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1957)), var_leftType_90440.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1958)).getter_isComparable (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1958)), GALGAS_string ("<"), object->mProperty_mOperatorLocation, var_rightExpression_90721, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1955)) ;
  }
  outArgument_outExpression = GALGAS_strictLowerExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_90399, var_rightExpression_90721  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1964)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1977)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1978)) ;
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
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionAST * object = (const cPtr_rightShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_92221 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_92221, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1992)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_92515 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_92515, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2001)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_92589 = var_leftExpression_92221.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2010)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_92658 = var_rightExpression_92515.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2011)) ;
  GALGAS_bool test_0 = GALGAS_bool (var_leftExpression_92221.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (var_rightExpression_92515.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration temp_2 ;
    if (var_leftExpression_92221.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_92221.ptr ())) {
        temp_2 = (cPtr_literalBigIntExpressionForGeneration *) var_leftExpression_92221.ptr () ;
      }else{
        inCompiler->castError ("literalBigIntExpressionForGeneration", var_leftExpression_92221.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2014)) ;
      }
    }
    GALGAS_literalBigIntExpressionForGeneration var_left_92841 = temp_2 ;
    GALGAS_literalUIntExpressionForGeneration temp_3 ;
    if (var_rightExpression_92515.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_92515.ptr ())) {
        temp_3 = (cPtr_literalUIntExpressionForGeneration *) var_rightExpression_92515.ptr () ;
      }else{
        inCompiler->castError ("literalUIntExpressionForGeneration", var_rightExpression_92515.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2015)) ;
      }
    }
    GALGAS_literalUIntExpressionForGeneration var_right_92916 = temp_3 ;
    outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), object->mProperty_mOperatorLocation, var_left_92841.getter_mValue (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2019)).right_shift_operation (var_right_92916.getter_mValue (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2019)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2019))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2016)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_4 = var_leftType_92589.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2021)).getter_infixShiftOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2021)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2021)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_92589.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2023)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2023)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2023)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2022)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_rightType_92658.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2025)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_92658.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2027)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2027)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2027)), fixItArray7  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2026)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        outArgument_outExpression = GALGAS_rightShiftExpressionForGeneration::constructor_new (var_leftType_92589, object->mProperty_mOperatorLocation, var_leftExpression_92221, var_rightExpression_92515  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2031)) ;
      }
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2045)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2046)) ;
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
                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionAST * object = (const cPtr_leftShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_94829 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_94829, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2060)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_95123 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_95123, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2069)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_95197 = var_leftExpression_94829.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2078)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_95266 = var_rightExpression_95123.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2079)) ;
  GALGAS_bool test_0 = GALGAS_bool (var_leftExpression_94829.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (var_rightExpression_95123.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration temp_2 ;
    if (var_leftExpression_94829.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_94829.ptr ())) {
        temp_2 = (cPtr_literalBigIntExpressionForGeneration *) var_leftExpression_94829.ptr () ;
      }else{
        inCompiler->castError ("literalBigIntExpressionForGeneration", var_leftExpression_94829.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2082)) ;
      }
    }
    GALGAS_literalBigIntExpressionForGeneration var_left_95449 = temp_2 ;
    GALGAS_literalUIntExpressionForGeneration temp_3 ;
    if (var_rightExpression_95123.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_95123.ptr ())) {
        temp_3 = (cPtr_literalUIntExpressionForGeneration *) var_rightExpression_95123.ptr () ;
      }else{
        inCompiler->castError ("literalUIntExpressionForGeneration", var_rightExpression_95123.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2083)) ;
      }
    }
    GALGAS_literalUIntExpressionForGeneration var_right_95524 = temp_3 ;
    outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), object->mProperty_mOperatorLocation, var_left_95449.getter_mValue (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2087)).left_shift_operation (var_right_95524.getter_mValue (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2087)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2087))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2084)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_4 = var_leftType_95197.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2089)).getter_infixShiftOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2089)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2089)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_95197.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2091)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2091)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2091)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2090)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_rightType_95266.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2093)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_95266.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2095)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2095)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2095)), fixItArray7  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2094)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        outArgument_outExpression = GALGAS_leftShiftExpressionForGeneration::constructor_new (var_leftType_95197, object->mProperty_mOperatorLocation, var_leftExpression_94829, var_rightExpression_95123  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2099)) ;
      }
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2113)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2114)) ;
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
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowAST * object = (const cPtr_addExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_97444 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_97444, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2128)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_97718 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_97444.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2140)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_97718, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2137)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_97792 = var_leftExpression_97444.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2146)) ;
  {
  routine_checkDiadicOperator (var_leftType_97792, var_rightExpression_97718.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2149)), var_leftType_97792.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2150)).getter_infixAddOperatorNoOVF (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2150)), GALGAS_string ("&+"), object->mProperty_mOperatorLocation, var_rightExpression_97718, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2147)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionNoOverflowForGeneration::constructor_new (var_leftType_97792, object->mProperty_mOperatorLocation, var_leftExpression_97444, var_rightExpression_97718  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2156)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2169)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2170)) ;
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
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionAST * object = (const cPtr_addExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_99248 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_99248, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2183)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_99522 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_99248.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2195)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_99522, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2192)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_99596 = var_leftExpression_99248.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2201)) ;
  {
  routine_checkDiadicOperator (var_leftType_99596, var_rightExpression_99522.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2204)), var_leftType_99596.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2205)).getter_infixAddOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2205)), GALGAS_string ("+"), object->mProperty_mOperatorLocation, var_rightExpression_99522, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2202)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionForGeneration::constructor_new (var_leftType_99596, object->mProperty_mOperatorLocation, var_leftExpression_99248, var_rightExpression_99522  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2211)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2224)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2225)) ;
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
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowAST * object = (const cPtr_subExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_101056 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_101056, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2239)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_101330 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_101056.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2251)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_101330, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2248)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_101404 = var_leftExpression_101056.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2257)) ;
  {
  routine_checkDiadicOperator (var_leftType_101404, var_rightExpression_101330.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2260)), var_leftType_101404.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2261)).getter_infixSubOperatorNoOVF (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2261)), GALGAS_string ("&-"), object->mProperty_mOperatorLocation, var_rightExpression_101330, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2258)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionNoOverflowForGeneration::constructor_new (var_leftType_101404, object->mProperty_mOperatorLocation, var_leftExpression_101056, var_rightExpression_101330  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2267)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2280)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2281)) ;
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
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionAST * object = (const cPtr_subExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_102860 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_102860, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2294)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_103134 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_102860.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2306)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_103134, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2303)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_103208 = var_leftExpression_102860.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2312)) ;
  {
  routine_checkDiadicOperator (var_leftType_103208, var_rightExpression_103134.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2315)), var_leftType_103208.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2316)).getter_infixSubOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2316)), GALGAS_string ("-"), object->mProperty_mOperatorLocation, var_rightExpression_103134, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2313)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionForGeneration::constructor_new (var_leftType_103208, object->mProperty_mOperatorLocation, var_leftExpression_102860, var_rightExpression_103134  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2322)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2335)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2336)) ;
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
                                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowAST * object = (const cPtr_multiplicationExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_104690 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_104690, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2349)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_104964 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_104690.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2361)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_104964, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2358)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_105038 = var_leftExpression_104690.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2367)) ;
  {
  routine_checkDiadicOperator (var_leftType_105038, var_rightExpression_104964.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2370)), var_leftType_105038.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2371)).getter_infixMulOperatorNoOVF (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2371)), GALGAS_string ("&*"), object->mProperty_mOperatorLocation, var_rightExpression_104964, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2368)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowForGeneration::constructor_new (var_leftType_105038, object->mProperty_mOperatorLocation, var_leftExpression_104690, var_rightExpression_104964  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2377)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2389)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2390)) ;
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
                                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionAST * object = (const cPtr_multiplicationExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_106524 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_106524, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2403)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_106798 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_106524.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2415)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_106798, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2412)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_106872 = var_leftExpression_106524.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2421)) ;
  {
  routine_checkDiadicOperator (var_leftType_106872, var_rightExpression_106798.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2424)), var_leftType_106872.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2425)).getter_infixMulOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2425)), GALGAS_string ("*"), object->mProperty_mOperatorLocation, var_rightExpression_106798, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2422)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionForGeneration::constructor_new (var_leftType_106872, object->mProperty_mOperatorLocation, var_leftExpression_106524, var_rightExpression_106798  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2431)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2443)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2444)) ;
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
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowAST * object = (const cPtr_divisionExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_108350 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_108350, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2457)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_108624 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_108350.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2469)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_108624, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2466)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_108698 = var_leftExpression_108350.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2475)) ;
  {
  routine_checkDiadicOperator (var_leftType_108698, var_rightExpression_108624.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2478)), var_leftType_108698.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2479)).getter_infixDivOperatorNoOVF (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2479)), GALGAS_string ("&/"), object->mProperty_mOperatorLocation, var_rightExpression_108624, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2476)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionNoOverflowForGeneration::constructor_new (var_leftType_108698, object->mProperty_mOperatorLocation, var_leftExpression_108350, var_rightExpression_108624  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2485)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2498)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2499)) ;
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
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionAST * object = (const cPtr_divisionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_110169 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_110169, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2512)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_110443 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_110169.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2524)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_110443, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2521)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_110517 = var_leftExpression_110169.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2530)) ;
  {
  routine_checkDiadicOperator (var_leftType_110517, var_rightExpression_110443.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2533)), var_leftType_110517.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2534)).getter_infixDivOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2534)), GALGAS_string ("/"), object->mProperty_mOperatorLocation, var_rightExpression_110443, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2531)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionForGeneration::constructor_new (var_leftType_110517, object->mProperty_mOperatorLocation, var_leftExpression_110169, var_rightExpression_110443  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2540)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2552)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2553)) ;
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
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionAST * object = (const cPtr_moduloExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_111965 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_111965, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2566)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_112239 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_111965.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2578)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_112239, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2575)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_112313 = var_leftExpression_111965.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2584)) ;
  {
  routine_checkDiadicOperator (var_leftType_112313, var_rightExpression_112239.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2587)), var_leftType_112313.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2588)).getter_infixModOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2588)), GALGAS_string ("mod"), object->mProperty_mOperatorLocation, var_rightExpression_112239, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2585)) ;
  }
  outArgument_outExpression = GALGAS_moduloExpressionForGeneration::constructor_new (var_leftType_112313, object->mProperty_mOperatorLocation, var_leftExpression_111965, var_rightExpression_112239  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2594)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2606)) ;
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
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusNoOverflowExpressionAST * object = (const cPtr_unaryMinusNoOverflowExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusNoOverflowExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_113530 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2623)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_113530, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2620)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_113794 = var_expression_113530.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2629)) ;
  const enumGalgasBool test_0 = var_type_113794.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2630)).getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2630)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2630)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_113794.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2632)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2632)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2632)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2631)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionNoOverflowForGeneration::constructor_new (var_type_113794, object->mProperty_mOperatorLocation, var_expression_113530  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2636)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2648)) ;
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
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionAST * object = (const cPtr_unaryMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_115198 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2665)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_115198, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2662)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_115268 = var_expression_115198.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2671)) ;
  const enumGalgasBool test_0 = GALGAS_bool (var_expression_115198.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_literalBigIntExpressionForGeneration temp_1 ;
    if (var_expression_115198.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_115198.ptr ())) {
        temp_1 = (cPtr_literalBigIntExpressionForGeneration *) var_expression_115198.ptr () ;
      }else{
        inCompiler->castError ("literalBigIntExpressionForGeneration", var_expression_115198.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2673)) ;
      }
    }
    GALGAS_literalBigIntExpressionForGeneration var_exp_115372 = temp_1 ;
    outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (var_exp_115372.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2675)), var_exp_115372.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2676)), var_exp_115372.getter_mValue (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2677)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2677))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2674)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_type_115268.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2679)).getter_prefixMinusOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2679)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2679)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_115268.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2681)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2681)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2681)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2680)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_115268, object->mProperty_mOperatorLocation, var_expression_115198  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2685)) ;
    }
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2698)) ;
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
                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryPlusExpressionAST * object = (const cPtr_unaryPlusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryPlusExpressionAST) ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2714)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2711)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_116949 = outArgument_outExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2720)) ;
  const enumGalgasBool test_0 = var_type_116949.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2721)).getter_prefixPlusOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2721)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2721)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_116949.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2723)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2723)).add_operation (GALGAS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2723)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2722)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2733)) ;
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
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_117988 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2750)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_117988, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2747)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_118252 = var_expression_117988.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2756)) ;
  const enumGalgasBool test_0 = GALGAS_bool (var_expression_117988.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2758)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (var_expression_117988.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2760)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = var_type_118252.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2761)).getter_prefixNotOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2761)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2761)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_118252.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2763)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2763)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2763)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2762)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_118252, object->mProperty_mOperatorLocation, var_expression_117988  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2767)) ;
      }
    }
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
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessExpressionAST * object = (const cPtr_structFieldAccessExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_119950 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2795)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_119950, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2792)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_120020 = var_expression_119950.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2801)) ;
  const enumGalgasBool test_0 = var_type_120020.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)).getter_isStructType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)).operator_and (var_type_120020.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)).getter_isClassType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mStructFieldName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2803)), GALGAS_string ("the '.' operator requires the receiver to be a struct or a class"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2803)) ;
  }
  GALGAS_propertyMap var_attributeMap_120261 = var_type_120020.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2805)) ;
  var_attributeMap_120261.method_searchKey (object->mProperty_mStructFieldName, var_type_120020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2806)) ;
  outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_type_120020, object->mProperty_mOperatorLocation, var_expression_119950, object->mProperty_mStructFieldName.getter_string (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2808)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2821)) ;
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
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complementExpressionAST * object = (const cPtr_complementExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complementExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_121508 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2838)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_121508, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2835)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_121578 = var_expression_121508.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2844)) ;
  const enumGalgasBool test_0 = GALGAS_bool (var_expression_121508.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_literalBigIntExpressionForGeneration temp_1 ;
    if (var_expression_121508.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_121508.ptr ())) {
        temp_1 = (cPtr_literalBigIntExpressionForGeneration *) var_expression_121508.ptr () ;
      }else{
        inCompiler->castError ("literalBigIntExpressionForGeneration", var_expression_121508.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2846)) ;
      }
    }
    GALGAS_literalBigIntExpressionForGeneration var_exp_121682 = temp_1 ;
    outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (var_exp_121682.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2848)), var_exp_121682.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2849)), var_exp_121682.getter_mValue (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2850)).operator_tilde (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2850))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2847)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_type_121578.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2852)).getter_prefixTildeOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2852)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2852)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_121578.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2854)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2854)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2854)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2853)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_121578, object->mProperty_mOperatorLocation, var_expression_121508  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2858)) ;
    }
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mIfExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2871)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mThenExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2872)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mElseExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2873)) ;
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
                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_if_5F_expression_123369 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_if_5F_expression_123369, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2887)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression_123456 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_then_5F_expression_123456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2897)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression_123726 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_else_5F_expression_123726, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2907)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_if_5F_expression_123369.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2916)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2916)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the test expression type is '@").add_operation (var_if_5F_expression_123369.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2918)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2918)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2918)).add_operation (GALGAS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2918)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2917)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_then_5F_expression_123456.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2920)).objectCompare (var_else_5F_expression_123726.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2920)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand expression types are '@").add_operation (var_then_5F_expression_123456.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)).add_operation (GALGAS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)).add_operation (var_else_5F_expression_123726.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)).add_operation (GALGAS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2921)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_ifExpressionForGeneration::constructor_new (var_then_5F_expression_123456.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2927)), object->mProperty_mOperatorLocation, var_if_5F_expression_123369, var_then_5F_expression_123456, var_else_5F_expression_123726  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2926)) ;
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
  cEnumerator_actualOutputExpressionList enumerator_124924 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
  while (enumerator_124924.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_124924.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2942)) ;
    enumerator_124924.gotoNextObject () ;
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
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  GALGAS_lstring var_usefulnessName_125471 = function_functionNameForUsefulEntitiesGraph (object->mProperty_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2956)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_125471 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2957)) ;
  }
  GALGAS_functionSignature var_functionSignature_125765 ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_125807 ;
  GALGAS_bool var_isInternal_125833 ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFunctionMap (HERE).method_searchKey (object->mProperty_mFunctionName, var_functionSignature_125765, var_resultType_125807, var_isInternal_125833, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2959)) ;
  const enumGalgasBool test_0 = var_isInternal_125833.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation_125910 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFunctionMap (HERE).getter_locationForKey (object->mProperty_mFunctionName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2967)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mFunctionName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2968)).objectCompare (var_procDeclarationLocation_125910.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2968)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2969)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_125910.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2969)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2969)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2969)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2969)) ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_functionSignature_125765.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2973)).objectCompare (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2973)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2974)), GALGAS_string ("the '").add_operation (object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)).add_operation (var_functionSignature_125765.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)).add_operation (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2976)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2976)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2976)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2976)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2974)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_126614 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2980)) ;
    cEnumerator_functionSignature enumerator_126687 (var_functionSignature_125765, kENUMERATION_UP) ;
    cEnumerator_actualOutputExpressionList enumerator_126710 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
    while (enumerator_126687.hasCurrentObject () && enumerator_126710.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_126961 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_126710.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_126687.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_126961, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2982)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_126687.current_mFormalArgumentType (HERE), var_expression_126961.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990)), enumerator_126710.current_mEndOfExpressionLocation (HERE), var_expression_126961, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_126687.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_126710.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_126687.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = enumerator_126687.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2992)) ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_126710.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2992)), GALGAS_string ("the selector should be '!").add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2992)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2992)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2992)) ;
      }
      var_semanticExpressionListForGeneration_126614.addAssign_operation (var_expression_126961  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2994)) ;
      enumerator_126687.gotoNextObject () ;
      enumerator_126710.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_125807, object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2998)), object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2999)), var_semanticExpressionListForGeneration_126614  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2996)) ;
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
                                                                          const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_128372 ;
  GALGAS_string var_sourceVariableCppName_128411 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_128464 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mVarName, var_type_128372, var_sourceVariableCppName_128411, var_nameForCheckingFormalParameterUsing_128464, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3021)) ;
  }
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_128372, object->mProperty_mVarName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3029)), var_sourceVariableCppName_128411, var_nameForCheckingFormalParameterUsing_128464  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3027)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy joker_128930 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mProperty_mLiteralTypeName, joker_128930 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3040)) ;
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
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionAST * object = (const cPtr_literalTypeInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionAST) ;
  GALGAS_lstring var_usefulnessName_129415 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mLiteralTypeName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3053)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_129415 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3054)) ;
  }
  GALGAS_bool joker_129666_25 ; // Joker input parameter
  GALGAS_bool joker_129666_24 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_129666_23 ; // Joker input parameter
  GALGAS_typeKindEnum joker_129666_22 ; // Joker input parameter
  GALGAS_bool joker_129666_21 ; // Joker input parameter
  GALGAS_typedPropertyList joker_129666_20 ; // Joker input parameter
  GALGAS_propertyMap joker_129666_19 ; // Joker input parameter
  GALGAS_typedPropertyList joker_129666_18 ; // Joker input parameter
  GALGAS_constructorMap joker_129666_17 ; // Joker input parameter
  GALGAS_getterMap joker_129666_16 ; // Joker input parameter
  GALGAS_setterMap joker_129666_15 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_129666_14 ; // Joker input parameter
  GALGAS_classMethodMap joker_129666_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_129666_12 ; // Joker input parameter
  GALGAS_operators joker_129666_11 ; // Joker input parameter
  GALGAS_functionSignature joker_129666_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_129666_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_129666_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_129666_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_129666_6 ; // Joker input parameter
  GALGAS_bool joker_129666_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_129666_4 ; // Joker input parameter
  GALGAS_string joker_129666_3 ; // Joker input parameter
  GALGAS_string joker_129666_2 ; // Joker input parameter
  GALGAS_headerKind joker_129666_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).method_searchKey (object->mProperty_mLiteralTypeName, joker_129666_25, joker_129666_24, joker_129666_23, joker_129666_22, joker_129666_21, joker_129666_20, joker_129666_19, joker_129666_18, joker_129666_17, joker_129666_16, joker_129666_15, joker_129666_14, joker_129666_13, joker_129666_12, joker_129666_11, joker_129666_10, joker_129666_9, joker_129666_8, joker_129666_7, joker_129666_6, joker_129666_5, joker_129666_4, joker_129666_3, joker_129666_2, joker_129666_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3056)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_129686 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mLiteralTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3058)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3060))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3060)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3060)), object->mProperty_mLiteralTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3061)), var_type_129686  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3059)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3071)) ;
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
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionAST * object = (const cPtr_testDynamicClassInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_130849 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3089)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_130849, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3086)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_castType_131097 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3095)) ;
  const enumGalgasBool test_0 = var_expression_130849.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3097)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3097)).getter_isClassType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3097)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_t_131375 = var_castType_131097 ;
    GALGAS_bool var_found_131402 = GALGAS_bool (kIsEqual, var_t_131375.objectCompare (var_expression_130849.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3100)))) ;
    if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)).isValid ()) {
      uint32_t variant_131443 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)).uintValue () ;
      bool loop_131443 = true ;
      while (loop_131443) {
        loop_131443 = var_found_131402.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).operator_and (var_t_131375.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).isValid () ;
        if (loop_131443) {
          loop_131443 = var_found_131402.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).operator_and (var_t_131375.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).boolValue () ;
        }
        if (loop_131443 && (0 == variant_131443)) {
          loop_131443 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)) ;
        }
        if (loop_131443) {
          variant_131443 -- ;
          var_t_131375 = var_t_131375.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3103)) ;
          var_found_131402 = GALGAS_bool (kIsEqual, var_t_131375.objectCompare (var_expression_130849.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3104)))) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_found_131402.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3106)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3107)), GALGAS_string ("the '@").add_operation (object->mProperty_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3108)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3108)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3108)).add_operation (var_expression_130849.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3108)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3108)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3108)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3108)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3107)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_expression_130849.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3111)), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_expression_130849.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3112)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3112)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3111)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3112)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3111)) ;
  }
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3117)), var_expression_130849, object->mProperty_mTypeComparisonKind, var_castType_131097  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3115)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3128)) ;
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
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionAST * object = (const cPtr_castInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_133210 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3145)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_133210, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3142)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_133253 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3151)) ;
  const enumGalgasBool test_0 = var_expression_133210.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3156)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3156)).getter_isClassType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3156)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_t_133546 = var_type_133253 ;
    GALGAS_bool var_found_133569 = GALGAS_bool (kIsEqual, var_t_133546.objectCompare (var_expression_133210.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3159)))) ;
    if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3160)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3160)).isValid ()) {
      uint32_t variant_133610 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3160)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3160)).uintValue () ;
      bool loop_133610 = true ;
      while (loop_133610) {
        loop_133610 = var_found_133569.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).operator_and (var_t_133546.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).isValid () ;
        if (loop_133610) {
          loop_133610 = var_found_133569.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).operator_and (var_t_133546.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).boolValue () ;
        }
        if (loop_133610 && (0 == variant_133610)) {
          loop_133610 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3160)) ;
        }
        if (loop_133610) {
          variant_133610 -- ;
          var_t_133546 = var_t_133546.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3162)) ;
          var_found_133569 = GALGAS_bool (kIsEqual, var_t_133546.objectCompare (var_expression_133210.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3163)))) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_found_133569.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3165)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3166)), GALGAS_string ("the '@").add_operation (object->mProperty_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)).add_operation (var_expression_133210.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3168)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3168)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3168)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3166)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_expression_133210.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3170)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3170)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_expression_133210.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3175)), GALGAS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (var_expression_133210.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3177)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3177)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3176)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3177)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3175)) ;
    }
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_expression_133210.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3180)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3180)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
  if (kBoolTrue == test_5) {
    outArgument_outExpression = GALGAS_extractObjectInExpressionForGeneration::constructor_new (var_type_133253, object->mProperty_mEndOfReceiverExpression, var_expression_133210, object->mProperty_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3185))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3181)) ;
  }else if (kBoolFalse == test_5) {
    outArgument_outExpression = GALGAS_castInExpressionForGeneration::constructor_new (var_type_133253, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3189)), var_expression_133210, object->mProperty_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3191)), var_type_133253  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3187)) ;
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
                                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                     const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperObjectInstanciationInExpressionAST * object = (const cPtr_filewrapperObjectInstanciationInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
  GALGAS_lstring var_usefulnessName_135557 = function_filewrapperNameForUsefulEntitiesGraph (object->mProperty_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3214)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_135557 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3215)) ;
  }
  GALGAS_lstring var_filewrapperPath_135871 ;
  GALGAS_bool var_isInternal_135905 ;
  GALGAS_lstringlist joker_135877_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_135877_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_135877_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_135877_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).method_searchKey (object->mProperty_mFilewrapperName, var_filewrapperPath_135871, joker_135877_4, joker_135877_3, joker_135877_2, joker_135877_1, var_isInternal_135905, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3217)) ;
  const enumGalgasBool test_0 = var_isInternal_135905.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_filewrapperDeclarationLocation_135989 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).getter_locationForKey (object->mProperty_mFilewrapperName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3225)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mFilewrapperName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3226)).objectCompare (var_filewrapperDeclarationLocation_135989.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3226)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3227)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_135989.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3227)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3227)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3227)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3227)) ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper"), object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3232))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3232)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3232)), object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3233)), object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3234)), var_filewrapperPath_135871.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3235))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3231)) ;
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
  cEnumerator_actualOutputExpressionList enumerator_136876 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_136876.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_136876.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3244)) ;
    enumerator_136876.gotoNextObject () ;
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
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  GALGAS_lstring var_usefulnessName_137432 = function_filewrapperTemplateNameForUsefulEntitiesGraph (object->mProperty_mFilewrapperName, object->mProperty_mFilewrapperTemplateName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3258)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_137432 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3259)) ;
  }
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_137766 ;
  GALGAS_bool var_isInternal_137793 ;
  GALGAS_lstring joker_137707_4 ; // Joker input parameter
  GALGAS_lstringlist joker_137707_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_137707_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_137707_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).method_searchKey (object->mProperty_mFilewrapperName, joker_137707_4, joker_137707_3, joker_137707_2, joker_137707_1, var_filewrapperTemplateMap_137766, var_isInternal_137793, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3261)) ;
  const enumGalgasBool test_0 = var_isInternal_137793.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_filewrapperDeclarationLocation_137878 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).getter_locationForKey (object->mProperty_mFilewrapperName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3269)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mFilewrapperName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3270)).objectCompare (var_filewrapperDeclarationLocation_137878.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3270)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3271)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_137878.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3271)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3271)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3271)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3271)) ;
    }
  }
  GALGAS_functionSignature var_templateSignature_138300 ;
  GALGAS_lstring joker_138302 ; // Joker input parameter
  var_filewrapperTemplateMap_137766.method_searchKey (object->mProperty_mFilewrapperTemplateName, var_templateSignature_138300, joker_138302, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3275)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_138390 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3278)).objectCompare (var_templateSignature_138300.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3278)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mFilewrapperTemplateName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3279)), GALGAS_string ("calling the '").add_operation (object->mProperty_mFilewrapperTemplateName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)).add_operation (object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)).add_operation (var_templateSignature_138300.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3281)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3281)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3281)).add_operation (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3282)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3282)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3281)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3282)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3279)) ;
    var_effectiveParameterList_138390.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    var_effectiveParameterList_138390 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3285)) ;
    cEnumerator_actualOutputExpressionList enumerator_138880 (object->mProperty_mExpressions, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_138905 (var_templateSignature_138300, kENUMERATION_UP) ;
    while (enumerator_138880.hasCurrentObject () && enumerator_138905.hasCurrentObject ()) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_138905.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_138880.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_138905.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_138880.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3288)), GALGAS_string ("the selector should be '!").add_operation (enumerator_138905.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3288)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3288)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3288)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3288)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3288)) ;
      }
      GALGAS_semanticExpressionForGeneration var_exp_139362 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_138880.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_138905.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_139362, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3290)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_138905.current_mFormalArgumentType (HERE), var_exp_139362.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3298)), enumerator_138880.current_mEndOfExpressionLocation (HERE), var_exp_139362, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3298)) ;
      }
      var_effectiveParameterList_138390.addAssign_operation (var_exp_139362  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3299)) ;
      enumerator_138880.gotoNextObject () ;
      enumerator_138905.gotoNextObject () ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3305)), object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3306)), object->mProperty_mFilewrapperTemplateName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3307)), var_effectiveParameterList_138390  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3303)) ;
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
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperInExpressionAST * object = (const cPtr_filewrapperInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperInExpressionAST) ;
  GALGAS_lstring var_usefulnessName_140526 = function_filewrapperNameForUsefulEntitiesGraph (object->mProperty_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3328)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_140526 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3329)) ;
  }
  GALGAS_stringlist var_directoryList_140724 ;
  GALGAS_string var_fileName_140743 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mFilewrapperPath.getter_string (HERE).getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3333)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3334)), GALGAS_string ("path is empty"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3334)) ;
    var_directoryList_140724.drop () ; // Release error dropped variable
    var_fileName_140743.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mFilewrapperPath.getter_string (HERE).getter_firstCharacterOrNul (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3335)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3336)), GALGAS_string ("the path should not begin with '/'"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3336)) ;
      var_directoryList_140724.drop () ; // Release error dropped variable
      var_fileName_140743.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      var_directoryList_140724 = object->mProperty_mFilewrapperPath.getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3338)) ;
      {
      var_directoryList_140724.setter_popLast (var_fileName_140743, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3339)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap_141305 ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap_141359 ;
  GALGAS_bool var_isInternal_141392 ;
  GALGAS_lstring joker_141253 ; // Joker input parameter
  GALGAS_lstringlist joker_141260 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_141365 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).method_searchKey (object->mProperty_mFilewrapperName, joker_141253, joker_141260, var_filewrapperFileMap_141305, var_filewrapperDirectoryMap_141359, joker_141365, var_isInternal_141392, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3342)) ;
  const enumGalgasBool test_4 = var_isInternal_141392.boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location var_filewrapperDeclarationLocation_141476 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).getter_locationForKey (object->mProperty_mFilewrapperName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3353)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mProperty_mFilewrapperName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3354)).objectCompare (var_filewrapperDeclarationLocation_141476.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3354)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3355)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_141476.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3355)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3355)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3355)), fixItArray6  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3355)) ;
    }
  }
  GALGAS_string var_builtPath_141830 = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_141359.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3360)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3360)).isValid ()) {
    uint32_t variant_141842 = var_filewrapperDirectoryMap_141359.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3360)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3360)).uintValue () ;
    bool loop_141842 = true ;
    while (loop_141842) {
      loop_141842 = GALGAS_bool (kIsStrictSup, var_directoryList_140724.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3361)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_141842) {
        loop_141842 = GALGAS_bool (kIsStrictSup, var_directoryList_140724.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3361)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_141842 && (0 == variant_141842)) {
        loop_141842 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3360)) ;
      }
      if (loop_141842) {
        variant_141842 -- ;
        GALGAS_string var_directoryName_141944 ;
        {
        var_directoryList_140724.setter_popFirst (var_directoryName_141944, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3363)) ;
        }
        var_builtPath_141830.plusAssign_operation(var_directoryName_141944.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3364)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3364)) ;
        const enumGalgasBool test_7 = var_filewrapperDirectoryMap_141359.getter_hasKey (var_directoryName_141944 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3365)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_uint joker_142254 ; // Joker input parameter
          var_filewrapperDirectoryMap_141359.method_searchKey (GALGAS_lstring::constructor_new (var_directoryName_141944, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3367))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3367)), var_filewrapperFileMap_141305, var_filewrapperDirectoryMap_141359, joker_142254, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3366)) ;
        }else if (kBoolFalse == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)), GALGAS_string ("the '").add_operation (var_builtPath_141830, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)).add_operation (object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)) ;
          var_filewrapperFileMap_141305.drop () ; // Release error dropped variable
          var_directoryList_140724 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3374)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex_142514 ;
  GALGAS_bool var_isTextFile_142533 ;
  const enumGalgasBool test_9 = var_filewrapperFileMap_141305.getter_hasKey (var_fileName_140743 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3379)).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_string joker_142659 ; // Joker input parameter
    GALGAS_uint joker_142674 ; // Joker input parameter
    var_filewrapperFileMap_141305.method_searchKey (GALGAS_lstring::constructor_new (var_fileName_140743, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3380))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3380)), joker_142659, var_isTextFile_142533, joker_142674, var_fileIndex_142514, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3380)) ;
  }else if (kBoolFalse == test_9) {
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (object->mProperty_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3382)), GALGAS_string ("the '").add_operation (var_fileName_140743, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)).add_operation (var_builtPath_141830, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)).add_operation (object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)), fixItArray10  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3382)) ;
    var_fileIndex_142514.drop () ; // Release error dropped variable
    var_isTextFile_142533.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_11 ;
  const enumGalgasBool test_12 = var_isTextFile_142533.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("data"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3390))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3390)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3390)) ;
  }
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (temp_11, object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3392)), object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3393)), var_fileIndex_142514, var_isTextFile_142533  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3387)) ;
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
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionExpressionAST * object = (const cPtr_lexiqueIntrospectionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionExpressionAST) ;
  GALGAS_lstring var_usefulnessName_144012 = function_lexiqueNameForUsefulEntitiesGraph (object->mProperty_mLexiqueComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3415)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_144012 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3416)) ;
  }
  GALGAS_terminalMap joker_144308_3 ; // Joker input parameter
  GALGAS_indexingListAST joker_144308_2 ; // Joker input parameter
  GALGAS_lstring joker_144308_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mLexiqueComponentMapForSemanticAnalysis (HERE).method_searchKey (object->mProperty_mLexiqueComponentName, joker_144308_3, joker_144308_2, joker_144308_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3418)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mLexiqueGetterName.getter_string (HERE).objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mLexiqueGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3424)), GALGAS_string ("unknown getter"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3424)) ;
  }
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_string ("stringlist").getter_nowhere (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3428)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3428)), object->mProperty_mLexiqueComponentName.getter_location (HERE), object->mProperty_mLexiqueComponentName.getter_string (HERE), object->mProperty_mLexiqueGetterName.getter_string (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3427)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3443)) ;
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
  extensionMethod_enterInSemanticContext (object->mProperty_mExpressionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3449)) ;
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
                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inElementType,
                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                               GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  GALGAS_semanticExpressionForGeneration var_expression_146799 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_146799, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3472)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inElementType, var_expression_146799.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3481)), object->mProperty_mExpressionLocation, var_expression_146799, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3481)) ;
  }
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::constructor_new (object->mProperty_mExpressionLocation, var_expression_146799  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3483))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3483)) ;
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
                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inElementType,
                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                   GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  GALGAS_functionSignature var_formalParameterTypeList_147623 = constinArgument_inElementType.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3495)) ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_147744 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterTypeList_147623.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3497)).objectCompare (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3497)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfExpressionLocation, GALGAS_string ("element of of '@").add_operation (constinArgument_inElementType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3498)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3498)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3498)).add_operation (var_formalParameterTypeList_147623.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3499)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3498)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3498)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3499)).add_operation (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3500)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3499)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3499)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3500)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3498)) ;
    var_semanticExpressionListForGeneration_147744.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration_147744 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3502)) ;
    cEnumerator_actualOutputExpressionList enumerator_148199 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_148230 (var_formalParameterTypeList_147623, kENUMERATION_UP) ;
    while (enumerator_148199.hasCurrentObject () && enumerator_148230.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_148485 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_148199.current (HERE).getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_148230.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_148485, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3504)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_148230.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_148199.current (HERE).getter_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_148230.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_148199.current (HERE).getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3513)), GALGAS_string ("the selector should be '!").add_operation (enumerator_148230.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3514)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3514)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3514)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3514)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3513)) ;
      }
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_148230.current_mFormalArgumentType (HERE), var_exp_148485.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3516)), object->mProperty_mEndOfExpressionLocation, var_exp_148485, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3516)) ;
      }
      var_semanticExpressionListForGeneration_147744.addAssign_operation (var_exp_148485  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3517)) ;
      enumerator_148199.gotoNextObject () ;
      enumerator_148230.gotoNextObject () ;
    }
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::constructor_new (object->mProperty_mEndOfExpressionLocation, var_semanticExpressionListForGeneration_147744  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3519))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3519)) ;
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
  cEnumerator_collectionValueElementList enumerator_150591 (object->mProperty_mElementList, kENUMERATION_UP) ;
  while (enumerator_150591.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractCollectionValueElement *) enumerator_150591.current_mElement (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3559)) ;
    enumerator_150591.gotoNextObject () ;
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
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_151135 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_targetType_151135 = constinArgument_inType ;
  }else if (kBoolFalse == test_0) {
    var_targetType_151135 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3578)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetType_151135.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3581)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3582)), GALGAS_string ("Cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3582)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_targetType_151135.getter_mSupportCollectionValue (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3583)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3583)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3584)), GALGAS_string ("the @").add_operation (var_targetType_151135.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3584)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3584)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3584)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3584)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_3) {
      GALGAS_lstring var_usefulnessName_151577 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_targetType_151135.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3586)), object->mProperty_mEndOfCollectionValue  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3586)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3586)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_151577 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3587)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mProperty_mElementList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3588)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_targetType_151135, object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3589)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration_152007 = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3594)) ;
        cEnumerator_collectionValueElementList enumerator_152041 (object->mProperty_mElementList, kENUMERATION_UP) ;
        while (enumerator_152041.hasCurrentObject ()) {
          callExtensionMethod_analyze ((const cPtr_abstractCollectionValueElement *) enumerator_152041.current_mElement (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_targetType_151135, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration_152007, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3596)) ;
          enumerator_152041.gotoNextObject () ;
        }
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::constructor_new (var_targetType_151135, object->mProperty_mEndOfCollectionValue, var_collectionValueElementListForGeneration_152007  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3605)) ;
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
//                                      Routine 'analyzeSemanticInstructionList'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSemanticInstructionList (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                             const GALGAS_localConstantList constinArgument_inLocalConstantList,
                                             const GALGAS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                             const GALGAS_semanticInstructionListAST constinArgument_inSemanticInstructionListAST,
                                             const GALGAS_location constinArgument_inEndOfBranchLocation,
                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                             GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 59)) ;
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 61)) ;
  }
  cEnumerator_localConstantList enumerator_3961 (constinArgument_inLocalConstantList, kENUMERATION_UP) ;
  while (enumerator_3961.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_3961.current_mNoWarningIfUnused (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_3961.current_mName (HERE), enumerator_3961.current_mType (HERE), enumerator_3961.current_mCppName (HERE), enumerator_3961.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 65)) ;
      }
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioVariableMap.setter_insertLocalConstant (enumerator_3961.current_mName (HERE), enumerator_3961.current_mType (HERE), enumerator_3961.current_mCppName (HERE), enumerator_3961.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 67)) ;
      }
    }
    enumerator_3961.gotoNextObject () ;
  }
  cEnumerator_localInitializedVariableList enumerator_4250 (constinArgument_inLocalInitializedVariableList, kENUMERATION_UP) ;
  while (enumerator_4250.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (enumerator_4250.current_mName (HERE), enumerator_4250.current_mType (HERE), enumerator_4250.current_mCppName (HERE), enumerator_4250.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 72)) ;
    }
    enumerator_4250.gotoNextObject () ;
  }
  cEnumerator_semanticInstructionListAST enumerator_4405 (constinArgument_inSemanticInstructionListAST, kENUMERATION_UP) ;
  while (enumerator_4405.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_4405.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 76)) ;
    enumerator_4405.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 85)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@outputActualParameterAST checkAgainstFormalArgument'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 127)))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 128)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 127)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 129)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 130)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 130)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 131)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 132)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 129)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (object->mProperty_mActualSelector.getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 135)), GALGAS_string ("the selector should be '!").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 136)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 136)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 136)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 135)) ;
    }
    GALGAS_semanticExpressionForGeneration var_expression_7378 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mOutputActualParameterExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7378, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 138)) ;
    {
    routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inFormalArgumentType, var_expression_7378.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 147)), object->mProperty_mEndOfExpressionLocation, var_expression_7378, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 147)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_expression_7378  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 149))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 149)) ;
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
                                                                                      const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 168)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 169)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 170)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 170)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 171)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 171)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 169)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (object->mProperty_mActualSelector.getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 173)), GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 173)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 173)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 173)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 173)) ;
    }
  }
  GALGAS_string var_variableCppName_9093 ;
  GALGAS_unifiedTypeMap_2D_proxy var_parameterType_9211 ;
  {
  GALGAS_string joker_9230 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mOutputInputActualParameterName, var_parameterType_9211, var_variableCppName_9093, joker_9230, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 177)) ;
  }
  GALGAS_unifiedTypeMapProxyList var_typeList_9247 = GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (var_parameterType_9211  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 178)) ;
  cEnumerator_lstringlist enumerator_9339 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_9339.hasCurrentObject ()) {
    GALGAS_propertyMap var_attributeMap_9363 = var_parameterType_9211.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)) ;
    var_attributeMap_9363.method_searchKey (enumerator_9339.current_mValue (HERE), var_parameterType_9211, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 181)) ;
    var_typeList_9247.addAssign_operation (var_parameterType_9211  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 189)) ;
    enumerator_9339.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_9211)).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mOutputInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 193)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_9211.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 194)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 194)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 193)) ;
  }
  const enumGalgasBool test_8 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mProperty_mOutputInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)).boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mOutputInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 199)), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray9  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 199)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mProperty_mOutputInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (var_parameterType_9211, var_variableCppName_9093, object->mProperty_mStructAttributeList, var_typeList_9247  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204)) ;
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
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 224)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 225)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 226)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 226)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 227)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 227)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 225)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (object->mProperty_mActualSelector.getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 229)), GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 229)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 229)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 229)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 229)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_11800 = constinArgument_inFormalArgumentType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 231)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_defaultConstructorName_11800.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 233)), GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 233)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 233)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 233)) ;
  }
  GALGAS_string var_cppVarName_12073 = GALGAS_string ("joker_").add_operation (object->mProperty_mActualSelector.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 236)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 236)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_12073, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, object->mProperty_mActualSelector.getter_location (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 241))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 237))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 237)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_12073, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 245)), GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 246))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 242))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 242)) ;
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
                                                                                     const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 262)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 264)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 264)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 265)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 265)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 263)) ;
  }
  GALGAS_string var_defaultConstructorName_13739 = constinArgument_inFormalArgumentType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_defaultConstructorName_13739.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mQualifierLocation, GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 269)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 269)), fixItArray3  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 269)) ;
  }
  GALGAS_string var_cppVarName_14015 = GALGAS_string ("joker_").add_operation (object->mProperty_mQualifierLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)).add_operation (object->mProperty_mJokerIndex.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_14015, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, object->mProperty_mQualifierLocation  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 277))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_14015, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 281)), GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 282))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 278))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 278)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                   extensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument, NULL) ;

