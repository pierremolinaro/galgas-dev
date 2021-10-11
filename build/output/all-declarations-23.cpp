#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-23.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@charPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_charPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 952)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 953)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 960)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32CharConstantRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 967)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 974)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalnum"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 981)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalpha"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 988)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("iscntrl"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 995)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isdigit"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1002)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("islower"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1009)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isupper"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1016)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isxdigit"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1023)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeLetter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1030)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeMark"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1037)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeNumber"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1044)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSeparator"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1051)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeCommand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1058)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodePunctuation"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1065)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSymbol"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1072)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1079)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToLower"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1086)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToUpper"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1093)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_charPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                     extensionMethod_charPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_charPredefinedTypeAST_getGetterMap (defineExtensionMethod_charPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1107)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1108)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ocString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1115)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1122)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1129)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1136)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1143)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1150)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_boolPredefinedTypeAST.mSlotID,
                                     extensionMethod_boolPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolPredefinedTypeAST_getGetterMap (defineExtensionMethod_boolPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uintPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_uintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1164)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1165)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1172)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1179)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1186)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1193)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lsbIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1200)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantBitCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1207)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("oneBitCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1214)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1221)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("alphaString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1228)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1235)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1242)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1253)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeValueAssigned"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1260)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isInRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1267)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1275)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1282)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1289)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1296)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_uintPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                     extensionMethod_uintPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_uintPredefinedTypeAST_getGetterMap (defineExtensionMethod_uintPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sintPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1310)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1311)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1318)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1325)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1332)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1339)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1346)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1353)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1360)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1371)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1379)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1386)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1393)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1400)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sintPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                     extensionMethod_sintPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sintPredefinedTypeAST_getGetterMap (defineExtensionMethod_sintPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uint64PredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_getterMap & outArgument_outMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1415)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1416)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1423)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1430)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1436)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1443)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintSlice"), GALGAS_string ("uint"), GALGAS_string ("inStartBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1450)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("alphaString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1459)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1466)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1473)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1480)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1491)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1499)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1506)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1513)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1520)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                     extensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_uint_36__34_PredefinedTypeAST_getGetterMap (defineExtensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sint64PredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_getterMap & outArgument_outMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1534)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1535)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1542)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1549)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1556)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1563)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1570)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1577)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1584)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1595)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1603)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1610)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1617)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1624)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                     extensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sint_36__34_PredefinedTypeAST_getGetterMap (defineExtensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@doublePredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_doublePredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1638)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1639)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1646)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1653)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1660)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1667)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cos"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1674)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sin"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1681)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tan"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1688)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log10"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1695)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log2"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1702)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("logn"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1709)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("exp"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1716)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cosDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1723)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sinDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1730)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tanDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1737)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sqrt"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1744)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("power"), GALGAS_string ("double"), GALGAS_string ("inExponant"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1751)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryImage"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1758)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_doublePredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                     extensionMethod_doublePredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_doublePredefinedTypeAST_getGetterMap (defineExtensionMethod_doublePredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringsetPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_getterMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1772)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1773)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1780)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("anyString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1787)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1794)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringsetPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringsetPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getGetterMap (defineExtensionMethod_stringsetPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binarysetPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_binarysetPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_getterMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1808)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1809)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nodeCount"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1816)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isEmpty"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1823)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantVariableCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1830)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ITE"), GALGAS_string ("binaryset"), GALGAS_string ("inTHENoperand"), GALGAS_string ("binaryset"), GALGAS_string ("inELSEoperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1837)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("print"), GALGAS_string ("stringlist"), GALGAS_string ("inVariableList"), GALGAS_string ("uintlist"), GALGAS_string ("inBDDCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1846)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphvizDump"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1855)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("stringlist"), GALGAS_string ("inBitNameList"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1862)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transformedBy"), GALGAS_string ("uintlist"), GALGAS_string ("inTransformationArray"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1870)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1878)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1886)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1893)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1900)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1907)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigValueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bigint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1916)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedValueCount"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1925)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64ValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1932)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1939)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueListWithNameList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_string ("inNameList"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1946)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("predicateStringValue"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1953)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedStringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1960)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap10"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1967)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap021"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1974)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap102"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1981)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap120"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1988)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap201"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1995)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap210"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2002)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transposedBy"), GALGAS_string ("uintlist"), GALGAS_string ("inTransposeVector"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2009)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transitiveClosure"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2016)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("accessibleStates"), GALGAS_string ("binaryset"), GALGAS_string ("inInitialStateSet"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2023)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("implies"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2030)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("equalTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2037)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("notEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2044)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowerOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2051)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("greaterOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2058)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictGreaterThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2065)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictLowerThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2072)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetByTranslatingFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inFirstIndexToTranslate"), GALGAS_string ("uint"), GALGAS_string ("inTranslation"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2079)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsValue"), GALGAS_string ("uint64"), GALGAS_string ("inValue"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2086)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existsOnBitRange"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2093)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_binarysetPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                     extensionMethod_binarysetPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getGetterMap (defineExtensionMethod_binarysetPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typePredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typePredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2107)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2108)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasSuperclass"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2115)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("superclass"), GALGAS_string ("type"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2122)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typePredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                     extensionMethod_typePredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typePredefinedTypeAST_getGetterMap (defineExtensionMethod_typePredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dataPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2136)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2137)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cStringRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2144)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dataPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                     extensionMethod_dataPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getGetterMap (defineExtensionMethod_dataPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_getterMap & outArgument_outMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2158)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2159)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("resultType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2166)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("formalParameterTypeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2173)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("invoke"), GALGAS_string ("objectlist"), GALGAS_string ("inParameters"), GALGAS_string ("location"), GALGAS_string ("inErrorLocation"), GALGAS_string ("object"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2180)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                     extensionMethod_functionPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionPredefinedTypeAST_getGetterMap (defineExtensionMethod_functionPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@objectPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_objectPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2194)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectStaticType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2195)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectDynamicType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2202)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_objectPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_objectPredefinedTypeAST.mSlotID,
                                     extensionMethod_objectPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_objectPredefinedTypeAST_getGetterMap (defineExtensionMethod_objectPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_getterMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2216)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allTextFilePathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2217)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allBinaryFilePathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2224)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allDirectoryPathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2231)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2238)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allFilePathesWithExtension"), GALGAS_string ("string"), GALGAS_string ("inExtension"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2245)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2252)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2259)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2266)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2273)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathForPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2280)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2287)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2294)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2301)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                     extensionMethod_filewrapperPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperPredefinedTypeAST_getGetterMap (defineExtensionMethod_filewrapperPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@timerPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_timerPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_getterMap & outArgument_outMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2316)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("msFromStart"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2317)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2324)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isRunning"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2331)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_timerPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                     extensionMethod_timerPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getGetterMap (defineExtensionMethod_timerPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bigintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2346)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2347)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2354)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt64"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2361)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt64"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2368)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2375)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("spacedString"), GALGAS_string ("uint"), GALGAS_string ("inSeparation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2382)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2390)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2397)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2408)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForSignedRepresentation"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2415)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForUnsignedRepresentation"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2422)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2429)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2436)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2443)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2450)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("abs"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2457)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2464)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isZero"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2472)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sign"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2479)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForUnsignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2486)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForSignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2493)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForUnsignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2500)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForSignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2507)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForUnsignedRepresentation"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2514)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForSignedRepresentation"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2521)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bigintPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                     extensionMethod_bigintPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getGetterMap (defineExtensionMethod_bigintPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterModifierWithInputArgument (GALGAS_setterMap & ioArgument_ioSetterMap,
                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                             const GALGAS_string constinArgument_inInputArgumentTypeName,
                                             const GALGAS_string constinArgument_inInputArgumentName,
                                             const GALGAS_string constinArgument_inSetterName,
                                             const GALGAS_bool constinArgument_inHasCompilerArgument,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_2329 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2329 COMMA_SOURCE_FILE ("semanticsSetters.galgas", 26)) ;
  }
  GALGAS_formalParameterSignature var_argList_2366 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 27)) ;
  var_argList_2366.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 28)), var_argumentTypeIndex_2329, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 28)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 28)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 30))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 30)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 31)), var_argList_2366, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 34)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 29)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithOutputAndInputArguments'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_unifiedTypeMap_2D_entry var_outputArgumentTypeIndex_3313 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inOutputArgumentTypeName, var_outputArgumentTypeIndex_3313 COMMA_SOURCE_FILE ("semanticsSetters.galgas", 51)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_inputArgumentTypeIndex_3431 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_inputArgumentTypeIndex_3431 COMMA_SOURCE_FILE ("semanticsSetters.galgas", 52)) ;
  }
  GALGAS_formalParameterSignature var_argList_3468 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 53)) ;
  var_argList_3468.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 54)), var_outputArgumentTypeIndex_3313, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsSetters.galgas", 54)), constinArgument_inOutputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 54)) ;
  var_argList_3468.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 55)), var_inputArgumentTypeIndex_3431, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 55)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 55)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 57))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 57)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 58)), var_argList_3468, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 61)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 56)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWith2InputArguments'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_5454 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex_5454 COMMA_SOURCE_FILE ("semanticsSetters.galgas", 103)) ;
  }
  var_argList_5318.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 104)), var_argumentTypeIndex_5454, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 104)), constinArgument_inInputArgument_31_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 104)) ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex_5454 COMMA_SOURCE_FILE ("semanticsSetters.galgas", 105)) ;
  }
  var_argList_5318.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 106)), var_argumentTypeIndex_5454, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 106)), constinArgument_inInputArgument_32_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 106)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 108))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 108)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 109)), var_argList_5318, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 112)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 107)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithoutArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterModifierWithoutArgument (GALGAS_setterMap & ioArgument_ioSetterMap,
                                           const GALGAS_string constinArgument_inSetterName,
                                           const GALGAS_bool constinArgument_inHasCompilerArgument,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 156))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 156)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 157)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 158)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 160)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 155)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getSetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringPredefinedTypeAST_getSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getSetterMap (defineExtensionMethod_stringPredefinedTypeAST_getSetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getSetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dataPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                     extensionMethod_dataPredefinedTypeAST_getSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getSetterMap (defineExtensionMethod_dataPredefinedTypeAST_getSetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperPredefinedTypeAST getSetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                     extensionMethod_filewrapperPredefinedTypeAST_getSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperPredefinedTypeAST_getSetterMap (defineExtensionMethod_filewrapperPredefinedTypeAST_getSetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getSetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bigintPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                     extensionMethod_bigintPredefinedTypeAST_getSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getSetterMap (defineExtensionMethod_bigintPredefinedTypeAST_getSetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@timerPredefinedTypeAST getSetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_timerPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                     extensionMethod_timerPredefinedTypeAST_getSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getSetterMap (defineExtensionMethod_timerPredefinedTypeAST_getSetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithoutArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithoutArgument (GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                 const GALGAS_string constinArgument_inInstanceMethodName,
                                                 const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 24)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 25)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 26)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 27)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 29)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 23)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithInputArgument (GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                   const GALGAS_string constinArgument_inInputArgumentTypeName,
                                                   const GALGAS_string constinArgument_inInputArgumentName,
                                                   const GALGAS_string constinArgument_inInstanceMethodName,
                                                   const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_2880 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2880 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 44)) ;
  }
  GALGAS_formalParameterSignature var_argList_2917 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 45)) ;
  var_argList_2917.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 46)), var_argumentTypeIndex_2880, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 46)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 46)) ;
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 48)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 49)), var_argList_2917, GALGAS_location::constructor_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 51)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 53)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 47)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getInstanceMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_formalParameterSignature var_argList_5001 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 105)) ;
  GALGAS_unifiedTypeMap_2D_entry var_t_5105 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_5105 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 106)) ;
  }
  var_argList_5001.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 107)), var_t_5105, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 107)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 107)) ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_5105 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 108)) ;
  }
  var_argList_5001.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)), var_t_5105, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 111))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 111)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 112)), var_argList_5001, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 114)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 116)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 110)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dataPredefinedTypeAST_getInstanceMethodMap (void) {
  enterExtensionMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                             extensionMethod_dataPredefinedTypeAST_getInstanceMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getInstanceMethodMap (defineExtensionMethod_dataPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getInstanceMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_formalParameterSignature var_argList_7194 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 174)) ;
  GALGAS_unifiedTypeMap_2D_entry var_t_7298 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_7298 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 175)) ;
  }
  var_argList_7194.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 176)), var_t_7298, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 176)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 176)) ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_7298 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 177)) ;
  }
  var_argList_7194.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)), var_t_7298, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 180))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 180)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 181)), var_argList_7194, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 183)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 185)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 179)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToExecutableFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 189))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 189)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 190)), var_argList_7194, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 192)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 194)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 188)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringPredefinedTypeAST_getInstanceMethodMap (void) {
  enterExtensionMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                             extensionMethod_stringPredefinedTypeAST_getInstanceMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getInstanceMethodMap (defineExtensionMethod_stringPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getInstanceMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 220)) ;
  GALGAS_unifiedTypeMap_2D_entry var_bigIntType_9004 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), var_bigIntType_9004 COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 222)) ;
  }
  GALGAS_formalParameterSignature var_argList_9041 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 223)) ;
  var_argList_9041.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 224)), var_bigIntType_9004, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 224)), GALGAS_string ("inDivisor")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 224)) ;
  var_argList_9041.addAssign_operation (GALGAS_string ("quotient").getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 225)), var_bigIntType_9004, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 225)), GALGAS_string ("outQuotient")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 225)) ;
  var_argList_9041.addAssign_operation (GALGAS_string ("remainder").getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 226)), var_bigIntType_9004, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 226)), GALGAS_string ("outRemainder")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 226)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("divideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 228))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 228)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 229)), var_argList_9041, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 231)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 233)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 227)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("floorDivideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 237))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 237)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 238)), var_argList_9041, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 240)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 242)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 236)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("ceilDivideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 246))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 246)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 247)), var_argList_9041, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 249)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 251)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 245)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap (void) {
  enterExtensionMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                             extensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getInstanceMethodMap (defineExtensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithInputArgument (GALGAS_classMethodMap & ioArgument_ioClassMethodMap,
                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                const GALGAS_string constinArgument_inClassMethodName,
                                                const GALGAS_string constinArgument_inArgumentTypeName,
                                                const GALGAS_string constinArgument_inArgumentName,
                                                const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_2341 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName, var_argumentTypeIndex_2341 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 26)) ;
  }
  GALGAS_formalParameterSignature var_argList_2378 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 27)) ;
  var_argList_2378.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 28)), var_argumentTypeIndex_2341, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 28)), constinArgument_inArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 28)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 30))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 30)), var_argList_2378, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 29)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWith3InputArguments'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_31__3350 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_31_, var_argumentTypeIndex_31__3350 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 52)) ;
  }
  var_argList_3220.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 53)), var_argumentTypeIndex_31__3350, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 53)), constinArgument_inArgumentName_31_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 53)) ;
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_32__3561 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_32_, var_argumentTypeIndex_32__3561 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 55)) ;
  }
  var_argList_3220.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 56)), var_argumentTypeIndex_32__3561, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 56)), constinArgument_inArgumentName_32_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 56)) ;
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_33__3772 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_33_, var_argumentTypeIndex_33__3772 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 58)) ;
  }
  var_argList_3220.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 59)), var_argumentTypeIndex_33__3772, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 59)), constinArgument_inArgumentName_33_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 59)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 61))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 61)), var_argList_3220, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 61)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithStringInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithStringInputArgument (GALGAS_classMethodMap & ioArgument_ioClassMethodMap,
                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      const GALGAS_string constinArgument_inClassMethodName,
                                                      const GALGAS_string constinArgument_inStringArgumentName,
                                                      const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_4455 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_argumentTypeIndex_4455 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 73)) ;
  }
  GALGAS_formalParameterSignature var_argList_4492 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 74)) ;
  var_argList_4492.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 75)), var_argumentTypeIndex_4455, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 75)), constinArgument_inStringArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 75)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 77))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 77)), var_argList_4492, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 76)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uintPredefinedTypeAST getClassMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_uintPredefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                          extensionMethod_uintPredefinedTypeAST_getClassMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_uintPredefinedTypeAST_getClassMethodMap (defineExtensionMethod_uintPredefinedTypeAST_getClassMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@applicationPredefinedTypeAST getClassMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_applicationPredefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_applicationPredefinedTypeAST.mSlotID,
                                          extensionMethod_applicationPredefinedTypeAST_getClassMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_applicationPredefinedTypeAST_getClassMethodMap (defineExtensionMethod_applicationPredefinedTypeAST_getClassMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getClassMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_unifiedTypeMap_2D_entry var_stringType_7510 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_7510 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 180)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_boolType_7619 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_boolType_7619 COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 181)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringPredefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                          extensionMethod_stringPredefinedTypeAST_getClassMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getClassMethodMap (defineExtensionMethod_stringPredefinedTypeAST_getClassMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binarysetPredefinedTypeAST getClassMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_binarysetPredefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                          extensionMethod_binarysetPredefinedTypeAST_getClassMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getClassMethodMap (defineExtensionMethod_binarysetPredefinedTypeAST_getClassMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'compilerCppName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_compilerCppName (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCompilerCppName ; // Returned variable
  result_outCompilerCppName = GALGAS_string ("inCompiler") ;
//---
  return result_outCompilerCppName ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compilerCppName = false ;
static GALGAS_string gOnceFunctionResult_compilerCppName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_compilerCppName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compilerCppName) {
    gOnceFunctionResult_compilerCppName = onceFunction_compilerCppName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compilerCppName = true ;
  }
  return gOnceFunctionResult_compilerCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compilerCppName (void) {
  gOnceFunctionResult_compilerCppName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_compilerCppName (NULL,
                                                             releaseOnceFunctionResult_compilerCppName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_compilerCppName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_compilerCppName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_compilerCppName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compilerCppName ("compilerCppName",
                                                                 functionWithGenericHeader_compilerCppName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_compilerCppName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'syntaxDirectedTranslationResultVarName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_syntaxDirectedTranslationResultVarName (C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("ioSyntaxDirectedTranslationResult") ;
//---
  return result_outName ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = false ;
static GALGAS_string gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_syntaxDirectedTranslationResultVarName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName) {
    gOnceFunctionResult_syntaxDirectedTranslationResultVarName = onceFunction_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = true ;
  }
  return gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_syntaxDirectedTranslationResultVarName (void) {
  gOnceFunctionResult_syntaxDirectedTranslationResultVarName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_syntaxDirectedTranslationResultVarName (NULL,
                                                                                    releaseOnceFunctionResult_syntaxDirectedTranslationResultVarName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_syntaxDirectedTranslationResultVarName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_syntaxDirectedTranslationResultVarName (C_Compiler * inCompiler,
                                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  return function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxDirectedTranslationResultVarName ("syntaxDirectedTranslationResultVarName",
                                                                                        functionWithGenericHeader_syntaxDirectedTranslationResultVarName,
                                                                                        & kTypeDescriptor_GALGAS_string,
                                                                                        0,
                                                                                        functionArgs_syntaxDirectedTranslationResultVarName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@galgas3GrammarComponentAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_galgas_33_GrammarComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = object ;
  result_result = GALGAS_string ("grammar ").add_operation (temp_0.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 290)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_galgas_33_GrammarComponentAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                          extensionGetter_galgas_33_GrammarComponentAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_galgas_33_GrammarComponentAST_keyRepresentation (defineExtensionGetter_galgas_33_GrammarComponentAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@galgas3SyntaxComponentAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = object ;
  result_result = GALGAS_string ("syntax ").add_operation (temp_0.getter_mSyntaxComponentName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 297)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                          extensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_galgas_33_SyntaxComponentAST_keyRepresentation (defineExtensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueComponentAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexiqueComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  const GALGAS_lexiqueComponentAST temp_0 = object ;
  result_result = GALGAS_string ("lexique ").add_operation (temp_0.getter_mLexiqueComponentName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 304)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexiqueComponentAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                          extensionGetter_lexiqueComponentAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexiqueComponentAST_keyRepresentation (defineExtensionGetter_lexiqueComponentAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@predefinedTypeAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_predefinedTypeAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  const GALGAS_predefinedTypeAST temp_0 = object ;
  result_result = GALGAS_string ("predefined type @").add_operation (temp_0.getter_mPredefinedTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 311)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_predefinedTypeAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                          extensionGetter_predefinedTypeAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_predefinedTypeAST_keyRepresentation (defineExtensionGetter_predefinedTypeAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@mapEntryDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_mapEntryDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_mapEntryDeclarationAST * object = (const cPtr_mapEntryDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryDeclarationAST) ;
  const GALGAS_mapEntryDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("map entry @").add_operation (temp_0.getter_mMapEntryTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 317)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_mapEntryDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_mapEntryDeclarationAST.mSlotID,
                                          extensionGetter_mapEntryDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_mapEntryDeclarationAST_keyRepresentation (defineExtensionGetter_mapEntryDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_enumDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  const GALGAS_enumDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("enum @").add_operation (temp_0.getter_mEnumTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 324)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_enumDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                          extensionGetter_enumDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_enumDeclarationAST_keyRepresentation (defineExtensionGetter_enumDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sortedListDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_sortedListDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("sorted list @").add_operation (temp_0.getter_mSortedListTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 331)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_sortedListDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                          extensionGetter_sortedListDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_sortedListDeclarationAST_keyRepresentation (defineExtensionGetter_sortedListDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@listDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_listDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("list @").add_operation (temp_0.getter_mListTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 338)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_listDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                          extensionGetter_listDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_listDeclarationAST_keyRepresentation (defineExtensionGetter_listDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@classDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_classDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  const GALGAS_classDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("class @").add_operation (temp_0.getter_mClassTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 345)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_classDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                          extensionGetter_classDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_classDeclarationAST_keyRepresentation (defineExtensionGetter_classDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_arrayDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("array @").add_operation (temp_0.getter_mArrayTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 352)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_arrayDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                          extensionGetter_arrayDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_arrayDeclarationAST_keyRepresentation (defineExtensionGetter_arrayDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@listmapDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_listmapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("listmap @").add_operation (temp_0.getter_mListmapTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 359)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_listmapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                          extensionGetter_listmapDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_listmapDeclarationAST_keyRepresentation (defineExtensionGetter_listmapDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_filewrapperDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  const GALGAS_filewrapperDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("filewrapper @").add_operation (temp_0.getter_mFilewrapperName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 366)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_filewrapperDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                          extensionGetter_filewrapperDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_filewrapperDeclarationAST_keyRepresentation (defineExtensionGetter_filewrapperDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_optionComponentDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("option ").add_operation (temp_0.getter_mOptionComponentName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 373)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_optionComponentDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                          extensionGetter_optionComponentDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_optionComponentDeclarationAST_keyRepresentation (defineExtensionGetter_optionComponentDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@graphDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_graphDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  const GALGAS_graphDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("graph @").add_operation (temp_0.getter_mGraphTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 380)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_graphDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                          extensionGetter_graphDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_graphDeclarationAST_keyRepresentation (defineExtensionGetter_graphDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externTypeDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_externTypeDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("extern @").add_operation (temp_0.getter_mExternTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 387)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_externTypeDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                          extensionGetter_externTypeDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_externTypeDeclarationAST_keyRepresentation (defineExtensionGetter_externTypeDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_onceFunctionDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  const GALGAS_onceFunctionDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("once function ").add_operation (temp_0.getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 394)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_onceFunctionDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                          extensionGetter_onceFunctionDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_onceFunctionDeclarationAST_keyRepresentation (defineExtensionGetter_onceFunctionDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externFunctionDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_externFunctionDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  const GALGAS_externFunctionDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("extern function ").add_operation (temp_0.getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 401)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_externFunctionDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                          extensionGetter_externFunctionDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_externFunctionDeclarationAST_keyRepresentation (defineExtensionGetter_externFunctionDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externRoutineDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_externRoutineDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  const GALGAS_externRoutineDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("extern routine ").add_operation (temp_0.getter_mRoutineName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 408)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_externRoutineDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                          extensionGetter_externRoutineDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_externRoutineDeclarationAST_keyRepresentation (defineExtensionGetter_externRoutineDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addExtensions'
//
//----------------------------------------------------------------------------------------------------------------------

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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inExtensionMethodMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 428)) COMMA_SOURCE_FILE ("semanticContext.galgas", 428)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_extensionMethodMapForType var_extensionMethodMapForType_22338 ;
      constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_22338, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 430)) ;
      cEnumerator_extensionMethodMapForType enumerator_22472 (var_extensionMethodMapForType_22338, kENUMERATION_UP) ;
      while (enumerator_22472.hasCurrentObject ()) {
        GALGAS_formalParameterSignature var_formalArgumentList_22504 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 432)) ;
        cEnumerator_formalParameterListAST enumerator_22571 (enumerator_22472.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_22571.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_typeIndex_22736 ;
          {
          GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_22571.current_mFormalArgumentTypeName (HERE), var_typeIndex_22736 COMMA_SOURCE_FILE ("semanticContext.galgas", 434)) ;
          }
          var_formalArgumentList_22504.addAssign_operation (enumerator_22571.current_mFormalSelector (HERE), var_typeIndex_22736, enumerator_22571.current_mFormalArgumentPassingMode (HERE), enumerator_22571.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 439)) ;
          enumerator_22571.gotoNextObject () ;
        }
        {
        ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_22472.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 443)), var_formalArgumentList_22504, enumerator_22472.current_lkey (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 445)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 447)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 441)) ;
        }
        enumerator_22472.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inExtensionGetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 453)) COMMA_SOURCE_FILE ("semanticContext.galgas", 453)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_extensionGetterMapForType var_extensionGetterMapForType_23396 ;
      constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_23396, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 455)) ;
      cEnumerator_extensionGetterMapForType enumerator_23437 (var_extensionGetterMapForType_23396, kENUMERATION_UP) ;
      while (enumerator_23437.hasCurrentObject ()) {
        GALGAS_functionSignature var_formalArgumentList_23484 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 457)) ;
        cEnumerator_formalInputParameterListAST enumerator_23531 (enumerator_23437.current_mInputFormalParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_23531.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_typeIndex_23644 ;
          {
          GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_23531.current_mFormalArgumentTypeName (HERE), var_typeIndex_23644 COMMA_SOURCE_FILE ("semanticContext.galgas", 459)) ;
          }
          var_formalArgumentList_23484.addAssign_operation (enumerator_23531.current_mFormalSelector (HERE), var_typeIndex_23644, enumerator_23531.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 460)) ;
          enumerator_23531.gotoNextObject () ;
        }
        GALGAS_unifiedTypeMap_2D_entry var_returnedType_23844 ;
        {
        GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_23437.current_mResultTypeName (HERE), var_returnedType_23844 COMMA_SOURCE_FILE ("semanticContext.galgas", 462)) ;
        }
        {
        ioArgument_ioGetterMap.setter_insertKey (enumerator_23437.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 465)), var_formalArgumentList_23484, enumerator_23437.current_lkey (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 467)), GALGAS_bool (true), var_returnedType_23844, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 470)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 463)) ;
        }
        enumerator_23437.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inExtensionSetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.getter_string (SOURCE_FILE ("semanticContext.galgas", 476)) COMMA_SOURCE_FILE ("semanticContext.galgas", 476)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_extensionSetterMapForType var_extensionSetterMapForType_24287 ;
      constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_24287, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 478)) ;
      cEnumerator_extensionSetterMapForType enumerator_24421 (var_extensionSetterMapForType_24287, kENUMERATION_UP) ;
      while (enumerator_24421.hasCurrentObject ()) {
        GALGAS_formalParameterSignature var_formalArgumentList_24475 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 480)) ;
        cEnumerator_formalParameterListAST enumerator_24517 (enumerator_24421.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_24517.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_typeIndex_24630 ;
          {
          GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_24517.current_mFormalArgumentTypeName (HERE), var_typeIndex_24630 COMMA_SOURCE_FILE ("semanticContext.galgas", 482)) ;
          }
          var_formalArgumentList_24475.addAssign_operation (enumerator_24517.current_mFormalSelector (HERE), var_typeIndex_24630, enumerator_24517.current_mFormalArgumentPassingMode (HERE), enumerator_24517.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 483)) ;
          enumerator_24517.gotoNextObject () ;
        }
        {
        ioArgument_ioSetterMap.setter_insertKey (enumerator_24421.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 487)), var_formalArgumentList_24475, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 490)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 485)) ;
        }
        enumerator_24421.gotoNextObject () ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'elementTypeNameSuffix'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_elementTypeNameSuffix (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("-element") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_elementTypeNameSuffix = false ;
static GALGAS_string gOnceFunctionResult_elementTypeNameSuffix ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_elementTypeNameSuffix (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_elementTypeNameSuffix) {
    gOnceFunctionResult_elementTypeNameSuffix = onceFunction_elementTypeNameSuffix (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_elementTypeNameSuffix = true ;
  }
  return gOnceFunctionResult_elementTypeNameSuffix ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_elementTypeNameSuffix (void) {
  gOnceFunctionResult_elementTypeNameSuffix.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_elementTypeNameSuffix (NULL,
                                                                   releaseOnceFunctionResult_elementTypeNameSuffix) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_elementTypeNameSuffix [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_elementTypeNameSuffix (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_elementTypeNameSuffix (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_elementTypeNameSuffix ("elementTypeNameSuffix",
                                                                       functionWithGenericHeader_elementTypeNameSuffix,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_elementTypeNameSuffix) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'recursivelyEnumerateDirectories'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_uint var_currentDirectoryIndex_27474 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 556)) ;
  GALGAS_stringlist var_files_27579 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 558)) ;
  outArgument_outWrapperFileMap = GALGAS_wrapperFileMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 559)) ;
  cEnumerator_stringlist enumerator_27667 (var_files_27579, kENUMERATION_UP) ;
  while (enumerator_27667.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inTextFileExtensionMap.getter_hasKey (enumerator_27667.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 561)) COMMA_SOURCE_FILE ("semanticContext.galgas", 561)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_absoluteFilePath_27769 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 562)).add_operation (enumerator_27667.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 562)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_27667.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 564))  COMMA_SOURCE_FILE ("semanticContext.galgas", 564)), var_absoluteFilePath_27769, GALGAS_bool (true), var_currentDirectoryIndex_27474, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 563)) ;
        }
        ioArgument_ioWrapperFileIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 570)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inBinaryFileExtensionMap.getter_hasKey (enumerator_27667.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 571)) COMMA_SOURCE_FILE ("semanticContext.galgas", 571)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_string var_absoluteFilePath_28143 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 572)).add_operation (enumerator_27667.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 572)) ;
          {
          outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_27667.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 574))  COMMA_SOURCE_FILE ("semanticContext.galgas", 574)), var_absoluteFilePath_28143, GALGAS_bool (false), var_currentDirectoryIndex_27474, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 573)) ;
          }
          ioArgument_ioWrapperFileIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 580)) ;
        }
      }
    }
    enumerator_27667.gotoNextObject () ;
  }
  GALGAS_stringlist var_directories_28492 = constinArgument_inAbsoluteSourcePath.getter_directories (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 584)) ;
  outArgument_outWrapperDirectoryMap = GALGAS_wrapperDirectoryMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 585)) ;
  cEnumerator_stringlist enumerator_28590 (var_directories_28492, kENUMERATION_UP) ;
  while (enumerator_28590.hasCurrentObject ()) {
    GALGAS_wrapperFileMap var_internalWrapperFileMap_28636 ;
    GALGAS_wrapperDirectoryMap var_internalWrapperDirectoryMap_28689 ;
    GALGAS_uint var_theDirectoryIndex_28717 = ioArgument_ioWrapperDirectoryIndex ;
    {
    routine_recursivelyEnumerateDirectories (constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 591)).add_operation (enumerator_28590.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 591)), constinArgument_inPathInWrapper.add_operation (enumerator_28590.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 592)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 592)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_28636, var_internalWrapperDirectoryMap_28689, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 590)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_28590.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 601))  COMMA_SOURCE_FILE ("semanticContext.galgas", 601)), var_internalWrapperFileMap_28636, var_internalWrapperDirectoryMap_28689, var_theDirectoryIndex_28717, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 600)) ;
    }
    enumerator_28590.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                              const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                              const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                              const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_29811 = GALGAS_filewrapperTemplateMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 618)) ;
  const GALGAS_filewrapperDeclarationAST temp_0 = object ;
  cEnumerator_filewrapperTemplateListAST enumerator_29858 (temp_0.getter_mFilewrapperTemplateList (HERE), kENUMERATION_UP) ;
  while (enumerator_29858.hasCurrentObject ()) {
    GALGAS_functionSignature var_templateSignature_29902 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 620)) ;
    cEnumerator_formalTemplateInputParameterListAST enumerator_29963 (enumerator_29858.current_mFilewrapperTemplateFormalInputParameters (HERE), kENUMERATION_UP) ;
    while (enumerator_29963.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_30083 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_29963.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_30083 COMMA_SOURCE_FILE ("semanticContext.galgas", 622)) ;
      }
      var_templateSignature_29902.addAssign_operation (enumerator_29963.current_mFormalTemplateSelector (HERE), var_parameterTypeIndex_30083, enumerator_29963.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 623)) ;
      enumerator_29963.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap_29811.setter_insertKey (enumerator_29858.current_mFilewrapperTemplateName (HERE), var_templateSignature_29902, enumerator_29858.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 625)) ;
    }
    enumerator_29858.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_textExtensionMap_30408 = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 632)) ;
  const GALGAS_filewrapperDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_30464 (temp_1.getter_mFilewrapperTextFileExtensionList (HERE), kENUMERATION_UP) ;
  while (enumerator_30464.hasCurrentObject ()) {
    {
    var_textExtensionMap_30408.setter_insertKey (enumerator_30464.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 634)) ;
    }
    enumerator_30464.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_binaryFileExtensionMap_30599 = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 637)) ;
  const GALGAS_filewrapperDeclarationAST temp_2 = object ;
  cEnumerator_lstringlist enumerator_30657 (temp_2.getter_mFilewrapperBinaryFileExtensionList (HERE), kENUMERATION_UP) ;
  while (enumerator_30657.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_textExtensionMap_30408.getter_hasKey (enumerator_30657.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("semanticContext.galgas", 639)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_30657.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 640)), GALGAS_string ("the '").add_operation (enumerator_30657.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 640)).add_operation (GALGAS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 640)), fixItArray4  COMMA_SOURCE_FILE ("semanticContext.galgas", 640)) ;
      }
    }
    if (kBoolFalse == test_3) {
      {
      var_binaryFileExtensionMap_30599.setter_insertKey (enumerator_30657.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 642)) ;
      }
    }
    enumerator_30657.gotoNextObject () ;
  }
  GALGAS_wrapperFileMap var_regularRootFileMap_30938 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_30981 ;
  GALGAS_string var_absoluteSourcePath_31010 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_filewrapperDeclarationAST temp_6 = object ;
    test_5 = GALGAS_bool (kIsEqual, temp_6.getter_mFilewrapperPath (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 649)).getter_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 649)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_filewrapperDeclarationAST temp_7 = object ;
      var_absoluteSourcePath_31010 = temp_7.getter_mFilewrapperPath (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 650)) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_filewrapperDeclarationAST temp_8 = object ;
    const GALGAS_filewrapperDeclarationAST temp_9 = object ;
    var_absoluteSourcePath_31010 = temp_8.getter_mSourceFileAbsolutePath (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 652)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 652)).add_operation (temp_9.getter_mFilewrapperPath (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 652)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_absoluteSourcePath_31010.getter_directoryExists (SOURCE_FILE ("semanticContext.galgas", 654)).operator_not (SOURCE_FILE ("semanticContext.galgas", 654)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_filewrapperDeclarationAST temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.getter_mFilewrapperPath (HERE).getter_location (SOURCE_FILE ("semanticContext.galgas", 655)), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_31010, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 655)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 655)), fixItArray12  COMMA_SOURCE_FILE ("semanticContext.galgas", 655)) ;
      var_regularRootFileMap_30938.drop () ; // Release error dropped variable
      var_wrapperDirectoryMap_30981.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    GALGAS_uint var_wrapperFileIndex_31527 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_wrapperDirectoryIndex_31563 = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_recursivelyEnumerateDirectories (var_absoluteSourcePath_31010, GALGAS_string ("/"), var_textExtensionMap_30408, var_binaryFileExtensionMap_30599, var_regularRootFileMap_30938, var_wrapperDirectoryMap_30981, var_wrapperFileIndex_31527, var_wrapperDirectoryIndex_31563, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 661)) ;
    }
  }
  {
  const GALGAS_filewrapperDeclarationAST temp_13 = object ;
  const GALGAS_filewrapperDeclarationAST temp_14 = object ;
  const GALGAS_filewrapperDeclarationAST temp_15 = object ;
  const GALGAS_filewrapperDeclarationAST temp_16 = object ;
  ioArgument_ioSemanticContext.mProperty_mFilewrapperMap.setter_insertKey (temp_13.getter_mFilewrapperName (HERE), temp_14.getter_mFilewrapperPath (HERE), temp_15.getter_mFilewrapperTextFileExtensionList (HERE), var_regularRootFileMap_30938, var_wrapperDirectoryMap_30981, var_filewrapperTemplateMap_29811, temp_16.getter_mIsInternal (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 673)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                               extensionMethod_filewrapperDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_enterInSemanticContext (defineExtensionMethod_filewrapperDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externRoutineDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externRoutineDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  GALGAS_formalParameterSignature var_routineSignature_32632 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 692)) ;
  const GALGAS_externRoutineDeclarationAST temp_0 = object ;
  cEnumerator_formalParameterListAST enumerator_32699 (temp_0.getter_mFormalArgumentList (HERE), kENUMERATION_UP) ;
  while (enumerator_32699.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_32817 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_32699.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_32817 COMMA_SOURCE_FILE ("semanticContext.galgas", 694)) ;
    }
    var_routineSignature_32632.addAssign_operation (enumerator_32699.current_mFormalSelector (HERE), var_parameterTypeIndex_32817, enumerator_32699.current_mFormalArgumentPassingMode (HERE), enumerator_32699.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 695)) ;
    enumerator_32699.gotoNextObject () ;
  }
  {
  const GALGAS_externRoutineDeclarationAST temp_1 = object ;
  const GALGAS_externRoutineDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticContext.mProperty_mRoutineMap.setter_insertKey (temp_1.getter_mRoutineName (HERE), var_routineSignature_32632, temp_2.getter_mIsInternal (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 698)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externRoutineDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                               extensionMethod_externRoutineDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_enterInSemanticContext (defineExtensionMethod_externRoutineDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_procDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procDeclarationAST * object = (const cPtr_procDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_procDeclarationAST) ;
  GALGAS_formalParameterSignature var_routineSignature_33633 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 713)) ;
  const GALGAS_procDeclarationAST temp_0 = object ;
  cEnumerator_formalParameterListAST enumerator_33700 (temp_0.getter_mFormalArgumentList (HERE), kENUMERATION_UP) ;
  while (enumerator_33700.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_33818 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_33700.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_33818 COMMA_SOURCE_FILE ("semanticContext.galgas", 715)) ;
    }
    var_routineSignature_33633.addAssign_operation (enumerator_33700.current_mFormalSelector (HERE), var_parameterTypeIndex_33818, enumerator_33700.current_mFormalArgumentPassingMode (HERE), enumerator_33700.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 716)) ;
    enumerator_33700.gotoNextObject () ;
  }
  const GALGAS_procDeclarationAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.getter_mRoutineInstructionList (HERE), ioArgument_ioSemanticContext.mProperty_mTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 719)) ;
  {
  const GALGAS_procDeclarationAST temp_2 = object ;
  const GALGAS_procDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticContext.mProperty_mRoutineMap.setter_insertKey (temp_2.getter_mRoutineName (HERE), var_routineSignature_33633, temp_3.getter_mIsInternal (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 721)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_procDeclarationAST.mSlotID,
                                               extensionMethod_procDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procDeclarationAST_enterInSemanticContext (defineExtensionMethod_procDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externFunctionDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externFunctionDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  GALGAS_functionSignature var_functionSignature_34819 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 736)) ;
  const GALGAS_externFunctionDeclarationAST temp_0 = object ;
  cEnumerator_formalInputParameterListAST enumerator_34879 (temp_0.getter_mFormalArgumentList (HERE), kENUMERATION_UP) ;
  while (enumerator_34879.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_34997 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_34879.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_34997 COMMA_SOURCE_FILE ("semanticContext.galgas", 738)) ;
    }
    var_functionSignature_34819.addAssign_operation (enumerator_34879.current_mFormalSelector (HERE), var_parameterTypeIndex_34997, enumerator_34879.current_mFormalArgumentTypeName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 739)) ;
    enumerator_34879.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_resultTypeIndex_35222 ;
  {
  const GALGAS_externFunctionDeclarationAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_1.getter_mResultTypeName (HERE), var_resultTypeIndex_35222 COMMA_SOURCE_FILE ("semanticContext.galgas", 742)) ;
  }
  {
  const GALGAS_externFunctionDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_2.getter_mFunctionName (HERE), var_functionSignature_34819, var_resultTypeIndex_35222, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 744)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externFunctionDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                               extensionMethod_externFunctionDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_enterInSemanticContext (defineExtensionMethod_externFunctionDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_onceFunctionDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_resultTypeIndex_36057 ;
  {
  const GALGAS_onceFunctionDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.getter_mResultTypeName (HERE), var_resultTypeIndex_36057 COMMA_SOURCE_FILE ("semanticContext.galgas", 760)) ;
  }
  {
  const GALGAS_onceFunctionDeclarationAST temp_1 = object ;
  const GALGAS_onceFunctionDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_1.getter_mFunctionName (HERE), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 762)), var_resultTypeIndex_36057, temp_2.getter_mIsInternal (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 762)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_onceFunctionDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                               extensionMethod_onceFunctionDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_enterInSemanticContext (defineExtensionMethod_onceFunctionDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3SyntaxComponentAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = object ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_1 = object ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_2 = object ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_3 = object ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_4 = object ;
  ioArgument_ioSemanticContext.mProperty_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (temp_0.getter_mSyntaxComponentName (HERE), temp_1.getter_mLexiqueName (HERE), temp_2.getter_mNonterminalDeclarationList (HERE), temp_3.getter_mRuleList (HERE), temp_4.getter_mHasTranslateFeature (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 773)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                               extensionMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext (defineExtensionMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3GrammarComponentAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                  const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  GALGAS_grammarLabelMap var_grammarLabelMap_37497 = GALGAS_grammarLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 791)) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = object ;
  cEnumerator_nonTerminalLabelListAST enumerator_37541 (temp_0.getter_mStartSymbolLabelList (HERE), kENUMERATION_UP) ;
  while (enumerator_37541.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_formalArgumentList_37618 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 794)) ;
    cEnumerator_formalParameterListAST enumerator_37657 (enumerator_37541.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_37657.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_argumentType_37771 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_37657.current_mFormalArgumentTypeName (HERE), var_argumentType_37771 COMMA_SOURCE_FILE ("semanticContext.galgas", 796)) ;
      }
      var_formalArgumentList_37618.addAssign_operation (enumerator_37657.current_mFormalSelector (HERE), var_argumentType_37771, enumerator_37657.current_mFormalArgumentPassingMode (HERE), enumerator_37657.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 797)) ;
      enumerator_37657.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_37497.setter_insertKey (enumerator_37541.current_mLabelName (HERE), var_formalArgumentList_37618, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 803)) ;
    }
    enumerator_37541.gotoNextObject () ;
  }
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_1 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = object ;
  ioArgument_ioSemanticContext.mProperty_mGrammarMap.setter_insertGrammar (temp_1.getter_mGrammarComponentName (HERE), var_grammarLabelMap_37497, temp_2.getter_mHasIndexing (HERE).getter_bool (HERE), temp_3.getter_mHasTranslateFeature (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 809)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                               extensionMethod_galgas_33_GrammarComponentAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (defineExtensionMethod_galgas_33_GrammarComponentAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lexicalTypeMap var_lexicalTypeMap_38821 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 825)) ;
  GALGAS_lexicalAttributeMap var_lexicalAttributeMap_38889 = GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 826)) ;
  {
  const GALGAS_lexiqueComponentAST temp_0 = object ;
  routine_buildLexicalAttributeMap (var_lexicalTypeMap_38821, temp_0.getter_mLexicalAttributeList (HERE), var_lexicalAttributeMap_38889, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 827)) ;
  }
  GALGAS_terminalMap var_terminalMap_39071 = GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 833)) ;
  const GALGAS_lexiqueComponentAST temp_1 = object ;
  cEnumerator_terminalDeclarationListAST enumerator_39118 (temp_1.getter_mTerminalDeclarationList (HERE), kENUMERATION_UP) ;
  while (enumerator_39118.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_39146 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 835)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_39205 (enumerator_39118.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_39205.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_39252 ;
      var_lexicalAttributeMap_38889.method_searchKey (enumerator_39205.current_mAttributeName (HERE), var_attributeLexicalType_39252, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 838)) ;
      var_argumentTypeList_39146.addAssign_operation (enumerator_39205.current_mFormalSelector (HERE), enumerator_39205.current_mAttributeName (HERE).getter_string (HERE), var_attributeLexicalType_39252  COMMA_SOURCE_FILE ("semanticContext.galgas", 839)) ;
      enumerator_39205.gotoNextObject () ;
    }
    {
    var_terminalMap_39071.setter_insertKey (enumerator_39118.current_mName (HERE), var_argumentTypeList_39146, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 841)) ;
    }
    enumerator_39118.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_2 = object ;
  cEnumerator_lexicalListDeclarationListAST enumerator_39535 (temp_2.getter_mLexicalListDeclarationList (HERE), kENUMERATION_UP) ;
  while (enumerator_39535.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_39563 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 845)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_39622 (enumerator_39535.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_39622.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_39669 ;
      var_lexicalAttributeMap_38889.method_searchKey (enumerator_39622.current_mAttributeName (HERE), var_attributeLexicalType_39669, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 848)) ;
      var_argumentTypeList_39563.addAssign_operation (enumerator_39622.current_mFormalSelector (HERE), enumerator_39622.current_mAttributeName (HERE).getter_string (HERE), var_attributeLexicalType_39669  COMMA_SOURCE_FILE ("semanticContext.galgas", 849)) ;
      enumerator_39622.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_39866 (enumerator_39535.current_mEntryList (HERE), kENUMERATION_UP) ;
    while (enumerator_39866.hasCurrentObject ()) {
      {
      var_terminalMap_39071.setter_insertKey (enumerator_39866.current_mTerminalSpelling (HERE), var_argumentTypeList_39563, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 852)) ;
      }
      enumerator_39866.gotoNextObject () ;
    }
    enumerator_39535.gotoNextObject () ;
  }
  {
  const GALGAS_lexiqueComponentAST temp_3 = object ;
  const GALGAS_lexiqueComponentAST temp_4 = object ;
  const GALGAS_lexiqueComponentAST temp_5 = object ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_3.getter_mLexiqueComponentName (HERE), var_terminalMap_39071, temp_4.getter_mIndexingListAST (HERE), temp_5.getter_mIndexingDirectory (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 856)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueComponentAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                               extensionMethod_lexiqueComponentAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueComponentAST_enterInSemanticContext (defineExtensionMethod_lexiqueComponentAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3GrammarComponentAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_1 = object ;
  GALGAS_lstring var_key_42206 = GALGAS_lstring::constructor_new (GALGAS_string ("grammar ").add_operation (temp_0.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 895)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 895)), temp_1.getter_mGrammarComponentName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 895)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_42206, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 896)) ;
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = object ;
  cEnumerator_lstringlist enumerator_42392 (temp_3.getter_mSyntaxComponents (HERE), kENUMERATION_UP) ;
  while (enumerator_42392.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_42206, GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (enumerator_42392.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 898)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 898)), enumerator_42392.current_mValue (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 898)) COMMA_SOURCE_FILE ("semanticContext.galgas", 898)) ;
    }
    enumerator_42392.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                                extensionMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph (defineExtensionMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3SyntaxComponentAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = object ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_1 = object ;
  GALGAS_lstring var_key_43099 = GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (temp_0.getter_mSyntaxComponentName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 910)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 910)), temp_1.getter_mSyntaxComponentName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 910)) ;
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_43099, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 911)) ;
  }
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_3 = object ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_43099, GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (temp_3.getter_mLexiqueName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 912)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 912)), temp_4.getter_mLexiqueName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 912)) COMMA_SOURCE_FILE ("semanticContext.galgas", 912)) ;
  }
  const GALGAS_galgas_33_SyntaxComponentAST temp_5 = object ;
  cEnumerator_syntaxRuleListAST enumerator_43398 (temp_5.getter_mRuleList (HERE), kENUMERATION_UP) ;
  while (enumerator_43398.hasCurrentObject ()) {
    cEnumerator_syntaxRuleLabelListAST enumerator_43426 (enumerator_43398.current_mLabelList (HERE), kENUMERATION_UP) ;
    while (enumerator_43426.hasCurrentObject ()) {
      cEnumerator_formalParameterListAST enumerator_43462 (enumerator_43426.current_mFormalArguments (HERE), kENUMERATION_UP) ;
      while (enumerator_43462.hasCurrentObject ()) {
        switch (enumerator_43462.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_43099, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_43462.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 917)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 917)), enumerator_43462.current_mFormalArgumentTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 917)) COMMA_SOURCE_FILE ("semanticContext.galgas", 917)) ;
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
        enumerator_43462.gotoNextObject () ;
      }
      enumerator_43426.gotoNextObject () ;
    }
    enumerator_43398.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                                extensionMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph (defineExtensionMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_lexiqueComponentAST temp_0 = object ;
  const GALGAS_lexiqueComponentAST temp_1 = object ;
  GALGAS_lstring var_key_44363 = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (temp_0.getter_mLexiqueComponentName (HERE).getter_string (SOURCE_FILE ("semanticContext.galgas", 933)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 933)), temp_1.getter_mLexiqueComponentName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 933)) ;
  {
  const GALGAS_lexiqueComponentAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_44363, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 934)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueComponentAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                                extensionMethod_lexiqueComponentAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueComponentAST_enterDeclarationInGraph (defineExtensionMethod_lexiqueComponentAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externFunctionDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 945)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externFunctionDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                                extensionMethod_externFunctionDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_externFunctionDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 956)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                                extensionMethod_onceFunctionDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_onceFunctionDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externRoutineDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 967)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externRoutineDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                                extensionMethod_externRoutineDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_externRoutineDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 978)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                                extensionMethod_filewrapperDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_filewrapperDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateInstructionList (GALGAS_stringset & ioArgument_ioInclusionSet,
                                      const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 28)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_2536 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_2536.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_2536.current (HERE).getter_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 30)) ;
    enumerator_2536.gotoNextObject () ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 38)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration implementationCppFileName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_semanticTypeForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  const GALGAS_semanticTypeForGeneration temp_0 = object ;
  result_outName = temp_0.getter_mSelfTypeEntry (HERE).getter_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 248)) ;
