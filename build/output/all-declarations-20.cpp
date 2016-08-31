#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-20.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterBaseFinalGetterWith3Arguments'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalGetterWith_33_Arguments (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                    const GALGAS_string constinArgument_inGetterName,
                                                    const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_31_Name,
                                                    const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_32_Name,
                                                    const GALGAS_string constinArgument_inArgument_33_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_33_Name,
                                                    const GALGAS_string constinArgument_inReturnedTypeName,
                                                    const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex_13159 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_13159 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 315)) ;
  }
  GALGAS_functionSignature var_argList_13292 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 316)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_13323 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_13323 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 318)) ;
  }
  var_argList_13292.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 319)), var_t_13323, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 319)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_13323 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 320)) ;
  }
  var_argList_13292.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 321)), var_t_13323, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 321)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_13323 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 322)) ;
  }
  var_argList_13292.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 323)), var_t_13323, constinArgument_inArgument_33_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 323)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 325))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 325)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 326)), var_argList_13292, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 328)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex_13159, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 331)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 324)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'commonGetterMapForAllTypes'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_commonGetterMapForAllTypes (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                         GALGAS_getterMap & outArgument_outMap,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap.drop () ; // Release 'out' argument
  outArgument_outMap = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("semanticsGetters.galgas", 341)) ;
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("description"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 342)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("staticType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 349)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("dynamicType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 356)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("object"), GALGAS_string ("object"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 363)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@locationPredefinedTypeAST getGetterMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_locationPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_getterMap & outArgument_outMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 377)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("locationString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 378)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("locationIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 385)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("file"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 392)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("line"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 399)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("column"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 406)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isNowhere"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 413)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_locationPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                     extensionMethod_locationPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_locationPredefinedTypeAST_getGetterMap (defineExtensionMethod_locationPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@stringPredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 427)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastCharacter"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 428)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string ("lstring"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 435)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("here"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 442)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doesEnvironmentVariableExist"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 449)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 456)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 463)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("assemblerRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 470)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nameRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 477)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 484)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decodedStringFromRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 491)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("HTMLRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 498)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Representation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 505)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationWithoutDelimiters"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 512)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32Representation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 519)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByTrimmingWhiteSpaces"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 526)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("md5"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 533)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalUnsignedNumber"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 540)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalUnsignedNumber"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 547)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("capacity"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 554)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isSymbolicLink"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 561)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExists"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 568)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExists"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 575)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pathExtension"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 582)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nativePathWithUnixPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 589)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unixPathWithNativePath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 596)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastPathComponent"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 603)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingPathExtension"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 610)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByCapitalizingFirstCharacter"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 617)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("firstCharacterOrNul"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 624)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingLastPathComponent"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 631)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByStandardizingPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 638)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowercaseString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 645)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uppercaseString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 652)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("reversedString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 659)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentColumn"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 666)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("system"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 673)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("popen"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 680)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("characterAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 687)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacter"), GALGAS_string ("char"), GALGAS_string ("inCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 694)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacterInRange"), GALGAS_string ("char"), GALGAS_string ("inFirstCharacter"), GALGAS_string ("char"), GALGAS_string ("inLastCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 701)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRemovingCharacterAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 712)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subStringFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 719)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("rightSubString"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 726)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("leftSubString"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 733)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subString"), GALGAS_string ("uint"), GALGAS_string ("inStart"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 740)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathFromPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 747)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("relativePathFromPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 754)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsSeparatedByString"), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 761)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 768)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRightPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 775)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftAndRightPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 782)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByReplacingStringByString"), GALGAS_string ("string"), GALGAS_string ("inSearchedString"), GALGAS_string ("string"), GALGAS_string ("inReplacementString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 789)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFiles"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 796)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hiddenFiles"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 803)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directories"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 810)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesWithExtensions"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 817)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFilesWithExtensions"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 824)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getGetterMap (defineExtensionMethod_stringPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@charPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_charPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 838)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 839)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32CharConstantRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 846)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 853)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalnum"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 860)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalpha"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 867)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("iscntrl"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 874)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isdigit"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 881)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("islower"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 888)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isupper"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 895)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isxdigit"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 902)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeLetter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 909)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeMark"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 916)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeNumber"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 923)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSeparator"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 930)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeCommand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 937)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodePunctuation"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 944)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSymbol"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 951)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 958)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToLower"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 965)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToUpper"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 972)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_charPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                     extensionMethod_charPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_charPredefinedTypeAST_getGetterMap (defineExtensionMethod_charPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@boolPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_boolPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 986)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 987)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ocString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 994)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1001)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1008)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1015)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1022)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1029)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_boolPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_boolPredefinedTypeAST.mSlotID,
                                     extensionMethod_boolPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolPredefinedTypeAST_getGetterMap (defineExtensionMethod_boolPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@uintPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_uintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1043)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1044)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1051)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1058)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1065)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1072)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lsbIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1079)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantBitCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1086)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("oneBitCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1093)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1100)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1107)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1114)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeValueAssigned"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1121)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isInRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1128)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1136)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1143)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1150)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1157)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_uintPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                     extensionMethod_uintPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uintPredefinedTypeAST_getGetterMap (defineExtensionMethod_uintPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@sintPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1171)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1172)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1179)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1186)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1193)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1200)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1207)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1214)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1221)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1229)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1236)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1243)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1250)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sintPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                     extensionMethod_sintPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sintPredefinedTypeAST_getGetterMap (defineExtensionMethod_sintPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@uint64PredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_getterMap & outArgument_outMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1265)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1266)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1273)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1280)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1286)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1293)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintSlice"), GALGAS_string ("uint"), GALGAS_string ("inStartBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1300)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1307)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1314)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1321)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1329)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1336)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1343)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1350)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                     extensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uint_36__34_PredefinedTypeAST_getGetterMap (defineExtensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@sint64PredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_getterMap & outArgument_outMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1364)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1365)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1372)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1379)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1386)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1393)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1400)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1407)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1414)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1422)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1429)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1436)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1443)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                     extensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sint_36__34_PredefinedTypeAST_getGetterMap (defineExtensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@doublePredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_doublePredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1457)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1458)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1465)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1472)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1479)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1486)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cos"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1493)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sin"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1500)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tan"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1507)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log10"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1514)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log2"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1521)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("logn"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1528)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("exp"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1535)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cosDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1542)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sinDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1549)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tanDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1556)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sqrt"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1563)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("power"), GALGAS_string ("double"), GALGAS_string ("inExponant"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1570)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryImage"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1577)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_doublePredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                     extensionMethod_doublePredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_doublePredefinedTypeAST_getGetterMap (defineExtensionMethod_doublePredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@stringsetPredefinedTypeAST getGetterMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringsetPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_getterMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1591)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1592)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1599)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("anyString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1606)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1613)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringsetPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringsetPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getGetterMap (defineExtensionMethod_stringsetPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@binarysetPredefinedTypeAST getGetterMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_binarysetPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_getterMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1627)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1628)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nodeCount"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1635)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isEmpty"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1642)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantVariableCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1649)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ITE"), GALGAS_string ("binaryset"), GALGAS_string ("inTHENoperand"), GALGAS_string ("binaryset"), GALGAS_string ("inELSEoperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1656)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("print"), GALGAS_string ("stringlist"), GALGAS_string ("inVariableList"), GALGAS_string ("uintlist"), GALGAS_string ("inBDDCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1665)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphvizDump"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1674)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("stringlist"), GALGAS_string ("inBitNameList"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1681)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transformedBy"), GALGAS_string ("uintlist"), GALGAS_string ("inTransformationArray"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1689)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1697)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1705)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1712)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1719)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1726)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigValueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bigint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1735)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedValueCount"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1744)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64ValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1751)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1758)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueListWithNameList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_string ("inNameList"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1765)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("predicateStringValue"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1772)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedStringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1779)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap10"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1786)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap021"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1793)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap102"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1800)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap120"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1807)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap201"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1814)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap210"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1821)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transitiveClosure"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1828)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("accessibleStates"), GALGAS_string ("binaryset"), GALGAS_string ("inInitialStateSet"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1835)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("implies"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1842)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("equalTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1849)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("notEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1856)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowerOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1863)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("greaterOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1870)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictGreaterThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1877)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictLowerThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1884)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetByTranslatingFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inFirstIndexToTranslate"), GALGAS_string ("uint"), GALGAS_string ("inTranslation"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1891)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsValue"), GALGAS_string ("uint64"), GALGAS_string ("inValue"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1898)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existsOnBitRange"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1905)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_binarysetPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                     extensionMethod_binarysetPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getGetterMap (defineExtensionMethod_binarysetPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@typePredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typePredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1919)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1920)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasSuperclass"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1927)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("superclass"), GALGAS_string ("type"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1934)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typePredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                     extensionMethod_typePredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typePredefinedTypeAST_getGetterMap (defineExtensionMethod_typePredefinedTypeAST_getGetterMap, NULL) ;

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
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1948)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1949)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cStringRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1956)) ;
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
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1970)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1971)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("resultType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1978)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("formalParameterTypeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1985)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("invoke"), GALGAS_string ("objectlist"), GALGAS_string ("inParameters"), GALGAS_string ("location"), GALGAS_string ("inErrorLocation"), GALGAS_string ("object"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1992)) ;
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
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2003)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectStaticType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2004)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectDynamicType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2011)) ;
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
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2025)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allTextFilePathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2026)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allBinaryFilePathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2033)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allDirectoryPathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2040)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2047)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allFilePathesWithExtension"), GALGAS_string ("string"), GALGAS_string ("inExtension"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2054)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2061)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2068)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2075)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2082)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathForPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2089)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2096)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2103)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2110)) ;
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
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2125)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("msFromStart"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2126)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2133)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isRunning"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2140)) ;
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
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2155)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2156)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2163)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt64"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2170)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt64"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2177)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2184)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("spacedString"), GALGAS_string ("uint"), GALGAS_string ("inSeparation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2191)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2199)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2206)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForSignedRepresentation"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2213)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForUnsignedRepresentation"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2220)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2227)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2234)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2241)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2248)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("abs"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2255)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2262)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isZero"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2270)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sign"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2277)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForUnsignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2284)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForSignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2291)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForUnsignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2298)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForSignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2305)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForUnsignedRepresentation"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2312)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForSignedRepresentation"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2319)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex_2259 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2259 COMMA_SOURCE_FILE ("semanticsSetters.galgas", 27)) ;
  }
  GALGAS_formalParameterSignature var_argList_2382 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 28)) ;
  var_argList_2382.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 29)), var_argumentTypeIndex_2259, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 29)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 29)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 31))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 31)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 32)), var_argList_2382, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 35)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 30)) ;
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
  GALGAS_formalParameterSignature var_argList_4196 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 76)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex_4332 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex_4332 COMMA_SOURCE_FILE ("semanticsSetters.galgas", 77)) ;
  }
  var_argList_4196.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 78)), var_argumentTypeIndex_4332, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 78)), constinArgument_inInputArgument_31_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 78)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex_4332 COMMA_SOURCE_FILE ("semanticsSetters.galgas", 79)) ;
  }
  var_argList_4196.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 80)), var_argumentTypeIndex_4332, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 80)), constinArgument_inInputArgument_32_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 80)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 82))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 82)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 83)), var_argList_4196, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 86)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 81)) ;
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
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 130))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 130)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 131)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 132)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 134)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 129)) ;
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
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 145)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inCapacity"), GALGAS_string ("setCapacity"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 146)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("incIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 154)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("decIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 162)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inColumnIndex"), GALGAS_string ("appendSpacesUntilColumn"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 170)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 178)) ;
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
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 195)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendByte"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 196)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortBE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 204)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortLE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 212)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntBE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 220)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntLE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 228)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_string ("appendUTF8String"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 236)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("data"), GALGAS_string ("inValue"), GALGAS_string ("appendData"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 244)) ;
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
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 260)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inDirectoryPath"), GALGAS_string ("setCurrentDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 261)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex_2843 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2843 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 45)) ;
  }
  GALGAS_formalParameterSignature var_argList_2966 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 46)) ;
  var_argList_2966.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 47)), var_argumentTypeIndex_2843, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 47)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 47)) ;
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 49)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 50)), var_argList_2966, GALGAS_location::constructor_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 52)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 54)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 48)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex_2289 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName, var_argumentTypeIndex_2289 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 26)) ;
  }
  GALGAS_formalParameterSignature var_argList_2326 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 27)) ;
  var_argList_2326.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 28)), var_argumentTypeIndex_2289, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 28)), constinArgument_inArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 28)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 30))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 30)), var_argList_2326, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 29)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeIndex_2981 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_argumentTypeIndex_2981 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 45)) ;
  }
  GALGAS_formalParameterSignature var_argList_3018 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 46)) ;
  var_argList_3018.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 47)), var_argumentTypeIndex_2981, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 47)), constinArgument_inStringArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 47)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 49))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 49)), var_argList_3018, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 48)) ;
  }
}


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
  result_outString = GALGAS_string ("grammar ").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 300)) ;
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
  result_outString = GALGAS_string ("syntax ").add_operation (object->mAttribute_mSyntaxComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 307)) ;
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
  result_outString = GALGAS_string ("lexique ").add_operation (object->mAttribute_mLexiqueComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 314)) ;
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
  result_outString = GALGAS_string ("predefined type @").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 321)) ;
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
  result_outString = GALGAS_string ("map @").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 328)) ;
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
  result_outString = GALGAS_string ("map proxy @").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 335)) ;
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
  result_outString = GALGAS_string ("enum @").add_operation (object->mAttribute_mEnumTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 342)) ;
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
  result_outString = GALGAS_string ("sorted list @").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 349)) ;
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
  result_outString = GALGAS_string ("struct @").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 356)) ;
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
  result_outString = GALGAS_string ("list @").add_operation (object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 363)) ;
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
  result_outString = GALGAS_string ("class @").add_operation (object->mAttribute_mClassTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 370)) ;
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
  result_outString = GALGAS_string ("array @").add_operation (object->mAttribute_mArrayTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 377)) ;
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
  result_outString = GALGAS_string ("listmap @").add_operation (object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 384)) ;
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
  result_outString = GALGAS_string ("filewrapper @").add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticContext.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 391)) ;
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
  result_outString = GALGAS_string ("option ").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 398)) ;
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
  result_outString = GALGAS_string ("graph @").add_operation (object->mAttribute_mGraphTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 405)) ;
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
  result_outString = GALGAS_string ("extern @").add_operation (object->mAttribute_mExternTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 412)) ;
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
  result_outString = GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticContext.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 419)) ;
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
  result_outString = GALGAS_string ("extern function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticContext.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 426)) ;
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
  result_outString = GALGAS_string ("extern routine ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticContext.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 433)) ;
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
  const enumGalgasBool test_0 = constinArgument_inExtensionMethodMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 453)) COMMA_SOURCE_FILE ("semanticContext.galgas", 453)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_extensionMethodMapForType var_extensionMethodMapForType_23304 ;
    constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_23304, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 455)) ;
    cEnumerator_extensionMethodMapForType enumerator_23438 (var_extensionMethodMapForType_23304, kEnumeration_up) ;
    while (enumerator_23438.hasCurrentObject ()) {
      GALGAS_formalParameterSignature var_formalArgumentList_23470 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 457)) ;
      cEnumerator_formalParameterListAST enumerator_23537 (enumerator_23438.current_mFormalParameterList (HERE), kEnumeration_up) ;
      while (enumerator_23537.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_typeIndex_23702 ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_23537.current_mFormalArgumentTypeName (HERE), var_typeIndex_23702 COMMA_SOURCE_FILE ("semanticContext.galgas", 459)) ;
        }
        var_formalArgumentList_23470.addAssign_operation (enumerator_23537.current_mFormalSelector (HERE), var_typeIndex_23702, enumerator_23537.current_mFormalArgumentPassingMode (HERE), enumerator_23537.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 464)) ;
        enumerator_23537.gotoNextObject () ;
      }
      {
      ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_23438.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 468)), var_formalArgumentList_23470, enumerator_23438.current_lkey (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 470)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 472)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 466)) ;
      }
      enumerator_23438.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = constinArgument_inExtensionGetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 478)) COMMA_SOURCE_FILE ("semanticContext.galgas", 478)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_extensionGetterMapForType var_extensionGetterMapForType_24264 ;
    constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_24264, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 480)) ;
    cEnumerator_extensionGetterMapForType enumerator_24398 (var_extensionGetterMapForType_24264, kEnumeration_up) ;
    while (enumerator_24398.hasCurrentObject ()) {
      GALGAS_functionSignature var_formalArgumentList_24430 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 482)) ;
      cEnumerator_formalInputParameterListAST enumerator_24495 (enumerator_24398.current_mInputFormalParameterList (HERE), kEnumeration_up) ;
      while (enumerator_24495.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_typeIndex_24538 ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_24495.current_mFormalArgumentTypeName (HERE), var_typeIndex_24538 COMMA_SOURCE_FILE ("semanticContext.galgas", 485)) ;
        }
        var_formalArgumentList_24430.addAssign_operation (enumerator_24495.current_mFormalSelector (HERE), var_typeIndex_24538, enumerator_24495.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 486)) ;
        enumerator_24495.gotoNextObject () ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_returnedType_24782 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_24398.current_mResultTypeName (HERE), var_returnedType_24782 COMMA_SOURCE_FILE ("semanticContext.galgas", 489)) ;
      }
      {
      ioArgument_ioGetterMap.setter_insertKey (enumerator_24398.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 492)), var_formalArgumentList_24430, enumerator_24398.current_lkey (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 494)), GALGAS_bool (true), var_returnedType_24782, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 497)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 490)) ;
      }
      enumerator_24398.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = constinArgument_inExtensionSetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 503)) COMMA_SOURCE_FILE ("semanticContext.galgas", 503)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_extensionSetterMapForType var_extensionSetterMapForType_25324 ;
    constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_25324, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 505)) ;
    cEnumerator_extensionSetterMapForType enumerator_25458 (var_extensionSetterMapForType_25324, kEnumeration_up) ;
    while (enumerator_25458.hasCurrentObject ()) {
      GALGAS_formalParameterSignature var_formalArgumentList_25490 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 507)) ;
      cEnumerator_formalParameterListAST enumerator_25557 (enumerator_25458.current_mFormalParameterList (HERE), kEnumeration_up) ;
      while (enumerator_25557.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_typeIndex_25600 ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_25557.current_mFormalArgumentTypeName (HERE), var_typeIndex_25600 COMMA_SOURCE_FILE ("semanticContext.galgas", 510)) ;
        }
        var_formalArgumentList_25490.addAssign_operation (enumerator_25557.current_mFormalSelector (HERE), var_typeIndex_25600, enumerator_25557.current_mFormalArgumentPassingMode (HERE), enumerator_25557.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 511)) ;
        enumerator_25557.gotoNextObject () ;
      }
      {
      ioArgument_ioSetterMap.setter_insertKey (enumerator_25458.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 515)), var_formalArgumentList_25490, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 518)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 513)) ;
      }
      enumerator_25458.gotoNextObject () ;
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
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("-element") ;
//---
  return result_outResult ;
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
  GALGAS_uint var_currentDirectoryIndex_28563 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 584)) ;
  GALGAS_stringlist var_files_28668 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 586)) ;
  outArgument_outWrapperFileMap = GALGAS_wrapperFileMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 587)) ;
  cEnumerator_stringlist enumerator_28779 (var_files_28668, kEnumeration_up) ;
  while (enumerator_28779.hasCurrentObject ()) {
    const enumGalgasBool test_0 = constinArgument_inTextFileExtensionMap.getter_hasKey (enumerator_28779.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 589)) COMMA_SOURCE_FILE ("semanticContext.galgas", 589)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_absoluteFilePath_28881 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 590)).add_operation (enumerator_28779.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 590)) ;
      {
      outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_28779.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 592))  COMMA_SOURCE_FILE ("semanticContext.galgas", 592)), var_absoluteFilePath_28881, GALGAS_bool (true), var_currentDirectoryIndex_28563, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 591)) ;
      }
      ioArgument_ioWrapperFileIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 598)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = constinArgument_inBinaryFileExtensionMap.getter_hasKey (enumerator_28779.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 599)) COMMA_SOURCE_FILE ("semanticContext.galgas", 599)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_absoluteFilePath_29255 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 600)).add_operation (enumerator_28779.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 600)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_28779.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 602))  COMMA_SOURCE_FILE ("semanticContext.galgas", 602)), var_absoluteFilePath_29255, GALGAS_bool (false), var_currentDirectoryIndex_28563, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 601)) ;
        }
        ioArgument_ioWrapperFileIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 608)) ;
      }
    }
    enumerator_28779.gotoNextObject () ;
  }
  GALGAS_stringlist var_directories_29604 = constinArgument_inAbsoluteSourcePath.getter_directories (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 612)) ;
  outArgument_outWrapperDirectoryMap = GALGAS_wrapperDirectoryMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 613)) ;
  cEnumerator_stringlist enumerator_29730 (var_directories_29604, kEnumeration_up) ;
  while (enumerator_29730.hasCurrentObject ()) {
    GALGAS_wrapperFileMap var_internalWrapperFileMap_29776 ;
    GALGAS_wrapperDirectoryMap var_internalWrapperDirectoryMap_29829 ;
    GALGAS_uint var_theDirectoryIndex_29857 = ioArgument_ioWrapperDirectoryIndex ;
    {
    routine_recursivelyEnumerateDirectories (constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 619)).add_operation (enumerator_29730.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 619)), constinArgument_inPathInWrapper.add_operation (enumerator_29730.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 620)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 620)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_29776, var_internalWrapperDirectoryMap_29829, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 618)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_29730.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 629))  COMMA_SOURCE_FILE ("semanticContext.galgas", 629)), var_internalWrapperFileMap_29776, var_internalWrapperDirectoryMap_29829, var_theDirectoryIndex_29857, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 628)) ;
    }
    enumerator_29730.gotoNextObject () ;
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
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_30931 = GALGAS_filewrapperTemplateMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 646)) ;
  cEnumerator_filewrapperTemplateListAST enumerator_31004 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
  while (enumerator_31004.hasCurrentObject ()) {
    GALGAS_functionSignature var_templateSignature_31033 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 648)) ;
    cEnumerator_formalTemplateInputParameterListAST enumerator_31112 (enumerator_31004.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
    while (enumerator_31112.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_31162 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_31112.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_31162 COMMA_SOURCE_FILE ("semanticContext.galgas", 651)) ;
      }
      var_templateSignature_31033.addAssign_operation (enumerator_31112.current_mFormalTemplateSelector (HERE), var_parameterTypeIndex_31162, enumerator_31112.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 652)) ;
      enumerator_31112.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap_30931.setter_insertKey (enumerator_31004.current_mFilewrapperTemplateName (HERE), var_templateSignature_31033, enumerator_31004.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 654)) ;
    }
    enumerator_31004.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_textExtensionMap_31583 = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 661)) ;
  cEnumerator_lstringlist enumerator_31662 (object->mAttribute_mFilewrapperTextFileExtensionList, kEnumeration_up) ;
  while (enumerator_31662.hasCurrentObject ()) {
    {
    var_textExtensionMap_31583.setter_insertKey (enumerator_31662.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 663)) ;
    }
    enumerator_31662.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_binaryFileExtensionMap_31780 = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 666)) ;
  cEnumerator_lstringlist enumerator_31861 (object->mAttribute_mFilewrapperBinaryFileExtensionList, kEnumeration_up) ;
  while (enumerator_31861.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_textExtensionMap_31583.getter_hasKey (enumerator_31861.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticContext.galgas", 668)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_31861.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 669)), GALGAS_string ("the '").add_operation (enumerator_31861.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 669)).add_operation (GALGAS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 669)), fixItArray1  COMMA_SOURCE_FILE ("semanticContext.galgas", 669)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_binaryFileExtensionMap_31780.setter_insertKey (enumerator_31861.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 671)) ;
      }
    }
    enumerator_31861.gotoNextObject () ;
  }
  GALGAS_wrapperFileMap var_regularRootFileMap_32142 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_32185 ;
  GALGAS_string var_absoluteSourcePath_32214 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticContext.galgas", 678)).getter_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 678)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_absoluteSourcePath_32214 = object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticContext.galgas", 679)) ;
  }else if (kBoolFalse == test_2) {
    var_absoluteSourcePath_32214 = object->mAttribute_mSourceFileAbsolutePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 681)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 681)).add_operation (object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticContext.galgas", 681)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 681)) ;
  }
  const enumGalgasBool test_3 = var_absoluteSourcePath_32214.getter_directoryExists (SOURCE_FILE ("semanticContext.galgas", 683)).operator_not (SOURCE_FILE ("semanticContext.galgas", 683)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mAttribute_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticContext.galgas", 684)), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_32214, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 684)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 684)), fixItArray4  COMMA_SOURCE_FILE ("semanticContext.galgas", 684)) ;
    var_regularRootFileMap_32142.drop () ; // Release error dropped variable
    var_wrapperDirectoryMap_32185.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_uint var_wrapperFileIndex_32706 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_wrapperDirectoryIndex_32742 = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_recursivelyEnumerateDirectories (var_absoluteSourcePath_32214, GALGAS_string ("/"), var_textExtensionMap_31583, var_binaryFileExtensionMap_31780, var_regularRootFileMap_32142, var_wrapperDirectoryMap_32185, var_wrapperFileIndex_32706, var_wrapperDirectoryIndex_32742, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 690)) ;
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFilewrapperMap.setter_insertKey (object->mAttribute_mFilewrapperName, object->mAttribute_mFilewrapperPath, object->mAttribute_mFilewrapperTextFileExtensionList, var_regularRootFileMap_32142, var_wrapperDirectoryMap_32185, var_filewrapperTemplateMap_30931, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 702)) ;
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
  GALGAS_formalParameterSignature var_routineSignature_33791 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 721)) ;
  cEnumerator_formalParameterListAST enumerator_33853 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_33853.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_33971 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_33853.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_33971 COMMA_SOURCE_FILE ("semanticContext.galgas", 723)) ;
    }
    var_routineSignature_33791.addAssign_operation (enumerator_33853.current_mFormalSelector (HERE), var_parameterTypeIndex_33971, enumerator_33853.current_mFormalArgumentPassingMode (HERE), enumerator_33853.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 724)) ;
    enumerator_33853.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mRoutineMap.setter_insertKey (object->mAttribute_mRoutineName, var_routineSignature_33791, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 727)) ;
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
  GALGAS_formalParameterSignature var_routineSignature_34777 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 742)) ;
  cEnumerator_formalParameterListAST enumerator_34839 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_34839.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_34957 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_34839.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_34957 COMMA_SOURCE_FILE ("semanticContext.galgas", 744)) ;
    }
    var_routineSignature_34777.addAssign_operation (enumerator_34839.current_mFormalSelector (HERE), var_parameterTypeIndex_34957, enumerator_34839.current_mFormalArgumentPassingMode (HERE), enumerator_34839.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 745)) ;
    enumerator_34839.gotoNextObject () ;
  }
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mRoutineInstructionList, ioArgument_ioSemanticContext.mAttribute_mTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 748)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mRoutineMap.setter_insertKey (object->mAttribute_mRoutineName, var_routineSignature_34777, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 750)) ;
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
  GALGAS_functionSignature var_functionSignature_35943 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 765)) ;
  cEnumerator_formalInputParameterListAST enumerator_35998 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_35998.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_36046 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_35998.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_36046 COMMA_SOURCE_FILE ("semanticContext.galgas", 768)) ;
    }
    var_functionSignature_35943.addAssign_operation (enumerator_35998.current_mFormalSelector (HERE), var_parameterTypeIndex_36046, enumerator_35998.current_mFormalArgumentTypeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 769)) ;
    enumerator_35998.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeIndex_36315 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, var_resultTypeIndex_36315 COMMA_SOURCE_FILE ("semanticContext.galgas", 773)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFunctionMap.setter_insertKey (object->mAttribute_mFunctionName, var_functionSignature_35943, var_resultTypeIndex_36315, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 775)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeIndex_37238 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, var_resultTypeIndex_37238 COMMA_SOURCE_FILE ("semanticContext.galgas", 791)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFunctionMap.setter_insertKey (object->mAttribute_mFunctionName, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 793)), var_resultTypeIndex_37238, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 793)) ;
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
  ioArgument_ioSemanticContext.mAttribute_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (object->mAttribute_mSyntaxComponentName, object->mAttribute_mLexiqueName, object->mAttribute_mNonterminalDeclarationList, object->mAttribute_mRuleList, object->mAttribute_mHasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 804)) ;
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
  GALGAS_grammarLabelMap var_grammarLabelMap_38669 = GALGAS_grammarLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 822)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_38708 (object->mAttribute_mStartSymbolLabelList, kEnumeration_up) ;
  while (enumerator_38708.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_formalArgumentList_38785 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 825)) ;
    cEnumerator_formalParameterListAST enumerator_38824 (enumerator_38708.current_mFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_38824.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentType_38938 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_38824.current_mFormalArgumentTypeName (HERE), var_argumentType_38938 COMMA_SOURCE_FILE ("semanticContext.galgas", 827)) ;
      }
      var_formalArgumentList_38785.addAssign_operation (enumerator_38824.current_mFormalSelector (HERE), var_argumentType_38938, enumerator_38824.current_mFormalArgumentPassingMode (HERE), enumerator_38824.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 828)) ;
      enumerator_38824.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_38669.setter_insertKey (enumerator_38708.current_mLabelName (HERE), var_formalArgumentList_38785, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 834)) ;
    }
    enumerator_38708.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mGrammarMap.setter_insertGrammar (object->mAttribute_mGrammarComponentName, var_grammarLabelMap_38669, object->mAttribute_mHasIndexing.mAttribute_bool, object->mAttribute_mHasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 840)) ;
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
  GALGAS_lexicalTypeMap var_lexicalTypeMap_39973 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 856)) ;
  GALGAS_lexicalAttributeMap var_lexicalAttributeMap_40041 = GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 857)) ;
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap_39973, object->mAttribute_mLexicalAttributeList, var_lexicalAttributeMap_40041, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 858)) ;
  }
  GALGAS_terminalMap var_terminalMap_40218 = GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 864)) ;
  cEnumerator_terminalDeclarationListAST enumerator_40260 (object->mAttribute_mTerminalDeclarationList, kEnumeration_up) ;
  while (enumerator_40260.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_40288 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 866)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_40347 (enumerator_40260.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_40347.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_40394 ;
      var_lexicalAttributeMap_40041.method_searchKey (enumerator_40347.current_mAttributeName (HERE), var_attributeLexicalType_40394, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 869)) ;
      var_argumentTypeList_40288.addAssign_operation (enumerator_40347.current_mFormalSelector (HERE), enumerator_40347.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType_40394  COMMA_SOURCE_FILE ("semanticContext.galgas", 870)) ;
      enumerator_40347.gotoNextObject () ;
    }
    {
    var_terminalMap_40218.setter_insertKey (enumerator_40260.current_mName (HERE), var_argumentTypeList_40288, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 872)) ;
    }
    enumerator_40260.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_40672 (object->mAttribute_mLexicalListDeclarationList, kEnumeration_up) ;
  while (enumerator_40672.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_40700 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 876)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_40759 (enumerator_40672.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_40759.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_40806 ;
      var_lexicalAttributeMap_40041.method_searchKey (enumerator_40759.current_mAttributeName (HERE), var_attributeLexicalType_40806, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 879)) ;
      var_argumentTypeList_40700.addAssign_operation (enumerator_40759.current_mFormalSelector (HERE), enumerator_40759.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType_40806  COMMA_SOURCE_FILE ("semanticContext.galgas", 880)) ;
      enumerator_40759.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_41003 (enumerator_40672.current_mEntryList (HERE), kEnumeration_up) ;
    while (enumerator_41003.hasCurrentObject ()) {
      {
      var_terminalMap_40218.setter_insertKey (enumerator_41003.current_mTerminalSpelling (HERE), var_argumentTypeList_40700, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 883)) ;
      }
      enumerator_41003.gotoNextObject () ;
    }
    enumerator_40672.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (object->mAttribute_mLexiqueComponentName, var_terminalMap_40218, object->mAttribute_mIndexingListAST, object->mAttribute_mIndexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 887)) ;
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
  GALGAS_lstring var_key_43328 = GALGAS_lstring::constructor_new (GALGAS_string ("grammar ").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 926)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 926)), object->mAttribute_mGrammarComponentName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 926)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_43328, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 927)) ;
  }
  cEnumerator_lstringlist enumerator_43499 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_43499.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_43328, GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (enumerator_43499.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 929)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 929)), enumerator_43499.current_mValue (HERE).mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 929)) COMMA_SOURCE_FILE ("semanticContext.galgas", 929)) ;
    }
    enumerator_43499.gotoNextObject () ;
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
  GALGAS_lstring var_key_44206 = GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (object->mAttribute_mSyntaxComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 941)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 941)), object->mAttribute_mSyntaxComponentName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 941)) ;
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_44206, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 942)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_44206, GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (object->mAttribute_mLexiqueName.getter_string (SOURCE_FILE ("semanticContext.galgas", 943)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 943)), object->mAttribute_mLexiqueName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 943)) COMMA_SOURCE_FILE ("semanticContext.galgas", 943)) ;
  }
  cEnumerator_syntaxRuleListAST enumerator_44480 (object->mAttribute_mRuleList, kEnumeration_up) ;
  while (enumerator_44480.hasCurrentObject ()) {
    cEnumerator_syntaxRuleLabelListAST enumerator_44508 (enumerator_44480.current_mLabelList (HERE), kEnumeration_up) ;
    while (enumerator_44508.hasCurrentObject ()) {
      cEnumerator_formalParameterListAST enumerator_44544 (enumerator_44508.current_mFormalArguments (HERE), kEnumeration_up) ;
      while (enumerator_44544.hasCurrentObject ()) {
        switch (enumerator_44544.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_44206, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_44544.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 948)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 948)), enumerator_44544.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 948)) COMMA_SOURCE_FILE ("semanticContext.galgas", 948)) ;
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
        enumerator_44544.gotoNextObject () ;
      }
      enumerator_44508.gotoNextObject () ;
    }
    enumerator_44480.gotoNextObject () ;
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
  GALGAS_lstring var_key_45445 = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (object->mAttribute_mLexiqueComponentName.getter_string (SOURCE_FILE ("semanticContext.galgas", 964)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 964)), object->mAttribute_mLexiqueComponentName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 964)) ;
  {
  const GALGAS_lexiqueComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_45445, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 965)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 976)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 987)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 998)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 1009)) ;
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
  cEnumerator_semanticInstructionListForGeneration enumerator_2778 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_2778.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_2778.current (HERE).mAttribute_mInstruction.ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 31)) ;
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
  result_outName = object->mAttribute_mTypeProxy.getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 504)) ;
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
  result_outResult = object->mAttribute_mTypeProxy.getter_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 516)) ;
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
  result_outHeaderKind = object->mAttribute_mTypeProxy.getter_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 522)) ;
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
  result_outHeaderKind = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas", 551)) ;
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
//                                           Routine 'checkAssignmentTypes'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkAssignmentTypes (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetType,
                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSourceType,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_sourceType_33634 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_33660 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (constinArgument_inSourceType)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).isValid ()) {
    uint32_t variant_33698 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).uintValue () ;
    bool loop_33698 = true ;
    while (loop_33698) {
      loop_33698 = var_ok_33660.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).operator_and (var_sourceType_33634.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).isValid () ;
      if (loop_33698) {
        loop_33698 = var_ok_33660.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).operator_and (var_sourceType_33634.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)).boolValue () ;
      }
      if (loop_33698 && (0 == variant_33698)) {
        loop_33698 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 442)) ;
      }
      if (loop_33698) {
        variant_33698 -- ;
        var_sourceType_33634 = var_sourceType_33634.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 443)) ;
        var_ok_33660 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_33634)) ;
      }
    }
  }
  const enumGalgasBool test_0 = var_ok_33660.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 446)).boolEnum () ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_sourceType_34411 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_34437 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (constinArgument_inSourceType)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).isValid ()) {
    uint32_t variant_34475 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).uintValue () ;
    bool loop_34475 = true ;
    while (loop_34475) {
      loop_34475 = var_ok_34437.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).operator_and (var_sourceType_34411.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).isValid () ;
      if (loop_34475) {
        loop_34475 = var_ok_34437.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).operator_and (var_sourceType_34411.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)).boolValue () ;
      }
      if (loop_34475 && (0 == variant_34475)) {
        loop_34475 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)) ;
      }
      if (loop_34475) {
        variant_34475 -- ;
        var_sourceType_34411 = var_sourceType_34411.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 463)) ;
        var_ok_34437 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_34411)) ;
      }
    }
  }
  GALGAS_bool test_0 = var_ok_34437.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 471)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = constinArgument_inSourceType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 471)).getter_hasKey (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 471)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 471)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_methodKind var_kind_35015 ;
    GALGAS_functionSignature var_argumentTypeList_35062 ;
    GALGAS_bool var_hasCompilerArgument_35102 ;
    GALGAS_unifiedTypeMap_2D_proxy var_returnedType_35126 ;
    GALGAS_location joker_35070 ; // Joker input parameter
    GALGAS_methodQualifier joker_35134_2 ; // Joker input parameter
    GALGAS_string joker_35134_1 ; // Joker input parameter
    constinArgument_inSourceType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 472)).method_searchKey (constinArgument_inTargetType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 473)), var_kind_35015, var_argumentTypeList_35062, joker_35070, var_hasCompilerArgument_35102, var_returnedType_35126, joker_35134_2, joker_35134_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 472)) ;
    var_ok_34437 = GALGAS_bool (kIsEqual, var_argumentTypeList_35062.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 481)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_35126.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 481)) ;
    GALGAS_getterCallExpressionForGeneration var_conversionExpression_35278 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_35015, ioArgument_ioRightExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 488)), constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 489)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 490)), var_hasCompilerArgument_35102  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 483)) ;
    ioArgument_ioRightExpression = var_conversionExpression_35278 ;
  }
  const enumGalgasBool test_2 = var_ok_34437.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 495)).boolEnum () ;
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
  const enumGalgasBool test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 518)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type is '@").add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)).add_operation (GALGAS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)).add_operation (GALGAS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 520)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 521)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 521)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 519)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_rightType_36924 = constinArgument_inRightType ;
    GALGAS_bool var_ok_36951 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType_36924)) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)).isValid ()) {
      uint32_t variant_36986 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)).uintValue () ;
      bool loop_36986 = true ;
      while (loop_36986) {
        loop_36986 = var_ok_36951.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)).operator_and (var_rightType_36924.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)).isValid () ;
        if (loop_36986) {
          loop_36986 = var_ok_36951.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)).operator_and (var_rightType_36924.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)).boolValue () ;
        }
        if (loop_36986 && (0 == variant_36986)) {
          loop_36986 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 525)) ;
        }
        if (loop_36986) {
          variant_36986 -- ;
          var_rightType_36924 = var_rightType_36924.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 526)) ;
          var_ok_36951 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType_36924)) ;
        }
      }
    }
    GALGAS_bool test_2 = var_ok_36951.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 530)) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = constinArgument_inRightType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 530)).getter_hasKey (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 530)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 530)) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_bool var_hasCompilerArgument_37293 ;
      GALGAS_unifiedTypeMap_2D_proxy var_returnedType_37334 ;
      GALGAS_methodKind var_kind_37357 ;
      GALGAS_functionSignature var_argumentTypeList_37489 ;
      GALGAS_location joker_37499 ; // Joker input parameter
      GALGAS_methodQualifier joker_37561_2 ; // Joker input parameter
      GALGAS_string joker_37561_1 ; // Joker input parameter
      constinArgument_inRightType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 534)).method_searchKey (constinArgument_inLeftType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 535)), var_kind_37357, var_argumentTypeList_37489, joker_37499, var_hasCompilerArgument_37293, var_returnedType_37334, joker_37561_2, joker_37561_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 534)) ;
      var_ok_36951 = GALGAS_bool (kIsEqual, var_argumentTypeList_37489.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 543)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_37334.objectCompare (constinArgument_inLeftType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 543)) ;
      GALGAS_getterCallExpressionForGeneration var_conversionExpression_37711 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inLeftType, constinArgument_inErrorLocation, var_kind_37357, ioArgument_ioRightExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 550)), constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 551)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 552)), var_hasCompilerArgument_37293  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 545)) ;
      ioArgument_ioRightExpression = var_conversionExpression_37711 ;
    }
    const enumGalgasBool test_4 = var_ok_36951.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 557)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 559)).add_operation (GALGAS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 559)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 559)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 559)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 560)).add_operation (GALGAS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 560)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 561)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 562)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 562)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 562)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 558)) ;
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
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfCopyTypeProxy.getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 646)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mSelfLocation, GALGAS_string ("'selfcopy' cannot be used in this context"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 647)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_selfCppName_42739 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    outArgument_outExpression = GALGAS_selfCopyInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mSelfCopyTypeProxy, object->mAttribute_mSelfLocation, var_selfCppName_42739  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 650)) ;
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
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 671)) ;
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
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 691)) ;
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
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mCharacter.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 713)), object->mAttribute_mCharacter.getter_char (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 714))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 711)) ;
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
  GALGAS_string var_s_46138 = GALGAS_string::makeEmptyString () ;
  cEnumerator_stringlist enumerator_46171 (object->mAttribute_mStringSequence, kEnumeration_up) ;
  while (enumerator_46171.hasCurrentObject ()) {
    var_s_46138.plusAssign_operation(enumerator_46171.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 737)) ;
    enumerator_46171.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mLocation, var_s_46138  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 739)) ;
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
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mDoubleType, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 759)), object->mAttribute_mValue.getter_double (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 759))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 759)) ;
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
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 781)), object->mAttribute_mValue.getter_uint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 782))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 779)) ;
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
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUInt_36__34_Type, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 805)), object->mAttribute_mValue.getter_uint_36__34_ (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 806))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 803)) ;
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
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSIntType, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 827)), object->mAttribute_mValue.getter_sint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 827))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 827)) ;
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
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSInt_36__34_Type, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 856)), object->mAttribute_mValue.getter_sint_36__34_ (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 857))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 854)) ;
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
  outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBigIntType, object->mAttribute_mValue.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 873)), object->mAttribute_mValue.getter_bigint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 874))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 871)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outConstructorType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, constinArgument_inTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 896)) ;
  }
  const enumGalgasBool test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 898)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_inTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 899)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 899)) ;
    outArgument_outReturnedType.drop () ; // Release error dropped variable
    outArgument_outConstructorType.drop () ; // Release error dropped variable
    outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
    outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constructorMap var_constructorMap_52709 = outArgument_outConstructorType.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 902)) ;
    GALGAS_functionSignature var_constructorFormalArgumentTypeList_52830 ;
    const cMapElement_constructorMap * objectArray_52839 = (const cMapElement_constructorMap *) var_constructorMap_52709.readAccessForWithInstruction (constinArgument_inConstructorName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 905))) ;
    if (NULL != objectArray_52839) {
        macroValidSharedObject (objectArray_52839, cMapElement_constructorMap) ;
      var_constructorFormalArgumentTypeList_52830 = objectArray_52839->mAttribute_mArgumentTypeList ;
      outArgument_outHasCompilerArgument = objectArray_52839->mAttribute_mHasCompilerArgument ;
      outArgument_outReturnedType = objectArray_52839->mAttribute_mReturnedType ;
    }else{
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_constructorMap_52709.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 910)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 911)), GALGAS_string ("the '@").add_operation (outArgument_outConstructorType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 912)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 912)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 912)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 911)) ;
        var_constructorFormalArgumentTypeList_52830.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        appendFixItActions (fixItArray5, kFixItReplace, var_constructorMap_52709.getter_keyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 918))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 915)), GALGAS_string ("the '@").add_operation (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 916)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 916)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 916)).add_operation (constinArgument_inConstructorName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 916)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 916)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 916)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 915)) ;
        var_constructorFormalArgumentTypeList_52830.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inConstuctorEffectiveParameterExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 922)).objectCompare (var_constructorFormalArgumentTypeList_52830.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 922)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inConstructorName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 923)), GALGAS_string ("calling the '").add_operation (constinArgument_inConstructorName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 924)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 924)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 924)).add_operation (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 924)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 924)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 924)).add_operation (var_constructorFormalArgumentTypeList_52830.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 925)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 925)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 924)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 925)).add_operation (constinArgument_inConstuctorEffectiveParameterExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 926)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 926)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 925)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 926)), fixItArray7  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 923)) ;
    }
    outArgument_outConstructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 928)) ;
    cEnumerator_actualOutputExpressionList enumerator_54151 (constinArgument_inConstuctorEffectiveParameterExpressions, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_54192 (var_constructorFormalArgumentTypeList_52830, kEnumeration_up) ;
    while (enumerator_54151.hasCurrentObject () && enumerator_54192.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_54436 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_54151.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_54192.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_54436, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 930)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_54192.current_mFormalArgumentType (HERE), var_exp_54436.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 938)), enumerator_54151.current_mEndOfExpressionLocation (HERE), var_exp_54436, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 938)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_54436  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 939)) ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_54192.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_54151.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_string temp_9 ;
        const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_54192.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_10) {
          temp_9 = enumerator_54192.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 942)) ;
        }else if (kBoolFalse == test_10) {
          temp_9 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_54151.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 941)), GALGAS_string ("the selector should be '!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 942)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 942)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 941)) ;
      }
      enumerator_54151.gotoNextObject () ;
      enumerator_54192.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_55194 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_55194 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 954)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_type_55673 = constinArgument_inType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_type_55673 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 970)) ;
  }
  const enumGalgasBool test_1 = var_type_55673.getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 972)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 973)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 973)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_type_55673.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 976)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 976)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 977)), GALGAS_string ("an abstract class does not support the default constructor"), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 977)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_type_55673.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 978)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 979)), GALGAS_string ("this class does not support the default constructor"), fixItArray6  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 979)) ;
      }
    }
    GALGAS_lstring var_usefulnessName_56243 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_type_55673.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 982)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 982))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 982)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 982)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_56243 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 983)) ;
    }
    outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_type_55673, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 985)) ;
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
    GALGAS_unifiedTypeMap_2D_proxy joker_56846 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_56846 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 998)) ;
    }
  }
  extensionMethod_enterInSemanticContext (object->mAttribute_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1000)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_57601 ;
  GALGAS_unifiedTypeMap_2D_proxy var_constructorType_57648 ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_57728 ;
  GALGAS_bool var_hasCompilerArgument_57763 ;
  {
  routine_analyzeConstructorInvocation (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, object->mAttribute_mTypeName, object->mAttribute_mConstructorName, object->mAttribute_mExpressions, var_returnedType_57601, var_constructorType_57648, var_constructorEffectiveParameterList_57728, var_hasCompilerArgument_57763, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1013)) ;
  }
  GALGAS_lstring var_constructorTypeUsefulnessName_57803 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_constructorType_57648.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1027)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1027))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1027)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1027)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_57803 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1028)) ;
  }
  GALGAS_lstring var_returnedTypeUsefulnessName_58009 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_returnedType_57601.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1029)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1029))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1029)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1029)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_58009 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1030)) ;
  }
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_57601, object->mAttribute_mConstructorName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1034)), var_constructorType_57648, object->mAttribute_mConstructorName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1036)), var_constructorEffectiveParameterList_57728, var_hasCompilerArgument_57763  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1032)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiver.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1047)) ;
  extensionMethod_enterInSemanticContext (object->mAttribute_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1048)) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_59468 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiver.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1065)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_59468, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1062)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_59513 = var_receiverExpression_59468.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1070)) ;
  GALGAS_getterMap var_getterMap_59595 = var_receiverType_59513.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1072)) ;
  GALGAS_functionSignature var_getterFormalArgumentTypeList_59692 ;
  GALGAS_methodKind var_kind_59711 ;
  GALGAS_bool var_hasCompilerArgument_59739 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_59776 ;
  GALGAS_stringlist var_fieldList_59800 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1078)) ;
  const cMapElement_getterMap * objectArray_59812 = (const cMapElement_getterMap *) var_getterMap_59595.readAccessForWithInstruction (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1079))) ;
  if (NULL != objectArray_59812) {
      macroValidSharedObject (objectArray_59812, cMapElement_getterMap) ;
    var_getterFormalArgumentTypeList_59692 = objectArray_59812->mAttribute_mArgumentTypeList ;
    var_hasCompilerArgument_59739 = objectArray_59812->mAttribute_mHasCompilerArgument ;
    var_returnedType_59776 = objectArray_59812->mAttribute_mReturnedType ;
    var_kind_59711 = objectArray_59812->mAttribute_mKind ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, objectArray_59812->mAttribute_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1085)), objectArray_59812->mAttribute_mErrorMessage, fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1085)) ;
    }
  }else{
    GALGAS_uint var_matchingReaderCount_60117 = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_receiverType_59513.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1089)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1089)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_getterFormalArgumentTypeList_59692 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1090)) ;
      var_hasCompilerArgument_59739 = GALGAS_bool (true) ;
      var_returnedType_59776 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1092)) ;
      var_kind_59711 = GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1093)) ;
      cEnumerator_typedPropertyList enumerator_60415 (var_receiverType_59513.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1094)), kEnumeration_up) ;
      while (enumerator_60415.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_attributeType_60444 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (enumerator_60415.current_mAttributeTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1097)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1097))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1097)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1095)) ;
        GALGAS_getterMap var_aMap_60631 = var_attributeType_60444.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1099)) ;
        const cMapElement_getterMap * objectArray_60673 = (const cMapElement_getterMap *) var_aMap_60631.readAccessForWithInstruction (object->mAttribute_mGetterName.mAttribute_string) ;
        if (NULL != objectArray_60673) {
            macroValidSharedObject (objectArray_60673, cMapElement_getterMap) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_attributeType_60444.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1101)).objectCompare (enumerator_60415.current_mAttributeName (HERE).mAttribute_string)).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_matchingReaderCount_60117.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1102)) ;
            var_getterFormalArgumentTypeList_59692 = objectArray_60673->mAttribute_mArgumentTypeList ;
            var_hasCompilerArgument_59739 = objectArray_60673->mAttribute_mHasCompilerArgument ;
            var_returnedType_59776 = objectArray_60673->mAttribute_mReturnedType ;
            var_kind_59711 = objectArray_60673->mAttribute_mKind ;
            var_fieldList_59800.addAssign_operation (enumerator_60415.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1107)) ;
            const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, objectArray_60673->mAttribute_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)), objectArray_60673->mAttribute_mErrorMessage, fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)) ;
            }
          }
        }
        enumerator_60415.gotoNextObject () ;
      }
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_matchingReaderCount_60117.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1115)), GALGAS_string ("the '@").add_operation (var_receiverType_59513.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1116)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1116)).add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1116)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1116)), fixItArray7  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1115)) ;
        var_getterFormalArgumentTypeList_59692.drop () ; // Release error dropped variable
        var_hasCompilerArgument_59739.drop () ; // Release error dropped variable
        var_returnedType_59776.drop () ; // Release error dropped variable
        var_kind_59711.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_60117.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_string var_s_61534 = GALGAS_string::makeEmptyString () ;
          cEnumerator_stringlist enumerator_61567 (var_fieldList_59800, kEnumeration_up) ;
          while (enumerator_61567.hasCurrentObject ()) {
            var_s_61534.plusAssign_operation(enumerator_61567.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1122)) ;
            if (enumerator_61567.hasNextObject ()) {
              var_s_61534.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123)) ;
            }
            enumerator_61567.gotoNextObject () ;
          }
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1125)), GALGAS_string ("the '@").add_operation (var_receiverType_59513.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1126)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1126)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1126)).add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1126)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1126)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1126)).add_operation (var_s_61534, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1127)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1127)), fixItArray9  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1125)) ;
          var_getterFormalArgumentTypeList_59692.drop () ; // Release error dropped variable
          var_hasCompilerArgument_59739.drop () ; // Release error dropped variable
          var_returnedType_59776.drop () ; // Release error dropped variable
          var_kind_59711.drop () ; // Release error dropped variable
        }
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_getterMap_59595.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1130)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1131)), GALGAS_string ("the '@").add_operation (var_receiverType_59513.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1132)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1132)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1132)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1131)) ;
        var_getterFormalArgumentTypeList_59692.drop () ; // Release error dropped variable
        var_hasCompilerArgument_59739.drop () ; // Release error dropped variable
        var_returnedType_59776.drop () ; // Release error dropped variable
        var_kind_59711.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_10) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        appendFixItActions (fixItArray12, kFixItReplace, var_getterMap_59595.getter_keyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1138))) ;
        inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1135)), GALGAS_string ("the '@").add_operation (var_receiverType_59513.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)).add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)).add_operation (GALGAS_string ("' getter "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)), fixItArray12  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1135)) ;
        var_getterFormalArgumentTypeList_59692.drop () ; // Release error dropped variable
        var_hasCompilerArgument_59739.drop () ; // Release error dropped variable
        var_returnedType_59776.drop () ; // Release error dropped variable
        var_kind_59711.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1142)).objectCompare (var_getterFormalArgumentTypeList_59692.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1142)))).boolEnum () ;
  if (kBoolTrue == test_13) {
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1143)), GALGAS_string ("calling the '").add_operation (object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1143)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1143)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1143)).add_operation (var_receiverType_59513.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1143)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1143)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1143)).add_operation (var_getterFormalArgumentTypeList_59692.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1144)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1144)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1143)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1144)).add_operation (object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1145)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1145)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1144)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1145)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1143)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_13) {
    GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_62857 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1147)) ;
    cEnumerator_actualOutputExpressionList enumerator_62925 (object->mAttribute_mExpressions, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_62961 (var_getterFormalArgumentTypeList_59692, kEnumeration_up) ;
    while (enumerator_62925.hasCurrentObject () && enumerator_62961.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_63205 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_62925.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_62961.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_63205, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1149)) ;
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_62961.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_62925.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_string temp_16 ;
        const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_62961.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          temp_16 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_17) {
          temp_16 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_62925.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1158)), GALGAS_string ("the selector should be '!").add_operation (enumerator_62961.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1158)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1158)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1158)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1158)), fixItArray18  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1158)) ;
      }
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_62961.current_mFormalArgumentType (HERE), var_exp_63205.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1160)), enumerator_62925.current_mEndOfExpressionLocation (HERE), var_exp_63205, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1160)) ;
      }
      var_constructorEffectiveParameterList_62857.addAssign_operation (var_exp_63205  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1161)) ;
      enumerator_62925.gotoNextObject () ;
      enumerator_62961.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_59776, object->mAttribute_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1165)), var_kind_59711, var_receiverExpression_59468, var_fieldList_59800, object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1169)), var_constructorEffectiveParameterList_62857, var_hasCompilerArgument_59739  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1163)) ;
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
  GALGAS_lstring var_usefulnessName_64582 = function_optionNameForUsefulEntitiesGraph (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1192)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_64582 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1193)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_64884 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_64929 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_64974 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_65021 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_65072 ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_optionComponentIsPredefined_64884, var_boolOptionMap_64929, var_uintOptionMap_64974, var_stringOptionMap_65021, var_stringListOptionMap_65072, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1195)) ;
  GALGAS_bool var_found_65090 = var_boolOptionMap_64929.getter_hasKey (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1203)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1203)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_65179 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType ;
  const enumGalgasBool test_0 = var_found_65090.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1205)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_found_65090 = var_uintOptionMap_64974.getter_hasKey (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1206)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1206)) ;
    var_returnedType_65179 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType ;
  }
  const enumGalgasBool test_1 = var_found_65090.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1209)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_found_65090 = var_stringOptionMap_65021.getter_hasKey (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1210)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1210)) ;
    var_returnedType_65179 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  }
  const enumGalgasBool test_2 = var_found_65090.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1213)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_found_65090 = var_stringListOptionMap_65072.getter_hasKey (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1214)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1214)) ;
    var_returnedType_65179 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringListType ;
  }
  const enumGalgasBool test_3 = var_found_65090.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1218)).objectCompare (GALGAS_string ("value"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_65179, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1221)), var_optionComponentIsPredefined_64884, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1223)), object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1224))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1219)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1225)).objectCompare (GALGAS_string ("char"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1228)), var_optionComponentIsPredefined_64884, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1230)), object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1231))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1226)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1232)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1235)), var_optionComponentIsPredefined_64884, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1237)), object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1238))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1233)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1239)).objectCompare (GALGAS_string ("comment"))).boolEnum () ;
          if (kBoolTrue == test_7) {
            outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1242)), var_optionComponentIsPredefined_64884, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1244)), object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1245))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1240)) ;
          }else if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (object->mAttribute_mOptionGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1247)), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1247)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }else if (kBoolFalse == test_3) {
    GALGAS_stringlist var_s_67155 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1250)) ;
    cEnumerator_commandLineOptionMap enumerator_67188 (var_boolOptionMap_64929, kEnumeration_up) ;
    while (enumerator_67188.hasCurrentObject ()) {
      var_s_67155.addAssign_operation (enumerator_67188.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1252))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1252)) ;
      enumerator_67188.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_67244 (var_uintOptionMap_64974, kEnumeration_up) ;
    while (enumerator_67244.hasCurrentObject ()) {
      var_s_67155.addAssign_operation (enumerator_67244.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1255))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1255)) ;
      enumerator_67244.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_67302 (var_stringOptionMap_65021, kEnumeration_up) ;
    while (enumerator_67302.hasCurrentObject ()) {
      var_s_67155.addAssign_operation (enumerator_67302.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1258))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1258)) ;
      enumerator_67302.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray9 ;
    appendFixItActions (fixItArray9, kFixItReplace, var_s_67155) ;
    inCompiler->emitSemanticError (object->mAttribute_mOptionEntryName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1260)), GALGAS_string ("the '").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1261)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1261)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1261)).add_operation (object->mAttribute_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1261)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1261)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1261)), fixItArray9  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1260)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1272)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1273)) ;
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
                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_68588 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1289)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_68588, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1286)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_68860 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1298)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_68860, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1295)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_68934 = var_leftExpression_68588.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1304)) ;
  {
  routine_checkDiadicOperator (var_leftType_68934, var_rightExpression_68860.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1307)), GALGAS_bool (kIsNotEqual, var_leftType_68934.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1308)).operator_and (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1308)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1308)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("|"), object->mAttribute_mOperatorLocation, var_rightExpression_68860, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1305)) ;
  }
  outArgument_outExpression = GALGAS_orExpressionForGeneration::constructor_new (var_leftType_68934, object->mAttribute_mOperatorLocation, var_leftExpression_68588, var_rightExpression_68860  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1314)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1327)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1328)) ;
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
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_70399 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1344)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_70399, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1341)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_70671 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1353)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_70671, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1350)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_70745 = var_leftExpression_70399.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1359)) ;
  {
  routine_checkDiadicOperator (var_leftType_70745, var_rightExpression_70671.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1362)), GALGAS_bool (kIsNotEqual, var_leftType_70745.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1363)).operator_and (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1363)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1363)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("|"), object->mAttribute_mOperatorLocation, var_rightExpression_70671, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1360)) ;
  }
  outArgument_outExpression = GALGAS_orShortExpressionForGeneration::constructor_new (var_leftType_70745, object->mAttribute_mOperatorLocation, var_leftExpression_70399, var_rightExpression_70671  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1369)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1381)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1382)) ;
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
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_72204 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1398)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_72204, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1395)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_72476 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1407)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_72476, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1404)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_72550 = var_leftExpression_72204.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1413)) ;
  {
  routine_checkDiadicOperator (var_leftType_72550, var_rightExpression_72476.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1416)), GALGAS_bool (kIsNotEqual, var_leftType_72550.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1417)).operator_and (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1417)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1417)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&"), object->mAttribute_mOperatorLocation, var_rightExpression_72476, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1414)) ;
  }
  outArgument_outExpression = GALGAS_andExpressionForGeneration::constructor_new (var_leftType_72550, object->mAttribute_mOperatorLocation, var_leftExpression_72204, var_rightExpression_72476  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1423)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1435)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1436)) ;
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
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_74016 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1452)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_74016, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1449)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_74288 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1461)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_74288, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1458)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_74362 = var_leftExpression_74016.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1467)) ;
  {
  routine_checkDiadicOperator (var_leftType_74362, var_rightExpression_74288.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1470)), GALGAS_bool (kIsNotEqual, var_leftType_74362.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1471)).operator_and (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1471)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1471)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&"), object->mAttribute_mOperatorLocation, var_rightExpression_74288, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1468)) ;
  }
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::constructor_new (var_leftType_74362, object->mAttribute_mOperatorLocation, var_leftExpression_74016, var_rightExpression_74288  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1477)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1489)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1490)) ;
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
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_75823 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1506)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_75823, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1503)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_76095 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1515)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_76095, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1512)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_76169 = var_leftExpression_75823.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1521)) ;
  {
  routine_checkDiadicOperator (var_leftType_76169, var_rightExpression_76095.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1524)), GALGAS_bool (kIsNotEqual, var_leftType_76169.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1525)).operator_and (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1525)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1525)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("^"), object->mAttribute_mOperatorLocation, var_rightExpression_76095, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1522)) ;
  }
  outArgument_outExpression = GALGAS_xorExpressionForGeneration::constructor_new (var_leftType_76169, object->mAttribute_mOperatorLocation, var_leftExpression_75823, var_rightExpression_76095  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1531)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1544)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1545)) ;
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
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_77662 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_77662, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1559)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_77952 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_77952, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1568)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_78026 = var_leftExpression_77662.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1577)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType_78026.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1578)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_leftExpression_77662.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1579)), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1579)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_78231 = var_rightExpression_77952.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1581)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_rightType_78231.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1582)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_rightExpression_77952.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1583)), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1583)) ;
  }
  outArgument_outExpression = GALGAS_closedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_77662.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1587))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1587)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1587)), object->mAttribute_mOperatorLocation, var_leftExpression_77662, var_rightExpression_77952  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1586)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1599)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1600)) ;
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
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_79766 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_79766, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1614)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_80056 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_80056, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1623)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_80130 = var_leftExpression_79766.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1632)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType_80130.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1633)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_leftExpression_79766.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1634)), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1634)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_80335 = var_rightExpression_80056.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1636)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_rightType_80335.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1637)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_rightExpression_80056.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1638)), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1638)) ;
  }
  outArgument_outExpression = GALGAS_openedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_79766.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1642))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1642)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1642)), object->mAttribute_mOperatorLocation, var_leftExpression_79766, var_rightExpression_80056  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1641)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1654)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1655)) ;
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
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionAST * object = (const cPtr_equalExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_81841 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1672)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_81841, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1669)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_81882 = var_leftExpression_81841.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1677)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_82164 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_81882, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_82164, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1679)) ;
  {
  routine_checkDiadicOperator (var_leftType_81882, var_rightExpression_82164.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1690)), GALGAS_bool (true), GALGAS_string ("=="), object->mAttribute_mOperatorLocation, var_rightExpression_82164, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1688)) ;
  }
  outArgument_outExpression = GALGAS_equalExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_81841, var_rightExpression_82164  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1697)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1725)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1726)) ;
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
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionAST * object = (const cPtr_notEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_84125 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1742)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_84125, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1739)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_84166 = var_leftExpression_84125.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1747)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_84447 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_84166, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_84447, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1749)) ;
  {
  routine_checkDiadicOperator (var_leftType_84166, var_rightExpression_84447.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1760)), GALGAS_bool (true), GALGAS_string ("!="), object->mAttribute_mOperatorLocation, var_rightExpression_84447, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1758)) ;
  }
  outArgument_outExpression = GALGAS_notEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_84125, var_rightExpression_84447  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1767)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1795)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1796)) ;
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
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionAST * object = (const cPtr_lowerOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_86485 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1812)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_86485, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1809)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_86526 = var_leftExpression_86485.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1817)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_86807 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_86526, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_86807, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1819)) ;
  {
  routine_checkDiadicOperator (var_leftType_86526, var_rightExpression_86807.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1830)), GALGAS_bool (true), GALGAS_string ("<="), object->mAttribute_mOperatorLocation, var_rightExpression_86807, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1828)) ;
  }
  outArgument_outExpression = GALGAS_lowerOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_86485, var_rightExpression_86807  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1837)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1869)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1870)) ;
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
                                                                                   const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionAST * object = (const cPtr_greaterOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_89121 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1886)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_89121, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1883)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_89162 = var_leftExpression_89121.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1891)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_89443 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_89162, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_89443, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1893)) ;
  {
  routine_checkDiadicOperator (var_leftType_89162, var_rightExpression_89443.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1904)), GALGAS_bool (true), GALGAS_string (">="), object->mAttribute_mOperatorLocation, var_rightExpression_89443, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1902)) ;
  }
  outArgument_outExpression = GALGAS_greaterOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_89121, var_rightExpression_89443  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1911)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1942)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1943)) ;
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
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionAST * object = (const cPtr_strictGreaterExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_91690 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1959)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_91690, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1956)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_91731 = var_leftExpression_91690.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1964)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_92012 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_91731, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_92012, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1966)) ;
  {
  routine_checkDiadicOperator (var_leftType_91731, var_rightExpression_92012.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1977)), GALGAS_bool (true), GALGAS_string (">"), object->mAttribute_mOperatorLocation, var_rightExpression_92012, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1975)) ;
  }
  outArgument_outExpression = GALGAS_strictGreaterExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_91690, var_rightExpression_92012  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1984)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2015)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2016)) ;
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
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionAST * object = (const cPtr_strictLowerExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_94250 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2032)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_94250, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2029)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_94291 = var_leftExpression_94250.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2037)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_94572 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_94291, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_94572, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2039)) ;
  {
  routine_checkDiadicOperator (var_leftType_94291, var_rightExpression_94572.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2050)), GALGAS_bool (true), GALGAS_string ("<"), object->mAttribute_mOperatorLocation, var_rightExpression_94572, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2048)) ;
  }
  outArgument_outExpression = GALGAS_strictLowerExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression_94250, var_rightExpression_94572  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2057)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2091)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2092)) ;
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
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionAST * object = (const cPtr_rightShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_96807 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2109)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_96807, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2106)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_97101 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_97101, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2115)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_97175 = var_leftExpression_96807.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2124)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_97244 = var_rightExpression_97101.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2125)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType_97175.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2126)).operator_and (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2126)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2126)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_97175.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2128)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2128)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2128)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2127)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_rightType_97244.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2130)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_97244.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2132)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2132)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2132)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2131)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_rightShiftExpressionForGeneration::constructor_new (var_leftType_97175, object->mAttribute_mOperatorLocation, var_leftExpression_96807, var_rightExpression_97101  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2136)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2150)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2151)) ;
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
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionAST * object = (const cPtr_leftShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_98951 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2168)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_98951, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2165)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_99245 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_99245, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2174)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_99319 = var_leftExpression_98951.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2183)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_99388 = var_rightExpression_99245.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2184)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType_99319.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2185)).operator_and (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2185)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2185)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_99319.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2187)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2187)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2187)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2186)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_rightType_99388.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2189)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_99388.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2191)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2191)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2191)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2190)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_leftShiftExpressionForGeneration::constructor_new (var_leftType_99319, object->mAttribute_mOperatorLocation, var_leftExpression_98951, var_rightExpression_99245  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2195)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2209)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2210)) ;
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
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowAST * object = (const cPtr_addExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_101102 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2227)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_101102, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2224)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_101374 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2236)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_101374, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2233)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_101448 = var_leftExpression_101102.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2242)) ;
  {
  routine_checkDiadicOperator (var_leftType_101448, var_rightExpression_101374.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2245)), GALGAS_bool (kIsNotEqual, var_leftType_101448.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2246)).operator_and (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2246)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2246)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&+"), object->mAttribute_mOperatorLocation, var_rightExpression_101374, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2243)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionNoOverflowForGeneration::constructor_new (var_leftType_101448, object->mAttribute_mOperatorLocation, var_leftExpression_101102, var_rightExpression_101374  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2252)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2265)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2266)) ;
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
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionAST * object = (const cPtr_addExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_102923 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2282)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_102923, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2279)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_103195 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2291)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_103195, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2288)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_103269 = var_leftExpression_102923.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2297)) ;
  {
  routine_checkDiadicOperator (var_leftType_103269, var_rightExpression_103195.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2300)), GALGAS_bool (kIsNotEqual, var_leftType_103269.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2301)).operator_and (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2301)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2301)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("+"), object->mAttribute_mOperatorLocation, var_rightExpression_103195, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2298)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionForGeneration::constructor_new (var_leftType_103269, object->mAttribute_mOperatorLocation, var_leftExpression_102923, var_rightExpression_103195  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2307)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2320)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2321)) ;
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
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowAST * object = (const cPtr_subExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_104748 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2338)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_104748, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2335)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_105020 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2347)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_105020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2344)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_105094 = var_leftExpression_104748.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2353)) ;
  {
  routine_checkDiadicOperator (var_leftType_105094, var_rightExpression_105020.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2356)), GALGAS_bool (kIsNotEqual, var_leftType_105094.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2357)).operator_and (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2357)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2357)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&-"), object->mAttribute_mOperatorLocation, var_rightExpression_105020, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2354)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionNoOverflowForGeneration::constructor_new (var_leftType_105094, object->mAttribute_mOperatorLocation, var_leftExpression_104748, var_rightExpression_105020  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2363)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2376)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2377)) ;
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
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionAST * object = (const cPtr_subExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_106569 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2393)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_106569, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2390)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_106841 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2402)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_106841, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2399)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_106915 = var_leftExpression_106569.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2408)) ;
  {
  routine_checkDiadicOperator (var_leftType_106915, var_rightExpression_106841.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2411)), GALGAS_bool (kIsNotEqual, var_leftType_106915.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2412)).operator_and (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2412)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2412)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("-"), object->mAttribute_mOperatorLocation, var_rightExpression_106841, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2409)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionForGeneration::constructor_new (var_leftType_106915, object->mAttribute_mOperatorLocation, var_leftExpression_106569, var_rightExpression_106841  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2418)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2431)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2432)) ;
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
                                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowAST * object = (const cPtr_multiplicationExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_108416 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2448)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_108416, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2445)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_108688 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2457)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_108688, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2454)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_108762 = var_leftExpression_108416.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2463)) ;
  {
  routine_checkDiadicOperator (var_leftType_108762, var_rightExpression_108688.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2466)), GALGAS_bool (kIsNotEqual, var_leftType_108762.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2467)).operator_and (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2467)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2467)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&*"), object->mAttribute_mOperatorLocation, var_rightExpression_108688, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2464)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowForGeneration::constructor_new (var_leftType_108762, object->mAttribute_mOperatorLocation, var_leftExpression_108416, var_rightExpression_108688  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2473)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2485)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2486)) ;
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
                                                                                   const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionAST * object = (const cPtr_multiplicationExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_110267 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2502)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_110267, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2499)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_110539 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2511)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_110539, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2508)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_110613 = var_leftExpression_110267.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2517)) ;
  {
  routine_checkDiadicOperator (var_leftType_110613, var_rightExpression_110539.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2520)), GALGAS_bool (kIsNotEqual, var_leftType_110613.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2521)).operator_and (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2521)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2521)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("*"), object->mAttribute_mOperatorLocation, var_rightExpression_110539, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2518)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionForGeneration::constructor_new (var_leftType_110613, object->mAttribute_mOperatorLocation, var_leftExpression_110267, var_rightExpression_110539  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2527)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2539)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2540)) ;
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
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowAST * object = (const cPtr_divisionExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_112110 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2556)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_112110, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2553)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_112382 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2565)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_112382, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2562)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_112456 = var_leftExpression_112110.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2571)) ;
  {
  routine_checkDiadicOperator (var_leftType_112456, var_rightExpression_112382.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2574)), GALGAS_bool (kIsNotEqual, var_leftType_112456.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2575)).operator_and (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2575)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2575)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&/"), object->mAttribute_mOperatorLocation, var_rightExpression_112382, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2572)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionNoOverflowForGeneration::constructor_new (var_leftType_112456, object->mAttribute_mOperatorLocation, var_leftExpression_112110, var_rightExpression_112382  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2581)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2594)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2595)) ;
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
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionAST * object = (const cPtr_divisionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_113946 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2611)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_113946, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2608)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_114218 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2620)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_114218, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2617)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_114292 = var_leftExpression_113946.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2626)) ;
  {
  routine_checkDiadicOperator (var_leftType_114292, var_rightExpression_114218.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2629)), GALGAS_bool (kIsNotEqual, var_leftType_114292.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2630)).operator_and (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2630)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2630)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("/"), object->mAttribute_mOperatorLocation, var_rightExpression_114218, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2627)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionForGeneration::constructor_new (var_leftType_114292, object->mAttribute_mOperatorLocation, var_leftExpression_113946, var_rightExpression_114218  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2636)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2648)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2649)) ;
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
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionAST * object = (const cPtr_moduloExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_115759 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2665)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_115759, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2662)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_116031 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2674)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_116031, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2671)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_116105 = var_leftExpression_115759.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2680)) ;
  {
  routine_checkDiadicOperator (var_leftType_116105, var_rightExpression_116031.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2683)), GALGAS_bool (kIsNotEqual, var_leftType_116105.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2684)).operator_and (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2684)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2684)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("mod"), object->mAttribute_mOperatorLocation, var_rightExpression_116031, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2681)) ;
  }
  outArgument_outExpression = GALGAS_moduloExpressionForGeneration::constructor_new (var_leftType_116105, object->mAttribute_mOperatorLocation, var_leftExpression_115759, var_rightExpression_116031  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2690)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2702)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_117332 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2719)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_117332, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2716)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_117597 = var_expression_117332.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2725)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type_117597.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2726)).operator_and (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2726)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2726)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_117597.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2728)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2728)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2728)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2727)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionNoOverflowForGeneration::constructor_new (var_type_117597, object->mAttribute_mOperatorLocation, var_expression_117332  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2732)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2744)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_118822 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2761)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_118822, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2758)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_119087 = var_expression_118822.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2767)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type_119087.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2768)).operator_and (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2768)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2768)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_119087.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2770)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2770)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2770)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2769)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_119087, object->mAttribute_mOperatorLocation, var_expression_118822  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2774)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2786)) ;
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
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2799)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_120495 = outArgument_outExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2808)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type_120495.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2809)).operator_and (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2809)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2809)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_120495.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2811)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2811)).add_operation (GALGAS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2811)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2810)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2821)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_121540 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2838)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_121540, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2835)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_121805 = var_expression_121540.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2844)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type_121805.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2845)).operator_and (function_prefixNotOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2845)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2845)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_121805.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2847)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2847)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2847)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2846)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_121805, object->mAttribute_mOperatorLocation, var_expression_121540  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2851)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_123150 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2879)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_123150, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2876)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_123220 = var_expression_123150.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2885)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_type_123220.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2886)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2886)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mStructFieldName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2887)), GALGAS_string ("the '.' operator requires the receiver to be a struct"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2887)) ;
  }
  GALGAS_attributeMap var_attributeMap_123429 = var_type_123220.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2889)) ;
  var_attributeMap_123429.method_searchKey (object->mAttribute_mStructFieldName, var_type_123220, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2890)) ;
  outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_type_123220, object->mAttribute_mOperatorLocation, var_expression_123150, object->mAttribute_mStructFieldName.mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2896)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2909)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_124524 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2926)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_124524, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2923)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_124789 = var_expression_124524.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2932)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type_124789.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2933)).operator_and (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2933)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2933)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_124789.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2935)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2935)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2935)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2934)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_124789, object->mAttribute_mOperatorLocation, var_expression_124524  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2939)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mIfExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2951)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mThenExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2952)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mElseExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2953)) ;
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
  GALGAS_semanticExpressionForGeneration var_if_5F_expression_126307 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mIfExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_if_5F_expression_126307, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2967)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression_126394 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mThenExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_then_5F_expression_126394, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2977)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression_126664 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mElseExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_else_5F_expression_126664, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2987)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_if_5F_expression_126307.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2996)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2996)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("the test expression type is '@").add_operation (var_if_5F_expression_126307.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2998)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2998)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2998)).add_operation (GALGAS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2998)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2997)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_then_5F_expression_126394.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3000)).objectCompare (var_else_5F_expression_126664.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3000)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand expression types are '@").add_operation (var_then_5F_expression_126394.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3002)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3002)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3002)).add_operation (GALGAS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3002)).add_operation (var_else_5F_expression_126664.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3002)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3002)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3002)).add_operation (GALGAS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3002)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3001)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_ifExpressionForGeneration::constructor_new (var_then_5F_expression_126394.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3007)), object->mAttribute_mOperatorLocation, var_if_5F_expression_126307, var_then_5F_expression_126394, var_else_5F_expression_126664  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3006)) ;
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
  cEnumerator_actualOutputExpressionList enumerator_127862 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  while (enumerator_127862.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_127862.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3022)) ;
    enumerator_127862.gotoNextObject () ;
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
  GALGAS_lstring var_usefulnessName_128409 = function_functionNameForUsefulEntitiesGraph (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3036)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_128409 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3037)) ;
  }
  GALGAS_functionSignature var_functionSignature_128703 ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_128745 ;
  GALGAS_bool var_isInternal_128771 ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionName, var_functionSignature_128703, var_resultType_128745, var_isInternal_128771, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3039)) ;
  const enumGalgasBool test_0 = var_isInternal_128771.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation_128848 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.getter_locationForKey (object->mAttribute_mFunctionName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3047)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFunctionName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3048)).objectCompare (var_procDeclarationLocation_128848.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3048)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3049)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_128848.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3049)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3049)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3049)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3049)) ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_functionSignature_128703.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3053)).objectCompare (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3053)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3054)), GALGAS_string ("the '").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3055)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3055)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3055)).add_operation (var_functionSignature_128703.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3055)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3055)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3055)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3055)).add_operation (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3056)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3056)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3056)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3056)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3054)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_129552 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3060)) ;
    cEnumerator_functionSignature enumerator_129625 (var_functionSignature_128703, kEnumeration_up) ;
    cEnumerator_actualOutputExpressionList enumerator_129648 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    while (enumerator_129625.hasCurrentObject () && enumerator_129648.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_129899 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_129648.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_129625.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_129899, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3062)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_129625.current_mFormalArgumentType (HERE), var_expression_129899.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3070)), enumerator_129648.current_mEndOfExpressionLocation (HERE), var_expression_129899, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3070)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_129625.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_129648.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_129625.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = enumerator_129625.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3072)) ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_129648.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3072)), GALGAS_string ("the selector should be '!").add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3072)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3072)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3072)) ;
      }
      var_semanticExpressionListForGeneration_129552.addAssign_operation (var_expression_129899  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3074)) ;
      enumerator_129625.gotoNextObject () ;
      enumerator_129648.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_128745, object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3078)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3079)), var_semanticExpressionListForGeneration_129552  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3076)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_type_131310 ;
  GALGAS_string var_sourceVariableCppName_131349 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_131402 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadAccess (object->mAttribute_mVarName, var_type_131310, var_sourceVariableCppName_131349, var_nameForCheckingFormalParameterUsing_131402, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)) ;
  }
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_131310, object->mAttribute_mVarName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3109)), var_sourceVariableCppName_131349, var_nameForCheckingFormalParameterUsing_131402  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3107)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy joker_131868 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mLiteralTypeName, joker_131868 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3120)) ;
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
  GALGAS_lstring var_usefulnessName_132353 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mLiteralTypeName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3133)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_132353 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3134)) ;
  }
  GALGAS_bool joker_132604_26 ; // Joker input parameter
  GALGAS_bool joker_132604_25 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_132604_24 ; // Joker input parameter
  GALGAS_typeKindEnum joker_132604_23 ; // Joker input parameter
  GALGAS_bool joker_132604_22 ; // Joker input parameter
  GALGAS_typedPropertyList joker_132604_21 ; // Joker input parameter
  GALGAS_attributeMap joker_132604_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_132604_19 ; // Joker input parameter
  GALGAS_constructorMap joker_132604_18 ; // Joker input parameter
  GALGAS_getterMap joker_132604_17 ; // Joker input parameter
  GALGAS_setterMap joker_132604_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_132604_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_132604_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_132604_13 ; // Joker input parameter
  GALGAS_stringlist joker_132604_12 ; // Joker input parameter
  GALGAS_uint joker_132604_11 ; // Joker input parameter
  GALGAS_functionSignature joker_132604_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_132604_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_132604_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_132604_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_132604_6 ; // Joker input parameter
  GALGAS_bool joker_132604_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_132604_4 ; // Joker input parameter
  GALGAS_string joker_132604_3 ; // Joker input parameter
  GALGAS_string joker_132604_2 ; // Joker input parameter
  GALGAS_headerKind joker_132604_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mLiteralTypeName, joker_132604_26, joker_132604_25, joker_132604_24, joker_132604_23, joker_132604_22, joker_132604_21, joker_132604_20, joker_132604_19, joker_132604_18, joker_132604_17, joker_132604_16, joker_132604_15, joker_132604_14, joker_132604_13, joker_132604_12, joker_132604_11, joker_132604_10, joker_132604_9, joker_132604_8, joker_132604_7, joker_132604_6, joker_132604_5, joker_132604_4, joker_132604_3, joker_132604_2, joker_132604_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3136)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_132624 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mLiteralTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3138)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3140))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3140)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3140)), object->mAttribute_mLiteralTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3141)), var_type_132624  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3139)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3151)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_133787 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3169)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_133787, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3166)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_castType_134036 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3175)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expression_133787.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3177)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3177)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3177)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_t_134327 = var_castType_134036 ;
    GALGAS_bool var_found_134354 = GALGAS_bool (kIsEqual, var_t_134327.objectCompare (var_expression_133787.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3180)))) ;
    if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3181)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3181)).isValid ()) {
      uint32_t variant_134395 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3181)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3181)).uintValue () ;
      bool loop_134395 = true ;
      while (loop_134395) {
        loop_134395 = var_found_134354.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3182)).operator_and (var_t_134327.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3182)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3182)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3182)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3182)).isValid () ;
        if (loop_134395) {
          loop_134395 = var_found_134354.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3182)).operator_and (var_t_134327.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3182)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3182)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3182)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3182)).boolValue () ;
        }
        if (loop_134395 && (0 == variant_134395)) {
          loop_134395 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3181)) ;
        }
        if (loop_134395) {
          variant_134395 -- ;
          var_t_134327 = var_t_134327.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3183)) ;
          var_found_134354 = GALGAS_bool (kIsEqual, var_t_134327.objectCompare (var_expression_133787.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3184)))) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_found_134354.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3186)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3187)), GALGAS_string ("the '@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3188)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3188)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3188)).add_operation (var_expression_133787.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3188)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3188)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3188)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3188)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3187)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_expression_133787.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3191)), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_expression_133787.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3192)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3192)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3191)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3192)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3191)) ;
  }
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3197)), var_expression_133787, object->mAttribute_mTypeComparisonKind, var_castType_134036  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3195)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3208)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_136163 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3225)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_136163, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3222)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_136206 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3231)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expression_136163.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3235)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3235)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3235)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_t_136510 = var_type_136206 ;
    GALGAS_bool var_found_136533 = GALGAS_bool (kIsEqual, var_t_136510.objectCompare (var_expression_136163.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3238)))) ;
    if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3239)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3239)).isValid ()) {
      uint32_t variant_136574 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3239)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3239)).uintValue () ;
      bool loop_136574 = true ;
      while (loop_136574) {
        loop_136574 = var_found_136533.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3240)).operator_and (var_t_136510.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3240)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3240)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3240)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3240)).isValid () ;
        if (loop_136574) {
          loop_136574 = var_found_136533.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3240)).operator_and (var_t_136510.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3240)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3240)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3240)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3240)).boolValue () ;
        }
        if (loop_136574 && (0 == variant_136574)) {
          loop_136574 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3239)) ;
        }
        if (loop_136574) {
          variant_136574 -- ;
          var_t_136510 = var_t_136510.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3241)) ;
          var_found_136533 = GALGAS_bool (kIsEqual, var_t_136510.objectCompare (var_expression_136163.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3242)))) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_found_136533.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3244)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3245)), GALGAS_string ("the '@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3246)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3246)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3246)).add_operation (var_expression_136163.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3247)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3247)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3246)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3247)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3245)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_expression_136163.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3249)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3249)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_expression_136163.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3254)), GALGAS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (var_expression_136163.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3256)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3256)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3255)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3256)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3254)) ;
    }
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_expression_136163.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3259)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3259)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
  if (kBoolTrue == test_5) {
    outArgument_outExpression = GALGAS_extractObjectInExpressionForGeneration::constructor_new (var_type_136206, object->mAttribute_mEndOfReceiverExpression, var_expression_136163, object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3264))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3260)) ;
  }else if (kBoolFalse == test_5) {
    outArgument_outExpression = GALGAS_castInExpressionForGeneration::constructor_new (var_type_136206, object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3268)), var_expression_136163, object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3270))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3266)) ;
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
  GALGAS_lstring var_usefulnessName_138504 = function_filewrapperNameForUsefulEntitiesGraph (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3291)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_138504 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3292)) ;
  }
  GALGAS_lstring var_filewrapperPath_138818 ;
  GALGAS_bool var_isInternal_138852 ;
  GALGAS_lstringlist joker_138824_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_138824_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_138824_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_138824_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, var_filewrapperPath_138818, joker_138824_4, joker_138824_3, joker_138824_2, joker_138824_1, var_isInternal_138852, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3294)) ;
  const enumGalgasBool test_0 = var_isInternal_138852.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_filewrapperDeclarationLocation_138936 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.getter_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3302)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3303)).objectCompare (var_filewrapperDeclarationLocation_138936.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3303)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3304)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_138936.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3304)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3304)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3304)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3304)) ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper"), object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3309))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3309)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3309)), object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3310)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3311)), var_filewrapperPath_138818.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3312))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3308)) ;
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
  cEnumerator_actualOutputExpressionList enumerator_139823 (object->mAttribute_mExpressions, kEnumeration_up) ;
  while (enumerator_139823.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_139823.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3321)) ;
    enumerator_139823.gotoNextObject () ;
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
  GALGAS_lstring var_usefulnessName_140379 = function_filewrapperTemplateNameForUsefulEntitiesGraph (object->mAttribute_mFilewrapperName, object->mAttribute_mFilewrapperTemplateName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3335)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_140379 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3336)) ;
  }
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_140713 ;
  GALGAS_bool var_isInternal_140740 ;
  GALGAS_lstring joker_140654_4 ; // Joker input parameter
  GALGAS_lstringlist joker_140654_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_140654_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_140654_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_140654_4, joker_140654_3, joker_140654_2, joker_140654_1, var_filewrapperTemplateMap_140713, var_isInternal_140740, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3338)) ;
  const enumGalgasBool test_0 = var_isInternal_140740.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_filewrapperDeclarationLocation_140825 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.getter_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3346)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3347)).objectCompare (var_filewrapperDeclarationLocation_140825.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3347)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3348)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_140825.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3348)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3348)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3348)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3348)) ;
    }
  }
  GALGAS_functionSignature var_templateSignature_141247 ;
  GALGAS_lstring joker_141249 ; // Joker input parameter
  var_filewrapperTemplateMap_140713.method_searchKey (object->mAttribute_mFilewrapperTemplateName, var_templateSignature_141247, joker_141249, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3352)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_141337 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3355)).objectCompare (var_templateSignature_141247.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3355)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mAttribute_mFilewrapperTemplateName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3356)), GALGAS_string ("calling the '").add_operation (object->mAttribute_mFilewrapperTemplateName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3357)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3357)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3357)).add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3357)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3357)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3357)).add_operation (var_templateSignature_141247.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3358)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3358)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3357)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3358)).add_operation (object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3359)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3359)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3358)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3359)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3356)) ;
    var_effectiveParameterList_141337.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    var_effectiveParameterList_141337 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3362)) ;
    cEnumerator_actualOutputExpressionList enumerator_141827 (object->mAttribute_mExpressions, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_141852 (var_templateSignature_141247, kEnumeration_up) ;
    while (enumerator_141827.hasCurrentObject () && enumerator_141852.hasCurrentObject ()) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_141852.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_141827.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_141852.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_141827.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3365)), GALGAS_string ("the selector should be '!").add_operation (enumerator_141852.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3365)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3365)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3365)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3365)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3365)) ;
      }
      GALGAS_semanticExpressionForGeneration var_exp_142309 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_141827.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_141852.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_142309, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3367)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_141852.current_mFormalArgumentType (HERE), var_exp_142309.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3375)), enumerator_141827.current_mEndOfExpressionLocation (HERE), var_exp_142309, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3375)) ;
      }
      var_effectiveParameterList_141337.addAssign_operation (var_exp_142309  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3376)) ;
      enumerator_141827.gotoNextObject () ;
      enumerator_141852.gotoNextObject () ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3382)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)), object->mAttribute_mFilewrapperTemplateName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3384)), var_effectiveParameterList_141337  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3380)) ;
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
  GALGAS_lstring var_usefulnessName_143473 = function_filewrapperNameForUsefulEntitiesGraph (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3405)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_143473 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3406)) ;
  }
  GALGAS_stringlist var_directoryList_143671 ;
  GALGAS_string var_fileName_143690 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3410)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3411)), GALGAS_string ("path is empty"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3411)) ;
    var_directoryList_143671.drop () ; // Release error dropped variable
    var_fileName_143690.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.getter_firstCharacterOrNul (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3412)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3413)), GALGAS_string ("the path should not begin with '/'"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3413)) ;
      var_directoryList_143671.drop () ; // Release error dropped variable
      var_fileName_143690.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      var_directoryList_143671 = object->mAttribute_mFilewrapperPath.mAttribute_string.getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3415)) ;
      {
      var_directoryList_143671.setter_popLast (var_fileName_143690, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3416)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap_144252 ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap_144306 ;
  GALGAS_bool var_isInternal_144339 ;
  GALGAS_lstring joker_144200 ; // Joker input parameter
  GALGAS_lstringlist joker_144207 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_144312 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_144200, joker_144207, var_filewrapperFileMap_144252, var_filewrapperDirectoryMap_144306, joker_144312, var_isInternal_144339, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3419)) ;
  const enumGalgasBool test_4 = var_isInternal_144339.boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location var_filewrapperDeclarationLocation_144423 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.getter_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3430)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3431)).objectCompare (var_filewrapperDeclarationLocation_144423.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3431)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3432)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_144423.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3432)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3432)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3432)), fixItArray6  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3432)) ;
    }
  }
  GALGAS_string var_builtPath_144777 = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_144306.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3437)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3437)).isValid ()) {
    uint32_t variant_144789 = var_filewrapperDirectoryMap_144306.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3437)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3437)).uintValue () ;
    bool loop_144789 = true ;
    while (loop_144789) {
      loop_144789 = GALGAS_bool (kIsStrictSup, var_directoryList_143671.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3438)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_144789) {
        loop_144789 = GALGAS_bool (kIsStrictSup, var_directoryList_143671.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3438)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_144789 && (0 == variant_144789)) {
        loop_144789 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3437)) ;
      }
      if (loop_144789) {
        variant_144789 -- ;
        GALGAS_string var_directoryName_144891 ;
        {
        var_directoryList_143671.setter_popFirst (var_directoryName_144891, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3440)) ;
        }
        var_builtPath_144777.plusAssign_operation(var_directoryName_144891.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3441)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3441)) ;
        const enumGalgasBool test_7 = var_filewrapperDirectoryMap_144306.getter_hasKey (var_directoryName_144891 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3442)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_uint joker_145201 ; // Joker input parameter
          var_filewrapperDirectoryMap_144306.method_searchKey (GALGAS_lstring::constructor_new (var_directoryName_144891, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3444))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3444)), var_filewrapperFileMap_144252, var_filewrapperDirectoryMap_144306, joker_145201, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3443)) ;
        }else if (kBoolFalse == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mAttribute_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3450)), GALGAS_string ("the '").add_operation (var_builtPath_144777, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3450)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3450)).add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3450)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3450)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3450)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3450)) ;
          var_filewrapperFileMap_144252.drop () ; // Release error dropped variable
          var_directoryList_143671 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3451)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex_145461 ;
  GALGAS_bool var_isTextFile_145480 ;
  const enumGalgasBool test_9 = var_filewrapperFileMap_144252.getter_hasKey (var_fileName_143690 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3456)).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_string joker_145606 ; // Joker input parameter
    GALGAS_uint joker_145621 ; // Joker input parameter
    var_filewrapperFileMap_144252.method_searchKey (GALGAS_lstring::constructor_new (var_fileName_143690, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3457))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3457)), joker_145606, var_isTextFile_145480, joker_145621, var_fileIndex_145461, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3457)) ;
  }else if (kBoolFalse == test_9) {
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (object->mAttribute_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3459)), GALGAS_string ("the '").add_operation (var_fileName_143690, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3460)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3460)).add_operation (var_builtPath_144777, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3460)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3460)).add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3460)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3460)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3460)), fixItArray10  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3459)) ;
    var_fileIndex_145461.drop () ; // Release error dropped variable
    var_isTextFile_145480.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_11 ;
  const enumGalgasBool test_12 = var_isTextFile_145480.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("data"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3467))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3467)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3467)) ;
  }
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (temp_11, object->mAttribute_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3469)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3470)), var_fileIndex_145461, var_isTextFile_145480  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3464)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression, NULL) ;