//---
  return result_outName ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticTypeForGeneration_implementationCppFileName (void) {
  enterExtensionGetter_implementationCppFileName (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                                  extensionGetter_semanticTypeForGeneration_implementationCppFileName) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticTypeForGeneration_implementationCppFileName (defineExtensionGetter_semanticTypeForGeneration_implementationCppFileName, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration hasCppHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_semanticTypeForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (true) ;
//---
  return result_outHasHeader ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticTypeForGeneration_hasCppHeaderFile (void) {
  enterExtensionGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                         extensionGetter_semanticTypeForGeneration_hasCppHeaderFile) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticTypeForGeneration_hasCppHeaderFile (defineExtensionGetter_semanticTypeForGeneration_hasCppHeaderFile, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_semanticTypeForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  const GALGAS_semanticTypeForGeneration temp_0 = object ;
  result_result = temp_0.getter_mSelfTypeEntry (HERE).getter_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 260)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticTypeForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                     extensionGetter_semanticTypeForGeneration_isPredefined) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticTypeForGeneration_isPredefined (defineExtensionGetter_semanticTypeForGeneration_isPredefined, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_semanticTypeForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  const GALGAS_semanticTypeForGeneration temp_0 = object ;
  result_outHeaderKind = temp_0.getter_mSelfTypeEntry (HERE).getter_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 266)) ;
//---
  return result_outHeaderKind ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticTypeForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                   extensionGetter_semanticTypeForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticTypeForGeneration_headerKind (defineExtensionGetter_semanticTypeForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration implementationCppFileName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                           C_Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_semanticDeclarationWithHeaderForGeneration * object = (const cPtr_semanticDeclarationWithHeaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticDeclarationWithHeaderForGeneration) ;
  const GALGAS_semanticDeclarationWithHeaderForGeneration temp_0 = object ;
  result_outName = temp_0.getter_mImplementationCppFileName (HERE) ;
//---
  return result_outName ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (void) {
  enterExtensionGetter_implementationCppFileName (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                                  extensionGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration hasCppHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  const cPtr_semanticDeclarationWithHeaderForGeneration * object = (const cPtr_semanticDeclarationWithHeaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticDeclarationWithHeaderForGeneration) ;
  const GALGAS_semanticDeclarationWithHeaderForGeneration temp_0 = object ;
  result_outHasHeader = temp_0.getter_mHasHeader (HERE) ;
//---
  return result_outHasHeader ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (void) {
  enterExtensionGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                         extensionGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_semanticDeclarationWithHeaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas", 295)) ;
//---
  return result_outHeaderKind ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                   extensionGetter_semanticDeclarationWithHeaderForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_headerKind (defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_semanticDeclarationWithHeaderForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                     extensionGetter_semanticDeclarationWithHeaderForGeneration_isPredefined) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_isPredefined (defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_isPredefined, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

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
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 60)) ;
  }
  {
  routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inLocalConstantList, constinArgument_inLocalInitializedVariableList, constinArgument_inSemanticInstructionListAST, ioArgument_ioVariableMap, outArgument_outInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 62)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 73)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionListWithoutBranch'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionListWithoutBranch (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                          const GALGAS_localConstantList constinArgument_inLocalConstantList,
                                                          const GALGAS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                                          const GALGAS_semanticInstructionListAST constinArgument_inSemanticInstructionListAST,
                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                          GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 88)) ;
  cEnumerator_localConstantList enumerator_4918 (constinArgument_inLocalConstantList, kENUMERATION_UP) ;
  while (enumerator_4918.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_4918.current_mNoWarningIfUnused (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_4918.current_mName (HERE), enumerator_4918.current_mType (HERE), enumerator_4918.current_mCppName (HERE), enumerator_4918.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 92)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      {
      ioArgument_ioVariableMap.setter_insertLocalConstant (enumerator_4918.current_mName (HERE), enumerator_4918.current_mType (HERE), enumerator_4918.current_mCppName (HERE), enumerator_4918.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 94)) ;
      }
    }
    enumerator_4918.gotoNextObject () ;
  }
  cEnumerator_localInitializedVariableList enumerator_5207 (constinArgument_inLocalInitializedVariableList, kENUMERATION_UP) ;
  while (enumerator_5207.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (enumerator_5207.current_mName (HERE), enumerator_5207.current_mType (HERE), enumerator_5207.current_mCppName (HERE), enumerator_5207.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 99)) ;
    }
    enumerator_5207.gotoNextObject () ;
  }
  cEnumerator_semanticInstructionListAST enumerator_5362 (constinArgument_inSemanticInstructionListAST, kENUMERATION_UP) ;
  while (enumerator_5362.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_5362.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 103)) ;
    enumerator_5362.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 152)))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 153)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 152)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputActualParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 154)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 155)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 156)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 157)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 154)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputActualParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (temp_4.getter_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_outputActualParameterAST temp_5 = object ;
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_5.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 160)), GALGAS_string ("the selector should be '!").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 161)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 161)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 161)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 160)) ;
      }
    }
    GALGAS_semanticExpressionForGeneration var_expression_8284 ;
    const GALGAS_outputActualParameterAST temp_9 = object ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_9.getter_mOutputActualParameterExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_8284, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 163)) ;
    {
    const GALGAS_outputActualParameterAST temp_10 = object ;
    routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inFormalArgumentType, var_expression_8284.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 172)), temp_10.getter_mEndOfExpressionLocation (HERE), var_expression_8284, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 172)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_expression_8284  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 174))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 174)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                   extensionMethod_outputActualParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                      const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                      const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                      const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                      GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                      GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputActualParameterAST * object = (const cPtr_outputInputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputActualParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 193)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputActualParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 194)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 196)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 196)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 194)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputActualParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (temp_4.getter_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_outputInputActualParameterAST temp_5 = object ;
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_5.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)), GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)) ;
      }
    }
  }
  GALGAS_string var_variableCppName_10019 ;
  GALGAS_unifiedTypeMap_2D_entry var_parameterType_10142 ;
  {
  const GALGAS_outputInputActualParameterAST temp_9 = object ;
  GALGAS_string joker_10161 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_9.getter_mOutputInputActualParameterName (HERE), var_parameterType_10142, var_variableCppName_10019, joker_10161, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)) ;
  }
  GALGAS_unifiedTypeMapEntryList var_typeList_10178 = GALGAS_unifiedTypeMapEntryList::constructor_listWithValue (var_parameterType_10142  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 203)) ;
  const GALGAS_outputInputActualParameterAST temp_10 = object ;
  cEnumerator_lstringlist enumerator_10274 (temp_10.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_10274.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_10297 = var_parameterType_10142.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 205)) ;
    GALGAS_bool var_isPublic_10389 ;
    var_propertyMap_10297.method_searchKey (enumerator_10274.current_mValue (HERE), var_isPublic_10389, var_parameterType_10142, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 206)) ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_isPublic_10389.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 211)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_10274.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 212)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 212)) ;
      }
    }
    var_typeList_10178.addAssign_operation (var_parameterType_10142  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 214)) ;
    enumerator_10274.gotoNextObject () ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_10142)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_outputInputActualParameterAST temp_14 = object ;
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.getter_mOutputInputActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 218)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_10142.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 219)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 219)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 220)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 220)), fixItArray15  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 218)) ;
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_outputInputActualParameterAST temp_17 = object ;
    test_16 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_17.getter_mOutputInputActualParameterName (HERE).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 223)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 223)).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_outputInputActualParameterAST temp_18 = object ;
      TC_Array <C_FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.getter_mOutputInputActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 224)), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray19  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 224)) ;
    }
  }
  const GALGAS_outputInputActualParameterAST temp_20 = object ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_20.getter_mOutputInputActualParameterName (HERE).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 227))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 227)) ;
  const GALGAS_outputInputActualParameterAST temp_21 = object ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (var_parameterType_10142, var_variableCppName_10019, temp_21.getter_mStructAttributeList (HERE), var_typeList_10178  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 229))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 229)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                   extensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputInputActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSingleJokerParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputSingleJokerParameterAST * object = (const cPtr_outputInputSingleJokerParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputSingleJokerParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 249)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputSingleJokerParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 250)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 251)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 251)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 252)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 252)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 250)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputSingleJokerParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (temp_4.getter_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_outputInputSingleJokerParameterAST temp_5 = object ;
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_5.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 254)), GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 254)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 254)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 254)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 254)) ;
      }
    }
  }
  GALGAS_string var_defaultConstructorName_12720 = constinArgument_inFormalArgumentType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 256)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_defaultConstructorName_12720.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_outputInputSingleJokerParameterAST temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 258)), GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 258)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 258)), fixItArray11  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 258)) ;
    }
  }
  const GALGAS_outputInputSingleJokerParameterAST temp_12 = object ;
  GALGAS_string var_cppVarName_12998 = GALGAS_string ("joker_").add_operation (temp_12.getter_mActualSelector (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 261)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 261)) ;
  const GALGAS_outputInputSingleJokerParameterAST temp_13 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_12998, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, temp_13.getter_mActualSelector (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 266))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 262))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 262)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_12998, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)), GALGAS_unifiedTypeMapEntryList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 271))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                   extensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                     const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                     const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                     const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                                     const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                     const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                     GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                     GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputJokerParameterAST * object = (const cPtr_outputInputJokerParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputJokerParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 287)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputJokerParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mQualifierLocation (HERE), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 289)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 289)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 290)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 290)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 288)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_14679 = constinArgument_inFormalArgumentType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 292)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_defaultConstructorName_14679.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputJokerParameterAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mQualifierLocation (HERE), GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)) ;
    }
  }
  const GALGAS_outputInputJokerParameterAST temp_6 = object ;
  const GALGAS_outputInputJokerParameterAST temp_7 = object ;
  GALGAS_string var_cppVarName_14960 = GALGAS_string ("joker_").add_operation (temp_6.getter_mQualifierLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 297)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 297)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 297)).add_operation (temp_7.getter_mJokerIndex (HERE).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 297)) ;
  const GALGAS_outputInputJokerParameterAST temp_8 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_14960, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, temp_8.getter_mQualifierLocation (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 302))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 298))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 298)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_14960, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 306)), GALGAS_unifiedTypeMapEntryList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 307))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 303))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 303)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                   extensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                                const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                                const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                                const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                                GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                                GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualExistingVariableParameterAST * object = (const cPtr_inputActualExistingVariableParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualExistingVariableParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 323)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualExistingVariableParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 324)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 325)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 325)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 326)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 326)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 324)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualExistingVariableParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (temp_4.getter_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_inputActualExistingVariableParameterAST temp_5 = object ;
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_5.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 328)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 328)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 328)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 328)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 328)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_parameterType_16927 ;
  GALGAS_string var_targetVariableCppName_16958 ;
  {
  const GALGAS_inputActualExistingVariableParameterAST temp_9 = object ;
  GALGAS_string joker_16964 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (temp_9.getter_mInputActualParameterName (HERE), var_parameterType_16927, var_targetVariableCppName_16958, joker_16964, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 330)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_16927)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_inputActualExistingVariableParameterAST temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.getter_mInputActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 338)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_16927.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 339)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 339)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 340)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 340)), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 338)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_inputActualExistingVariableParameterAST temp_14 = object ;
    test_13 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_14.getter_mInputActualParameterName (HERE).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 343)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 343)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_inputActualExistingVariableParameterAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInputActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 344)), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray16  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 344)) ;
    }
  }
  const GALGAS_inputActualExistingVariableParameterAST temp_17 = object ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_17.getter_mInputActualParameterName (HERE).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 347))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 347)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (var_parameterType_16927, var_targetVariableCppName_16958  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 349))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 349)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                   extensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualSelfPropertyParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                            const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                            const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                            const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                            const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                            GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                            GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                            GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                            GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualSelfPropertyParameterAST * object = (const cPtr_inputActualSelfPropertyParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualSelfPropertyParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 369)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 370)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 371)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 371)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 372)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 372)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 370)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (temp_4.getter_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_inputActualSelfPropertyParameterAST temp_5 = object ;
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_5.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 374)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 374)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 374)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 374)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 374)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_parameterType_19039 ;
  GALGAS_string var_targetVariableCppName_19075 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 378)).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.getter_mInputActualSelfPropertyName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 379)), GALGAS_string ("'self' cannot be used in this context"), fixItArray11  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 379)) ;
      var_parameterType_19039.drop () ; // Release error dropped variable
      var_targetVariableCppName_19075.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_propertyMap var_propertyMap_19282 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 382)) ;
    const GALGAS_inputActualSelfPropertyParameterAST temp_12 = object ;
    GALGAS_bool joker_19396 ; // Joker input parameter
    var_propertyMap_19282.method_searchKey (temp_12.getter_mInputActualSelfPropertyName (HERE), joker_19396, var_parameterType_19039, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 383)) ;
    const GALGAS_inputActualSelfPropertyParameterAST temp_13 = object ;
    var_targetVariableCppName_19075 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 384)).add_operation (temp_13.getter_mInputActualSelfPropertyName (HERE).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 384)).getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 384)) ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_19039)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInputActualSelfPropertyName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 395)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_19039.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 396)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 396)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 397)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 397)), fixItArray16  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 395)) ;
    }
  }
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (var_parameterType_19039, var_targetVariableCppName_19075  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 406))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 406)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualSelfPropertyParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST.mSlotID,
                                                   extensionMethod_inputActualSelfPropertyParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualSelfPropertyParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualSelfPropertyParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewVariableParameterAST * object = (const cPtr_inputActualNewVariableParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewVariableParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 427)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewVariableParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 428)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 429)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 429)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 430)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 430)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 428)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualNewVariableParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (temp_4.getter_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_inputActualNewVariableParameterAST temp_5 = object ;
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_5.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 432)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 432)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 432)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 432)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 432)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_inputActualNewVariableParameterAST temp_10 = object ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.getter_mInputOptionalActualTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_inputActualNewVariableParameterAST temp_11 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_parameterType_21927 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_11.getter_mInputOptionalActualTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 437)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_21927)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_inputActualNewVariableParameterAST temp_13 = object ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.getter_mInputActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 442)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_21927.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 443)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 443)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 444)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 444)), fixItArray14  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 442)) ;
        }
      }
    }
  }
  const GALGAS_inputActualNewVariableParameterAST temp_15 = object ;
  const GALGAS_inputActualNewVariableParameterAST temp_16 = object ;
  GALGAS_string var_targetVariableCppName_22398 = GALGAS_string ("var_").add_operation (temp_15.getter_mInputActualParameterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 448)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 448)).add_operation (temp_16.getter_mInputActualParameterName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 448)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 448)) ;
  {
  const GALGAS_inputActualNewVariableParameterAST temp_17 = object ;
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (temp_17.getter_mInputActualParameterName (HERE), constinArgument_inFormalArgumentType, var_targetVariableCppName_22398, var_targetVariableCppName_22398, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 449)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_22398  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 456))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 456)) ;
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GALGAS_inputActualNewVariableParameterAST temp_19 = object ;
    test_18 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_19.getter_mInputActualParameterName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 460)).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_inputActualNewVariableParameterAST temp_20 = object ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.getter_mInputActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 461)), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray21  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 461)) ;
    }
  }
  const GALGAS_inputActualNewVariableParameterAST temp_22 = object ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_22.getter_mInputActualParameterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_22398  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 466))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 466)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                   extensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewConstantParameterAST * object = (const cPtr_inputActualNewConstantParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewConstantParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 486)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewConstantParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 487)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 488)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 488)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 489)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 489)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 487)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualNewConstantParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (temp_4.getter_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_inputActualNewConstantParameterAST temp_5 = object ;
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_5.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 491)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 491)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 491)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 491)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 491)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_inputActualNewConstantParameterAST temp_10 = object ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.getter_mInputOptionalActualTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_inputActualNewConstantParameterAST temp_11 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_parameterType_24759 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_11.getter_mInputOptionalActualTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 495)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_24759)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_inputActualNewConstantParameterAST temp_13 = object ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.getter_mInputActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 500)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_24759.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 501)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 501)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 502)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 502)), fixItArray14  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 500)) ;
        }
      }
    }
  }
  const GALGAS_inputActualNewConstantParameterAST temp_15 = object ;
  const GALGAS_inputActualNewConstantParameterAST temp_16 = object ;
  GALGAS_string var_targetVariableCppName_25230 = GALGAS_string ("var_").add_operation (temp_15.getter_mInputActualParameterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 506)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 506)).add_operation (temp_16.getter_mInputActualParameterName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 506)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 506)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_inputActualNewConstantParameterAST temp_18 = object ;
    test_17 = temp_18.getter_mMarkedAsUnused (HERE).boolEnum () ;
    if (kBoolTrue == test_17) {
      {
      const GALGAS_inputActualNewConstantParameterAST temp_19 = object ;
      ioArgument_ioVariableMap.setter_insertUsedLocalConstant (temp_19.getter_mInputActualParameterName (HERE), constinArgument_inFormalArgumentType, var_targetVariableCppName_25230, var_targetVariableCppName_25230, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 508)) ;
      }
    }
  }
  if (kBoolFalse == test_17) {
    {
    const GALGAS_inputActualNewConstantParameterAST temp_20 = object ;
    ioArgument_ioVariableMap.setter_insertLocalConstant (temp_20.getter_mInputActualParameterName (HERE), constinArgument_inFormalArgumentType, var_targetVariableCppName_25230, var_targetVariableCppName_25230, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 515)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_25230  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 523))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 523)) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GALGAS_inputActualNewConstantParameterAST temp_22 = object ;
    test_21 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_22.getter_mInputActualParameterName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 528)).boolEnum () ;
    if (kBoolTrue == test_21) {
      const GALGAS_inputActualNewConstantParameterAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.getter_mInputActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 529)), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray24  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 529)) ;
    }
  }
  const GALGAS_inputActualNewConstantParameterAST temp_25 = object ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_25.getter_mInputActualParameterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 532)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_25230  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 534))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 534)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                   extensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                           GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputSingleJokerActualParameterAST * object = (const cPtr_inputSingleJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputSingleJokerActualParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 553)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputSingleJokerActualParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 554)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 555)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 555)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 556)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 556)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 554)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputSingleJokerActualParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (temp_4.getter_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_inputSingleJokerActualParameterAST temp_5 = object ;
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_5.getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 558)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 558)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 558)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 558)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 558)) ;
      }
    }
    if (kBoolFalse == test_3) {
      const GALGAS_inputSingleJokerActualParameterAST temp_9 = object ;
      GALGAS_string var_cppVarName_27739 = GALGAS_string ("joker_").add_operation (temp_9.getter_mActualSelector (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 560)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 560)) ;
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_27739  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 562))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 562)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                   extensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                     const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                     const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                     const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                                     const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                     const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                     GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                     GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                     GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputJokerActualParameterAST * object = (const cPtr_inputJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputJokerActualParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 581)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputJokerActualParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mQualifierLocation (HERE), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 583)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 583)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 584)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 584)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 582)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_inputJokerActualParameterAST temp_3 = object ;
    const GALGAS_inputJokerActualParameterAST temp_4 = object ;
    GALGAS_string var_cppVarName_29086 = GALGAS_string ("joker_").add_operation (temp_3.getter_mQualifierLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 586)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 586)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 586)).add_operation (temp_4.getter_mJokerIndex (HERE).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 586)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_29086  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 588))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 588)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                   extensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                     GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                        extensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST.mSlotID,
                                                        extensionMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                        extensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                        extensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                        extensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                        extensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  const GALGAS_outputActualParameterAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mOutputActualParameterExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 632)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                        extensionMethod_outputActualParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                        extensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputInputActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                        extensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSingleJokerParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                        extensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeRoutineArguments (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                      const GALGAS_lstring constinArgument_inRoutineName,
                                      const GALGAS_string constinArgument_inInvokedEntityName,
                                      const GALGAS_formalParameterSignature constinArgument_inRoutineSignature,
                                      const GALGAS_actualParameterListAST constinArgument_inActualParameterList,
                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                      GALGAS_actualParameterListForGeneration & outArgument_outActualParameterListForGeneration,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualParameterListForGeneration.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inRoutineSignature.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 664)).objectCompare (constinArgument_inActualParameterList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 664)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 665)), GALGAS_string ("the ").add_operation (constinArgument_inInvokedEntityName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 666)).add_operation (GALGAS_string (" defines "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 666)).add_operation (constinArgument_inRoutineSignature.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 666)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 666)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 666)).add_operation (GALGAS_string (" formal argument(s), but this invocation names "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 666)).add_operation (constinArgument_inActualParameterList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 668)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 668)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 667)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 668)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 665)) ;
      outArgument_outActualParameterListForGeneration.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outActualParameterListForGeneration = GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 671)) ;
    GALGAS_stringset var_exclusiveVariableSet_33146 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 672)) ;
    cEnumerator_formalParameterSignature enumerator_33184 (constinArgument_inRoutineSignature, kENUMERATION_UP) ;
    cEnumerator_actualParameterListAST enumerator_33213 (constinArgument_inActualParameterList, kENUMERATION_UP) ;
    while (enumerator_33184.hasCurrentObject () && enumerator_33213.hasCurrentObject ()) {
      callExtensionMethod_checkAgainstFormalArgument ((const cPtr_actualParameterAST *) enumerator_33213.current_mActualParameter (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, enumerator_33184.current_mFormalSelector (HERE), enumerator_33184.current_mFormalArgumentType (HERE), enumerator_33184.current_mFormalArgumentPassingMode (HERE), ioArgument_ioVariableMap, outArgument_outActualParameterListForGeneration, var_exclusiveVariableSet_33146, ioArgument_ioInstructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 674)) ;
      enumerator_33184.gotoNextObject () ;
      enumerator_33213.gotoNextObject () ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkExpressionIsBoolean'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkExpressionIsBoolean (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                       const GALGAS_location constinArgument_inErrorLocation,
                                       const GALGAS_semanticExpressionForGeneration constinArgument_inExpression,
                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_unifiedTypeMap_2D_entry var_expressionType_33974 = constinArgument_inExpression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 697)) ;
  GALGAS_unifiedTypeMap_2D_entry var_boolType_34036 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_expressionType_33974.objectCompare (var_boolType_34036)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outExpression = constinArgument_inExpression ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, var_expressionType_33974.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 702)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 702)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_expressionType_33974.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 703)).getter_hasKey (GALGAS_string ("bool") COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 703)).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_bool var_isPublic_34403 ;
            GALGAS_unifiedTypeMap_2D_entry var_attributeType_34453 ;
            var_expressionType_33974.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 704)).method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("bool"), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 705)), var_isPublic_34403, var_attributeType_34453, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 704)) ;
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_isPublic_34403.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 709)).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray4  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 710)) ;
              }
            }
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsEqual, var_attributeType_34453.objectCompare (var_boolType_34036)).boolEnum () ;
              if (kBoolTrue == test_5) {
                outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_boolType_34036, constinArgument_inErrorLocation, constinArgument_inExpression, GALGAS_string ("bool")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 713)) ;
              }
            }
            if (kBoolFalse == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (var_expressionType_33974.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 721)).add_operation (GALGAS_string ("' struct type defines an attribute named 'bool', but its type is not '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 721)), fixItArray6  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
        if (kBoolFalse == test_2) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (var_expressionType_33974.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 726)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 726)).add_operation (GALGAS_string ("' struct type does not define an attribute named 'bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 726)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 725)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
    if (kBoolFalse == test_1) {
      const cMapElement_getterMap * objectArray_35181 = (const cMapElement_getterMap *) var_expressionType_33974.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 730)).readAccessForWithInstruction (GALGAS_string ("bool")) ;
      if (NULL != objectArray_35181) {
          macroValidSharedObject (objectArray_35181, cMapElement_getterMap) ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsNotEqual, objectArray_35181->mProperty_mReturnedType.objectCompare (var_boolType_34036)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter, but it does not return a '@bool' value"), fixItArray9  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 732)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_8) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsStrictSup, objectArray_35181->mProperty_mArgumentTypeList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 733)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter that requires argument(s)"), fixItArray11  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 734)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_10) {
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              test_12 = GALGAS_bool (kIsNotEqual, objectArray_35181->mProperty_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                TC_Array <C_FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, objectArray_35181->mProperty_mErrorMessage, fixItArray13  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 736)) ;
                outArgument_outExpression.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_12) {
              outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_boolType_34036, constinArgument_inErrorLocation, objectArray_35181->mProperty_mKind, constinArgument_inExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 743)), GALGAS_string ("bool"), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 745)), objectArray_35181->mProperty_mHasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 738)) ;
            }
          }
        }
      }else{
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (kIsEqual, var_expressionType_33974.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 750)).getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 750)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_14) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (var_expressionType_33974.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 752)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 752)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 752)), fixItArray15  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 751)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_14) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          appendFixItActions (fixItArray16, kFixItReplace, var_expressionType_33974.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 758)).getter_keyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 758))) ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (var_expressionType_33974.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 756)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 756)), fixItArray16  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 755)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                                const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                                                const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                                GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 791)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mLocation (HERE), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 792)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 804)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 805)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 805)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_type_38672 ;
  GALGAS_string var_cppName_38693 ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = object ;
  GALGAS_string joker_38695 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (temp_3.getter_mActualParameterName (HERE), var_type_38672, var_cppName_38693, joker_38695, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 807)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_38716 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_expectedType_38716.objectCompare (var_type_38672)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = object ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 810)), GALGAS_string ("the '").add_operation (temp_6.getter_mActualParameterName (HERE).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 811)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 811)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 811)).add_operation (var_type_38672.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 811)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 811)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 811)).add_operation (var_expectedType_38716.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 812)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 812)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 812)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 810)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName_38693.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 814)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 814)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 814))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 814)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 825)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 826)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 826)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = object ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = object ;
  GALGAS_string var_cppName_39754 = GALGAS_string ("var_").add_operation (temp_3.getter_mActualParameterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 828)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 828)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 828)).add_operation (temp_4.getter_mActualParameterName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 828)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 828)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 828)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_type_39888 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_5.getter_mActualParameterTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 829)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = object ;
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (temp_6.getter_mActualParameterName (HERE), var_type_39888, var_cppName_39754, var_cppName_39754, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 830)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_40118 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_expectedType_40118.objectCompare (var_type_39888)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = object ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 833)), GALGAS_string ("the '").add_operation (temp_9.getter_mActualParameterName (HERE).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 834)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 834)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 834)).add_operation (var_type_39888.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 834)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 834)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 834)).add_operation (var_expectedType_40118.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 835)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 835)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 835)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 833)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName_39754, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 837)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 837)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 837)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 837))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 837)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 848)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 849)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 849)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = object ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = object ;
  GALGAS_string var_cppName_41161 = GALGAS_string ("var_").add_operation (temp_3.getter_mActualParameterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 851)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 851)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 851)).add_operation (temp_4.getter_mActualParameterName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 851)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 851)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 851)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_type_41295 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_5.getter_mActualParameterTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 852)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = object ;
  ioArgument_ioVariableMap.setter_insertLocalConstant (temp_6.getter_mActualParameterName (HERE), var_type_41295, var_cppName_41161, var_cppName_41161, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 853)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_41518 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_expectedType_41518.objectCompare (var_type_41295)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = object ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 856)), GALGAS_string ("the '").add_operation (temp_9.getter_mActualParameterName (HERE).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 857)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 857)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 857)).add_operation (var_type_41295.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 857)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 857)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 857)).add_operation (var_expectedType_41518.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 858)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 858)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 858)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 856)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_41161, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 860)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 860)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 860)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 860))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 860)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures (const GALGAS_formalParameterListForGeneration constinArgument_inTestedSignature,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    const GALGAS_formalParameterSignature constinArgument_inReferenceSignature,
                                    const GALGAS_location constinArgument_inReferenceLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 26)).objectCompare (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 26)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this method declares ").add_operation (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 27)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)).add_operation (GALGAS_string (" formal parameter(s), but overriden method declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)).add_operation (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 28)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 28)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 29)) ;
    }
  }
  if (kBoolFalse == test_0) {
    cEnumerator_formalParameterSignature enumerator_2762 (constinArgument_inReferenceSignature, kENUMERATION_UP) ;
    cEnumerator_formalParameterListForGeneration enumerator_2787 (constinArgument_inTestedSignature, kENUMERATION_UP) ;
    while (enumerator_2762.hasCurrentObject () && enumerator_2787.hasCurrentObject ()) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, enumerator_2762.current_mFormalArgumentPassingMode (HERE).objectCompare (enumerator_2787.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_2787.current_mFormalArgumentName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 33)), GALGAS_string ("the '").add_operation (enumerator_2787.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (GALGAS_string ("' formal parameter is declared as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2787.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (GALGAS_string (", but overriden method declares it as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2762.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)) ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 36)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_2787.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_2762.current_mFormalSelector (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_2762.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = GALGAS_string (":") ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_2787.current_mFormalSelector (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 39)), GALGAS_string ("the selector should be '").add_operation (extensionGetter_string (enumerator_2762.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)).add_operation (enumerator_2762.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsNotEqual, enumerator_2787.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)).objectCompare (enumerator_2762.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_2787.current_mFormalArgumentName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 42)), GALGAS_string ("the '").add_operation (enumerator_2787.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)).add_operation (enumerator_2787.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)).add_operation (GALGAS_string ("' type, but overriden method declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)).add_operation (enumerator_2762.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 44)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)) ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 45)) ;
        }
      }
      enumerator_2762.gotoNextObject () ;
      enumerator_2787.gotoNextObject () ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkGetterSignatures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkGetterSignatures (const GALGAS_formalInputParameterListForGeneration constinArgument_inTestedSignature,
                                    const GALGAS_unifiedTypeMap_2D_entry constinArgument_inReturnType,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    const GALGAS_functionSignature constinArgument_inReferenceSignature,
                                    const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInheritedReturnType,
                                    const GALGAS_location constinArgument_inReferenceLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 64)).objectCompare (constinArgument_inInheritedReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 64)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the return type is '@").add_operation (constinArgument_inReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 65)).add_operation (GALGAS_string ("', but overriden getter names '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 66)).add_operation (constinArgument_inInheritedReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 66)).add_operation (GALGAS_string ("' as return type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 67)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 65)) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 68)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 70)).objectCompare (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 70)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this getter declares ").add_operation (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 71)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 71)).add_operation (GALGAS_string (" formal parameter(s), but overriden getter declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 71)).add_operation (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 72)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 72)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 71)) ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 73)) ;
    }
  }
  if (kBoolFalse == test_3) {
    cEnumerator_functionSignature enumerator_5481 (constinArgument_inReferenceSignature, kENUMERATION_UP) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_5506 (constinArgument_inTestedSignature, kENUMERATION_UP) ;
    while (enumerator_5481.hasCurrentObject () && enumerator_5506.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_5506.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_5481.current_mFormalSelector (HERE).getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_5481.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = GALGAS_string (":") ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_5506.current_mFormalSelector (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 77)), GALGAS_string ("the selector should be '\?").add_operation (enumerator_5481.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 79)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 77)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsNotEqual, enumerator_5506.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 81)).objectCompare (enumerator_5481.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 81)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_5506.current_mFormalArgumentName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 82)), GALGAS_string ("the '").add_operation (enumerator_5506.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (enumerator_5506.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (GALGAS_string ("' type, but overriden getter declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)).add_operation (enumerator_5481.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)) ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 85)) ;
        }
      }
      enumerator_5481.gotoNextObject () ;
      enumerator_5506.gotoNextObject () ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 123)) ;
  cEnumerator_formalParameterListAST enumerator_8156 (constinArgument_inRoutineSignatureAST, kENUMERATION_UP) ;
  while (enumerator_8156.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_type_8172 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_8156.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 125)) ;
    GALGAS_string var_formalArgumentCppName_8295 ;
    switch (enumerator_8156.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        var_formalArgumentCppName_8295 = GALGAS_string ("inArgument_").add_operation (enumerator_8156.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 129)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 129)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = enumerator_8156.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            ioArgument_ioVariableMap.setter_insertInputFormalArgumentDeclaredAsUnused (enumerator_8156.current_mFormalArgumentName (HERE), var_type_8172, var_formalArgumentCppName_8295, var_formalArgumentCppName_8295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 131)) ;
            }
          }
        }
        if (kBoolFalse == test_0) {
          {
          ioArgument_ioVariableMap.setter_insertInputFormalArgument (enumerator_8156.current_mFormalArgumentName (HERE), var_type_8172, var_formalArgumentCppName_8295, var_formalArgumentCppName_8295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 133)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        var_formalArgumentCppName_8295 = GALGAS_string ("outArgument_").add_operation (enumerator_8156.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 136)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 136)) ;
        {
        ioArgument_ioVariableMap.setter_insertOutputFormalArgument (enumerator_8156.current_mFormalArgumentName (HERE), var_type_8172, var_formalArgumentCppName_8295, var_formalArgumentCppName_8295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 137)) ;
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        var_formalArgumentCppName_8295 = GALGAS_string ("ioArgument_").add_operation (enumerator_8156.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 139)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 139)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = enumerator_8156.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            ioArgument_ioVariableMap.setter_insertInputOutputFormalArgumentDeclaredAsUnused (enumerator_8156.current_mFormalArgumentName (HERE), var_type_8172, var_formalArgumentCppName_8295, var_formalArgumentCppName_8295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 141)) ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          {
          ioArgument_ioVariableMap.setter_insertInputOutputFormalArgument (enumerator_8156.current_mFormalArgumentName (HERE), var_type_8172, var_formalArgumentCppName_8295, var_formalArgumentCppName_8295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 143)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        var_formalArgumentCppName_8295 = GALGAS_string ("constinArgument_").add_operation (enumerator_8156.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 146)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 146)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_8156.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            ioArgument_ioVariableMap.setter_insertConstantInputFormalArgumentDeclaredAsUnused (enumerator_8156.current_mFormalArgumentName (HERE), var_type_8172, var_formalArgumentCppName_8295, var_formalArgumentCppName_8295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 148)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertConstantInputFormalArgument (enumerator_8156.current_mFormalArgumentName (HERE), var_type_8172, var_formalArgumentCppName_8295, var_formalArgumentCppName_8295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 150)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.addAssign_operation (enumerator_8156.current_mFormalSelector (HERE), enumerator_8156.current_mFormalArgumentPassingMode (HERE), var_type_8172, enumerator_8156.current_mFormalArgumentName (HERE), var_formalArgumentCppName_8295  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 153)) ;
    enumerator_8156.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineBody'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeRoutineBody (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                 const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                 const GALGAS_localConstantList constinArgument_inLocalConstantList,
                                 const GALGAS_typedPropertyList constinArgument_inNonMutableTypedAttributeList,
                                 const GALGAS_typedPropertyList constinArgument_inMutableTypedAttributeList,
                                 const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                 const GALGAS_location constinArgument_inEndOfMethodLocation,
                                 GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                 GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  GALGAS_variableMap var_variableMap_10832 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 172)) ;
  cEnumerator_localConstantList enumerator_10917 (constinArgument_inLocalConstantList, kENUMERATION_UP) ;
  while (enumerator_10917.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_10917.current_mNoWarningIfUnused (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        var_variableMap_10832.setter_insertUsedLocalConstant (enumerator_10917.current_mName (HERE), enumerator_10917.current_mType (HERE), enumerator_10917.current_mCppName (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 176)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      {
      var_variableMap_10832.setter_insertLocalConstant (enumerator_10917.current_mName (HERE), enumerator_10917.current_mType (HERE), enumerator_10917.current_mCppName (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 178)) ;
      }
    }
    enumerator_10917.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.getter_value ()).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 182)).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_typedPropertyList enumerator_11349 (constinArgument_inNonMutableTypedAttributeList, kENUMERATION_UP) ;
      while (enumerator_11349.hasCurrentObject ()) {
        {
        var_variableMap_10832.setter_insertNonMutableAttribute (enumerator_11349.current_mPropertyName (HERE), enumerator_11349.current_mPropertyTypeEntry (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 187)).add_operation (enumerator_11349.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 187)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 187)), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 184)) ;
        }
        enumerator_11349.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.getter_value ()).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 193)).boolEnum () ;
    if (kBoolTrue == test_2) {
      cEnumerator_typedPropertyList enumerator_11808 (constinArgument_inMutableTypedAttributeList, kENUMERATION_UP) ;
      while (enumerator_11808.hasCurrentObject ()) {
        {
        var_variableMap_10832.setter_insertMutableAttribute (enumerator_11808.current_mPropertyName (HERE), enumerator_11808.current_mPropertyTypeEntry (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 198)).add_operation (enumerator_11808.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 198)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 198)), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 195)) ;
        }
        enumerator_11808.gotoNextObject () ;
      }
    }
  }
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE), constinArgument_inRoutineSignatureAST, var_variableMap_10832, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 204)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 211)) ;
  cEnumerator_semanticInstructionListAST enumerator_12434 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_12434.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_12434.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outSemanticInstructionListForGeneration, var_variableMap_10832, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 213)) ;
    enumerator_12434.gotoNextObject () ;
  }
  var_variableMap_10832.method_checkAutomatonStates (constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 222)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externFunctionDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  const GALGAS_externFunctionDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_13270 = function_functionNameForUsefulEntitiesGraph (temp_0.getter_mFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 236)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13270, var_nameForUsefulness_13270, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 237)) ;
  }
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList_13433 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 239)) ;
  const GALGAS_externFunctionDeclarationAST temp_1 = object ;
  cEnumerator_formalInputParameterListAST enumerator_13513 (temp_1.getter_mFormalArgumentList (HERE), kENUMERATION_UP) ;
  while (enumerator_13513.hasCurrentObject ()) {
    var_formalArgumentList_13433.addAssign_operation (enumerator_13513.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_13513.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 243)), enumerator_13513.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 244)), enumerator_13513.current_mFormalArgumentName (HERE), enumerator_13513.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 241)) ;
    enumerator_13513.gotoNextObject () ;
  }
  const GALGAS_externFunctionDeclarationAST temp_2 = object ;
  const GALGAS_externFunctionDeclarationAST temp_3 = object ;
  const GALGAS_externFunctionDeclarationAST temp_4 = object ;
  const GALGAS_externFunctionDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (temp_2.getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 249)), GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_3.getter_mFunctionName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 252)), temp_4.getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 253)), var_formalArgumentList_13433, GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_5.getter_mResultTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 255))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 250))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 248)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externFunctionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                         extensionMethod_externFunctionDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_semanticAnalysis (defineExtensionMethod_externFunctionDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externRoutineDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externRoutineDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  const GALGAS_externRoutineDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_14689 = function_procedureNameForUsefulEntitiesGraph (temp_0.getter_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 269)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14689, var_nameForUsefulness_14689, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 270)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalArgumentList_14852 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 272)) ;
  const GALGAS_externRoutineDeclarationAST temp_1 = object ;
  cEnumerator_formalParameterListAST enumerator_14927 (temp_1.getter_mFormalArgumentList (HERE), kENUMERATION_UP) ;
  while (enumerator_14927.hasCurrentObject ()) {
    var_formalArgumentList_14852.addAssign_operation (enumerator_14927.current_mFormalSelector (HERE), enumerator_14927.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_14927.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 277)), enumerator_14927.current_mFormalArgumentName (HERE), enumerator_14927.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 279))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 274)) ;
    enumerator_14927.gotoNextObject () ;
  }
  const GALGAS_externRoutineDeclarationAST temp_2 = object ;
  const GALGAS_externRoutineDeclarationAST temp_3 = object ;
  const GALGAS_externRoutineDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern proc ").add_operation (temp_2.getter_mRoutineName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 282)), GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (temp_3.getter_mRoutineName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 285)), temp_4.getter_mRoutineName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 286)), var_formalArgumentList_14852  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 283))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 281)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externRoutineDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                         extensionMethod_externRoutineDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_semanticAnalysis (defineExtensionMethod_externRoutineDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_procDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procDeclarationAST * object = (const cPtr_procDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_procDeclarationAST) ;
  const GALGAS_procDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_16007 = function_procedureNameForUsefulEntitiesGraph (temp_0.getter_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 301)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16007, var_nameForUsefulness_16007, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 302)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalArgumentList_16187 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 304)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_16281 ;
  GALGAS_analysisContext var_analysisContext_16303 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 309)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 311)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 306)) ;
  {
  const GALGAS_procDeclarationAST temp_1 = object ;
  const GALGAS_procDeclarationAST temp_2 = object ;
  const GALGAS_procDeclarationAST temp_3 = object ;
  routine_analyzeRoutineBody (var_nameForUsefulness_16007, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_16303, temp_1.getter_mFormalArgumentList (HERE), GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 319)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 320)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 321)), temp_2.getter_mRoutineInstructionList (HERE), temp_3.getter_mEndOfRoutineInstructionList (HERE), var_instructionList_16281, var_formalArgumentList_16187, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 314)) ;
  }
  const GALGAS_procDeclarationAST temp_4 = object ;
  const GALGAS_procDeclarationAST temp_5 = object ;
  const GALGAS_procDeclarationAST temp_6 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (temp_4.getter_mRoutineName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 329)), GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (temp_5.getter_mRoutineName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 332)), temp_6.getter_mRoutineName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 333)), var_formalArgumentList_16187, GALGAS_bool (false), var_instructionList_16281  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 330))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 328)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_procDeclarationAST.mSlotID,
                                         extensionMethod_procDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procDeclarationAST_semanticAnalysis (defineExtensionMethod_procDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeFunctionBody'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeFunctionBody (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                  const GALGAS_formalInputParameterListAST constinArgument_inFunctionSignature,
                                  const GALGAS_typedPropertyList constinArgument_inTypedAttributeList,
                                  const GALGAS_string constinArgument_inAttributeVariableNamePrefix,
                                  const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                  const GALGAS_lstring constinArgument_inReturnVariableName,
                                  const GALGAS_lstring constinArgument_inResultTypeName,
                                  const GALGAS_location constinArgument_inEndOfFunctionLocation,
                                  GALGAS_formalInputParameterListForGeneration & outArgument_outSignatureForGeneration,
                                  GALGAS_unifiedTypeMap_2D_entry & outArgument_outReturnedType,
                                  GALGAS_string & outArgument_outResultVariableCppName,
                                  GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outResultVariableCppName.drop () ; // Release 'out' argument
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  GALGAS_variableMap var_variableMap_18004 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 358)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf.getter_value ()).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 360)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_18169 (constinArgument_inTypedAttributeList, kENUMERATION_UP) ;
      while (enumerator_18169.hasCurrentObject ()) {
        {
        var_variableMap_18004.setter_insertNonMutableAttribute (enumerator_18169.current_mPropertyName (HERE), enumerator_18169.current_mPropertyTypeEntry (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 365)).add_operation (enumerator_18169.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 365)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 365)), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 362)) ;
        }
        enumerator_18169.gotoNextObject () ;
      }
    }
  }
  outArgument_outSignatureForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 371)) ;
  cEnumerator_formalInputParameterListAST enumerator_18576 (constinArgument_inFunctionSignature, kENUMERATION_UP) ;
  while (enumerator_18576.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_parameterType_18601 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_18576.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 373)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_18576.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_cppName_18757 = GALGAS_string ("constinArgument_").add_operation (enumerator_18576.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 375)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 375)) ;
        outArgument_outSignatureForGeneration.addAssign_operation (enumerator_18576.current_mFormalSelector (HERE), var_parameterType_18601, var_cppName_18757, enumerator_18576.current_mFormalArgumentName (HERE), enumerator_18576.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 376)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_18576.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            var_variableMap_18004.setter_insertConstantInputFormalArgumentDeclaredAsUnused (enumerator_18576.current_mFormalArgumentName (HERE), var_parameterType_18601, var_cppName_18757, var_cppName_18757, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 383)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          {
          var_variableMap_18004.setter_insertConstantInputFormalArgument (enumerator_18576.current_mFormalArgumentName (HERE), var_parameterType_18601, var_cppName_18757, var_cppName_18757, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 385)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_string var_cppName_19306 = GALGAS_string ("inArgument_").add_operation (enumerator_18576.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 388)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 388)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_18576.current_mFormalSelector (HERE), var_parameterType_18601, var_cppName_19306, enumerator_18576.current_mFormalArgumentName (HERE), enumerator_18576.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 389)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = enumerator_18576.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_variableMap_18004.setter_insertInputFormalArgumentDeclaredAsUnused (enumerator_18576.current_mFormalArgumentName (HERE), var_parameterType_18601, var_cppName_19306, var_cppName_19306, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 396)) ;
          }
        }
      }
      if (kBoolFalse == test_3) {
        {
        var_variableMap_18004.setter_insertInputFormalArgument (enumerator_18576.current_mFormalArgumentName (HERE), var_parameterType_18601, var_cppName_19306, var_cppName_19306, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 398)) ;
        }
      }
    }
    enumerator_18576.gotoNextObject () ;
  }
  outArgument_outReturnedType = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), constinArgument_inResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 403)) ;
  outArgument_outResultVariableCppName = GALGAS_string ("result_").add_operation (constinArgument_inReturnVariableName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 404)) ;
  {
  var_variableMap_18004.setter_insertOutputFormalArgument (constinArgument_inReturnVariableName, outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 405)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 407)) ;
  cEnumerator_semanticInstructionListAST enumerator_20328 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_20328.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_20328.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outSemanticInstructionListForGeneration, var_variableMap_18004, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 409)) ;
    enumerator_20328.gotoNextObject () ;
  }
  var_variableMap_18004.method_checkAutomatonStates (constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 418)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                     GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  const GALGAS_functionDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_21146 = function_functionNameForUsefulEntitiesGraph (temp_0.getter_mFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 432)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_21146, var_nameForUsefulness_21146, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 433)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_functionDeclarationAST temp_2 = object ;
    test_1 = temp_2.getter_mIsUsefull (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_21146  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 435)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_21468 ;
  GALGAS_formalInputParameterListForGeneration var_formalInputParameterList_21534 ;
  GALGAS_unifiedTypeMap_2D_entry var_returnType_21569 ;
  GALGAS_string var_resultVariableCppName_21601 ;
  GALGAS_analysisContext var_analysisContext_21623 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 445)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 447)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 442)) ;
  {
  const GALGAS_functionDeclarationAST temp_3 = object ;
  const GALGAS_functionDeclarationAST temp_4 = object ;
  const GALGAS_functionDeclarationAST temp_5 = object ;
  const GALGAS_functionDeclarationAST temp_6 = object ;
  const GALGAS_functionDeclarationAST temp_7 = object ;
  routine_analyzeFunctionBody (var_nameForUsefulness_21146, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_21623, temp_3.getter_mFormalArgumentList (HERE), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 455)), GALGAS_string::makeEmptyString (), temp_4.getter_mFunctionInstructionList (HERE), temp_5.getter_mResultVariableName (HERE), temp_6.getter_mResultTypeName (HERE), temp_7.getter_mEndOfFunctionInstructionList (HERE), var_formalInputParameterList_21534, var_returnType_21569, var_resultVariableCppName_21601, var_semanticInstructionListForGeneration_21468, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 450)) ;
  }
  const GALGAS_functionDeclarationAST temp_8 = object ;
  const GALGAS_functionDeclarationAST temp_9 = object ;
  const GALGAS_functionDeclarationAST temp_10 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (temp_8.getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 468)), GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_9.getter_mFunctionName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 471)), temp_10.getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 472)), var_formalInputParameterList_21534, var_returnType_21569, var_resultVariableCppName_21601, var_semanticInstructionListForGeneration_21468  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 469))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 467)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                         extensionMethod_functionDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionDeclarationAST_semanticAnalysis (defineExtensionMethod_functionDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_onceFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                         GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  const GALGAS_onceFunctionDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_23127 = function_functionNameForUsefulEntitiesGraph (temp_0.getter_mFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 491)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_23127, var_nameForUsefulness_23127, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 492)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_onceFunctionDeclarationAST temp_2 = object ;
    test_1 = temp_2.getter_mIsUsefull (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_23127  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 494)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_23449 ;
  GALGAS_unifiedTypeMap_2D_entry var_returnType_23484 ;
  GALGAS_string var_resultVariableCppName_23516 ;
  GALGAS_analysisContext var_analysisContext_23538 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 503)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 505)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 500)) ;
  {
  const GALGAS_onceFunctionDeclarationAST temp_3 = object ;
  const GALGAS_onceFunctionDeclarationAST temp_4 = object ;
  const GALGAS_onceFunctionDeclarationAST temp_5 = object ;
  const GALGAS_onceFunctionDeclarationAST temp_6 = object ;
  GALGAS_formalInputParameterListForGeneration joker_23998 ; // Joker input parameter
  routine_analyzeFunctionBody (var_nameForUsefulness_23127, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_23538, GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 512)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 513)), GALGAS_string::makeEmptyString (), temp_3.getter_mFunctionInstructionList (HERE), temp_4.getter_mResultVariableName (HERE), temp_5.getter_mResultTypeName (HERE), temp_6.getter_mEndOfFunctionInstructionList (HERE), joker_23998, var_returnType_23484, var_resultVariableCppName_23516, var_semanticInstructionListForGeneration_23449, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 508)) ;
  }
  const GALGAS_onceFunctionDeclarationAST temp_7 = object ;
  const GALGAS_onceFunctionDeclarationAST temp_8 = object ;
  const GALGAS_onceFunctionDeclarationAST temp_9 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (temp_7.getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 526)), GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_8.getter_mFunctionName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 529)), temp_9.getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 530)), var_returnType_23484, var_resultVariableCppName_23516, var_semanticInstructionListForGeneration_23449  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 527))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 525)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_onceFunctionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                         extensionMethod_onceFunctionDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_semanticAnalysis (defineExtensionMethod_onceFunctionDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  const GALGAS_filewrapperDeclarationAST temp_0 = object ;
  GALGAS_lstring var_filewrapperNameForUsefulness_25492 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.getter_mFilewrapperName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 551)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_25492, var_filewrapperNameForUsefulness_25492, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 552)) ;
  }
  GALGAS_wrapperFileMap var_wrapperFileMap_25811 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_25861 ;
  const GALGAS_filewrapperDeclarationAST temp_1 = object ;
  GALGAS_lstring joker_25763 ; // Joker input parameter
  GALGAS_lstringlist joker_25770 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_25867_2 ; // Joker input parameter
  GALGAS_bool joker_25867_1 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mFilewrapperMap (HERE).method_searchKey (temp_1.getter_mFilewrapperName (HERE), joker_25763, joker_25770, var_wrapperFileMap_25811, var_wrapperDirectoryMap_25861, joker_25867_2, joker_25867_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 554)) ;
  GALGAS_string var_absoluteSourcePath_25927 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_filewrapperDeclarationAST temp_3 = object ;
    test_2 = GALGAS_bool (kIsEqual, temp_3.getter_mFilewrapperPath (HERE).getter_string (HERE).getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 564)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_filewrapperDeclarationAST temp_4 = object ;
      var_absoluteSourcePath_25927 = temp_4.getter_mFilewrapperPath (HERE).getter_string (HERE) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_filewrapperDeclarationAST temp_5 = object ;
    const GALGAS_filewrapperDeclarationAST temp_6 = object ;
    var_absoluteSourcePath_25927 = temp_5.getter_mSourceFileAbsolutePath (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 567)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 567)).add_operation (temp_6.getter_mFilewrapperPath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 567)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_absoluteSourcePath_25927.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 569)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 569)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_filewrapperDeclarationAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.getter_mFilewrapperPath (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 570)), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_25927, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 570)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 570)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 570)) ;
    }
  }
  if (kBoolFalse == test_7) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration_26459 = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 573)) ;
    const GALGAS_filewrapperDeclarationAST temp_10 = object ;
    cEnumerator_filewrapperTemplateListAST enumerator_26508 (temp_10.getter_mFilewrapperTemplateList (HERE), kENUMERATION_UP) ;
    while (enumerator_26508.hasCurrentObject ()) {
      const GALGAS_filewrapperDeclarationAST temp_11 = object ;
      GALGAS_lstring var_filewrapperTemplateNameForUsefulness_26558 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_11.getter_mFilewrapperName (HERE), enumerator_26508.current_mFilewrapperTemplateName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperTemplateNameForUsefulness_26558, var_filewrapperTemplateNameForUsefulness_26558, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 579)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_filewrapperTemplateNameForUsefulness_26558, var_filewrapperNameForUsefulness_25492 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 580)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsEqual, enumerator_26508.current_mFilewrapperTemplatePath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 581)).getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 581)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_26508.current_mFilewrapperTemplatePath (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 582)), GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_25927, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 583)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 583)), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 582)) ;
        }
      }
      GALGAS_string var_absoluteTemplatePath_27177 = var_absoluteSourcePath_25927.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 585)).add_operation (enumerator_26508.current_mFilewrapperTemplatePath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 585)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList_27428 ;
      var_resultingInstructionList_27428.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteTemplatePath_27177, enumerator_26508.current_mFilewrapperTemplatePath (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 587))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 587)), var_resultingInstructionList_27428  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 587)) ;
      GALGAS_templateVariableMap var_templateVariableMap_27512 = GALGAS_templateVariableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 590)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters_27603 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 591)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_27666 (enumerator_26508.current_mFilewrapperTemplateFormalInputParameters (HERE), kENUMERATION_UP) ;
      while (enumerator_27666.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_entry var_type_27686 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_27666.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 593)) ;
        GALGAS_string var_cppVarName_27804 = GALGAS_string ("in_").add_operation (enumerator_27666.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 594)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 594)) ;
        {
        var_templateVariableMap_27512.setter_insertKey (enumerator_27666.current_mFormalArgumentName (HERE), var_type_27686, var_cppVarName_27804, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 595)) ;
        }
        var_filewrapperTemplateFormalInputParameters_27603.addAssign_operation (enumerator_27666.current_mFormalTemplateSelector (HERE), var_type_27686, var_cppVarName_27804, enumerator_27666.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 596)) ;
        enumerator_27666.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration_28156 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 599)) ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext_28232 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_27512  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 600)) ;
      {
      routine_templateInstructionListAnalysis (var_filewrapperNameForUsefulness_25492, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_28232, var_resultingInstructionList_27428, var_templateInstructionListForGeneration_28156, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 604)) ;
      }
      var_filewrapperTemplateListForGeneration_26459.addAssign_operation (enumerator_26508.current_mFilewrapperTemplateName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 613)), var_filewrapperTemplateFormalInputParameters_27603, var_templateInstructionListForGeneration_28156  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 612)) ;
      enumerator_26508.gotoNextObject () ;
    }
    const GALGAS_filewrapperDeclarationAST temp_14 = object ;
    const GALGAS_filewrapperDeclarationAST temp_15 = object ;
    const GALGAS_filewrapperDeclarationAST temp_16 = object ;
    const GALGAS_filewrapperDeclarationAST temp_17 = object ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (temp_14.getter_mFilewrapperName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 619)), GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (temp_15.getter_mFilewrapperName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 622)), temp_16.getter_mFilewrapperName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 623)), temp_17.getter_mFilewrapperPath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 624)), var_wrapperFileMap_25811, var_wrapperDirectoryMap_25861, var_filewrapperTemplateListForGeneration_26459  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 620))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 618)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                         extensionMethod_filewrapperDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_semanticAnalysis (defineExtensionMethod_filewrapperDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3SyntaxComponentAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_29819 = function_syntaxNameForUsefulEntitiesGraph (temp_0.getter_mSyntaxComponentName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 643)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_29819, var_nameForUsefulness_29819, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 644)) ;
  }
  GALGAS_terminalMap var_terminalMap_30145 ;
  GALGAS_indexingListAST var_indexingListAST_30187 ;
  GALGAS_lstring var_indexingDirectory_30223 ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_1 = object ;
  constinArgument_inSemanticContext.getter_mLexiqueComponentMapForSemanticAnalysis (HERE).method_searchKey (temp_1.getter_mLexiqueName (HERE), var_terminalMap_30145, var_indexingListAST_30187, var_indexingDirectory_30223, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 646)) ;
  GALGAS_stringset var_indexNameSet_30315 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 653)) ;
  cEnumerator_indexingListAST enumerator_30348 (var_indexingListAST_30187, kENUMERATION_UP) ;
  while (enumerator_30348.hasCurrentObject ()) {
    var_indexNameSet_30315.addAssign_operation (enumerator_30348.current_mIndexName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 655)) ;
    enumerator_30348.gotoNextObject () ;
  }
  GALGAS_bool var_hasIndexing_30420 = var_indexingDirectory_30223.getter_location (HERE).getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 657)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 657)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 659)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_galgas_33_SyntaxComponentAST temp_3 = object ;
      GALGAS_string var_lexiqueName_30584 = temp_3.getter_mLexiqueName (HERE).getter_string (HERE) ;
      GALGAS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_31042 ;
      {
      const GALGAS_galgas_33_SyntaxComponentAST temp_4 = object ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_5 = object ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_6 = object ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_7 = object ;
      routine_semanticAnalysisOfSyntaxComponent (var_nameForUsefulness_29819, ioArgument_ioUsefulEntitiesGraph, temp_4.getter_mNonterminalDeclarationList (HERE), temp_5.getter_mRuleList (HERE), temp_6.getter_mSyntaxComponentName (HERE).getter_string (HERE), var_lexiqueName_30584, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_terminalMap_30145, var_indexNameSet_30315, var_hasIndexing_30420, temp_7.getter_mHasTranslateFeature (HERE), var_syntaxDeclarationForGeneration_31042, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 661)) ;
      }
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), var_syntaxDeclarationForGeneration_31042  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 676)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                         extensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (defineExtensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3GrammarComponentAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_string constinArgument_inProductDirectory,
                                                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                            GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("semanticAnalysis.galgas", 693)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_galgas_33_GrammarComponentAST temp_1 = object ;
      inCompiler->printMessage (GALGAS_string ("*** Analyzing '").add_operation (temp_1.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 694)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 694)).add_operation (GALGAS_string ("' grammar\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 694))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 694)) ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = object ;
  GALGAS_lstring var_grammarNameForUsefulness_31826 = function_grammarNameForUsefulEntitiesGraph (temp_2.getter_mGrammarComponentName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 697)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_31826, var_grammarNameForUsefulness_31826, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 698)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_32134 = GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 700)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_32214 = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 701)) ;
  GALGAS_lstring var_lexiqueComponentName_32250 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 702)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis_32374 = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 703)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList_32424 = GALGAS_nonTerminalToAddList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 704)) ;
  GALGAS_uint var_addedNonTerminalCount_32459 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = object ;
  cEnumerator_lstringlist enumerator_32517 (temp_3.getter_mSyntaxComponents (HERE), kENUMERATION_UP) ;
  while (enumerator_32517.hasCurrentObject ()) {
    GALGAS_lstring var_syntaxNameForUsefulness_32552 = function_syntaxNameForUsefulEntitiesGraph (enumerator_32517.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 707)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_31826, var_syntaxNameForUsefulness_32552 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 708)) ;
    }
    GALGAS_uint var_addedNonTerminalCountRef_32738 = var_addedNonTerminalCount_32459 ;
    GALGAS_lstring var_lexiqueName_32893 ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_32962 ;
    GALGAS_syntaxRuleListAST var_ruleList_33001 ;
    GALGAS_bool var_hasTranslateFeature_33038 ;
    constinArgument_inSemanticContext.getter_mSyntaxComponentMapForSemanticAnalysis (HERE).method_searchKey (enumerator_32517.current_mValue (HERE), var_lexiqueName_32893, var_nonterminalDeclarationList_32962, var_ruleList_33001, var_hasTranslateFeature_33038, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 710)) ;
    GALGAS_lstring var_lexiqueNameForUsefulness_33077 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_32893, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 717)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_31826, var_lexiqueNameForUsefulness_33077 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 718)) ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GALGAS_galgas_33_GrammarComponentAST temp_5 = object ;
      test_4 = temp_5.getter_mHasTranslateFeature (HERE).operator_and (var_hasTranslateFeature_33038.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 720)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 720)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_galgas_33_GrammarComponentAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_32517.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 721)), GALGAS_string ("as '").add_operation (temp_6.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 721)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 721)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 721)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GALGAS_galgas_33_GrammarComponentAST temp_9 = object ;
        test_8 = var_hasTranslateFeature_33038.operator_and (temp_9.getter_mHasTranslateFeature (HERE).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 722)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 722)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_galgas_33_GrammarComponentAST temp_10 = object ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.getter_mGrammarComponentName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 723)), GALGAS_string ("as '").add_operation (enumerator_32517.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 723)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 723)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 723)) ;
        }
      }
    }
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (kIsEqual, var_lexiqueComponentName_32250.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_12) {
        var_lexiqueComponentName_32250 = var_lexiqueName_32893 ;
      }
    }
    if (kBoolFalse == test_12) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsNotEqual, var_lexiqueName_32893.getter_string (HERE).objectCompare (var_lexiqueComponentName_32250.getter_string (HERE))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_32517.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 729)), GALGAS_string ("this syntax component uses '").add_operation (var_lexiqueName_32893.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 729)).add_operation (GALGAS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 730)).add_operation (var_lexiqueComponentName_32250.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 730)).add_operation (GALGAS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 731)), fixItArray14  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 729)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations (var_nonTerminalMapForGrammarAnalysis_32214, var_nonterminalDeclarationList_32962, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 734)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList (var_nonTerminalMapForGrammarAnalysis_32214, var_ruleList_33001, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 739)) ;
    }
    {
    routine_buildRuleList (var_nonTerminalMapForGrammarAnalysis_32214, enumerator_32517.current_mValue (HERE), var_ruleList_33001, var_actuallyUsedTerminalSymbolMap_32134, var_syntaxComponentListForGrammarAnalysis_32374, var_addedNonTerminalCount_32459, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 744)) ;
    }
    GALGAS_uint var_i_34695 = GALGAS_uint ((uint32_t) 0U) ;
    if (var_addedNonTerminalCount_32459.isValid ()) {
      uint32_t variant_34708 = var_addedNonTerminalCount_32459.uintValue () ;
      bool loop_34708 = true ;
      while (loop_34708) {
        loop_34708 = GALGAS_bool (kIsStrictInf, var_i_34695.objectCompare (var_addedNonTerminalCount_32459.substract_operation (var_addedNonTerminalCountRef_32738, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 753)))).isValid () ;
        if (loop_34708) {
          loop_34708 = GALGAS_bool (kIsStrictInf, var_i_34695.objectCompare (var_addedNonTerminalCount_32459.substract_operation (var_addedNonTerminalCountRef_32738, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 753)))).boolValue () ;
        }
        if (loop_34708 && (0 == variant_34708)) {
          loop_34708 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 753)) ;
        }
        if (loop_34708) {
          variant_34708 -- ;
          var_nonTerminalToAddList_32424.addAssign_operation (enumerator_32517.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 754)), var_i_34695  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 754)) ;
          var_i_34695.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 755)) ;
        }
      }
    }
    enumerator_32517.gotoNextObject () ;
  }
  GALGAS_stringset var_lexiqueComponentSet_35004 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 759)) ;
  GALGAS_lstring var_inIndexingDirectory_35224 ;
  GALGAS_terminalMap joker_35112 ; // Joker input parameter
  GALGAS_indexingListAST joker_35148 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mLexiqueComponentMapForSemanticAnalysis (HERE).method_searchKey (var_lexiqueComponentName_32250, joker_35112, joker_35148, var_inIndexingDirectory_35224, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 760)) ;
  GALGAS_bool var_hasIndexing_35252 = var_inIndexingDirectory_35224.getter_location (HERE).getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 766)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 766)) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    const GALGAS_galgas_33_GrammarComponentAST temp_16 = object ;
    test_15 = var_hasIndexing_35252.operator_and (temp_16.getter_mHasIndexing (HERE).getter_bool (HERE).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 767)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 767)).boolEnum () ;
    if (kBoolTrue == test_15) {
      const GALGAS_galgas_33_GrammarComponentAST temp_17 = object ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.getter_mGrammarComponentName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 768)), GALGAS_string ("the grammar does not enable indexing, but the '").add_operation (var_lexiqueComponentName_32250.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 768)).add_operation (GALGAS_string ("' does"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 768)), fixItArray18  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 768)) ;
    }
  }
  if (kBoolFalse == test_15) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      const GALGAS_galgas_33_GrammarComponentAST temp_20 = object ;
      test_19 = var_hasIndexing_35252.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 769)).operator_and (temp_20.getter_mHasIndexing (HERE).getter_bool (HERE) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 769)).boolEnum () ;
      if (kBoolTrue == test_19) {
        const GALGAS_galgas_33_GrammarComponentAST temp_21 = object ;
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (temp_21.getter_mHasIndexing (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 770)), GALGAS_string ("the grammar enables indexing, but the '").add_operation (var_lexiqueComponentName_32250.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 770)).add_operation (GALGAS_string ("' does not"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 770)), fixItArray22  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 770)) ;
      }
    }
  }
  GALGAS_uint var_startSymbolIndex_35859 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_35931 ;
  const GALGAS_galgas_33_GrammarComponentAST temp_23 = object ;
  var_nonTerminalMapForGrammarAnalysis_32214.method_searchKey (temp_23.getter_mStartSymbolName (HERE), var_startSymbolIndex_35859, var_startSymbolAltMap_35931, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 774)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_24 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_25 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_26 = object ;
  routine_checkLabelMap (temp_24.getter_mStartSymbolName (HERE).getter_location (HERE), temp_25.getter_mStartSymbolLabelList (HERE), var_nonTerminalMapForGrammarAnalysis_32214.getter_locationForKey (temp_26.getter_mStartSymbolName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 783)), var_startSymbolAltMap_35931, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 780)) ;
  }
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_36326 = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 787)) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_27 = object ;
  cEnumerator_lstringlist enumerator_36371 (temp_27.getter_mUnusedNonterminalList (HERE), kENUMERATION_UP) ;
  while (enumerator_36371.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex_36458 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_36460 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_32214.method_searchKey (enumerator_36371.current_mValue (HERE), var_nonterminalIndex_36458, joker_36460, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 789)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_36326.setter_insertKey (enumerator_36371.current_mValue (HERE), var_nonterminalIndex_36458, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 790)) ;
    }
    enumerator_36371.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_36740 = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 793)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_36790 (var_nonTerminalMapForGrammarAnalysis_32214, kENUMERATION_UP) ;
  while (enumerator_36790.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_36740.addAssign_operation (enumerator_36790.current_lkey (HERE), enumerator_36790.current_mNonTerminalIndex (HERE), enumerator_36790.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 795)) ;
    enumerator_36790.gotoNextObject () ;
  }
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    test_28 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_28) {
      {
      const GALGAS_galgas_33_GrammarComponentAST temp_29 = object ;
      const GALGAS_galgas_33_GrammarComponentAST temp_30 = object ;
      routine_emitProductionRulesInTexFile (constinArgument_inProductDirectory, temp_29.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 801)), var_nonTerminalMapForGrammarAnalysis_32214, var_syntaxComponentListForGrammarAnalysis_32374, temp_30.getter_mStartSymbolName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 799)) ;
      }
    }
  }
  GALGAS_stringset var_implementationFileHeader_37607 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 810)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_37666 (var_nonTerminalMapForGrammarAnalysis_32214, kENUMERATION_UP) ;
  while (enumerator_37666.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_37727 (enumerator_37666.current (HERE).getter_mNonterminalSymbolParametersMap (HERE), kENUMERATION_UP) ;
    while (enumerator_37727.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_37768 (enumerator_37727.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
      while (enumerator_37768.hasCurrentObject ()) {
        switch (enumerator_37768.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            GALGAS_unifiedTypeMap_2D_entry var_t_37893 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_37768.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 816)) ;
            extensionMethod_addHeaderFileName (var_t_37893, var_implementationFileHeader_37607, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 817)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_37768.gotoNextObject () ;
      }
      enumerator_37727.gotoNextObject () ;
    }
    enumerator_37666.gotoNextObject () ;
  }
  enumGalgasBool test_31 = kBoolTrue ;
  if (kBoolTrue == test_31) {
    test_31 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_31) {
      var_implementationFileHeader_37607 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 824)) ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_32 = object ;
  GALGAS_string var_HTMLFilePath_38326 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 827)).add_operation (temp_32.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 827)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 827)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 827)) ;
  GALGAS_string var_grammarCppFile_38884 ;
  GALGAS_string var_grammarHTMLHelperContents_38927 ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_33 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_34 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_35 = object ;
  GALGAS_string temp_36 ;
  const enumGalgasBool test_37 = temp_35.getter_mHasTranslateFeature (HERE).boolEnum () ;
  if (kBoolTrue == test_37) {
    temp_36 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 840)) ;
  }else if (kBoolFalse == test_37) {
    temp_36 = GALGAS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration (GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 829)), temp_33.getter_mGrammarComponentName (HERE), temp_34.getter_mGrammarClass (HERE), var_startSymbolIndex_35859, var_lexiqueComponentName_32250.getter_string (HERE), var_actuallyUsedTerminalSymbolMap_32134, var_syntaxComponentListForGrammarAnalysis_32374, var_unusedNonTerminalSymbolsForGrammar_36326, var_HTMLFilePath_38326, var_nonTerminalSymbolSortedListForGrammarAnalysis_36740, var_hasIndexing_35252, temp_36, var_grammarCppFile_38884, var_grammarHTMLHelperContents_38927, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 828)) ;
  }
  enumGalgasBool test_38 = kBoolTrue ;
  if (kBoolTrue == test_38) {
    test_38 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_38) {
      var_HTMLFilePath_38326.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 846)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 846)) ;
      GALGAS_bool joker_39240 ; // Joker input parameter
      var_grammarHTMLHelperContents_38927.method_writeToFileWhenDifferentContents (var_HTMLFilePath_38326, joker_39240, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 847)) ;
    }
  }
  if (kBoolFalse == test_38) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath_38326, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 849)) ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_39 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_40 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_41 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_42 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_43 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (temp_39.getter_mGrammarComponentName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 856)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 856)), temp_40.getter_mGrammarComponentName (HERE).getter_string (HERE), var_lexiqueComponentName_32250.getter_string (HERE), var_nonTerminalMapForGrammarAnalysis_32214, var_nonTerminalToAddList_32424, var_hasIndexing_35252, temp_41.getter_mSyntaxComponents (HERE), temp_42.getter_mStartSymbolName (HERE).getter_string (HERE), temp_43.getter_mHasTranslateFeature (HERE), var_grammarCppFile_38884  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 854))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 852)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                         extensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_semanticAnalysis (defineExtensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  const GALGAS_lexiqueComponentAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_40334 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.getter_mLexiqueComponentName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 879)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_40334, var_nameForUsefulness_40334, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 880)) ;
  }
  GALGAS_lexicalTypeMap var_lexicalTypeMap_40584 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 882)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_40715 ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap_40715, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 885)) ;
  }
  const GALGAS_lexiqueComponentAST temp_1 = object ;
  cEnumerator_externRoutineListAST enumerator_40860 (temp_1.getter_mExternRoutineList (HERE), kENUMERATION_UP) ;
  while (enumerator_40860.hasCurrentObject ()) {
    GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_40904 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 888)) ;
    cEnumerator_lexicalExternRoutineFormalArgumentListAST enumerator_40990 (enumerator_40860.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_40990.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType_41042 ;
      var_lexicalTypeMap_40584.method_searchKey (enumerator_40990.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType_41042, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 891)) ;
      var_lexicalRoutineFormalArgumentList_40904.addAssign_operation (enumerator_40990.current_mPassingMode (HERE), var_lexicalFormalArgumentType_41042, enumerator_40990.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 892))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 892)) ;
      enumerator_40990.gotoNextObject () ;
    }
    {
    var_lexicalRoutineMap_40715.setter_insertKey (enumerator_40860.current_mRoutineName (HERE), var_lexicalRoutineFormalArgumentList_40904, enumerator_40860.current_mErrorMessageList (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 894)) ;
    }
    enumerator_40860.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_41465 ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap_41465, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 898)) ;
  }
  const GALGAS_lexiqueComponentAST temp_2 = object ;
  cEnumerator_externFunctionListAST enumerator_41614 (temp_2.getter_mExternFunctionList (HERE), kENUMERATION_UP) ;
  while (enumerator_41614.hasCurrentObject ()) {
    GALGAS_lexicalFunctionFormalArgumentList var_lexicalFunctionFormalArgumentList_41690 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 901)) ;
    cEnumerator_lexicalExternFunctionFormalArgumentListAST enumerator_41744 (enumerator_41614.current_mLexicalFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_41744.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType_41796 ;
      var_lexicalTypeMap_40584.method_searchKey (enumerator_41744.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType_41796, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 904)) ;
      var_lexicalFunctionFormalArgumentList_41690.addAssign_operation (var_lexicalFormalArgumentType_41796, enumerator_41744.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 905))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 905)) ;
      enumerator_41744.gotoNextObject () ;
    }
    GALGAS_lexicalTypeEnum var_returnedArgumentType_42024 ;
    var_lexicalTypeMap_40584.method_searchKey (enumerator_41614.current_mReturnedTypeName (HERE), var_returnedArgumentType_42024, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 908)) ;
    {
    var_lexicalFunctionMap_41465.setter_insertKey (enumerator_41614.current_mFunctionName (HERE), var_lexicalFunctionFormalArgumentList_41690, var_returnedArgumentType_42024, GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 909)) ;
    }
    enumerator_41614.gotoNextObject () ;
  }
  GALGAS_stringset var_unicodeTestFunctions_42380 ;
  {
  const GALGAS_lexiqueComponentAST temp_3 = object ;
  routine_lexicalUnicodeTestFunctionAnalysis (temp_3.getter_mLexicalFunctionListAST (HERE), var_unicodeTestFunctions_42380, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 912)) ;
  }
  const GALGAS_lexiqueComponentAST temp_4 = object ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext_42471 = GALGAS_lexiqueAnalysisContext::constructor_new (temp_4.getter_mLexiqueComponentName (HERE).getter_string (HERE), var_lexicalRoutineMap_40715, var_lexicalFunctionMap_41465, GALGAS_lexicalMessageMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 918)), GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 919)), GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 920)), GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 921)), GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 922)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 923)), GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 924)), GALGAS_styleMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 925)), var_unicodeTestFunctions_42380  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 914)) ;
  GALGAS_uint var_styleIndex_42866 = GALGAS_uint ((uint32_t) 1U) ;
  const GALGAS_lexiqueComponentAST temp_5 = object ;
  cEnumerator_lexicalStyleListAST enumerator_42905 (temp_5.getter_mLexicalStyleList (HERE), kENUMERATION_UP) ;
  while (enumerator_42905.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_42471.mProperty_mStyleMap.setter_insertKey (enumerator_42905.current_mName (HERE), enumerator_42905.current_mComment (HERE), var_styleIndex_42866, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 931)) ;
    }
    var_styleIndex_42866.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 932)) ;
    enumerator_42905.gotoNextObject () ;
  }
  {
  const GALGAS_lexiqueComponentAST temp_6 = object ;
  routine_buildLexicalAttributeMap (var_lexicalTypeMap_40584, temp_6.getter_mLexicalAttributeList (HERE), var_lexiqueAnalysisContext_42471.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 935)) ;
  }
  const GALGAS_lexiqueComponentAST temp_7 = object ;
  cEnumerator_terminalDeclarationListAST enumerator_43315 (temp_7.getter_mTerminalDeclarationList (HERE), kENUMERATION_UP) ;
  while (enumerator_43315.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_43347 = GALGAS_uint ((uint32_t) 0U) ;
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsStrictSup, enumerator_43315.current_mStyle (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 943)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 943)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_lstring joker_43454 ; // Joker input parameter
        var_lexiqueAnalysisContext_42471.getter_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 944)).method_searchKey (enumerator_43315.current_mStyle (HERE), joker_43454, var_terminalStyleIndex_43347, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 944)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_43509 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 946)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_43568 (enumerator_43315.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_43568.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_43615 ;
      var_lexiqueAnalysisContext_42471.getter_mLexicalAttributeMap (HERE).method_searchKey (enumerator_43568.current_mAttributeName (HERE), var_attributeLexicalType_43615, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 949)) ;
      var_argumentTypeList_43509.addAssign_operation (enumerator_43568.current_mFormalSelector (HERE), enumerator_43568.current_mAttributeName (HERE).getter_string (HERE), var_attributeLexicalType_43615  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 950)) ;
      enumerator_43568.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_42471.mProperty_mTerminalMap.setter_insertKey (enumerator_43315.current_mName (HERE), var_argumentTypeList_43509, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 952)) ;
    }
    GALGAS_bool var_isEndOfTemplateMark_43918 = GALGAS_bool (false) ;
    GALGAS_bool var_atomicSelection_43950 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_43983 (enumerator_43315.current_mOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_43983.hasCurrentObject ()) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsEqual, enumerator_43983.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 956)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
        if (kBoolTrue == test_9) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = var_atomicSelection_43950.boolEnum () ;
            if (kBoolTrue == test_10) {
              var_atomicSelection_43950 = GALGAS_bool (false) ;
            }
          }
          if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_43983.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 960)), GALGAS_string ("the 'nonAtomicSelection' attribute is already set"), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 960)) ;
          }
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (kIsNotEqual, enumerator_43983.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 962)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_43983.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 963)), GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' attributes are allowed here"), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 963)) ;
          }
        }
        if (kBoolFalse == test_12) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_isEndOfTemplateMark_43918.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_43983.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 965)), GALGAS_string ("the 'templateEndMark' attribute is already set"), fixItArray15  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 965)) ;
            }
          }
          if (kBoolFalse == test_14) {
            var_isEndOfTemplateMark_43918 = GALGAS_bool (true) ;
          }
        }
      }
      enumerator_43983.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext_42471.mProperty_mTerminalList.addAssign_operation (enumerator_43315.current_mName (HERE), var_argumentTypeList_43509, enumerator_43315.current_mSyntaxErrorMessage (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 973)), var_isEndOfTemplateMark_43918, var_atomicSelection_43950, var_terminalStyleIndex_43347  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 970)) ;
    enumerator_43315.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_16 = object ;
  cEnumerator_lexicalListDeclarationListAST enumerator_44779 (temp_16.getter_mLexicalListDeclarationList (HERE), kENUMERATION_UP) ;
  while (enumerator_44779.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_44811 = GALGAS_uint ((uint32_t) 0U) ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = GALGAS_bool (kIsStrictSup, enumerator_44779.current_mStyle (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 980)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 980)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_17) {
        GALGAS_lstring joker_44918 ; // Joker input parameter
        var_lexiqueAnalysisContext_42471.getter_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 981)).method_searchKey (enumerator_44779.current_mStyle (HERE), joker_44918, var_terminalStyleIndex_44811, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 981)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_44973 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 983)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_45032 (enumerator_44779.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_45032.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_45079 ;
      var_lexiqueAnalysisContext_42471.getter_mLexicalAttributeMap (HERE).method_searchKey (enumerator_45032.current_mAttributeName (HERE), var_attributeLexicalType_45079, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 986)) ;
      var_argumentTypeList_44973.addAssign_operation (enumerator_45032.current_mFormalSelector (HERE), enumerator_45032.current_mAttributeName (HERE).getter_string (HERE), var_attributeLexicalType_45079  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 987)) ;
      enumerator_45032.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap_45328 = GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 989)) ;
    GALGAS_tokenSortedlist var_tokenSortedlist_45357 = GALGAS_tokenSortedlist::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 990)) ;
    cEnumerator_lexicalListEntryListAST enumerator_45418 (enumerator_44779.current_mEntryList (HERE), kENUMERATION_UP) ;
    while (enumerator_45418.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage_45454 = enumerator_44779.current_mSyntaxErrorMessage (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 992)).getter_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_45418.current_mTerminalSpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 992)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 992)) ;
      GALGAS_bool var_isEndOfTemplateMark_45583 = GALGAS_bool (false) ;
      GALGAS_bool var_atomicSelection_45617 = GALGAS_bool (true) ;
      cEnumerator_lstringlist enumerator_45655 (enumerator_45418.current_mAttributeList (HERE), kENUMERATION_UP) ;
      while (enumerator_45655.hasCurrentObject ()) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsEqual, enumerator_45655.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 996)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
          if (kBoolTrue == test_18) {
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = var_atomicSelection_45617.boolEnum () ;
              if (kBoolTrue == test_19) {
                var_atomicSelection_45617 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_19) {
              TC_Array <C_FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (enumerator_45655.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1000)), GALGAS_string ("the 'nonAtomicSelection' attribute is already set"), fixItArray20  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1000)) ;
            }
          }
        }
        if (kBoolFalse == test_18) {
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            test_21 = GALGAS_bool (kIsNotEqual, enumerator_45655.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1002)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (enumerator_45655.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1003)), GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' attributes are allowed here"), fixItArray22  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1003)) ;
            }
          }
          if (kBoolFalse == test_21) {
            enumGalgasBool test_23 = kBoolTrue ;
            if (kBoolTrue == test_23) {
              test_23 = var_isEndOfTemplateMark_45583.boolEnum () ;
              if (kBoolTrue == test_23) {
                TC_Array <C_FixItDescription> fixItArray24 ;
                inCompiler->emitSemanticError (enumerator_45655.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1005)), GALGAS_string ("the 'templateEndMark' attribute is already set"), fixItArray24  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1005)) ;
              }
            }
            if (kBoolFalse == test_23) {
              var_isEndOfTemplateMark_45583 = GALGAS_bool (true) ;
            }
          }
        }
        enumerator_45655.gotoNextObject () ;
      }
      var_lexiqueAnalysisContext_42471.mProperty_mTerminalList.addAssign_operation (enumerator_45418.current_mTerminalSpelling (HERE), var_argumentTypeList_44973, var_syntaxErrorMessage_45454, var_isEndOfTemplateMark_45583, var_atomicSelection_45617, var_terminalStyleIndex_44811  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1010)) ;
      {
      var_lexiqueAnalysisContext_42471.mProperty_mTerminalMap.setter_insertKey (enumerator_45418.current_mTerminalSpelling (HERE), var_argumentTypeList_44973, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1017)) ;
      }
      {
      var_lexicalTokenListMap_45328.setter_insertKey (enumerator_45418.current_mEntrySpelling (HERE), enumerator_45418.current_mTerminalSpelling (HERE), enumerator_45418.current_mAttributeList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1018)) ;
      }
      var_tokenSortedlist_45357.addAssign_operation (enumerator_45418.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1019)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 1019)), enumerator_45418.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1019)), enumerator_45418.current_mTerminalSpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1019))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1019)) ;
      var_lexiqueAnalysisContext_42471.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_45418.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1020))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1020)) ;
      enumerator_45418.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_42471.mProperty_mLexicalTokenListMap.setter_insertKey (enumerator_44779.current_mName (HERE), var_lexicalTokenListMap_45328, var_tokenSortedlist_45357, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1022)) ;
    }
    enumerator_44779.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_25 = object ;
  cEnumerator_lexicalMessageDeclarationListAST enumerator_47057 (temp_25.getter_mLexicalMessageDeclarationList (HERE), kENUMERATION_UP) ;
  while (enumerator_47057.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_42471.mProperty_mLexicalMessageMap.setter_insertKey (enumerator_47057.current_mMessageName (HERE), enumerator_47057.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1026)) ;
    }
    enumerator_47057.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_26 = object ;
  cEnumerator_lexicalRuleListAST enumerator_47249 (temp_26.getter_mLexicalRuleList (HERE), kENUMERATION_UP) ;
  while (enumerator_47249.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((const cPtr_abstractLexicalRuleAST *) enumerator_47249.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext_42471, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1030)) ;
    enumerator_47249.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_47441 (var_lexiqueAnalysisContext_42471.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 1033)), kENUMERATION_UP) ;
  while (enumerator_47441.hasCurrentObject ()) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = enumerator_47441.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1034)).boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <C_FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticWarning (enumerator_47441.current_lkey (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1035)), GALGAS_string ("unused message"), fixItArray28  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1035)) ;
      }
    }
    enumerator_47441.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_29 = object ;
  cEnumerator_metamodelTemplateDelimitorListAST enumerator_47626 (temp_29.getter_mTemplateDelimitorList (HERE), kENUMERATION_UP) ;
  while (enumerator_47626.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_42471.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_47626.current_mStartString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1040))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1040)) ;
    var_lexiqueAnalysisContext_42471.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_47626.current_mEndString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1041))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1041)) ;
    GALGAS_bool var_preservesStartDelimiter_47812 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_47845 (enumerator_47626.current_mOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_47845.hasCurrentObject ()) {
      enumGalgasBool test_30 = kBoolTrue ;
      if (kBoolTrue == test_30) {
        test_30 = GALGAS_bool (kIsNotEqual, enumerator_47845.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1044)).objectCompare (GALGAS_string ("preserved"))).boolEnum () ;
        if (kBoolTrue == test_30) {
          TC_Array <C_FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticError (enumerator_47845.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1045)), GALGAS_string ("only the 'preserved' attribute is allowed here"), fixItArray31  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1045)) ;
        }
      }
      if (kBoolFalse == test_30) {
        enumGalgasBool test_32 = kBoolTrue ;
        if (kBoolTrue == test_32) {
          test_32 = var_preservesStartDelimiter_47812.boolEnum () ;
          if (kBoolTrue == test_32) {
            TC_Array <C_FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticError (enumerator_47845.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1047)), GALGAS_string ("the 'preserved' attribute is already set"), fixItArray33  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1047)) ;
          }
        }
        if (kBoolFalse == test_32) {
          var_preservesStartDelimiter_47812 = GALGAS_bool (true) ;
        }
      }
      enumerator_47845.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext_42471.mProperty_mTemplateDelimitorList.addAssign_operation (enumerator_47626.current_mStartString (HERE), enumerator_47626.current_mEndString (HERE), var_preservesStartDelimiter_47812  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1052)) ;
    enumerator_47626.gotoNextObject () ;
  }
  enumGalgasBool test_34 = kBoolTrue ;
  if (kBoolTrue == test_34) {
    const GALGAS_lexiqueComponentAST temp_35 = object ;
    test_34 = temp_35.getter_mIndexingDirectory (HERE).getter_location (HERE).getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1055)).boolEnum () ;
    if (kBoolTrue == test_34) {
      const GALGAS_lexiqueComponentAST temp_36 = object ;
      cEnumerator_indexingListAST enumerator_48390 (temp_36.getter_mIndexingListAST (HERE), kENUMERATION_UP) ;
      while (enumerator_48390.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (enumerator_48390.current_mIndexName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1057)), GALGAS_string ("indexing declaration requires one 'indexing in \"path\";' declaration"), fixItArray37  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1057)) ;
        enumerator_48390.gotoNextObject () ;
      }
    }
  }
  GALGAS_stringset var_indexNameSet_48530 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1060)) ;
  const GALGAS_lexiqueComponentAST temp_38 = object ;
  cEnumerator_indexingListAST enumerator_48569 (temp_38.getter_mIndexingListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_48569.hasCurrentObject ()) {
    enumGalgasBool test_39 = kBoolTrue ;
    if (kBoolTrue == test_39) {
      test_39 = var_indexNameSet_48530.getter_hasKey (enumerator_48569.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1062)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1062)).boolEnum () ;
      if (kBoolTrue == test_39) {
        TC_Array <C_FixItDescription> fixItArray40 ;
        inCompiler->emitSemanticError (enumerator_48569.current_mIndexName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1063)), GALGAS_string ("the '").add_operation (enumerator_48569.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1063)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1063)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1063)), fixItArray40  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1063)) ;
      }
    }
    var_indexNameSet_48530.addAssign_operation (enumerator_48569.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1065))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1065)) ;
    enumerator_48569.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_41 = object ;
  cEnumerator_templateReplacementListAST enumerator_48865 (temp_41.getter_mTemplateReplacementList (HERE), kENUMERATION_UP) ;
  while (enumerator_48865.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_42471.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_48865.current_mMatchString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1069))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1069)) ;
    var_lexiqueAnalysisContext_42471.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_48865.current_mReplacementString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1070))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1070)) ;
    enumerator_48865.gotoNextObject () ;
  }
  enumGalgasBool test_42 = kBoolTrue ;
  if (kBoolTrue == test_42) {
    test_42 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 1074)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_42) {
      const GALGAS_lexiqueComponentAST temp_43 = object ;
      GALGAS_string var_lexiqueClassName_49201 = temp_43.getter_mLexiqueComponentName (HERE).getter_string (HERE) ;
      const GALGAS_lexiqueComponentAST temp_44 = object ;
      GALGAS_string var_headerContents_49274 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (inCompiler, var_lexiqueClassName_49201.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1078)), var_lexiqueAnalysisContext_42471, temp_44.getter_mTemplateDelimitorList (HERE) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1077))) ;
      const GALGAS_lexiqueComponentAST temp_45 = object ;
      const GALGAS_lexiqueComponentAST temp_46 = object ;
      const GALGAS_lexiqueComponentAST temp_47 = object ;
      var_headerContents_49274.plusAssign_operation(GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (inCompiler, var_lexiqueClassName_49201.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1083)), temp_45.getter_mLexicalListDeclarationList (HERE), var_lexiqueAnalysisContext_42471, temp_46.getter_mIndexingListAST (HERE), temp_47.getter_mLexicalFunctionListAST (HERE) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1082))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1082)) ;
      const GALGAS_lexiqueComponentAST temp_48 = object ;
      const GALGAS_lexiqueComponentAST temp_49 = object ;
      const GALGAS_lexiqueComponentAST temp_50 = object ;
      const GALGAS_lexiqueComponentAST temp_51 = object ;
      const GALGAS_lexiqueComponentAST temp_52 = object ;
      const GALGAS_lexiqueComponentAST temp_53 = object ;
      GALGAS_string var_cppContents_49756 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (inCompiler, var_lexiqueClassName_49201.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1091)), var_lexiqueAnalysisContext_42471.getter_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 1092)), var_lexiqueAnalysisContext_42471.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 1093)), var_lexiqueAnalysisContext_42471.getter_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 1094)), var_lexiqueAnalysisContext_42471.getter_mLexicalTokenListMap (SOURCE_FILE ("semanticAnalysis.galgas", 1095)), var_lexiqueAnalysisContext_42471.getter_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 1096)), temp_48.getter_mLexicalRuleList (HERE), var_lexiqueAnalysisContext_42471, temp_49.getter_mIndexingDirectory (HERE).getter_string (HERE), temp_50.getter_mTemplateDelimitorList (HERE), var_lexiqueClassName_49201, temp_51.getter_mTemplateReplacementList (HERE), temp_52.getter_mLexicalStyleList (HERE), temp_53.getter_mLexicalFunctionListAST (HERE) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1090))) ;
      const GALGAS_lexiqueComponentAST temp_54 = object ;
      GALGAS_string var_cocoaHeader_50445 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, var_lexiqueClassName_49201, var_lexiqueAnalysisContext_42471, temp_54.getter_mLexicalFunctionListAST (HERE) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1107))) ;
      var_cocoaHeader_50445.plusAssign_operation(GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (inCompiler, var_lexiqueClassName_49201, var_lexiqueAnalysisContext_42471 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1112))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1112)) ;
      const GALGAS_lexiqueComponentAST temp_55 = object ;
      const GALGAS_lexiqueComponentAST temp_56 = object ;
      const GALGAS_lexiqueComponentAST temp_57 = object ;
      const GALGAS_lexiqueComponentAST temp_58 = object ;
      const GALGAS_lexiqueComponentAST temp_59 = object ;
      const GALGAS_lexiqueComponentAST temp_60 = object ;
      const GALGAS_lexiqueComponentAST temp_61 = object ;
      GALGAS_string var_cocoaImplementation_50801 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (var_lexiqueClassName_49201.getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1118)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1118)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1118)), var_lexiqueClassName_49201, var_lexiqueAnalysisContext_42471.getter_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 1120)), var_lexiqueAnalysisContext_42471.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 1121)), var_lexiqueAnalysisContext_42471.getter_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 1122)), var_lexiqueAnalysisContext_42471.getter_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 1123)), temp_55.getter_mLexicalRuleList (HERE), var_lexiqueAnalysisContext_42471, temp_56.getter_mTemplateReplacementList (HERE), temp_57.getter_mIndexingDirectory (HERE).getter_string (HERE), temp_58.getter_mIndexingListAST (HERE), temp_59.getter_mLexicalStyleList (HERE), temp_60.getter_mTemplateDelimitorList (HERE), temp_61.getter_mLexicalFunctionListAST (HERE) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1117))) ;
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (var_lexiqueClassName_49201.getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1138)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1138)), var_lexiqueClassName_49201, var_headerContents_49274, var_cppContents_49756, var_cocoaHeader_50445, var_cocoaImplementation_50801  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1136))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1134)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                         extensionMethod_lexiqueComponentAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueComponentAST_semanticAnalysis (defineExtensionMethod_lexiqueComponentAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes function_buildPredefinedTypes (const GALGAS_semanticContext & constinArgument_inSemanticContext,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypes result_outPredefinedTypes ; // Returned variable
  result_outPredefinedTypes = GALGAS_predefinedTypes::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1156))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1156)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1156)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("bool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1157))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1157)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1157)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("char"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1158))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1158)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1158)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1159))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1159)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1159)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1160))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1160)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1160)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("sint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1161))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1161)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1161)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("uint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("sint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("double"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("lbool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("lchar"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1167))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1167)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1167)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("luint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1168))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1168)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1168)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("lsint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1169))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1169)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1169)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("luint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1170))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1170)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1170)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("lsint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("ldouble"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1172))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1172)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1172)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("stringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1173))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1173)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1173)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("lbigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1174))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1174)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1174)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("bigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1175))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1175)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1175)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("stringset"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1176))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1176)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1176)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("lstringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1177))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1177)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1177))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1155)) ;
//---
  return result_outPredefinedTypes ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_buildPredefinedTypes [2] = {
  & kTypeDescriptor_GALGAS_semanticContext,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_buildPredefinedTypes (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_semanticContext operand0 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_buildPredefinedTypes (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_buildPredefinedTypes ("buildPredefinedTypes",
                                                                      functionWithGenericHeader_buildPredefinedTypes,
                                                                      & kTypeDescriptor_GALGAS_predefinedTypes,
                                                                      1,
                                                                      functionArgs_buildPredefinedTypes) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'syntaxFileGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_syntaxFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_syntaxFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_syntaxFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_syntaxFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_syntaxFileGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementationGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                                   const GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  GALGAS_uint index_27_ (0) ;
  if (in_INCLUSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_27 (in_INCLUSION_5F_SET, kENUMERATION_UP) ;
    while (enumerator_27.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_27.current_key (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_27_.increment () ;
      enumerator_27.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                               const GALGAS_nonterminalMap & in_NONTERMINAL_5F_MAP,
                                                                                               const GALGAS_ruleDeclarationList & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                               const GALGAS_uintlist & in_SELECT_5F_METHOD_5F_LIST,
                                                                                               const GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                               const GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Parser class '").add_operation (in_COMPONENT_5F_NAME, inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).add_operation (GALGAS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cParser_" ;
  result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 7)).stringValue () ;
  result << " {\n"
    "//--- Virtual destructor\n"
    "  public: virtual ~ cParser_" ;
  result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 9)).stringValue () ;
  result << " (void) {}\n"
    "\n"
    "//--- Non terminal declarations\n" ;
  GALGAS_uint index_536_ (0) ;
  if (in_NONTERMINAL_5F_MAP.isValid ()) {
    cEnumerator_nonterminalMap enumerator_536 (in_NONTERMINAL_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_536.hasCurrentObject ()) {
      GALGAS_uint index_570_ (0) ;
      if (enumerator_536.current_mLabelMap (HERE).isValid ()) {
        cEnumerator_nonterminalLabelMap enumerator_570 (enumerator_536.current_mLabelMap (HERE), kENUMERATION_UP) ;
        while (enumerator_570.hasCurrentObject ()) {
          result << "  protected: virtual void nt_" ;
          result << enumerator_536.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue () ;
          result << "_" ;
          result << enumerator_570.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_727_IDX (0) ;
          if (enumerator_570.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_727 (enumerator_570.current_mSignature (HERE), kENUMERATION_UP) ;
            while (enumerator_727.hasCurrentObject ()) {
              const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_727.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 16)))).boolEnum () ;
              if (kBoolTrue == test_0) {
                result << "const class GALGAS_" ;
                result << enumerator_727.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue () ;
                result << " constinArgument" ;
                result << index_727_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue () ;
              }else if (kBoolFalse == test_0) {
                const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_727.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 18)))).boolEnum () ;
                if (kBoolTrue == test_1) {
                  result << "class GALGAS_" ;
                  result << enumerator_727.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_727_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue () ;
                }else if (kBoolFalse == test_1) {
                  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_727.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 20)))).boolEnum () ;
                  if (kBoolTrue == test_2) {
                    result << "class GALGAS_" ;
                    result << enumerator_727.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_727_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue () ;
                  }else if (kBoolFalse == test_2) {
                    result << "class GALGAS_" ;
                    result << enumerator_727.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue () ;
                    result << " inArgument" ;
                    result << index_727_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue () ;
                  }
                }
              }
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_727_IDX.increment () ;
              enumerator_727.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_3 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          if (kBoolTrue == test_3) {
            result << "class C_String & " ;
            result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 28)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }else if (kBoolFalse == test_3) {
          }
          result << "class C_Lexique_" ;
          result << in_LEXIQUE_5F_NAME.stringValue () ;
          result << " * inLexique) = 0 ;\n"
            "\n" ;
          index_570_.increment () ;
          enumerator_570.gotoNextObject () ;
        }
      }
      result << "  protected: virtual void nt_" ;
      result << enumerator_536.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 33)).stringValue () ;
      result << "_parse (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_4 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "class C_String & " ;
        result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 35)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_4) {
      }
      result << "class C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " * inLexique) = 0 ;\n"
        "\n" ;
      const enumGalgasBool test_5 = in_HAS_5F_INDEXING.boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "  protected: virtual void nt_" ;
        result << enumerator_536.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue () ;
        result << "_indexing (class C_Lexique_" ;
        result << in_LEXIQUE_5F_NAME.stringValue () ;
        result << " * inLexique) = 0 ;\n"
          "\n" ;
      }else if (kBoolFalse == test_5) {
      }
      index_536_.increment () ;
      enumerator_536.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Rule declarations\n" ;
  GALGAS_uint index_2146_ (0) ;
  if (in_RULE_5F_DECLARATION_5F_LIST.isValid ()) {
    cEnumerator_ruleDeclarationList enumerator_2146 (in_RULE_5F_DECLARATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2146.hasCurrentObject ()) {
      GALGAS_uint index_2186_ (0) ;
      if (enumerator_2146.current_mLabelImplementationList (HERE).isValid ()) {
        cEnumerator_ruleLabelImplementationList enumerator_2186 (enumerator_2146.current_mLabelImplementationList (HERE), kENUMERATION_UP) ;
        while (enumerator_2186.hasCurrentObject ()) {
          result << "  protected: void rule_" ;
          result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_" ;
          result << enumerator_2146.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_i" ;
          result << enumerator_2146.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_" ;
          result << enumerator_2186.current_mLabelName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_2414_IDX (0) ;
          if (enumerator_2186.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_2414 (enumerator_2186.current_mSignature (HERE), kENUMERATION_UP) ;
            while (enumerator_2414.hasCurrentObject ()) {
              const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_2414.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 48)))).boolEnum () ;
              if (kBoolTrue == test_6) {
                result << "const GALGAS_" ;
                result << enumerator_2414.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue () ;
                result << " constinArgument" ;
                result << index_2414_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue () ;
              }else if (kBoolFalse == test_6) {
                const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_2414.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 50)))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  result << "GALGAS_" ;
                  result << enumerator_2414.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_2414_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue () ;
                }else if (kBoolFalse == test_7) {
                  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_2414.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 52)))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    result << "GALGAS_" ;
                    result << enumerator_2414.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_2414_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue () ;
                  }else if (kBoolFalse == test_8) {
                    result << "GALGAS_" ;
                    result << enumerator_2414.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue () ;
                    result << " inArgument" ;
                    result << index_2414_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue () ;
                  }
                }
              }
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_2414_IDX.increment () ;
              enumerator_2414.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_9 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          if (kBoolTrue == test_9) {
            result << "C_String & " ;
            result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 60)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }else if (kBoolFalse == test_9) {
          }
          result << "C_Lexique_" ;
          result << in_LEXIQUE_5F_NAME.stringValue () ;
          result << " * inLexique) ;\n"
            "\n" ;
          index_2186_.increment () ;
          enumerator_2186.gotoNextObject () ;
        }
      }
      result << "  protected: void rule_" ;
      result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_" ;
      result << enumerator_2146.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_i" ;
      result << enumerator_2146.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_parse (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_10 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      if (kBoolTrue == test_10) {
        result << "C_String & " ;
        result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 66)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_10) {
      }
      result << "C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " * inLexique) ;\n"
        "\n" ;
      const enumGalgasBool test_11 = in_HAS_5F_INDEXING.boolEnum () ;
      if (kBoolTrue == test_11) {
        result << "  protected: void rule_" ;
        result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_" ;
        result << enumerator_2146.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_i" ;
        result << enumerator_2146.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_indexing (C_Lexique_" ;
        result << in_LEXIQUE_5F_NAME.stringValue () ;
        result << " * inLexique) ;\n"
          "\n" ;
      }else if (kBoolFalse == test_11) {
      }
      index_2146_.increment () ;
      enumerator_2146.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Select methods\n" ;
  GALGAS_uint index_3907_ (0) ;
  if (in_SELECT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_uintlist enumerator_3907 (in_SELECT_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3907.hasCurrentObject ()) {
      result << "  protected: virtual int32_t select_" ;
      result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue () ;
      result << "_" ;
      result << enumerator_3907.current_mValue (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue () ;
      result << " (C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " *) = 0 ;\n"
        "\n" ;
      index_3907_.increment () ;
      enumerator_3907.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterNonterminalNonTerminalInMapAndCheck'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterNonterminalNonTerminalInMapAndCheck (const GALGAS_lstring constinArgument_inNonTerminalName,
                                                       const GALGAS_nonterminalLabelMap constinArgument_inNonterminalLabelMap,
                                                       GALGAS_nonterminalMap & ioArgument_ioNonterminalDeclarationMap,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cMapElement_nonterminalMap * objectArray_58917 = (const cMapElement_nonterminalMap *) ioArgument_ioNonterminalDeclarationMap.readAccessForWithInstruction (constinArgument_inNonTerminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1265))) ;
  if (NULL != objectArray_58917) {
      macroValidSharedObject (objectArray_58917, cMapElement_nonterminalMap) ;
    GALGAS_stringset var_firstDeclarationLabelSet_59023 = objectArray_58917->mProperty_mLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 1266)) ;
    GALGAS_stringset var_reDeclarationLabelSet_59085 = constinArgument_inNonterminalLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 1267)) ;
    GALGAS_stringset var_missingLabelSet_59153 = var_firstDeclarationLabelSet_59023.substract_operation (var_reDeclarationLabelSet_59085, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1268)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictSup, var_missingLabelSet_59153.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1269)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_59260 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_59297 (var_missingLabelSet_59153, kENUMERATION_UP) ;
        while (enumerator_59297.hasCurrentObject ()) {
          var_s_59260.plusAssign_operation(GALGAS_string ("\n"
            "-  ").add_operation (enumerator_59297.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1272)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1272)) ;
          enumerator_59297.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1274)), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1275)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1275)).add_operation (GALGAS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1275)).add_operation (var_s_59260, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1275)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1274)) ;
      }
    }
    GALGAS_stringset var_newLabelSet_59510 = var_reDeclarationLabelSet_59085.substract_operation (var_firstDeclarationLabelSet_59023, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1277)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_newLabelSet_59510.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1278)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s_59609 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_59642 (var_newLabelSet_59510, kENUMERATION_UP) ;
        while (enumerator_59642.hasCurrentObject ()) {
          var_s_59609.plusAssign_operation(GALGAS_string ("\n"
            "-  ").add_operation (enumerator_59642.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1281)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1281)) ;
          enumerator_59642.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1283)), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1284)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1284)).add_operation (GALGAS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1284)).add_operation (var_s_59609, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1284)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1283)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, var_missingLabelSet_59153.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1286)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_newLabelSet_59510.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1286)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1286)).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_nonterminalLabelMap enumerator_59917 (objectArray_58917->mProperty_mLabelMap, kENUMERATION_UP) ;
        cEnumerator_nonterminalLabelMap enumerator_59951 (constinArgument_inNonterminalLabelMap, kENUMERATION_UP) ;
        while (enumerator_59917.hasCurrentObject () && enumerator_59951.hasCurrentObject ()) {
          GALGAS_formalParameterSignature var_newSignature_60001 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1288)) ;
          cEnumerator_formalParameterSignature enumerator_60039 (enumerator_59951.current_mSignature (HERE), kENUMERATION_UP) ;
          while (enumerator_60039.hasCurrentObject ()) {
            var_newSignature_60001.addAssign_operation (enumerator_60039.current_mFormalSelector (HERE), enumerator_60039.current_mFormalArgumentType (HERE), enumerator_60039.current_mFormalArgumentPassingMode (HERE), enumerator_60039.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1290)) ;
            enumerator_60039.gotoNextObject () ;
          }
          {
          routine_checkMethodSignatures (enumerator_59917.current (HERE).getter_mSignatureForGeneration (HERE), enumerator_59917.current (HERE).getter_mEndOfArgumentLocation (HERE), var_newSignature_60001, enumerator_59951.current_mEndOfArgumentLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)) ;
          }
          enumerator_59917.gotoNextObject () ;
          enumerator_59951.gotoNextObject () ;
        }
      }
    }
  }else{
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1301)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap (const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                              GALGAS_nonterminalMap & outArgument_outNonterminalDeclarationMap,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNonterminalDeclarationMap.drop () ; // Release 'out' argument
  outArgument_outNonterminalDeclarationMap = GALGAS_nonterminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1311)) ;
  cEnumerator_nonterminalDeclarationListAST enumerator_60921 (constinArgument_inNonterminalDeclarationList, kENUMERATION_UP) ;
  while (enumerator_60921.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_60952 = GALGAS_nonterminalLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1314)) ;
    cEnumerator_nonTerminalLabelListAST enumerator_60999 (enumerator_60921.current_mLabels (HERE), kENUMERATION_UP) ;
    while (enumerator_60999.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_61035 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1316)) ;
      GALGAS_formalParameterSignature var_signature_61093 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1317)) ;
      cEnumerator_formalParameterListAST enumerator_61159 (enumerator_60999.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
      while (enumerator_61159.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_entry var_t_61176 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_61159.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1319)) ;
        var_signatureForGeneration_61035.addAssign_operation (enumerator_61159.current_mFormalSelector (HERE), enumerator_61159.current_mFormalArgumentPassingMode (HERE), var_t_61176, enumerator_61159.current_mFormalArgumentName (HERE), enumerator_61159.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1320))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1320)) ;
        var_signature_61093.addAssign_operation (enumerator_61159.current_mFormalSelector (HERE), var_t_61176, enumerator_61159.current_mFormalArgumentPassingMode (HERE), enumerator_61159.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1321)) ;
        enumerator_61159.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_60952.setter_insertKey (enumerator_60999.current_mLabelName (HERE), var_signatureForGeneration_61035, var_signature_61093, enumerator_60999.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1323)) ;
      }
      enumerator_60999.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck (enumerator_60921.current_mNonterminalName (HERE), var_nonterminalLabelMap_60952, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1325)) ;
    }
    enumerator_60921.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@semanticInstructionAST analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_semanticInstructionAST_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                             const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                             const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                             const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                             const GALGAS_string /* constinArgument_inComponentName */,
                                                                             const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_semanticInstructionAST * object = (const cPtr_semanticInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_semanticInstructionAST) ;
  const GALGAS_semanticInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1365)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_semanticInstructionAST_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                                 extensionMethod_semanticInstructionAST_analyzeSyntaxInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticInstructionAST_analyzeSyntaxInstruction (defineExtensionMethod_semanticInstructionAST_analyzeSyntaxInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterAnonymousVariable analyzeInputParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputParameterAnonymousVariable_analyzeInputParameter (const cPtr_abstractInputParameter * /* inObject */,
                                                                                   const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                   const GALGAS_lexicalTypeEnum /* constinArgument_inRequiredLexicalType */,
                                                                                   const GALGAS_string /* constinArgument_inLexicalAttributeName */,
                                                                                   GALGAS_terminalCheckAssignementList & /* ioArgument_ioTerminalCheckAssignementList */,
                                                                                   GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputParameterAnonymousVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterAnonymousVariable.mSlotID,
                                              extensionMethod_inputParameterAnonymousVariable_analyzeInputParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputParameterAnonymousVariable_analyzeInputParameter (defineExtensionMethod_inputParameterAnonymousVariable_analyzeInputParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterVariable analyzeInputParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputParameterVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                          const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                          GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterVariable * object = (const cPtr_inputParameterVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterVariable) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_65153 ;
  GALGAS_string var_cppName_65174 ;
  {
  const GALGAS_inputParameterVariable temp_0 = object ;
  GALGAS_string joker_65176 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (temp_0.getter_mActualParameterName (HERE), var_type_65153, var_cppName_65174, joker_65176, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1401)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_65215 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_65215 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_65215 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLCharType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_65215 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLUIntType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_65215 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLUInt_36__34_Type (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_65215 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLSIntType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_65215 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLSInt_36__34_Type (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_65215 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLDoubleType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_65215 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLBigIntType (HERE) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expectedType_65215.objectCompare (var_type_65153)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_inputParameterVariable temp_2 = object ;
      const GALGAS_inputParameterVariable temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1414)), GALGAS_string ("the '").add_operation (temp_3.getter_mActualParameterName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1415)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1415)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1415)).add_operation (var_type_65153.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1415)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1415)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1415)).add_operation (var_expectedType_65215.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1416)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1416)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1416)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1414)) ;
    }
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GALGAS_string::makeEmptyString (), var_cppName_65174, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputParameterVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterVariable.mSlotID,
                                              extensionMethod_inputParameterVariable_analyzeInputParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputParameterVariable_analyzeInputParameter (defineExtensionMethod_inputParameterVariable_analyzeInputParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterDeclaredVariable analyzeInputParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputParameterDeclaredVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                  const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                  GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredVariable * object = (const cPtr_inputParameterDeclaredVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredVariable) ;
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_66825 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_66825 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_66825 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLCharType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_66825 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLUIntType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_66825 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLUInt_36__34_Type (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_66825 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLSIntType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_66825 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLSInt_36__34_Type (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_66825 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLDoubleType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_66825 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLBigIntType (HERE) ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_inputParameterDeclaredVariable temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.getter_mActualParameterTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputParameterDeclaredVariable temp_2 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_type_67687 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_2.getter_mActualParameterTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1446)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_expectedType_66825.objectCompare (var_type_67687)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_inputParameterDeclaredVariable temp_4 = object ;
          const GALGAS_inputParameterDeclaredVariable temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1448)), GALGAS_string ("the '").add_operation (temp_5.getter_mActualParameterName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1449)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1449)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1449)).add_operation (var_type_67687.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1449)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1449)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1449)).add_operation (var_expectedType_66825.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1450)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1450)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1450)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1448)) ;
        }
      }
    }
  }
  const GALGAS_inputParameterDeclaredVariable temp_7 = object ;
  const GALGAS_inputParameterDeclaredVariable temp_8 = object ;
  GALGAS_string var_cppName_68091 = GALGAS_string ("var_").add_operation (temp_7.getter_mActualParameterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1454)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1454)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1454)).add_operation (temp_8.getter_mActualParameterName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1454)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1454)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1454)) ;
  {
  const GALGAS_inputParameterDeclaredVariable temp_9 = object ;
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (temp_9.getter_mActualParameterName (HERE), var_expectedType_66825, var_cppName_68091, var_cppName_68091, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1455)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType_66825.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1457)), var_cppName_68091, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1456)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputParameterDeclaredVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredVariable.mSlotID,
                                              extensionMethod_inputParameterDeclaredVariable_analyzeInputParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputParameterDeclaredVariable_analyzeInputParameter (defineExtensionMethod_inputParameterDeclaredVariable_analyzeInputParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterDeclaredConstant analyzeInputParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputParameterDeclaredConstant_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                  const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                  GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredConstant * object = (const cPtr_inputParameterDeclaredConstant *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredConstant) ;
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_68896 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_68896 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_68896 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLCharType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_68896 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLUIntType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_68896 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLUInt_36__34_Type (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_68896 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLSIntType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_68896 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLSInt_36__34_Type (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_68896 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLDoubleType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_68896 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLBigIntType (HERE) ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_inputParameterDeclaredConstant temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.getter_mActualParameterTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputParameterDeclaredConstant temp_2 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_type_69758 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_2.getter_mActualParameterTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1484)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_expectedType_68896.objectCompare (var_type_69758)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_inputParameterDeclaredConstant temp_4 = object ;
          const GALGAS_inputParameterDeclaredConstant temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1486)), GALGAS_string ("the '").add_operation (temp_5.getter_mActualParameterName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1487)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1487)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1487)).add_operation (var_type_69758.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1487)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1487)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1487)).add_operation (var_expectedType_68896.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1488)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1488)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1488)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1486)) ;
        }
      }
    }
  }
  const GALGAS_inputParameterDeclaredConstant temp_7 = object ;
  const GALGAS_inputParameterDeclaredConstant temp_8 = object ;
  GALGAS_string var_cppName_70162 = GALGAS_string ("var_").add_operation (temp_7.getter_mActualParameterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1492)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1492)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1492)).add_operation (temp_8.getter_mActualParameterName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1492)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1492)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1492)) ;
  {
  const GALGAS_inputParameterDeclaredConstant temp_9 = object ;
  ioArgument_ioVariableMap.setter_insertLocalConstant (temp_9.getter_mActualParameterName (HERE), var_expectedType_68896, var_cppName_70162, var_cppName_70162, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1493)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType_68896.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1496)), var_cppName_70162, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1495)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputParameterDeclaredConstant_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredConstant.mSlotID,
                                              extensionMethod_inputParameterDeclaredConstant_analyzeInputParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputParameterDeclaredConstant_analyzeInputParameter (defineExtensionMethod_inputParameterDeclaredConstant_analyzeInputParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                              const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                              const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                              const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                              const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1522)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mLocation (HERE), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1523)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                               const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1533)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1534)), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1534)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_type_72226 ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = object ;
  GALGAS_string joker_72228 ; // Joker input parameter
  GALGAS_string joker_72231 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (temp_3.getter_mActualParameterName (HERE), var_type_72226, joker_72228, joker_72231, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1536)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_72252 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_expectedType_72252.objectCompare (var_type_72226)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = object ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1539)), GALGAS_string ("the '").add_operation (temp_6.getter_mActualParameterName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1540)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1540)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1540)).add_operation (var_type_72226.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1540)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1540)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1540)).add_operation (var_expectedType_72252.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1541)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1541)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1541)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1539)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1551)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1552)), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1552)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = object ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = object ;
  GALGAS_string var_cppName_73084 = GALGAS_string ("var_").add_operation (temp_3.getter_mActualParameterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1554)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1554)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1554)).add_operation (temp_4.getter_mActualParameterName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1554)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1554)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1554)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_type_73218 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_5.getter_mActualParameterTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1555)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = object ;
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (temp_6.getter_mActualParameterName (HERE), var_type_73218, var_cppName_73084, var_cppName_73084, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1556)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_73447 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_expectedType_73447.objectCompare (var_type_73218)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = object ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1559)), GALGAS_string ("the '").add_operation (temp_9.getter_mActualParameterName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1560)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1560)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1560)).add_operation (var_type_73218.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1560)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1560)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1560)).add_operation (var_expectedType_73447.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1561)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1561)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1561)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1559)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                         const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1571)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1572)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1572)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = object ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = object ;
  GALGAS_string var_cppName_74272 = GALGAS_string ("var_").add_operation (temp_3.getter_mActualParameterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1574)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1574)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1574)).add_operation (temp_4.getter_mActualParameterName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1574)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1574)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1574)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_type_74406 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_5.getter_mActualParameterTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1575)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = object ;
  ioArgument_ioVariableMap.setter_insertLocalConstant (temp_6.getter_mActualParameterName (HERE), var_type_74406, var_cppName_74272, var_cppName_74272, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1576)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_74628 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_expectedType_74628.objectCompare (var_type_74406)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = object ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.getter_mActualParameterName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1579)), GALGAS_string ("the '").add_operation (temp_9.getter_mActualParameterName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1580)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1580)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1580)).add_operation (var_type_74406.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1580)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1580)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1580)).add_operation (var_expectedType_74628.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1581)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1581)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1581)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1579)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                                const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1601)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1601)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1601)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1601)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1601)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1602)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1602)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                const GALGAS_string /* constinArgument_inAccessMethodName */,
                                                                                                GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                 const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                 const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_0 = object ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = object ;
  GALGAS_string var_cppName_76736 = GALGAS_string ("var_").add_operation (temp_0.getter_mActualParameterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1622)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)).add_operation (temp_1.getter_mActualParameterName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1622)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_cppName_76736.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1623)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1623)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1623)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1623)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                         const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                         const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_0 = object ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = object ;
  GALGAS_string var_cppName_77351 = GALGAS_string ("var_").add_operation (temp_0.getter_mActualParameterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1633)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1633)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1633)).add_operation (temp_1.getter_mActualParameterName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1633)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1633)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1633)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_string ").add_operation (var_cppName_77351, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1634)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1634)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1634)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1634)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1634)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                           const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_0 = object ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = object ;
  GALGAS_string var_cppName_77971 = GALGAS_string ("var_").add_operation (temp_0.getter_mActualParameterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1644)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1644)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1644)).add_operation (temp_1.getter_mActualParameterName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1644)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1644)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1644)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_77971, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1645)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1645)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1645)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1645)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1645)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSyntaxInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSyntaxInstructionList (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                           const GALGAS_terminalMap constinArgument_inTerminalMap,
                                           const GALGAS_string constinArgument_inLexiqueName,
                                           const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                           const GALGAS_string constinArgument_inComponentName,
                                           const GALGAS_syntaxInstructionList constinArgument_inSyntaxInstructionListAST,
                                           const GALGAS_location constinArgument_inEndOfBranchLocation,
                                           const GALGAS_stringset constinArgument_inIndexNameSet,
                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                           GALGAS_uint & ioArgument_ioSelectMethodCount,
                                           GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1665)) ;
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1667)) ;
  }
  cEnumerator_syntaxInstructionList enumerator_79102 (constinArgument_inSyntaxInstructionListAST, kENUMERATION_UP) ;
  while (enumerator_79102.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_79102.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1670)) ;
    enumerator_79102.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1686)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfRuleLabel'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfRuleLabel (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                          const GALGAS_formalParameterListAST constinArgument_inFormalArguments,
                                          const GALGAS_syntaxInstructionList constinArgument_inSyntaxInstructionList,
                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
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
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  GALGAS_variableMap var_variableMap_80901 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1713)) ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE), constinArgument_inFormalArguments, var_variableMap_80901, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1714)) ;
  }
  outArgument_outSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1721)) ;
  cEnumerator_formalParameterListForGeneration enumerator_81168 (outArgument_outSignatureForGeneration, kENUMERATION_UP) ;
  while (enumerator_81168.hasCurrentObject ()) {
    outArgument_outSignature.addAssign_operation (enumerator_81168.current_mFormalSelector (HERE), enumerator_81168.current_mFormalArgumentType (HERE), enumerator_81168.current_mFormalArgumentPassingMode (HERE), enumerator_81168.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1723)) ;
    enumerator_81168.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1726)) ;
  GALGAS_stringlist var_localVariableCppNameList_81442 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1727)) ;
  cEnumerator_syntaxInstructionList enumerator_81494 (constinArgument_inSyntaxInstructionList, kENUMERATION_UP) ;
  while (enumerator_81494.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_81494.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_80901, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1729)) ;
    enumerator_81494.gotoNextObject () ;
  }
  var_variableMap_80901.method_checkAutomatonStates (constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1745)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfSyntaxComponent'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfSyntaxComponent (const GALGAS_lstring constinArgument_inSyntaxComponentUsefulnessName,
                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                                                const GALGAS_string constinArgument_inSyntaxComponentName,
                                                const GALGAS_string constinArgument_inLexiqueName,
                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                const GALGAS_stringset constinArgument_inIndexNameSet,
                                                const GALGAS_bool constinArgument_inHasIndexing,
                                                const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                GALGAS_syntaxDeclarationForGeneration & outArgument_outSyntaxDeclarationForGeneration,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSyntaxDeclarationForGeneration.drop () ; // Release 'out' argument
  GALGAS_nonterminalMap var_nonterminalMap_83303 ;
  {
  routine_buildNonterminalDeclarationsMap (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, var_nonterminalMap_83303, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1770)) ;
  }
  cEnumerator_syntaxRuleListAST enumerator_83384 (constinArgument_inRuleList, kENUMERATION_UP) ;
  while (enumerator_83384.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_83432 = GALGAS_nonterminalLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1777)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_83462 (enumerator_83384.current_mLabelList (HERE), kENUMERATION_UP) ;
    while (enumerator_83462.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_83528 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1779)) ;
      GALGAS_formalParameterSignature var_signature_83575 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1780)) ;
      cEnumerator_formalParameterListAST enumerator_83613 (enumerator_83462.current_mFormalArguments (HERE), kENUMERATION_UP) ;
      while (enumerator_83613.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_entry var_type_83633 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_83613.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1782)) ;
        var_signatureForGeneration_83528.addAssign_operation (enumerator_83613.current_mFormalSelector (HERE), enumerator_83613.current_mFormalArgumentPassingMode (HERE), var_type_83633, enumerator_83613.current_mFormalArgumentName (HERE), GALGAS_string ("argument_").add_operation (enumerator_83613.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1788)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1788))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1783)) ;
        var_signature_83575.addAssign_operation (enumerator_83613.current_mFormalSelector (HERE), var_type_83633, enumerator_83613.current_mFormalArgumentPassingMode (HERE), enumerator_83613.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1789)) ;
        enumerator_83613.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_83432.setter_insertKey (enumerator_83462.current_mLabelName (HERE), var_signatureForGeneration_83528, var_signature_83575, enumerator_83462.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1791)) ;
      }
      enumerator_83462.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck (enumerator_83384.current_mNonterminalName (HERE), var_nonterminalLabelMap_83432, var_nonterminalMap_83303, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1793)) ;
    }
    enumerator_83384.gotoNextObject () ;
  }
  GALGAS_analysisContext var_analysisContext_84299 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1799)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1801)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1796)) ;
  GALGAS_uint var_selectMethodCount_84495 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_ruleDeclarationList var_ruleDeclarationList_84542 = GALGAS_ruleDeclarationList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1806)) ;
  GALGAS_uint var_newRuleIndex_84568 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_syntaxRuleListAST enumerator_84595 (constinArgument_inRuleList, kENUMERATION_UP) ;
  while (enumerator_84595.hasCurrentObject ()) {
    GALGAS_ruleLabelImplementationList var_ruleLabelImplementationList_84666 = GALGAS_ruleLabelImplementationList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1810)) ;
    GALGAS_uint var_localSelectMethodCount_84704 = var_selectMethodCount_84495 ;
    GALGAS_nonterminalLabelMap joker_84774 ; // Joker input parameter
    var_nonterminalMap_83303.method_searchKey (enumerator_84595.current_mNonterminalName (HERE), joker_84774, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1812)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_84801 (enumerator_84595.current_mLabelList (HERE), kENUMERATION_UP) ;
    while (enumerator_84801.hasCurrentObject ()) {
      var_localSelectMethodCount_84704 = var_selectMethodCount_84495 ;
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_84916 ;
      GALGAS_formalParameterSignature var_signature_84958 ;
      GALGAS_semanticInstructionListForGeneration var_instructionListForGeneration_85031 ;
      {
      routine_semanticAnalysisOfRuleLabel (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_84801.current_mFormalArguments (HERE), enumerator_84801.current_mSyntaxInstructionList (HERE), var_analysisContext_84299, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1826)), var_nonterminalMap_83303, constinArgument_inSyntaxComponentName, enumerator_84801.current_mEndOfInstructionList (HERE), constinArgument_inIndexNameSet, var_localSelectMethodCount_84704, var_signatureForGeneration_84916, var_signature_84958, var_instructionListForGeneration_85031, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1818)) ;
      }
      var_ruleLabelImplementationList_84666.addAssign_operation (enumerator_84801.current_mLabelName (HERE), var_signatureForGeneration_84916, var_signature_84958, enumerator_84801.current_mEndOfArgumentLocation (HERE), var_instructionListForGeneration_85031  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1836)) ;
      enumerator_84801.gotoNextObject () ;
    }
    var_selectMethodCount_84495 = var_localSelectMethodCount_84704 ;
    GALGAS_nonterminalLabelMap joker_85850 ; // Joker input parameter
    var_nonterminalMap_83303.method_searchKey (enumerator_84595.current_mNonterminalName (HERE), joker_85850, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1844)) ;
    var_ruleDeclarationList_84542.addAssign_operation (enumerator_84595.current_mNonterminalName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1846)), var_newRuleIndex_84568, var_ruleLabelImplementationList_84666  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1845)) ;
    var_newRuleIndex_84568.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1849)) ;
    enumerator_84595.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GALGAS_syntaxDeclarationForGeneration::constructor_new (constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_83303, var_ruleDeclarationList_84542, var_selectMethodCount_84495, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1852)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                        GALGAS_string & ioArgument_ioImplementation,
                                                                                        GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                        GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                        GALGAS_string & outArgument_outCppName,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterForGeneration * object = (const cPtr_outputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterForGeneration) ;
  const GALGAS_outputActualParameterForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 27)) ;
  const GALGAS_outputActualParameterForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mOutputActualParameterExpression (HERE).ptr (), ioArgument_ioImplementation, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 28)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputActualParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_outputActualParameterForGeneration.mSlotID,
                                                extensionMethod_outputActualParameterForGeneration_generateActualParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputActualParameterForGeneration_generateActualParameter (defineExtensionMethod_outputActualParameterForGeneration_generateActualParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputInputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                             GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                             GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                             GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                             GALGAS_string & outArgument_outCppName,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputActualParameterForGeneration * object = (const cPtr_outputInputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputActualParameterForGeneration) ;
  const GALGAS_outputInputActualParameterForGeneration temp_0 = object ;
  cEnumerator_unifiedTypeMapEntryList enumerator_3004 (temp_0.getter_mTypeList (HERE), kENUMERATION_UP) ;
  while (enumerator_3004.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_3004.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 42)) ;
    enumerator_3004.gotoNextObject () ;
  }
  const GALGAS_outputInputActualParameterForGeneration temp_1 = object ;
  outArgument_outCppName = temp_1.getter_mOutputInputVariableCppName (HERE) ;
  const GALGAS_outputInputActualParameterForGeneration temp_2 = object ;
  cEnumerator_lstringlist enumerator_3142 (temp_2.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_3142.hasCurrentObject ()) {
    outArgument_outCppName.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_3142.current_mValue (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 46)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 46)) ;
    enumerator_3142.gotoNextObject () ;
  }
  {
  const GALGAS_outputInputActualParameterForGeneration temp_3 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.getter_mOutputInputVariableCppName (HERE) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 48)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputInputActualParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration.mSlotID,
                                                extensionMethod_outputInputActualParameterForGeneration_generateActualParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputInputActualParameterForGeneration_generateActualParameter (defineExtensionMethod_outputInputActualParameterForGeneration_generateActualParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                       GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                       GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                       GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                       GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       GALGAS_string & outArgument_outCppName,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualParameterForGeneration * object = (const cPtr_inputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualParameterForGeneration) ;
  const GALGAS_inputActualParameterForGeneration temp_0 = object ;
  outArgument_outCppName = temp_0.getter_mInputActualCppName (HERE) ;
  const GALGAS_inputActualParameterForGeneration temp_1 = object ;
  ioArgument_ioOutputVariableList.addAssign_operation (temp_1.getter_mInputActualCppName (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 62)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (outArgument_outCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 63)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_inputActualParameterForGeneration.mSlotID,
                                                extensionMethod_inputActualParameterForGeneration_generateActualParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualParameterForGeneration_generateActualParameter (defineExtensionMethod_inputActualParameterForGeneration_generateActualParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputJokerParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_string & ioArgument_ioImplementation,
                                                                                      GALGAS_stringlist & ioArgument_ioJokerParametersToReleaseList,
                                                                                      GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      GALGAS_string & outArgument_outCppName,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputJokerParameterForGeneration * object = (const cPtr_inputJokerParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_inputJokerParameterForGeneration) ;
  const GALGAS_inputJokerParameterForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 76)) ;
  const GALGAS_inputJokerParameterForGeneration temp_1 = object ;
  outArgument_outCppName = temp_1.getter_mInputActualCppName (HERE) ;
  const GALGAS_inputJokerParameterForGeneration temp_2 = object ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_2.getter_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)).add_operation (outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)).add_operation (GALGAS_string (" ; // Joker input parameter\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)) ;
  const GALGAS_inputJokerParameterForGeneration temp_3 = object ;
  ioArgument_ioJokerParametersToReleaseList.addAssign_operation (temp_3.getter_mInputActualCppName (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 79)) ;
  const GALGAS_inputJokerParameterForGeneration temp_4 = object ;
  ioArgument_ioOutputVariableList.addAssign_operation (temp_4.getter_mInputActualCppName (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 80)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputJokerParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_inputJokerParameterForGeneration.mSlotID,
                                                extensionMethod_inputJokerParameterForGeneration_generateActualParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputJokerParameterForGeneration_generateActualParameter (defineExtensionMethod_inputJokerParameterForGeneration_generateActualParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@semanticBlockInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_semanticBlockInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_semanticBlockInstructionForGeneration * object = (const cPtr_semanticBlockInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticBlockInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 91)) ;
  {
  const GALGAS_semanticBlockInstructionForGeneration temp_0 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_0.getter_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 92)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 100)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_semanticBlockInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration.mSlotID,
                                            extensionMethod_semanticBlockInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticBlockInstructionForGeneration_generateInstruction (defineExtensionMethod_semanticBlockInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  const GALGAS_grammarForGeneration temp_0 = object ;
  cEnumerator_lstringlist enumerator_2213 (temp_0.getter_mSyntaxComponents (HERE), kENUMERATION_UP) ;
  while (enumerator_2213.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (enumerator_2213.current_mValue (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 24))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 24)) ;
    enumerator_2213.gotoNextObject () ;
  }
  const GALGAS_grammarForGeneration temp_1 = object ;
  const GALGAS_grammarForGeneration temp_2 = object ;
  const GALGAS_grammarForGeneration temp_3 = object ;
  const GALGAS_grammarForGeneration temp_4 = object ;
  const GALGAS_grammarForGeneration temp_5 = object ;
  const GALGAS_grammarForGeneration temp_6 = object ;
  const GALGAS_grammarForGeneration temp_7 = object ;
  const GALGAS_grammarForGeneration temp_8 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (inCompiler, temp_1.getter_mLexiqueName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 27)), temp_2.getter_mNonTerminalMapForGrammarAnalysis (HERE), temp_3.getter_mNonTerminalToAddList (HERE), temp_4.getter_mHasIndexing (HERE), temp_5.getter_mStartSymbolName (HERE), temp_6.getter_mHasTranslateFeature (HERE), temp_7.getter_mGrammarName (HERE), temp_8.getter_mSyntaxComponents (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 26))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                              extensionMethod_grammarForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarForGeneration_appendDeclaration_31_ (defineExtensionMethod_grammarForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  const GALGAS_grammarForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.getter_mGrammarName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 45))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 45)) ;
  const GALGAS_grammarForGeneration temp_1 = object ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3056 (temp_1.getter_mNonTerminalMapForGrammarAnalysis (HERE), kENUMERATION_UP) ;
  while (enumerator_3056.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_3117 (enumerator_3056.current (HERE).getter_mNonterminalSymbolParametersMap (HERE), kENUMERATION_UP) ;
    while (enumerator_3117.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_3158 (enumerator_3117.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
      while (enumerator_3158.hasCurrentObject ()) {
        switch (enumerator_3158.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            GALGAS_unifiedTypeMap_2D_entry var_t_3283 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inUnifiedTypeMap, enumerator_3158.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 51)) ;
            extensionMethod_addHeaderFileName (var_t_3283, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 52)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_3158.gotoNextObject () ;
      }
      enumerator_3117.gotoNextObject () ;
    }
    enumerator_3056.gotoNextObject () ;
  }
  const GALGAS_grammarForGeneration temp_2 = object ;
  outArgument_outImplementation = temp_2.getter_mCppFileContents (HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                                     extensionMethod_grammarForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarForGeneration_appendSpecificImplementation (defineExtensionMethod_grammarForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration implementationCppFileName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_grammarForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  const GALGAS_grammarForGeneration temp_0 = object ;
  result_outName = GALGAS_string ("grammar-").add_operation (temp_0.getter_mGrammarName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 64)) ;
//---
  return result_outName ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_grammarForGeneration_implementationCppFileName (void) {
  enterExtensionGetter_implementationCppFileName (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                                  extensionGetter_grammarForGeneration_implementationCppFileName) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_grammarForGeneration_implementationCppFileName (defineExtensionGetter_grammarForGeneration_implementationCppFileName, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration hasCppHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_grammarForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (false) ;
//---
  return result_outHasHeader ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_grammarForGeneration_hasCppHeaderFile (void) {
  enterExtensionGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                         extensionGetter_grammarForGeneration_hasCppHeaderFile) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_grammarForGeneration_hasCppHeaderFile (defineExtensionGetter_grammarForGeneration_hasCppHeaderFile, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_grammarForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 76)) ;
//---
  return result_outHeaderKind ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_grammarForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                   extensionGetter_grammarForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_grammarForGeneration_headerKind (defineExtensionGetter_grammarForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_grammarForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_grammarForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                     extensionGetter_grammarForGeneration_isPredefined) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_grammarForGeneration_isPredefined (defineExtensionGetter_grammarForGeneration_isPredefined, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration implementationCppFileName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_syntaxDeclarationForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  const GALGAS_syntaxDeclarationForGeneration temp_0 = object ;
  result_outName = GALGAS_string ("syntax-").add_operation (temp_0.getter_mSyntaxComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 90)) ;
//---
  return result_outName ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_syntaxDeclarationForGeneration_implementationCppFileName (void) {
  enterExtensionGetter_implementationCppFileName (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                                  extensionGetter_syntaxDeclarationForGeneration_implementationCppFileName) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_implementationCppFileName (defineExtensionGetter_syntaxDeclarationForGeneration_implementationCppFileName, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration hasCppHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (false) ;
//---
  return result_outHasHeader ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile (void) {
  enterExtensionGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                         extensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_hasCppHeaderFile (defineExtensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_syntaxDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 102)) ;
//---
  return result_outHeaderKind ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_syntaxDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                   extensionGetter_syntaxDeclarationForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_headerKind (defineExtensionGetter_syntaxDeclarationForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_syntaxDeclarationForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_syntaxDeclarationForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                     extensionGetter_syntaxDeclarationForGeneration_isPredefined) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_isPredefined (defineExtensionGetter_syntaxDeclarationForGeneration_isPredefined, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_string & outArgument_outHeader,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  const GALGAS_syntaxDeclarationForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.getter_mLexiqueName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 116))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 116)) ;
  GALGAS_uintlist var_selectMethodList_5980 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 117)) ;
  GALGAS_uint var_idx_6006 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_syntaxDeclarationForGeneration temp_1 = object ;
  if (temp_1.getter_mSelectMethodCount (HERE).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 119)).isValid ()) {
    uint32_t variant_6017 = temp_1.getter_mSelectMethodCount (HERE).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 119)).uintValue () ;
    bool loop_6017 = true ;
    while (loop_6017) {
      const GALGAS_syntaxDeclarationForGeneration temp_2 = object ;
      loop_6017 = GALGAS_bool (kIsStrictInf, var_idx_6006.objectCompare (temp_2.getter_mSelectMethodCount (HERE))).isValid () ;
      if (loop_6017) {
        loop_6017 = GALGAS_bool (kIsStrictInf, var_idx_6006.objectCompare (temp_2.getter_mSelectMethodCount (HERE))).boolValue () ;
      }
      if (loop_6017 && (0 == variant_6017)) {
        loop_6017 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 119)) ;
      }
      if (loop_6017) {
        variant_6017 -- ;
        var_selectMethodList_5980.addAssign_operation (var_idx_6006  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 121)) ;
        var_idx_6006.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 122)) ;
      }
    }
  }
  const GALGAS_syntaxDeclarationForGeneration temp_3 = object ;
  const GALGAS_syntaxDeclarationForGeneration temp_4 = object ;
  const GALGAS_syntaxDeclarationForGeneration temp_5 = object ;
  const GALGAS_syntaxDeclarationForGeneration temp_6 = object ;
  const GALGAS_syntaxDeclarationForGeneration temp_7 = object ;
  const GALGAS_syntaxDeclarationForGeneration temp_8 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (inCompiler, temp_3.getter_mSyntaxComponentName (HERE), temp_4.getter_mLexiqueName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 126)), temp_5.getter_mNonterminalDeclarationMap (HERE), temp_6.getter_mRuleDeclarationList (HERE), var_selectMethodList_5980, temp_7.getter_mHasIndexing (HERE), temp_8.getter_mHasTranslateFeature (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 124))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                              extensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                         const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_string & outArgument_outImplementation,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  const GALGAS_syntaxDeclarationForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (temp_0.getter_mSyntaxComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 142))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 142)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (inCompiler, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 144)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 143))) ;
  const GALGAS_syntaxDeclarationForGeneration temp_1 = object ;
  GALGAS_string var_lexiqueCppName_6972 = GALGAS_string ("C_Lexique_").add_operation (temp_1.getter_mLexiqueName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 147)) ;
  const GALGAS_syntaxDeclarationForGeneration temp_2 = object ;
  cEnumerator_ruleDeclarationList enumerator_7072 (temp_2.getter_mRuleDeclarationList (HERE), kENUMERATION_UP) ;
  while (enumerator_7072.hasCurrentObject ()) {
    cEnumerator_ruleLabelImplementationList enumerator_7156 (enumerator_7072.current_mLabelImplementationList (HERE), kENUMERATION_UP) ;
    while (enumerator_7156.hasCurrentObject ()) {
      const GALGAS_syntaxDeclarationForGeneration temp_3 = object ;
      const GALGAS_syntaxDeclarationForGeneration temp_4 = object ;
      GALGAS_string var_ruleName_7186 = GALGAS_string ("cParser_").add_operation (temp_3.getter_mSyntaxComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 151)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 151)).add_operation (temp_4.getter_mSyntaxComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 152)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 152)).add_operation (enumerator_7072.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 152)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 153)).add_operation (enumerator_7072.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 154)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 154)).add_operation (enumerator_7156.current_mLabelName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 154)) ;
      outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 155)) ;
      GALGAS_string var_code_7995 ;
      {
      const GALGAS_syntaxDeclarationForGeneration temp_5 = object ;
      routine_generateProcedure (GALGAS_bool (false), var_ruleName_7186, ioArgument_ioInclusionSet, enumerator_7156.current_mSignatureForGeneration (HERE), enumerator_7156.current_mInstructionListForGeneration (HERE), GALGAS_bool (false), var_lexiqueCppName_6972, GALGAS_bool (false), GALGAS_bool (false), temp_5.getter_mHasTranslateFeature (HERE), var_code_7995, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 156)) ;
      }
      outArgument_outImplementation.plusAssign_operation(var_code_7995, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 169)) ;
      enumerator_7156.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_parseInstructionList_8147 ;
    GALGAS_lstring joker_8111 ; // Joker input parameter
    GALGAS_formalParameterListForGeneration joker_8114 ; // Joker input parameter
    GALGAS_formalParameterSignature joker_8117 ; // Joker input parameter
    GALGAS_location joker_8120 ; // Joker input parameter
    enumerator_7072.current_mLabelImplementationList (HERE).method_first (joker_8111, joker_8114, joker_8117, joker_8120, var_parseInstructionList_8147, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 172)) ;
    const GALGAS_syntaxDeclarationForGeneration temp_6 = object ;
    const GALGAS_syntaxDeclarationForGeneration temp_7 = object ;
    GALGAS_string var_parseRuleName_8178 = GALGAS_string ("cParser_").add_operation (temp_6.getter_mSyntaxComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 173)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 173)).add_operation (temp_7.getter_mSyntaxComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 174)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 174)).add_operation (enumerator_7072.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 174)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 175)).add_operation (enumerator_7072.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 176)).add_operation (GALGAS_string ("_parse"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 176)) ;
    outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 177)) ;
    GALGAS_string var_parseCode_8972 ;
    {
    const GALGAS_syntaxDeclarationForGeneration temp_8 = object ;
    routine_generateProcedure (GALGAS_bool (false), var_parseRuleName_8178, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 182)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_parseInstructionList_8147, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 183)), GALGAS_bool (false), var_lexiqueCppName_6972, GALGAS_bool (false), GALGAS_bool (true), temp_8.getter_mHasTranslateFeature (HERE), var_parseCode_8972, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 178)) ;
    }
    outArgument_outImplementation.plusAssign_operation(var_parseCode_8972, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 191)) ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      const GALGAS_syntaxDeclarationForGeneration temp_10 = object ;
      test_9 = temp_10.getter_mHasIndexing (HERE).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_semanticInstructionListForGeneration var_instructionList_9133 ;
        GALGAS_lstring joker_9173 ; // Joker input parameter
        GALGAS_formalParameterListForGeneration joker_9176 ; // Joker input parameter
        GALGAS_formalParameterSignature joker_9179 ; // Joker input parameter
        GALGAS_location joker_9182 ; // Joker input parameter
        enumerator_7072.current_mLabelImplementationList (HERE).method_first (joker_9173, joker_9176, joker_9179, joker_9182, var_instructionList_9133, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)) ;
        const GALGAS_syntaxDeclarationForGeneration temp_11 = object ;
        const GALGAS_syntaxDeclarationForGeneration temp_12 = object ;
        GALGAS_string var_ruleName_9228 = GALGAS_string ("cParser_").add_operation (temp_11.getter_mSyntaxComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 196)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 196)).add_operation (temp_12.getter_mSyntaxComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 197)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 197)).add_operation (enumerator_7072.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 197)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 198)).add_operation (enumerator_7072.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 199)).add_operation (GALGAS_string ("_indexing"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 199)) ;
        outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 200)) ;
        GALGAS_string var_code_10092 ;
        {
        routine_generateProcedure (GALGAS_bool (false), var_ruleName_9228, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 205)), function_syntaxSignatureOfInstructionList (GALGAS_string ("indexing"), var_instructionList_9133, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 206)), GALGAS_bool (false), var_lexiqueCppName_6972, GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), var_code_10092, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 201)) ;
        }
        outArgument_outImplementation.plusAssign_operation(var_code_10092, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 214)) ;
      }
    }
    enumerator_7072.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                                     extensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateProcedure'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateProcedure (const GALGAS_bool constinArgument_inGenerateStatic,
                                const GALGAS_string constinArgument_inProcedureName,
                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                GALGAS_formalParameterListForGeneration inArgument_inFormalArgumentList,
                                const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                const GALGAS_bool constinArgument_inProcedureIsConst,
                                const GALGAS_string constinArgument_inCompilerTypeName,
                                const GALGAS_bool constinArgument_inGenerateLocationArgs,
                                const GALGAS_bool constinArgument_inGenerateResetTemplateString,
                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                GALGAS_string & outArgument_outGeneratedCode,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_stringset var_unusedVariableCppNameSet_11298 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 239)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_0) {
      var_unusedVariableCppNameSet_11298.addAssign_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 241))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 241)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inGenerateResetTemplateString.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 243)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_unusedVariableCppNameSet_11298.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 244))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 244)) ;
    }
  }
  cEnumerator_formalParameterListForGeneration enumerator_11571 (inArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_11571.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, enumerator_11571.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticGeneration.galgas", 247)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_unusedVariableCppNameSet_11298.addAssign_operation (enumerator_11571.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 248)) ;
      }
    }
    enumerator_11571.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_11779 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody_11801 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_11801.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 254)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_11872 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_11872.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_11872.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_11779, var_unusedVariableCppNameSet_11298, constinArgument_inGenerateSyntaxDirectedTranslationString, var_routineBody_11801, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 256)) ;
    enumerator_11872.gotoNextObject () ;
  }
  {
  var_routineBody_11801.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 264)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_12175 (inArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_12175.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12175.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 267)) ;
    enumerator_12175.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = constinArgument_inGenerateStatic.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 272)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("void ").add_operation (constinArgument_inProcedureName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 274)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 274)) ;
  GALGAS_uint var_colRef_12431 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 275)) ;
  cEnumerator_formalParameterListForGeneration enumerator_12504 (inArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_12504.hasCurrentObject ()) {
    switch (enumerator_12504.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_12504.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_12504.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_12504.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_12504.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 286)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 286)) ;
      }
      break ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_unusedVariableCppNameSet_11298.getter_hasKey (enumerator_12504.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 288)).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_12504.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 289)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 289)) ;
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_12504.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 291)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 293)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_12431, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 294)) ;
    }
    enumerator_12504.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_unusedVariableCppNameSet_11298.getter_hasKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 298)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 298)).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_String & /* ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)).add_operation (GALGAS_string (" */,\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)) ;
        }
      }
      if (kBoolFalse == test_6) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_String & ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 301)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 301)) ;
      }
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_12431, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 303)) ;
      }
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_unusedVariableCppNameSet_11298.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 307)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 307)).boolEnum () ;
    if (kBoolTrue == test_7) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)) ;
    }
  }
  if (kBoolFalse == test_7) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 310)) ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = constinArgument_inGenerateLocationArgs.boolEnum () ;
    if (kBoolTrue == test_8) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_12431, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 314)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 315)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 317)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = constinArgument_inProcedureIsConst.boolEnum () ;
    if (kBoolTrue == test_9) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 319)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 321)) ;
  cEnumerator_formalParameterListForGeneration enumerator_14379 (inArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_14379.hasCurrentObject ()) {
    switch (enumerator_14379.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_14379.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 326)).add_operation (GALGAS_string (".drop () ; // Release 'out' argument\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 326)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
      }
      break ;
    }
    enumerator_14379.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_11801, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 331)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = constinArgument_inGenerateResetTemplateString.boolEnum () ;
    if (kBoolTrue == test_10) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 334)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 334)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 337)) ;
}


