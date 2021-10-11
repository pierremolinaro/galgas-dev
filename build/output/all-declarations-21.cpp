#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-21.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_optionComponentForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  const GALGAS_optionComponentForGeneration temp_0 = object ;
  result_result = temp_0.getter_mIsPredefined (HERE) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_optionComponentForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                     extensionGetter_optionComponentForGeneration_isPredefined) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_optionComponentForGeneration_isPredefined (defineExtensionGetter_optionComponentForGeneration_isPredefined, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_optionComponentForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  const GALGAS_optionComponentForGeneration temp_0 = object ;
  GALGAS_headerKind temp_1 ;
  const enumGalgasBool test_2 = temp_0.getter_mIsPredefined (HERE).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("optionCompilation.galgas", 246)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("optionCompilation.galgas", 246)) ;
  }
  result_result = temp_1 ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_optionComponentForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                   extensionGetter_optionComponentForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_optionComponentForGeneration_headerKind (defineExtensionGetter_optionComponentForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionComponentForGeneration temp_1 = object ;
    test_0 = temp_1.getter_mIsPredefined (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outHeader = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_optionComponentForGeneration temp_2 = object ;
    const GALGAS_optionComponentForGeneration temp_3 = object ;
    const GALGAS_optionComponentForGeneration temp_4 = object ;
    const GALGAS_optionComponentForGeneration temp_5 = object ;
    const GALGAS_optionComponentForGeneration temp_6 = object ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, temp_2.getter_mOptionComponentName (HERE), temp_3.getter_mBoolOptionMap (HERE), temp_4.getter_mUIntOptionMap (HERE), temp_5.getter_mStringOptionMap (HERE), temp_6.getter_mStringListOptionMap (HERE) COMMA_SOURCE_FILE ("optionCompilation.galgas", 258))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                              extensionMethod_optionComponentForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendDeclaration_31_ (defineExtensionMethod_optionComponentForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionComponentForGeneration temp_1 = object ;
    test_0 = temp_1.getter_mIsPredefined (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_optionComponentForGeneration temp_2 = object ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 278))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 278)) ;
    const GALGAS_optionComponentForGeneration temp_3 = object ;
    const GALGAS_optionComponentForGeneration temp_4 = object ;
    const GALGAS_optionComponentForGeneration temp_5 = object ;
    const GALGAS_optionComponentForGeneration temp_6 = object ;
    const GALGAS_optionComponentForGeneration temp_7 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, temp_3.getter_mOptionComponentName (HERE), temp_4.getter_mBoolOptionMap (HERE), temp_5.getter_mUIntOptionMap (HERE), temp_6.getter_mStringOptionMap (HERE), temp_7.getter_mStringListOptionMap (HERE) COMMA_SOURCE_FILE ("optionCompilation.galgas", 279))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                                     extensionMethod_optionComponentForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificImplementation (defineExtensionMethod_optionComponentForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendSpecificFiles'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              const GALGAS_string constinArgument_inProductDirectory,
                                                                              GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                              GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("optionCompilation.galgas", 297)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      const GALGAS_optionComponentForGeneration temp_2 = object ;
      test_1 = temp_2.getter_mIsPredefined (HERE).operator_not (SOURCE_FILE ("optionCompilation.galgas", 297)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionComponentForGeneration temp_3 = object ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_3.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 298)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 298))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 298)) ;
      {
      const GALGAS_optionComponentForGeneration temp_4 = object ;
      const GALGAS_optionComponentForGeneration temp_5 = object ;
      const GALGAS_optionComponentForGeneration temp_6 = object ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_4.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 301)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 301)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, temp_5.getter_mOptionComponentName (HERE) COMMA_SOURCE_FILE ("optionCompilation.galgas", 305))), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, temp_6.getter_mOptionComponentName (HERE) COMMA_SOURCE_FILE ("optionCompilation.galgas", 309))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 299)) ;
      }
      const GALGAS_optionComponentForGeneration temp_7 = object ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_7.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 315)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 315))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 315)) ;
      const GALGAS_optionComponentForGeneration temp_8 = object ;
      ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("option-").add_operation (temp_8.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 316)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 316))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 316)) ;
      {
      const GALGAS_optionComponentForGeneration temp_9 = object ;
      const GALGAS_optionComponentForGeneration temp_10 = object ;
      const GALGAS_optionComponentForGeneration temp_11 = object ;
      const GALGAS_optionComponentForGeneration temp_12 = object ;
      const GALGAS_optionComponentForGeneration temp_13 = object ;
      const GALGAS_optionComponentForGeneration temp_14 = object ;
      const GALGAS_optionComponentForGeneration temp_15 = object ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_9.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 319)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 319)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (temp_10.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 324)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 324)), temp_11.getter_mOptionComponentName (HERE), temp_12.getter_mBoolOptionMap (HERE), temp_13.getter_mUIntOptionMap (HERE), temp_14.getter_mStringOptionMap (HERE), temp_15.getter_mStringListOptionMap (HERE) COMMA_SOURCE_FILE ("optionCompilation.galgas", 323))), GALGAS_string ("\n"
        "\n"), GALGAS_string ("\n"
        "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 317)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentForGeneration_appendSpecificFiles (void) {
  enterExtensionMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                            extensionMethod_optionComponentForGeneration_appendSpecificFiles) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificFiles (defineExtensionMethod_optionComponentForGeneration_appendSpecificFiles, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'optionGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_optionGenerationTemplates_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_optionGenerationTemplates_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_optionGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_optionGenerationTemplates_0,
  0,
  gWrapperAllDirectories_optionGenerationTemplates_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderZone3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (C_Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               Bool options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_376_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_376 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_376.hasCurrentObject ()) {
      result << "extern C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << "_" ;
      result << enumerator_376.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_376_.increment () ;
      enumerator_376.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               UInt options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_894_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_894 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_894.hasCurrentObject ()) {
      result << "extern C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << "_" ;
      result << enumerator_894.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_894_.increment () ;
      enumerator_894.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String options                                                   \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1414_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1414 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1414.hasCurrentObject ()) {
      result << "extern C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << "_" ;
      result << enumerator_1414.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_1414_.increment () ;
      enumerator_1414.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String List options                                              \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1941_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1941 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1941.hasCurrentObject ()) {
      result << "extern C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << "_" ;
      result << enumerator_1941.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_1941_.increment () ;
      enumerator_1941.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                            const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               Bool options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_375_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_375 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_375.hasCurrentObject ()) {
      result << "C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << "_" ;
      result << enumerator_375.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_375.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 9)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_375.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_375.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 11)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_375.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 12)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_375_.increment () ;
      enumerator_375.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               UInt options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1238_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1238 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1238.hasCurrentObject ()) {
      result << "C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << "_" ;
      result << enumerator_1238.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_1238.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 22)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1238.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1238.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 24)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1238.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 25)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1238.current_mDefaultValue (HERE).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_1238_.increment () ;
      enumerator_1238.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String options                                                   \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_2168_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2168 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2168.hasCurrentObject ()) {
      result << "C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << "_" ;
      result << enumerator_2168.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_2168.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 36)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2168.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2168.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 38)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2168.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 39)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2168.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 40)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_2168_.increment () ;
      enumerator_2168.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String List options                                              \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_3126_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_3126 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3126.hasCurrentObject ()) {
      result << "C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << "_" ;
      result << enumerator_3126.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_3126.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 50)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3126.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3126.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 52)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3126.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 53)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_3126_.increment () ;
      enumerator_3126.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#ifndef " ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
  result << "_FOR_COCOA_DEFINED\n"
    "#define " ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
  result << "_FOR_COCOA_DEFINED\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#import <Cocoa/Cocoa.h>\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterOptionsFor_" ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-cocoa-zone3.galgasTemplate", 4)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NSMutableArray * ioBoolOptionArray,\n"
    "          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioUIntOptionArray,\n"
    "          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioStringOptionArray,\n"
    "          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioStringListOptionArray) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#endif\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationCocoa'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                       const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#import \"" ;
  result << in_OPTION_5F_HEADER_5F_FILE_5F_NAME.stringValue () ;
  result << ".h\"\n"
    "#import \"OC_GGS_CommandLineOption.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterOptionsFor_" ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 8)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NSMutableArray * ioBoolOptionArray,\n"
    "           " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioUIntOptionArray,\n"
    "           " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioStringOptionArray,\n"
    "           " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioStringListOptionArray) {\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_BOOL_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_UINT_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_LIST_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "  OC_GGS_CommandLineOption * option ;\n" ;
  }else if (kBoolFalse == test_0) {
  }
  GALGAS_uint index_799_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_799 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_799.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 17)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_799.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 18)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_799.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_799.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 20)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_799.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 21)).stringValue () ;
      result << "\n"
        "    defaultValue:@\"\"\n"
        "  ] ;\n"
        "  [ioBoolOptionArray addObject:option] ;\n" ;
      index_799_.increment () ;
      enumerator_799.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1264_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1264 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1264.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 28)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1264.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 29)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1264.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1264.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 31)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1264.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 32)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1264.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 33)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioUIntOptionArray addObject:option] ;\n" ;
      index_1264_.increment () ;
      enumerator_1264.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1766_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1766 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1766.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 39)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1766.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 40)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1766.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1766.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 42)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1766.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 43)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1766.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 44)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioStringOptionArray addObject:option] ;\n" ;
      index_1766_.increment () ;
      enumerator_1766.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2275_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2275 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2275.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 50)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_2275.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 51)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_2275.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_2275.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 53)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_2275.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 54)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_2275.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 55)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioStringListOptionArray addObject:option] ;\n" ;
      index_2275_.increment () ;
      enumerator_2275.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33_ (const GALGAS_galgas_33_GUIComponentListAST constinArgument_inGuiComponentListAST,
                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                      GALGAS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GALGAS_optionComponentMapForGeneration::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 243)) ;
  cEnumerator_galgas_33_GUIComponentListAST enumerator_7967 (constinArgument_inGuiComponentListAST, kENUMERATION_UP) ;
  while (enumerator_7967.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis (enumerator_7967.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 245)) ;
    }
    enumerator_7967.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis (const GALGAS_galgas_33_GUIComponentListAST_2D_element constinArgument_inGUIComponentAST,
                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                           GALGAS_optionComponentMapForGeneration & ioArgument_ioOptionComponentMapForGeneration,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inGUIComponentAST.getter_mGUIComponentName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("cocoa"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.getter_mGUIComponentName (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 261)), GALGAS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas", 261)) ;
    }
  }
  GALGAS_guiAnalysisContext var_context_8629 = GALGAS_guiAnalysisContext::constructor_default (SOURCE_FILE ("guiCompilation.galgas", 264)) ;
  cEnumerator_lstringlist enumerator_8729 (constinArgument_inGUIComponentAST.getter_mImportedOptionList (HERE), kENUMERATION_UP) ;
  while (enumerator_8729.hasCurrentObject ()) {
    GALGAS_bool joker_8826_5 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_8826_4 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_8826_3 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_8826_2 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_8826_1 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mOptionComponentMapForSemanticAnalysis (HERE).method_searchKey (enumerator_8729.current_mValue (HERE), joker_8826_5, joker_8826_4, joker_8826_3, joker_8826_2, joker_8826_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
    var_context_8629.mProperty_mImportedOptionComponentList.addAssign_operation (enumerator_8729.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 271)) ;
    enumerator_8729.gotoNextObject () ;
  }
  GALGAS_bool var_runOptionDefined_8948 = GALGAS_bool (false) ;
  cEnumerator_guiSimpleAttributeListAST enumerator_9013 (constinArgument_inGUIComponentAST.getter_mGlobalSimpleAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_9013.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_9013.current_mKey (HERE).getter_string (HERE).objectCompare (GALGAS_string ("run"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_runOptionDefined_8948.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_9013.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 278)), GALGAS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas", 278)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_9013.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_9013.current_mValue (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 280)), GALGAS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas", 280)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_context_8629.setter_setMBuildRunOption (enumerator_9013.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("guiCompilation.galgas", 282)) ;
            var_runOptionDefined_8948 = GALGAS_bool (true) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsEqual, enumerator_9013.current_mKey (HERE).getter_string (HERE).objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          cEnumerator_stringlist enumerator_9447 (enumerator_9013.current_mValue (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 286)), kENUMERATION_UP) ;
          while (enumerator_9447.hasCurrentObject ()) {
            var_context_8629.mProperty_mNibAndClassList.addAssign_operation (enumerator_9447.current (HERE).getter_mValue (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 287)) ;
            enumerator_9447.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_9013.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 290)), GALGAS_string ("the '").add_operation (enumerator_9013.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 290)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 290)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas", 290)) ;
      }
    }
    enumerator_9013.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_9696 (constinArgument_inGUIComponentAST.getter_mWithLexiqueList (HERE), kENUMERATION_UP) ;
  GALGAS_uint index_9655 ((uint32_t) 0) ;
  while (enumerator_9696.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap_9859 ;
    GALGAS_indexingListAST joker_9867_2 ; // Joker input parameter
    GALGAS_lstring joker_9867_1 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mLexiqueComponentMapForSemanticAnalysis (HERE).method_searchKey (enumerator_9696.current_mLexiqueFileName (HERE), var_terminalMap_9859, joker_9867_2, joker_9867_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 296)) ;
    GALGAS_stringset var_terminalSymbolSet_9934 = var_terminalMap_9859.getter_keySet (SOURCE_FILE ("guiCompilation.galgas", 302)) ;
    cEnumerator_guiLabelListAST enumerator_9999 (enumerator_9696.current_mLabels (HERE), kENUMERATION_UP) ;
    while (enumerator_9999.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_10032 (enumerator_9999.current_mTerminalList (HERE), kENUMERATION_UP) ;
      while (enumerator_10032.hasCurrentObject ()) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_terminalSymbolSet_9934.getter_hasKey (enumerator_10032.current_mTerminal (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 306)) COMMA_SOURCE_FILE ("guiCompilation.galgas", 306)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 306)).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_10032.current_mTerminal (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 307)), GALGAS_string ("the '$").add_operation (enumerator_10032.current_mTerminal (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 307)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 308)).add_operation (enumerator_9696.current_mLexiqueFileName (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 309)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 310)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas", 307)) ;
          }
        }
        enumerator_10032.gotoNextObject () ;
      }
      enumerator_9999.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList_10369 = GALGAS_textMacroList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 316)) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_10408 (enumerator_9696.current_mCompoundAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_10408.hasCurrentObject ()) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, enumerator_10408.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 318)).objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_10408.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 319)), GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
        }
      }
      if (kBoolFalse == test_11) {
        var_textMacroList_10369.addAssign_operation (enumerator_10408.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 321)), enumerator_10408.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 321))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 321)) ;
      }
      enumerator_10408.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension_10690 = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle_10724 = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment_10758 = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle_10791 = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment_10821 = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_10858 (enumerator_9696.current_mSimpleAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_10858.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsEqual, enumerator_10858.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 331)).objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          {
          var_context_8629.mProperty_mExtensionMap.setter_insertKey (enumerator_10858.current_mValue (HERE), enumerator_9696.current_mLexiqueFileName (HERE).getter_string (HERE), index_9655, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 332)) ;
          }
          var_hasAssociatedExtension_10690 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_13) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (kIsEqual, enumerator_10858.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 334)).objectCompare (GALGAS_string ("title"))).boolEnum () ;
          if (kBoolTrue == test_14) {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              test_15 = var_hasTabViewTitle_10724.boolEnum () ;
              if (kBoolTrue == test_15) {
                TC_Array <C_FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_10858.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 336)), GALGAS_string ("the '").add_operation (enumerator_10858.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 336)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 336)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas", 336)) ;
              }
            }
            var_hasTabViewTitle_10724 = GALGAS_bool (true) ;
            var_tabViewTitle_10791 = enumerator_10858.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 339)) ;
          }
        }
        if (kBoolFalse == test_14) {
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsEqual, enumerator_10858.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 340)).objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
            if (kBoolTrue == test_17) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = var_hasBlockComment_10758.boolEnum () ;
                if (kBoolTrue == test_18) {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_10858.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 342)), GALGAS_string ("the '").add_operation (enumerator_10858.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)) ;
                }
              }
              var_hasBlockComment_10758 = GALGAS_bool (true) ;
              var_blockComment_10821 = enumerator_10858.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 345)) ;
            }
          }
          if (kBoolFalse == test_17) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_10858.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 347)), GALGAS_string ("the '").add_operation (enumerator_10858.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)) ;
          }
        }
      }
      enumerator_10858.gotoNextObject () ;
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_10690.operator_not (SOURCE_FILE ("guiCompilation.galgas", 351)).boolEnum () ;
      if (kBoolTrue == test_21) {
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_9696.current_mLexiqueFileName (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 352)), GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas", 352)) ;
      }
    }
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = var_hasTabViewTitle_10724.operator_not (SOURCE_FILE ("guiCompilation.galgas", 355)).boolEnum () ;
      if (kBoolTrue == test_23) {
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_9696.current_mLexiqueFileName (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 356)), GALGAS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas", 356)) ;
      }
    }
    var_context_8629.mProperty_mWithLexiqueList.addAssign_operation (enumerator_9696.current_mLexiqueFileName (HERE).getter_string (HERE), index_9655, var_blockComment_10821, var_tabViewTitle_10791, var_textMacroList_10369, enumerator_9696.current_mLabels (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 359)) ;
    enumerator_9696.gotoNextObject () ;
    index_9655.increment_operation (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 294)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.getter_mGUIComponentName (HERE), var_context_8629, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 368)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33_ (const GALGAS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                 const GALGAS_string constinArgument_inOutputDirectory,
                                                 const GALGAS_bool constinArgument_inQuietOutputByDefault,
                                                 GALGAS_stringlist & ioArgument_ioApplicationSourceSet,
                                                 GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_optionComponentMapForGeneration enumerator_12826 (constinArgument_inOptionComponentMapForGeneration, kENUMERATION_UP) ;
  while (enumerator_12826.hasCurrentObject ()) {
    GALGAS_string var_fileName_12846 = GALGAS_string ("gui-").add_operation (enumerator_12826.current_lkey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 386)).add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 386)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_fileName_12846  COMMA_SOURCE_FILE ("guiCompilation.galgas", 387)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_12846  COMMA_SOURCE_FILE ("guiCompilation.galgas", 388)) ;
    GALGAS_string var_s_12956 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (inCompiler, enumerator_12826.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault, enumerator_12826.current_mGuiComponentContext (HERE).getter_mBuildRunOption (HERE) COMMA_SOURCE_FILE ("guiCompilation.galgas", 389))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_12846, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), var_s_12956, GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 394)) ;
    }
    enumerator_12826.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'guiGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_guiGenerationTemplates_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_guiGenerationTemplates_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_guiGenerationTemplates_0,
  0,
  gWrapperAllDirectories_guiGenerationTemplates_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates gui_implementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (C_Compiler * inCompiler,
                                                                                const GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                const GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT,
                                                                                const GALGAS_string & in_BUILD_5F_RUN_5F_OPTION
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#import \"OC_Token.h\"\n"
    "#import \"F_CocoaWrapperForGalgas.h\"\n"
    "#import \"OC_GGS_CommandLineOption.h\"\n" ;
  GALGAS_uint index_138_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 5)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_138 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 5)), kENUMERATION_UP) ;
    while (enumerator_138.hasCurrentObject ()) {
      result << "#import \"lexique-" ;
      result << enumerator_138.current_mLexiqueClassName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 6)).stringValue () ;
      result << "-cocoa.h\"\n" ;
      index_138_.increment () ;
      enumerator_138.gotoNextObject () ;
    }
  }
  GALGAS_uint index_264_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 8)).isValid ()) {
    cEnumerator_stringlist enumerator_264 (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 8)), kENUMERATION_UP) ;
    while (enumerator_264.hasCurrentObject ()) {
      result << "#import \"" ;
      result << enumerator_264.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_264_.increment () ;
      enumerator_264.gotoNextObject () ;
    }
  }
  result << "\n"
    "#ifdef USER_DEFAULT_COLORS_DEFINED\n"
    "  #import \"user_default_colors.h\"\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#pragma mark Nibs\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 26)).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray array] ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_1104_ (0) ;
    if (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 34)).isValid ()) {
      cEnumerator_stringlist enumerator_1104 (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 34)), kENUMERATION_UP) ;
      while (enumerator_1104.hasCurrentObject ()) {
        result << "    [NSArray arrayWithObjects:@\"" ;
        result << enumerator_1104.current_mValue (HERE).stringValue () ;
        result << "\", [" ;
        result << enumerator_1104.current_mValue (HERE).stringValue () ;
        result << " class], nil],\n" ;
        index_1104_.increment () ;
        enumerator_1104.gotoNextObject () ;
      }
    }
    result << "    nil\n"
      "  ] ;\n"
      "}\n" ;
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#pragma mark Command Line Options\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                       Command Line Options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1770_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 54)).isValid ()) {
    cEnumerator_stringlist enumerator_1770 (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 54)), kENUMERATION_UP) ;
    while (enumerator_1770.hasCurrentObject ()) {
      result << "#import \"option-" ;
      result << enumerator_1770.current_mValue (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 55)).stringValue () ;
      result << "-cocoa.h\"\n" ;
      index_1770_.increment () ;
      enumerator_1770.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterOptions (NSMutableArray * ioBoolOptionArray,\n"
    "                   NSMutableArray * ioUIntOptionArray,\n"
    "                   NSMutableArray * ioStringOptionArray,\n"
    "                   NSMutableArray * ioStringListOptionArray) {\n" ;
  GALGAS_uint index_2252_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 65)).isValid ()) {
    cEnumerator_stringlist enumerator_2252 (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 65)), kENUMERATION_UP) ;
    while (enumerator_2252.hasCurrentObject ()) {
      result << "  enterOptionsFor_" ;
      result << enumerator_2252.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 66)).stringValue () ;
      result << " (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n" ;
      index_2252_.increment () ;
      enumerator_2252.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n"
      "    initWithDomainName:@\"galgas_cli_options\"\n"
      "    identifier:@\"verbose_output\"\n"
      "    commandChar:'v'\n"
      "    commandString:@\"verbose\"\n"
      "    comment:@\"Verbose output\"\n"
      "    defaultValue:@\"\"\n"
      "  ] ;\n" ;
  }else if (kBoolFalse == test_1) {
    result << "  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n"
      "    initWithDomainName:@\"galgas_cli_options\"\n"
      "    identifier:@\"quiet_output\"\n"
      "    commandChar:'q'\n"
      "    commandString:@\"quiet\"\n"
      "    comment:@\"Quiet output\"\n"
      "    defaultValue:@\"\"\n"
      "  ] ;\n" ;
  }
  result << "  [ioBoolOptionArray addObject:option] ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_3106_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 91)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_3106 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 91)), kENUMERATION_UP) ;
    while (enumerator_3106.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "#pragma mark Lexique " ;
      result << enumerator_3106.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "//\n"
        "//                     P O P    U P    L I S T    D A T A                                        \n"
        "//\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n" ;
      GALGAS_uint index_3686_ (0) ;
      if (enumerator_3106.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_3686 (enumerator_3106.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_3686.hasCurrentObject ()) {
          result << "static const UInt16 gPopUpData_" ;
          result << enumerator_3106.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "_" ;
          result << enumerator_3106.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "_" ;
          result << enumerator_3686.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << " [" ;
          result << GALGAS_uint ((uint32_t) 2U).multiply_operation (enumerator_3686.current_mTerminalList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "] = {\n"
            "  " ;
          result << enumerator_3686.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 101)).stringValue () ;
          result << ", // Leading character count to strip\n" ;
          GALGAS_uint index_4003_ (0) ;
          if (enumerator_3686.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_4003 (enumerator_3686.current_mTerminalList (HERE), kENUMERATION_UP) ;
            while (enumerator_4003.hasCurrentObject ()) {
              result << "  " ;
              result << enumerator_3106.current_mLexiqueClassName (HERE).stringValue () ;
              result << "_1_" ;
              result << enumerator_4003.current_mTerminal (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 103)).stringValue () ;
              result << ", " ;
              result << enumerator_4003.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 103)).stringValue () ;
              result << ",\n" ;
              index_4003_.increment () ;
              enumerator_4003.gotoNextObject () ;
            }
          }
          result << "  0\n"
            "} ;\n"
            "\n" ;
          index_3686_.increment () ;
          enumerator_3686.gotoNextObject () ;
        }
      }
      result << "static const UInt16 * gPopUpData_" ;
      result << enumerator_3106.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << "_" ;
      result << enumerator_3106.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << " [" ;
      result << enumerator_3106.current_mLabels (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_4322_ (0) ;
      if (enumerator_3106.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4322 (enumerator_3106.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_4322.hasCurrentObject ()) {
          result << "  gPopUpData_" ;
          result << enumerator_3106.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << "_" ;
          result << enumerator_3106.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << "_" ;
          result << enumerator_4322.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << ",\n" ;
          index_4322_.increment () ;
          enumerator_4322.gotoNextObject () ;
        }
      }
      result << "  NULL\n"
        "} ;\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "//\n"
        "//                            Lexique interface                                                  \n"
        "//\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "@interface OC_Tokenizer_" ;
      result << enumerator_3106.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).stringValue () ;
      result << "_" ;
      result << enumerator_3106.current_mLexiqueClassName (HERE).stringValue () ;
      result << " : OC_Lexique_" ;
      result << enumerator_3106.current_mLexiqueClassName (HERE).stringValue () ;
      result << " {\n"
        "\n"
        "}\n"
        "\n"
        "- (NSString *) blockComment ;\n"
        "\n"
        "- (const UInt16 * *) popupListData ;\n"
        "\n"
        "- (NSUInteger) textMacroCount ;\n"
        "\n"
        "- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;\n"
        "\n"
        "- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;\n"
        "\n"
        "- (NSString *) tabItemTitle ;\n"
        "\n"
        "@end\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "@implementation OC_Tokenizer_" ;
      result << enumerator_3106.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 129)).stringValue () ;
      result << "_" ;
      result << enumerator_3106.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) blockComment {\n"
        "  return @" ;
      result << enumerator_3106.current_mBlockComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 132)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (const UInt16 * *) popupListData {\n"
        "  return gPopUpData_" ;
      result << enumerator_3106.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 136)).stringValue () ;
      result << "_" ;
      result << enumerator_3106.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 136)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSUInteger) textMacroCount {\n"
        "  return " ;
      result << enumerator_3106.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 140)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 140)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) tabItemTitle {\n"
        "  return @" ;
      result << enumerator_3106.current_mTitle (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 144)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroTitle [" ;
      result << enumerator_3106.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_6782_ (0) ;
      if (enumerator_3106.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_6782 (enumerator_3106.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_6782.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_6782.current_mKey (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 150)).stringValue () ;
          result << ",\n" ;
          index_6782_.increment () ;
          enumerator_6782.gotoNextObject () ;
        }
      }
      result << "    NULL\n"
        "  } ;\n"
        "  return kTextMacroTitle [inIndex] ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroContent [" ;
      result << enumerator_3106.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_7231_ (0) ;
      if (enumerator_3106.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7231 (enumerator_3106.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7231.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_7231.current_mContents (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 160)).stringValue () ;
          result << ",\n" ;
          index_7231_.increment () ;
          enumerator_7231.gotoNextObject () ;
        }
      }
      result << "    NULL\n"
        "  } ;\n"
        "  return kTextMacroContent [inIndex] ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "@end\n"
        "\n" ;
      index_3106_.increment () ;
      enumerator_3106.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "OC_Lexique * tokenizerForExtension (const NSString * inExtension) {\n"
    "  OC_Lexique * result = nil ;\n" ;
  GALGAS_uint index_7798_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mExtensionMap (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 175)).isValid ()) {
    cEnumerator_extensionMap enumerator_7798 (in_GUI_5F_CONTEXT.getter_mExtensionMap (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 175)), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_7798 = enumerator_7798.hasCurrentObject () ;
    if (nonEmpty_enumerator_7798) {
      result << "  if" ;
    }
    while (enumerator_7798.hasCurrentObject ()) {
      result << " ([inExtension isEqualToString:@" ;
      result << enumerator_7798.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 177)).stringValue () ;
      result << "]) {\n"
        "    result = [OC_Tokenizer_" ;
      result << enumerator_7798.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 178)).stringValue () ;
      result << "_" ;
      result << enumerator_7798.current_mLexiqueName (HERE).stringValue () ;
      result << " new] ;\n" ;
      if (enumerator_7798.hasNextObject ()) {
        result << "  }else if" ;
      }
      index_7798_.increment () ;
      enumerator_7798.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_7798) {
      result << "  }\n" ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "NSArray * tokenizers (void) {\n"
    "  return [NSArray arrayWithObjects:\n" ;
  GALGAS_uint index_8243_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 189)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_8243 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 189)), kENUMERATION_UP) ;
    while (enumerator_8243.hasCurrentObject ()) {
      result << "    [OC_Tokenizer_" ;
      result << enumerator_8243.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 190)).stringValue () ;
      result << "_" ;
      result << enumerator_8243.current_mLexiqueClassName (HERE).stringValue () ;
      result << " new],\n" ;
      index_8243_.increment () ;
      enumerator_8243.gotoNextObject () ;
    }
  }
  result << "    nil\n"
    "  ] ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "NSString * buildRunOption (void) {\n"
    "  return @\"" ;
  result << in_BUILD_5F_RUN_5F_OPTION.stringValue () ;
  result << "\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  const GALGAS_arrayDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2235 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mArrayTypeName (HERE).getter_string (SOURCE_FILE ("type-array.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 46)), temp_1.getter_mArrayTypeName (HERE).getter_location (SOURCE_FILE ("type-array.galgas", 46))  COMMA_SOURCE_FILE ("type-array.galgas", 46)) ;
  {
  const GALGAS_arrayDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2235, temp_2, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 47)) ;
  }
  {
  const GALGAS_arrayDeclarationAST temp_3 = object ;
  const GALGAS_arrayDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2235, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.getter_mElementTypeName (HERE).getter_string (SOURCE_FILE ("type-array.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 48)), temp_4.getter_mElementTypeName (HERE).getter_location (SOURCE_FILE ("type-array.galgas", 48))  COMMA_SOURCE_FILE ("type-array.galgas", 48)) COMMA_SOURCE_FILE ("type-array.galgas", 48)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                                extensionMethod_arrayDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_arrayDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_arrayDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mDimension (HERE).getter_uint (SOURCE_FILE ("type-array.galgas", 61)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_arrayDeclarationAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mDimension (HERE).getter_location (SOURCE_FILE ("type-array.galgas", 62)), GALGAS_string ("the dimension of an array should be > 0"), fixItArray3  COMMA_SOURCE_FILE ("type-array.galgas", 62)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_arrayTypeIndex_3474 ;
  {
  const GALGAS_arrayDeclarationAST temp_4 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.getter_mArrayTypeName (HERE), var_arrayTypeIndex_3474 COMMA_SOURCE_FILE ("type-array.galgas", 65)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_elementTypeIndex_3602 ;
  {
  const GALGAS_arrayDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.getter_mElementTypeName (HERE), var_elementTypeIndex_3602 COMMA_SOURCE_FILE ("type-array.galgas", 67)) ;
  }
  GALGAS_constructorMap var_constructorMap_3641 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 69)) ;
  GALGAS_getterMap var_getterMap_3732 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_3732, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 70)) ;
  }
  GALGAS_setterMap var_setterMap_3757 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 71)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_3800 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 72)) ;
  GALGAS_unifiedTypeMap_2D_entry var_boolType_3907 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("bool"), var_boolType_3907 COMMA_SOURCE_FILE ("type-array.galgas", 74)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_uintType_4010 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_4010 COMMA_SOURCE_FILE ("type-array.galgas", 76)) ;
  }
  GALGAS_functionSignature var_uintArgs_4046 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 78)) ;
  GALGAS_uint var_idx_4063 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_arrayDeclarationAST temp_6 = object ;
  if (temp_6.getter_mDimension (HERE).getter_uint (SOURCE_FILE ("type-array.galgas", 80)).isValid ()) {
    uint32_t variant_4074 = temp_6.getter_mDimension (HERE).getter_uint (SOURCE_FILE ("type-array.galgas", 80)).uintValue () ;
    bool loop_4074 = true ;
    while (loop_4074) {
      const GALGAS_arrayDeclarationAST temp_7 = object ;
      loop_4074 = GALGAS_bool (kIsStrictInf, var_idx_4063.objectCompare (temp_7.getter_mDimension (HERE).getter_uint (SOURCE_FILE ("type-array.galgas", 80)))).isValid () ;
      if (loop_4074) {
        loop_4074 = GALGAS_bool (kIsStrictInf, var_idx_4063.objectCompare (temp_7.getter_mDimension (HERE).getter_uint (SOURCE_FILE ("type-array.galgas", 80)))).boolValue () ;
      }
      if (loop_4074 && (0 == variant_4074)) {
        loop_4074 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 80)) ;
      }
      if (loop_4074) {
        variant_4074 -- ;
        var_uintArgs_4046.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 81)), var_uintType_4010, GALGAS_string ("inSize").add_operation (var_idx_4063.getter_string (SOURCE_FILE ("type-array.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 81))  COMMA_SOURCE_FILE ("type-array.galgas", 81)) ;
        var_idx_4063.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 82)) ;
      }
    }
  }
  {
  var_constructorMap_3641.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 86))  COMMA_SOURCE_FILE ("type-array.galgas", 86)), var_uintArgs_4046, GALGAS_bool (false), var_arrayTypeIndex_3474, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 85)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap_3732, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("axisCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 92)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_3732, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("sizeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 99)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_3732, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("rangeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("range"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 106)) ;
  }
  {
  var_getterMap_3732.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("isValueValidAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 116))  COMMA_SOURCE_FILE ("type-array.galgas", 116)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 117)), var_uintArgs_4046, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 119)), GALGAS_bool (true), var_boolType_3907, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 122)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 115)) ;
  }
  {
  var_getterMap_3732.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("valueAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 126))  COMMA_SOURCE_FILE ("type-array.galgas", 126)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 127)), var_uintArgs_4046, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 129)), GALGAS_bool (true), var_elementTypeIndex_3602, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 132)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 125)) ;
  }
  GALGAS_formalParameterSignature var_setterFormalArgumentList_5450 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 136)) ;
  var_setterFormalArgumentList_5450.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 137)), var_elementTypeIndex_3602, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 137)), GALGAS_string ("InValue")  COMMA_SOURCE_FILE ("type-array.galgas", 137)) ;
  var_idx_4063 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_arrayDeclarationAST temp_8 = object ;
  if (temp_8.getter_mDimension (HERE).getter_uint (SOURCE_FILE ("type-array.galgas", 139)).isValid ()) {
    uint32_t variant_5620 = temp_8.getter_mDimension (HERE).getter_uint (SOURCE_FILE ("type-array.galgas", 139)).uintValue () ;
    bool loop_5620 = true ;
    while (loop_5620) {
      const GALGAS_arrayDeclarationAST temp_9 = object ;
      loop_5620 = GALGAS_bool (kIsStrictInf, var_idx_4063.objectCompare (temp_9.getter_mDimension (HERE).getter_uint (SOURCE_FILE ("type-array.galgas", 139)))).isValid () ;
      if (loop_5620) {
        loop_5620 = GALGAS_bool (kIsStrictInf, var_idx_4063.objectCompare (temp_9.getter_mDimension (HERE).getter_uint (SOURCE_FILE ("type-array.galgas", 139)))).boolValue () ;
      }
      if (loop_5620 && (0 == variant_5620)) {
        loop_5620 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 139)) ;
      }
      if (loop_5620) {
        variant_5620 -- ;
        var_setterFormalArgumentList_5450.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 140)), var_uintType_4010, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 140)), GALGAS_string ("inIndex").add_operation (var_idx_4063.getter_string (SOURCE_FILE ("type-array.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 140))  COMMA_SOURCE_FILE ("type-array.galgas", 140)) ;
        var_idx_4063.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 141)) ;
      }
    }
  }
  {
  var_setterMap_3757.setter_insertKey (GALGAS_string ("setValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 144)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 145)), var_setterFormalArgumentList_5450, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 148)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 143)) ;
  }
  {
  var_setterMap_3757.setter_insertKey (GALGAS_string ("forceValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 152)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 153)), var_setterFormalArgumentList_5450, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 156)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 151)) ;
  }
  {
  GALGAS_lstring joker_6222_4 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_6222_3 ; // Joker input parameter
  GALGAS_formalArgumentPassingModeAST joker_6222_2 ; // Joker input parameter
  GALGAS_string joker_6222_1 ; // Joker input parameter
  var_setterFormalArgumentList_5450.setter_popFirst (joker_6222_4, joker_6222_3, joker_6222_2, joker_6222_1, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 159)) ;
  }
  {
  var_setterMap_3757.setter_insertKey (GALGAS_string ("invalidateValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 161)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 162)), var_setterFormalArgumentList_5450, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 165)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 160)) ;
  }
  {
  var_setterMap_3757.setter_insertKey (GALGAS_string ("setSize").getter_nowhere (SOURCE_FILE ("type-array.galgas", 169)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 170)), var_setterFormalArgumentList_5450, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 173)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 168)) ;
  }
  var_setterFormalArgumentList_5450 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 176)) ;
  var_setterFormalArgumentList_5450.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 177)), var_uintType_4010, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 177)), GALGAS_string ("inSize")  COMMA_SOURCE_FILE ("type-array.galgas", 177)) ;
  var_setterFormalArgumentList_5450.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 178)), var_uintType_4010, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 178)), GALGAS_string ("inAxisIndex")  COMMA_SOURCE_FILE ("type-array.galgas", 178)) ;
  {
  var_setterMap_3757.setter_insertKey (GALGAS_string ("setSizeForAxis").getter_nowhere (SOURCE_FILE ("type-array.galgas", 180)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 181)), var_setterFormalArgumentList_5450, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 184)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 179)) ;
  }
  {
  const GALGAS_arrayDeclarationAST temp_10 = object ;
  const GALGAS_arrayDeclarationAST temp_11 = object ;
  const GALGAS_arrayDeclarationAST temp_12 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_10.getter_mArrayTypeName (HERE), temp_11.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-array.galgas", 192)), GALGAS_typeKindEnum::constructor_listMapType (SOURCE_FILE ("type-array.galgas", 193)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 195)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 196)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 197)), var_constructorMap_3641, var_getterMap_3732, var_setterMap_3757, var_instanceMethodMap_3800, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 202)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 203)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 204)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-array.galgas", 205)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 206)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 207)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 208)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 209)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 210)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-array.galgas", 212)), GALGAS_string::makeEmptyString (), GALGAS_string ("array-").add_operation (temp_12.getter_mArrayTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-array.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 214)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-array.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 188)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                               extensionMethod_arrayDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterInSemanticContext (defineExtensionMethod_arrayDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_8756 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mArrayTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 232)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8756, var_nameForUsefulness_8756, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 233)) ;
  }
  const GALGAS_arrayDeclarationAST temp_1 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_8921 = function_typeNameForUsefulEntitiesGraph (temp_1.getter_mElementTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 234)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8756, var_elementTypeNameForUsefulness_8921 COMMA_SOURCE_FILE ("type-array.galgas", 235)) ;
  }
  const GALGAS_arrayDeclarationAST temp_2 = object ;
  const GALGAS_arrayDeclarationAST temp_3 = object ;
  const GALGAS_arrayDeclarationAST temp_4 = object ;
  const GALGAS_arrayDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (temp_2.getter_mArrayTypeName (HERE).getter_string (SOURCE_FILE ("type-array.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 238)), GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_3.getter_mArrayTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 240)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_4.getter_mElementTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 241)), temp_5.getter_mDimension (HERE).getter_uint (SOURCE_FILE ("type-array.galgas", 242))  COMMA_SOURCE_FILE ("type-array.galgas", 239))  COMMA_SOURCE_FILE ("type-array.galgas", 237)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                         extensionMethod_arrayDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayDeclarationAST_semanticAnalysis (defineExtensionMethod_arrayDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  const GALGAS_arrayTypeForGeneration temp_0 = object ;
  const GALGAS_arrayTypeForGeneration temp_1 = object ;
  const GALGAS_arrayTypeForGeneration temp_2 = object ;
  const GALGAS_arrayTypeForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 261)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 262)), temp_2.getter_mElementTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 263)), temp_3.getter_mDimension (HERE) COMMA_SOURCE_FILE ("type-array.galgas", 260))) ;
  const GALGAS_arrayTypeForGeneration temp_4 = object ;
  const GALGAS_arrayTypeForGeneration temp_5 = object ;
  const GALGAS_arrayTypeForGeneration temp_6 = object ;
  const GALGAS_arrayTypeForGeneration temp_7 = object ;
  const GALGAS_arrayTypeForGeneration temp_8 = object ;
  const GALGAS_arrayTypeForGeneration temp_9 = object ;
  const GALGAS_arrayTypeForGeneration temp_10 = object ;
  const GALGAS_arrayTypeForGeneration temp_11 = object ;
  const GALGAS_arrayTypeForGeneration temp_12 = object ;
  const GALGAS_arrayTypeForGeneration temp_13 = object ;
  const GALGAS_arrayTypeForGeneration temp_14 = object ;
  const GALGAS_arrayTypeForGeneration temp_15 = object ;
  const GALGAS_arrayTypeForGeneration temp_16 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_4.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 267)), temp_5.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 268)), temp_6.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 269)), temp_7.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 270)), temp_8.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 271)), temp_9.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 272)), temp_10.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 273)), temp_11.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 274)), temp_12.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 275)), temp_13.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 276)), temp_14.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 277)), temp_15.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 278)), temp_16.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 279)) COMMA_SOURCE_FILE ("type-array.galgas", 266))), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 266)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                              extensionMethod_arrayTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_arrayTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  const GALGAS_arrayTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 289)) ;
  const GALGAS_arrayTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mElementTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 290)) ;
  GALGAS_stringlist var_suffixList_11485 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 292)) ;
  GALGAS_uint var_idx_11513 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_arrayTypeForGeneration temp_2 = object ;
  if (temp_2.getter_mDimension (HERE).isValid ()) {
    uint32_t variant_11524 = temp_2.getter_mDimension (HERE).uintValue () ;
    bool loop_11524 = true ;
    while (loop_11524) {
      const GALGAS_arrayTypeForGeneration temp_3 = object ;
      loop_11524 = GALGAS_bool (kIsStrictInf, var_idx_11513.objectCompare (temp_3.getter_mDimension (HERE))).isValid () ;
      if (loop_11524) {
        loop_11524 = GALGAS_bool (kIsStrictInf, var_idx_11513.objectCompare (temp_3.getter_mDimension (HERE))).boolValue () ;
      }
      if (loop_11524 && (0 == variant_11524)) {
        loop_11524 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 294)) ;
      }
      if (loop_11524) {
        variant_11524 -- ;
        var_suffixList_11485.addAssign_operation (var_idx_11513.getter_string (SOURCE_FILE ("type-array.galgas", 295))  COMMA_SOURCE_FILE ("type-array.galgas", 295)) ;
        var_idx_11513.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 296)) ;
      }
    }
  }
  const GALGAS_arrayTypeForGeneration temp_4 = object ;
  const GALGAS_arrayTypeForGeneration temp_5 = object ;
  const GALGAS_arrayTypeForGeneration temp_6 = object ;
  const GALGAS_arrayTypeForGeneration temp_7 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, temp_4.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 299)), temp_5.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 300)), temp_6.getter_mElementTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 301)), temp_7.getter_mDimension (HERE), var_suffixList_11485 COMMA_SOURCE_FILE ("type-array.galgas", 298))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                                     extensionMethod_arrayTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_arrayTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                           GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                           GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                           GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                           GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetDeclarationAST * object = (const cPtr_boolsetDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetDeclarationAST) ;
  const GALGAS_boolsetDeclarationAST temp_0 = object ;
  const GALGAS_boolsetDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2178 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mBoolsetTypeName (HERE).getter_string (SOURCE_FILE ("type-boolset.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 48)), temp_1.getter_mBoolsetTypeName (HERE).getter_location (SOURCE_FILE ("type-boolset.galgas", 48))  COMMA_SOURCE_FILE ("type-boolset.galgas", 48)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2178, temp_2, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 49)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                                extensionMethod_boolsetDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_boolsetDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolsetDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_boolsetDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_boolsetDeclarationAST * object = (const cPtr_boolsetDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetDeclarationAST) ;
  const GALGAS_boolsetDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("boolset @").add_operation (temp_0.getter_mBoolsetTypeName (HERE).getter_string (SOURCE_FILE ("type-boolset.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 57)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_boolsetDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                          extensionGetter_boolsetDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_boolsetDeclarationAST_keyRepresentation (defineExtensionGetter_boolsetDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForBoolset'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForBoolset (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 65)) ;
  result_result.addAssign_operation (GALGAS_string ("all")  COMMA_SOURCE_FILE ("type-boolset.galgas", 66)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-boolset.galgas", 67)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-boolset.galgas", 68)) ;
  result_result.addAssign_operation (GALGAS_string ("none")  COMMA_SOURCE_FILE ("type-boolset.galgas", 69)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-boolset.galgas", 70)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForBoolset = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForBoolset ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForBoolset (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForBoolset) {
    gOnceFunctionResult_forbiddenKeysForBoolset = onceFunction_forbiddenKeysForBoolset (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForBoolset = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForBoolset ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForBoolset (void) {
  gOnceFunctionResult_forbiddenKeysForBoolset.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForBoolset (NULL,
                                                                     releaseOnceFunctionResult_forbiddenKeysForBoolset) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForBoolset [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForBoolset (C_Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForBoolset (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForBoolset ("forbiddenKeysForBoolset",
                                                                         functionWithGenericHeader_forbiddenKeysForBoolset,
                                                                         & kTypeDescriptor_GALGAS_stringset,
                                                                         0,
                                                                         functionArgs_forbiddenKeysForBoolset) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetDeclarationAST * object = (const cPtr_boolsetDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetDeclarationAST) ;
  GALGAS_stringset var_slotNameSet_3890 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 82)) ;
  const GALGAS_boolsetDeclarationAST temp_0 = object ;
  cEnumerator_lstringlist enumerator_3930 (temp_0.getter_mFlagList (HERE), kENUMERATION_UP) ;
  while (enumerator_3930.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 84)).getter_hasKey (enumerator_3930.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-boolset.galgas", 84)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_m_4014 = GALGAS_string ("a slot cannot be named:") ;
        cEnumerator_stringset enumerator_4084 (function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 86)), kENUMERATION_UP) ;
        while (enumerator_4084.hasCurrentObject ()) {
          var_m_4014.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_4084.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 87)) ;
          enumerator_4084.gotoNextObject () ;
        }
        var_m_4014.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 89)) ;
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_3930.current_mValue (HERE).getter_location (SOURCE_FILE ("type-boolset.galgas", 90)), var_m_4014, fixItArray2  COMMA_SOURCE_FILE ("type-boolset.galgas", 90)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_slotNameSet_3890.getter_hasKey (enumerator_3930.current_mValue (HERE).getter_string (SOURCE_FILE ("type-boolset.galgas", 91)) COMMA_SOURCE_FILE ("type-boolset.galgas", 91)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_3930.current_mValue (HERE).getter_location (SOURCE_FILE ("type-boolset.galgas", 92)), GALGAS_string ("duplicated slot name"), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 92)) ;
        }
      }
    }
    var_slotNameSet_3890.addAssign_operation (enumerator_3930.current_mValue (HERE).getter_string (SOURCE_FILE ("type-boolset.galgas", 94))  COMMA_SOURCE_FILE ("type-boolset.galgas", 94)) ;
    enumerator_3930.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_boolsetTypeIndex_4453 ;
  {
  const GALGAS_boolsetDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.getter_mBoolsetTypeName (HERE), var_boolsetTypeIndex_4453 COMMA_SOURCE_FILE ("type-boolset.galgas", 97)) ;
  }
  GALGAS_getterMap var_getterMap_4571 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4571, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 99)) ;
  }
  GALGAS_constructorMap var_constructorMap_4605 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 100)) ;
  {
  var_constructorMap_4605.setter_insertKey (GALGAS_string ("none").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 101)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 101)), GALGAS_bool (false), var_boolsetTypeIndex_4453, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 101)) ;
  }
  {
  var_constructorMap_4605.setter_insertKey (GALGAS_string ("all").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 102)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 102)), GALGAS_bool (false), var_boolsetTypeIndex_4453, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 102)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4571, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("none"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4571, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("all"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 110)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = object ;
  cEnumerator_lstringlist enumerator_5155 (temp_6.getter_mFlagList (HERE), kENUMERATION_UP) ;
  while (enumerator_5155.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_constructorMap_4605.getter_hasKey (enumerator_5155.current_mValue (HERE).getter_string (SOURCE_FILE ("type-boolset.galgas", 118)) COMMA_SOURCE_FILE ("type-boolset.galgas", 118)).operator_not (SOURCE_FILE ("type-boolset.galgas", 118)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        var_constructorMap_4605.setter_insertKey (enumerator_5155.current_mValue (HERE), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 119)), GALGAS_bool (false), var_boolsetTypeIndex_4453, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 119)) ;
        }
        {
        routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4571, ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5155.current_mValue (HERE).getter_string (HERE), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 120)) ;
        }
      }
    }
    enumerator_5155.gotoNextObject () ;
  }
  GALGAS_setterMap var_setterMap_5547 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 130)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5613 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 132)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_8 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_8.getter_mBoolsetTypeName (HERE), var_getterMap_4571, var_setterMap_5547, var_instanceMethodMap_5613, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 134)) ;
  }
  GALGAS_operators var_operators_5930 = GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("type-boolset.galgas", 145)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("type-boolset.galgas", 145)) COMMA_SOURCE_FILE ("type-boolset.galgas", 145)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("type-boolset.galgas", 145)) COMMA_SOURCE_FILE ("type-boolset.galgas", 145)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("type-boolset.galgas", 145)) COMMA_SOURCE_FILE ("type-boolset.galgas", 145)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-boolset.galgas", 146)) COMMA_SOURCE_FILE ("type-boolset.galgas", 145)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("type-boolset.galgas", 146)) COMMA_SOURCE_FILE ("type-boolset.galgas", 146)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_9 = object ;
  const GALGAS_boolsetDeclarationAST temp_10 = object ;
  const GALGAS_boolsetDeclarationAST temp_11 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_9.getter_mBoolsetTypeName (HERE), temp_10.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 152)), GALGAS_typeKindEnum::constructor_boolsetType (SOURCE_FILE ("type-boolset.galgas", 153)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 155)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 156)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 157)), var_constructorMap_4605, var_getterMap_4571, var_setterMap_5547, var_instanceMethodMap_5613, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 162)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 163)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 164)), var_operators_5930, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 166)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 167)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 168)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 169)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 170)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 172)), GALGAS_string ("none"), GALGAS_string ("boolset-").add_operation (temp_11.getter_mBoolsetTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-boolset.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 174)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-boolset.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 148)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                               extensionMethod_boolsetDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetDeclarationAST_enterInSemanticContext (defineExtensionMethod_boolsetDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                    GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetDeclarationAST * object = (const cPtr_boolsetDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetDeclarationAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_boolsetDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.getter_mFlagList (HERE).getter_length (SOURCE_FILE ("type-boolset.galgas", 193)).objectCompare (GALGAS_uint ((uint32_t) 64U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_boolsetDeclarationAST temp_2 = object ;
      GALGAS_lstring var_s_7552 = temp_2.getter_mFlagList (HERE).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 64U), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 194)) ;
      const GALGAS_boolsetDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_7552.getter_location (SOURCE_FILE ("type-boolset.galgas", 195)), GALGAS_string ("max flags count is 64 (here: ").add_operation (temp_3.getter_mFlagList (HERE).getter_length (SOURCE_FILE ("type-boolset.galgas", 195)).getter_string (SOURCE_FILE ("type-boolset.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 195)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 195)), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 195)) ;
    }
  }
  const GALGAS_boolsetDeclarationAST temp_5 = object ;
  GALGAS_lstring var_boolsetNameForUsefulness_7731 = function_typeNameForUsefulEntitiesGraph (temp_5.getter_mBoolsetTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 198)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_7731, var_boolsetNameForUsefulness_7731, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 199)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = object ;
  const GALGAS_boolsetDeclarationAST temp_7 = object ;
  const GALGAS_boolsetDeclarationAST temp_8 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (temp_6.getter_mBoolsetTypeName (HERE).getter_string (SOURCE_FILE ("type-boolset.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 201)), GALGAS_boolsetTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_7.getter_mBoolsetTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 203)), temp_8.getter_mFlagList (HERE)  COMMA_SOURCE_FILE ("type-boolset.galgas", 202))  COMMA_SOURCE_FILE ("type-boolset.galgas", 200)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                         extensionMethod_boolsetDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetDeclarationAST_semanticAnalysis (defineExtensionMethod_boolsetDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'structGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_structGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_structGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structGenerationTemplate_0,
  0,
  gWrapperAllDirectories_structGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_lstringlist & /* in_SLOT_5F_LIST */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Properties\n"
    "  private: uint64_t mFlags ;\n"
    "  private: bool mIsValid ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Private constructor\n"
    "  private: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const uint64_t inFlags) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (C_Compiler * /* inCompiler */,
                                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                              const GALGAS_lstringlist & in_SLOT_5F_LIST,
                                                                                              const GALGAS_bigint & in_FULL_5F_SET
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_root (),\n"
    "mFlags (0),\n"
    "mIsValid (false) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const uint64_t inFlags) :\n"
    "AC_GALGAS_root (),\n"
    "mFlags (inFlags),\n"
    "mIsValid (true) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_none (UNUSED_LOCATION_ARGS) {\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (0) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_all (UNUSED_LOCATION_ARGS) {\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ((uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 26)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_1083_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_1083 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1083.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_1083.current_mValue (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 32)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) {\n"
        "  return GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " (((uint64_t) 1) << " ;
      result << index_1083_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 33)).stringValue () ;
      result << ") ;\n"
        "}\n"
        "\n" ;
      index_1083_idx.increment () ;
      enumerator_1083.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "   typeComparisonResult result = kOperandNotValid ;\n"
    "   if (mIsValid && inOperand.mIsValid) {\n"
    "     result = kOperandEqual ;\n"
    "     if (mFlags < inOperand.mFlags) {\n"
    "       result = kFirstOperandLowerThanSecond ;\n"
    "     }else if (mFlags > inOperand.mFlags) {\n"
    "       result = kFirstOperandGreaterThanSecond ;\n"
    "     }\n"
    "   }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mIsValid ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n"
    "  mIsValid = false ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_or (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n"
    "                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid && inOperand.mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags | inOperand.mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_and (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n"
    "                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid && inOperand.mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags & inOperand.mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_xor (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n"
    "                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid && inOperand.mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags ^ inOperand.mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::substract_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand,\n"
    "                 " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "                 " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid && inOperand.mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags & ~ inOperand.mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_tilde (UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (((uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 114)).stringValue () ;
  result << ") ^ mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n"
    "                              " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t /* inIndentation */) const {\n"
    "  ioString << \"<boolset @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ":\" ;\n"
    "  if (! isValid ()) {\n"
    "    ioString << \" not built\" ;\n"
    "  }else{\n" ;
  GALGAS_uint index_5160_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_5160 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5160.hasCurrentObject ()) {
      result << "    if ((mFlags & ((uint64_t) 1) << " ;
      result << index_5160_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 129)).stringValue () ;
      result << ") != 0) {\n"
        "      ioString << \" " ;
      result << enumerator_5160.current_mValue (HERE).getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 130)).stringValue () ;
      result << "\" ;\n"
        "    }\n" ;
      index_5160_idx.increment () ;
      enumerator_5160.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_none (UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_bool result ;\n"
    "  if (mIsValid) {\n"
    "    result = GALGAS_bool (mFlags == 0) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_all (UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_bool result ;\n"
    "  if (mIsValid) {\n"
    "    result = GALGAS_bool (mFlags == (uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 152)).stringValue () ;
  result << ") ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_6010_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_6010 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6010.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_6010.current_mValue (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 159)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  GALGAS_bool result ;\n"
        "  if (mIsValid) {\n"
        "    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << " ;
      result << index_6010_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 162)).stringValue () ;
      result << ") != 0) ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_6010_idx.increment () ;
      enumerator_6010.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetTypeForGeneration * object = (const cPtr_boolsetTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetTypeForGeneration) ;
  const GALGAS_boolsetTypeForGeneration temp_0 = object ;
  const GALGAS_boolsetTypeForGeneration temp_1 = object ;
  const GALGAS_boolsetTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 240)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 241)), temp_2.getter_mFlagList (HERE) COMMA_SOURCE_FILE ("type-boolset.galgas", 239))) ;
  const GALGAS_boolsetTypeForGeneration temp_3 = object ;
  const GALGAS_boolsetTypeForGeneration temp_4 = object ;
  const GALGAS_boolsetTypeForGeneration temp_5 = object ;
  const GALGAS_boolsetTypeForGeneration temp_6 = object ;
  const GALGAS_boolsetTypeForGeneration temp_7 = object ;
  const GALGAS_boolsetTypeForGeneration temp_8 = object ;
  const GALGAS_boolsetTypeForGeneration temp_9 = object ;
  const GALGAS_boolsetTypeForGeneration temp_10 = object ;
  const GALGAS_boolsetTypeForGeneration temp_11 = object ;
  const GALGAS_boolsetTypeForGeneration temp_12 = object ;
  const GALGAS_boolsetTypeForGeneration temp_13 = object ;
  const GALGAS_boolsetTypeForGeneration temp_14 = object ;
  const GALGAS_boolsetTypeForGeneration temp_15 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 245)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 246)), temp_5.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 247)), temp_6.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 248)), temp_7.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 249)), temp_8.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 250)), temp_9.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 251)), temp_10.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 252)), temp_11.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 253)), temp_12.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 254)), temp_13.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 255)), temp_14.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 256)), temp_15.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 257)) COMMA_SOURCE_FILE ("type-boolset.galgas", 244))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 244)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_boolsetTypeForGeneration.mSlotID,
                                              extensionMethod_boolsetTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_boolsetTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetTypeForGeneration * object = (const cPtr_boolsetTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetTypeForGeneration) ;
  const GALGAS_boolsetTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 268)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = object ;
  const GALGAS_boolsetTypeForGeneration temp_2 = object ;
  const GALGAS_boolsetTypeForGeneration temp_3 = object ;
  const GALGAS_boolsetTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, temp_1.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 270)), temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 271)), temp_3.getter_mFlagList (HERE), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 273)).left_shift_operation (temp_4.getter_mFlagList (HERE).getter_length (SOURCE_FILE ("type-boolset.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 273)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 273)) COMMA_SOURCE_FILE ("type-boolset.galgas", 269))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_boolsetTypeForGeneration.mSlotID,
                                                     extensionMethod_boolsetTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_boolsetTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  const GALGAS_classDeclarationAST temp_0 = object ;
  const GALGAS_classDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_3299 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mClassTypeName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 93)), temp_1.getter_mClassTypeName (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 93))  COMMA_SOURCE_FILE ("type-class.galgas", 93)) ;
  {
  const GALGAS_classDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3299, temp_2, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 94)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_classDeclarationAST temp_4 = object ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.getter_mSuperClassName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_classDeclarationAST temp_5 = object ;
      const GALGAS_classDeclarationAST temp_6 = object ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3299, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.getter_mSuperClassName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 96)), temp_6.getter_mSuperClassName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 96)) COMMA_SOURCE_FILE ("type-class.galgas", 96)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_7 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_3637 (temp_7.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_3637.hasCurrentObject ()) {
    {
    const GALGAS_classDeclarationAST temp_8 = object ;
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3299, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3637.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 99)), temp_8.getter_mSuperClassName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 99)) COMMA_SOURCE_FILE ("type-class.galgas", 99)) ;
    }
    enumerator_3637.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                                extensionMethod_classDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_classDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_getterMap var_getterMap_4512 ;
  GALGAS_setterMap var_setterMap_4535 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4574 ;
  GALGAS_typedPropertyList var_inheritedTypedAttributeList_4623 ;
  GALGAS_propertyMap var_attributeMap_4651 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 117)) ;
  GALGAS_unifiedTypeMap_2D_entry var_superClassIndex_4720 ;
  GALGAS_bool var_generateHeaderInSeparateFile_4757 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mSuperClassName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 121)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_4720 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 122)) ;
      {
      routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4512, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 123)) ;
      }
      var_setterMap_4535 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 124)) ;
      var_instanceMethodMap_4574 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 125)) ;
      var_inheritedTypedAttributeList_4623 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 126)) ;
      var_attributeMap_4651 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 127)) ;
      var_generateHeaderInSeparateFile_4757 = GALGAS_bool (false) ;
      const GALGAS_classDeclarationAST temp_2 = object ;
      cEnumerator_lstringlist enumerator_5109 (temp_2.getter_mClassFeatureList (HERE), kENUMERATION_UP) ;
      while (enumerator_5109.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_5109.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 130)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_generateHeaderInSeparateFile_4757 = GALGAS_bool (true) ;
          }
        }
        enumerator_5109.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_classDeclarationAST temp_4 = object ;
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.getter_mSuperClassName (HERE), var_superClassIndex_4720 COMMA_SOURCE_FILE ("type-class.galgas", 135)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum_5377 ;
    GALGAS_getterMap var_inheritedGetterMap_5411 ;
    GALGAS_setterMap var_inheritedSetterMap_5445 ;
    GALGAS_instanceMethodMap var_inheritedMethodMap_5487 ;
    const GALGAS_classDeclarationAST temp_5 = object ;
    GALGAS_bool joker_5565_3 ; // Joker input parameter
    GALGAS_bool joker_5565_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_entry joker_5565_1 ; // Joker input parameter
    GALGAS_bool joker_5595 ; // Joker input parameter
    GALGAS_typedPropertyList joker_5659_2 ; // Joker input parameter
    GALGAS_constructorMap joker_5659_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_5747_9 ; // Joker input parameter
    GALGAS_optionalMethodMap joker_5747_8 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_5747_7 ; // Joker input parameter
    GALGAS_operators joker_5747_6 ; // Joker input parameter
    GALGAS_functionSignature joker_5747_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_5747_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_5747_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_5747_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_5747_1 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_entry joker_5793_4 ; // Joker input parameter
    GALGAS_string joker_5793_3 ; // Joker input parameter
    GALGAS_string joker_5793_2 ; // Joker input parameter
    GALGAS_headerKind joker_5793_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (temp_5.getter_mSuperClassName (HERE), joker_5565_3, joker_5565_2, joker_5565_1, var_typeKindEnum_5377, joker_5595, var_inheritedTypedAttributeList_4623, var_attributeMap_4651, joker_5659_2, joker_5659_1, var_inheritedGetterMap_5411, var_inheritedSetterMap_5445, var_inheritedMethodMap_5487, joker_5747_9, joker_5747_8, joker_5747_7, joker_5747_6, joker_5747_5, joker_5747_4, joker_5747_3, joker_5747_2, joker_5747_1, var_generateHeaderInSeparateFile_4757, joker_5793_4, joker_5793_3, joker_5793_2, joker_5793_1, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 140)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_typeKindEnum_5377.getter_isClassType (SOURCE_FILE ("type-class.galgas", 156)).operator_not (SOURCE_FILE ("type-class.galgas", 156)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_classDeclarationAST temp_7 = object ;
        const GALGAS_classDeclarationAST temp_8 = object ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_7.getter_mSuperClassName (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 157)), GALGAS_string ("the @").add_operation (temp_8.getter_mSuperClassName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 157)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 157)), fixItArray9  COMMA_SOURCE_FILE ("type-class.galgas", 157)) ;
      }
    }
    var_setterMap_4535 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 160)) ;
    cEnumerator_setterMap enumerator_6042 (var_inheritedSetterMap_5445, kENUMERATION_UP) ;
    while (enumerator_6042.hasCurrentObject ()) {
      {
      var_setterMap_4535.setter_insertKey (enumerator_6042.current_lkey (HERE), enumerator_6042.current_mKind (HERE), enumerator_6042.current_mParameterList (HERE), enumerator_6042.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 167)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 162)) ;
      }
      enumerator_6042.gotoNextObject () ;
    }
    var_getterMap_4512 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 172)) ;
    cEnumerator_getterMap enumerator_6316 (var_inheritedGetterMap_5411, kENUMERATION_UP) ;
    while (enumerator_6316.hasCurrentObject ()) {
      {
      var_getterMap_4512.setter_insertKey (enumerator_6316.current_lkey (HERE), enumerator_6316.current_mKind (HERE), enumerator_6316.current_mArgumentTypeList (HERE), enumerator_6316.current_mDeclarationLocation (HERE), enumerator_6316.current_mHasCompilerArgument (HERE), enumerator_6316.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 181)), enumerator_6316.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 174)) ;
      }
      enumerator_6316.gotoNextObject () ;
    }
    var_instanceMethodMap_4574 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 186)) ;
    cEnumerator_instanceMethodMap enumerator_6646 (var_inheritedMethodMap_5487, kENUMERATION_UP) ;
    while (enumerator_6646.hasCurrentObject ()) {
      {
      var_instanceMethodMap_4574.setter_insertKey (enumerator_6646.current_lkey (HERE), enumerator_6646.current_mKind (HERE), enumerator_6646.current_mParameterList (HERE), enumerator_6646.current_mDeclarationLocation (HERE), enumerator_6646.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 194)), enumerator_6646.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 188)) ;
      }
      enumerator_6646.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorAttributeTypeList_6972 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 200)) ;
  cEnumerator_typedPropertyList enumerator_7017 (var_inheritedTypedAttributeList_4623, kENUMERATION_UP) ;
  while (enumerator_7017.hasCurrentObject ()) {
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = enumerator_7017.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_7017.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 203)) ;
    }
    var_constructorAttributeTypeList_6972.addAssign_operation (temp_10, enumerator_7017.current_mPropertyTypeEntry (HERE), enumerator_7017.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 202)) ;
    enumerator_7017.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_12 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_7211 (temp_12.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_7211.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_7323 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7211.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7323 COMMA_SOURCE_FILE ("type-class.galgas", 208)) ;
    }
    GALGAS_bool var_hasSelector_7344 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7390 (enumerator_7211.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_7390.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsEqual, enumerator_7390.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_hasSelector_7344.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              fixItArray15.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_7390.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 213)), GALGAS_string ("duplicated attribute"), fixItArray15  COMMA_SOURCE_FILE ("type-class.galgas", 213)) ;
            }
          }
          var_hasSelector_7344 = GALGAS_bool (true) ;
        }
      }
      enumerator_7390.gotoNextObject () ;
    }
    GALGAS_lstring temp_16 ;
    const enumGalgasBool test_17 = var_hasSelector_7344.boolEnum () ;
    if (kBoolTrue == test_17) {
      temp_16 = enumerator_7211.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_17) {
      temp_16 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 219)) ;
    }
    var_constructorAttributeTypeList_6972.addAssign_operation (temp_16, var_attributeTypeIndex_7323, enumerator_7211.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 218)) ;
    {
    var_attributeMap_4651.setter_insertKey (enumerator_7211.current_mPropertyName (HERE), enumerator_7211.current_mIsPublic (HERE), var_attributeTypeIndex_7323, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 222)) ;
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_getterMap_4512.getter_hasKey (enumerator_7211.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 227)) COMMA_SOURCE_FILE ("type-class.galgas", 227)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_7211.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 228)), GALGAS_string ("'").add_operation (enumerator_7211.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 228)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 228)), fixItArray19  COMMA_SOURCE_FILE ("type-class.galgas", 228)) ;
      }
    }
    enumerator_7211.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_classIndex_8183 ;
  {
  const GALGAS_classDeclarationAST temp_20 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_20.getter_mClassTypeName (HERE), var_classIndex_8183 COMMA_SOURCE_FILE ("type-class.galgas", 232)) ;
  }
  GALGAS_constructorMap var_constructorMap_8238 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 238)) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GALGAS_classDeclarationAST temp_22 = object ;
    test_21 = temp_22.getter_mIsAbstract (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 239)).boolEnum () ;
    if (kBoolTrue == test_21) {
      {
      var_constructorMap_8238.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 241))  COMMA_SOURCE_FILE ("type-class.galgas", 241)), var_constructorAttributeTypeList_6972, GALGAS_bool (false), var_classIndex_8183, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 240)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedAttributeList_8508 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 248)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_8556 = var_inheritedTypedAttributeList_4623 ;
  const GALGAS_classDeclarationAST temp_23 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_8617 (temp_23.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_8617.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_8729 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8617.current_mPropertyTypeName (HERE), var_attributeTypeIndex_8729 COMMA_SOURCE_FILE ("type-class.galgas", 251)) ;
    }
    GALGAS_bool var_hasSetter_8748 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_8785 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_8824 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_8861 (enumerator_8617.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_8861.hasCurrentObject ()) {
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GALGAS_bool (kIsEqual, enumerator_8861.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 256)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_24) {
          TC_Array <C_FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticWarning (enumerator_8861.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 257)), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray25  COMMA_SOURCE_FILE ("type-class.galgas", 257)) ;
        }
      }
      if (kBoolFalse == test_24) {
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = GALGAS_bool (kIsEqual, enumerator_8861.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 258)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_26) {
            TC_Array <C_FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticWarning (enumerator_8861.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 259)), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray27  COMMA_SOURCE_FILE ("type-class.galgas", 259)) ;
          }
        }
        if (kBoolFalse == test_26) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = GALGAS_bool (kIsEqual, enumerator_8861.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 260)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_28) {
              var_hasSelector_8824 = GALGAS_bool (true) ;
            }
          }
        }
      }
      enumerator_8861.gotoNextObject () ;
    }
    var_currentClassTypedAttributeList_8508.addAssign_operation (var_attributeTypeIndex_8729, enumerator_8617.current_mPropertyName (HERE), var_hasSetter_8748, var_hasGetter_8785, var_hasSelector_8824  COMMA_SOURCE_FILE ("type-class.galgas", 264)) ;
    var_allTypedAttributeList_8556.addAssign_operation (var_attributeTypeIndex_8729, enumerator_8617.current_mPropertyName (HERE), var_hasSetter_8748, var_hasGetter_8785, var_hasSelector_8824  COMMA_SOURCE_FILE ("type-class.galgas", 265)) ;
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = var_hasGetter_8785.boolEnum () ;
      if (kBoolTrue == test_29) {
        {
        var_getterMap_4512.setter_insertKey (enumerator_8617.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 269)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 270)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 271)), GALGAS_bool (false), var_attributeTypeIndex_8729, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-class.galgas", 274)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 267)) ;
        }
      }
    }
    enumerator_8617.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_9843 (var_currentClassTypedAttributeList_8508, kENUMERATION_UP) ;
  while (enumerator_9843.hasCurrentObject ()) {
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      test_30 = enumerator_9843.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_30) {
        {
        GALGAS_formalParameterSignature temp_31 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 285)) ;
        temp_31.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 285)), enumerator_9843.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 285)), enumerator_9843.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 285)) ;
        var_setterMap_4535.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9843.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 283)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 283)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 283))  COMMA_SOURCE_FILE ("type-class.galgas", 283)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 284)), temp_31, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 287)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 282)) ;
        }
      }
    }
    enumerator_9843.gotoNextObject () ;
  }
  {
  const GALGAS_classDeclarationAST temp_32 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_32.getter_mClassTypeName (HERE), var_getterMap_4512, var_setterMap_4535, var_instanceMethodMap_4574, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 293)) ;
  }
  GALGAS_string var_defaultConstructorName_10634 ;
  enumGalgasBool test_33 = kBoolTrue ;
  if (kBoolTrue == test_33) {
    test_33 = var_superClassIndex_4720.getter_isNull (SOURCE_FILE ("type-class.galgas", 305)).boolEnum () ;
    if (kBoolTrue == test_33) {
      var_defaultConstructorName_10634 = GALGAS_string ("default") ;
    }
  }
  if (kBoolFalse == test_33) {
    var_defaultConstructorName_10634 = var_superClassIndex_4720.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 308)) ;
  }
  cEnumerator_typedPropertyList enumerator_10835 (var_currentClassTypedAttributeList_8508, kENUMERATION_UP) ;
  bool bool_34 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_10634.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_10835.hasCurrentObject () && bool_34) {
    while (enumerator_10835.hasCurrentObject () && bool_34) {
      enumGalgasBool test_35 = kBoolTrue ;
      if (kBoolTrue == test_35) {
        test_35 = GALGAS_bool (kIsEqual, enumerator_10835.current_mPropertyTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 311)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_10835.current_mPropertyTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 311)).operator_not (SOURCE_FILE ("type-class.galgas", 311)) COMMA_SOURCE_FILE ("type-class.galgas", 311)).boolEnum () ;
        if (kBoolTrue == test_35) {
          var_defaultConstructorName_10634 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_10835.gotoNextObject () ;
      if (enumerator_10835.hasCurrentObject ()) {
        bool_34 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_10634.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  const GALGAS_classDeclarationAST temp_36 = object ;
  const GALGAS_classDeclarationAST temp_37 = object ;
  const GALGAS_classDeclarationAST temp_38 = object ;
  const GALGAS_classDeclarationAST temp_39 = object ;
  const GALGAS_classDeclarationAST temp_40 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_36.getter_mClassTypeName (HERE), temp_37.getter_mIsPredefined (HERE), temp_38.getter_mIsAbstract (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 319)), var_superClassIndex_4720, GALGAS_typeKindEnum::constructor_classType (temp_39.getter_mIsShared (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 321)), GALGAS_bool (false), var_allTypedAttributeList_8556, var_attributeMap_4651, var_currentClassTypedAttributeList_8508, var_constructorMap_8238, var_getterMap_4512, var_setterMap_4535, var_instanceMethodMap_4574, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 330)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 331)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 332)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-class.galgas", 333)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 334)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 335)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 336)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 337)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 338)), var_generateHeaderInSeparateFile_4757, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 340)), var_defaultConstructorName_10634, GALGAS_string ("class-").add_operation (temp_40.getter_mClassTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 342)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 316)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                               extensionMethod_classDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classDeclarationAST_enterInSemanticContext (defineExtensionMethod_classDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  const GALGAS_classDeclarationAST temp_0 = object ;
  GALGAS_lstring var_classTypeNameForUsefulness_12608 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mClassTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 360)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_12608, var_classTypeNameForUsefulness_12608, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 361)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classDeclarationAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.getter_mSuperClassName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 362)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_classDeclarationAST temp_3 = object ;
      GALGAS_lstring var_superClassNameForUsefulness_12838 = function_typeNameForUsefulEntitiesGraph (temp_3.getter_mSuperClassName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 363)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_12608, var_superClassNameForUsefulness_12838 COMMA_SOURCE_FILE ("type-class.galgas", 364)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_4 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_13051 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_4.getter_mClassTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 367)) ;
  const GALGAS_classDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, temp_5.getter_mSuperClassName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 370)) ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_classDeclarationAST temp_8 = object ;
    temp_6 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_8.getter_mSuperClassName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 371)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_superClassEntry_13180 = temp_6 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsNotEqual, var_superClassEntry_13180.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 376)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_bool var_superClassIsShared_13623 ;
      var_superClassEntry_13180.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 377)).method_classType (var_superClassIsShared_13623, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 377)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_classDeclarationAST temp_11 = object ;
        test_10 = var_superClassIsShared_13623.operator_and (temp_11.getter_mIsShared (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 378)) COMMA_SOURCE_FILE ("type-class.galgas", 378)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_classDeclarationAST temp_12 = object ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.getter_mClassTypeName (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 379)), GALGAS_string ("this class should be declared with 'shared' qualifier, as its super class"), fixItArray13  COMMA_SOURCE_FILE ("type-class.galgas", 379)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          const GALGAS_classDeclarationAST temp_15 = object ;
          test_14 = var_superClassIsShared_13623.operator_not (SOURCE_FILE ("type-class.galgas", 380)).operator_and (temp_15.getter_mIsShared (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 380)).boolEnum () ;
          if (kBoolTrue == test_14) {
            const GALGAS_classDeclarationAST temp_16 = object ;
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (temp_16.getter_mClassTypeName (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 381)), GALGAS_string ("this class should be declared with no 'shared' qualifier, as its super class"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 381)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_14174 ;
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (kIsEqual, var_superClassEntry_13180.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 388)))).boolEnum () ;
    if (kBoolTrue == test_18) {
      var_allAttributeList_14174 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 389)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_14276 = GALGAS_bool (false) ;
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        const GALGAS_classDeclarationAST temp_20 = object ;
        test_19 = GALGAS_bool (kIsStrictSup, temp_20.getter_mClassFeatureList (HERE).getter_length (SOURCE_FILE ("type-class.galgas", 391)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_19) {
          const GALGAS_classDeclarationAST temp_21 = object ;
          cEnumerator_lstringlist enumerator_14371 (temp_21.getter_mClassFeatureList (HERE), kENUMERATION_UP) ;
          while (enumerator_14371.hasCurrentObject ()) {
            enumGalgasBool test_22 = kBoolTrue ;
            if (kBoolTrue == test_22) {
              test_22 = GALGAS_bool (kIsEqual, enumerator_14371.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 393)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_22) {
                enumGalgasBool test_23 = kBoolTrue ;
                if (kBoolTrue == test_23) {
                  test_23 = var_generatedInSeparateFileFeature_14276.boolEnum () ;
                  if (kBoolTrue == test_23) {
                    TC_Array <C_FixItDescription> fixItArray24 ;
                    inCompiler->emitSemanticError (enumerator_14371.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 395)), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray24  COMMA_SOURCE_FILE ("type-class.galgas", 395)) ;
                  }
                }
                var_generatedInSeparateFileFeature_14276 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_22) {
              TC_Array <C_FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (enumerator_14371.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 399)), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray25  COMMA_SOURCE_FILE ("type-class.galgas", 399)) ;
            }
            enumerator_14371.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_18) {
    var_allAttributeList_14174 = var_superClassEntry_13180.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 404)) ;
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      const GALGAS_classDeclarationAST temp_27 = object ;
      test_26 = GALGAS_bool (kIsStrictSup, temp_27.getter_mClassFeatureList (HERE).getter_length (SOURCE_FILE ("type-class.galgas", 405)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_26) {
        const GALGAS_classDeclarationAST temp_28 = object ;
        cEnumerator_lstringlist enumerator_14907 (temp_28.getter_mClassFeatureList (HERE), kENUMERATION_UP) ;
        while (enumerator_14907.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (enumerator_14907.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 407)), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray29  COMMA_SOURCE_FILE ("type-class.galgas", 407)) ;
          enumerator_14907.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_15081 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 412)) ;
  GALGAS_propertyIndexMap var_attributeMap_15119 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 413)) ;
  const GALGAS_classDeclarationAST temp_30 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_15155 (temp_30.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_15155.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_15196 = function_typeNameForUsefulEntitiesGraph (enumerator_15155.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 415)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_12608, var_propertyTypeNameForUsefulness_15196 COMMA_SOURCE_FILE ("type-class.galgas", 416)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_15357 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_15155.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 417)) ;
    GALGAS_bool var_hasSetter_15458 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_15495 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_15534 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_15571 (enumerator_15155.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_15571.hasCurrentObject ()) {
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        test_31 = GALGAS_bool (kIsEqual, enumerator_15571.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 422)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_31) {
          TC_Array <C_FixItDescription> fixItArray32 ;
          inCompiler->emitSemanticWarning (enumerator_15571.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 423)), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray32  COMMA_SOURCE_FILE ("type-class.galgas", 423)) ;
        }
      }
      if (kBoolFalse == test_31) {
        enumGalgasBool test_33 = kBoolTrue ;
        if (kBoolTrue == test_33) {
          test_33 = GALGAS_bool (kIsEqual, enumerator_15571.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 428)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_33) {
            TC_Array <C_FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticWarning (enumerator_15571.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 429)), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray34  COMMA_SOURCE_FILE ("type-class.galgas", 429)) ;
          }
        }
        if (kBoolFalse == test_33) {
          enumGalgasBool test_35 = kBoolTrue ;
          if (kBoolTrue == test_35) {
            test_35 = GALGAS_bool (kIsEqual, enumerator_15571.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 434)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_35) {
              enumGalgasBool test_36 = kBoolTrue ;
              if (kBoolTrue == test_36) {
                test_36 = var_hasSelector_15534.boolEnum () ;
                if (kBoolTrue == test_36) {
                  TC_Array <C_FixItDescription> fixItArray37 ;
                  inCompiler->emitSemanticError (enumerator_15571.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 436)), GALGAS_string ("the '%selector' attribute is already named"), fixItArray37  COMMA_SOURCE_FILE ("type-class.galgas", 436)) ;
                }
              }
              var_hasSelector_15534 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_35) {
            TC_Array <C_FixItDescription> fixItArray38 ;
            GALGAS_stringlist temp_39 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 442)) ;
            temp_39.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-class.galgas", 442)) ;
            appendFixItActions (fixItArray38, kFixItReplace, temp_39) ;
            inCompiler->emitSemanticError (enumerator_15571.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 440)), GALGAS_string ("only '%selector' is allowed here"), fixItArray38  COMMA_SOURCE_FILE ("type-class.galgas", 440)) ;
          }
        }
      }
      enumerator_15571.gotoNextObject () ;
    }
    var_typedAttributeList_15081.addAssign_operation (var_t_15357, enumerator_15155.current_mPropertyName (HERE), var_hasSetter_15458, var_hasGetter_15495, var_hasSelector_15534  COMMA_SOURCE_FILE ("type-class.galgas", 446)) ;
    var_allAttributeList_14174.addAssign_operation (var_t_15357, enumerator_15155.current_mPropertyName (HERE), var_hasSetter_15458, var_hasGetter_15495, var_hasSelector_15534  COMMA_SOURCE_FILE ("type-class.galgas", 452)) ;
    {
    var_attributeMap_15119.setter_insertKey (enumerator_15155.current_mPropertyName (HERE), var_t_15357, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 458)) ;
    }
    enumerator_15155.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_40 = object ;
  const GALGAS_classDeclarationAST temp_41 = object ;
  const GALGAS_classDeclarationAST temp_42 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (temp_40.getter_mClassTypeName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 462)), GALGAS_classTypeForGeneration::constructor_new (var_selfType_13051, temp_41.getter_mIsAbstract (HERE), temp_42.getter_mIsShared (HERE), var_superClassEntry_13180, var_allAttributeList_14174, var_typedAttributeList_15081, var_selfType_13051.getter_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 470))  COMMA_SOURCE_FILE ("type-class.galgas", 463))  COMMA_SOURCE_FILE ("type-class.galgas", 461)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                         extensionMethod_classDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classDeclarationAST_semanticAnalysis (defineExtensionMethod_classDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classTypeForGeneration temp_1 = object ;
    test_0 = temp_1.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 493)).operator_not (SOURCE_FILE ("type-class.galgas", 493)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_classTypeForGeneration temp_2 = object ;
      extensionMethod_addHeaderFileName (temp_2.getter_mSuperClass (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 494)) ;
    }
  }
  const GALGAS_classTypeForGeneration temp_3 = object ;
  const GALGAS_classTypeForGeneration temp_4 = object ;
  const GALGAS_classTypeForGeneration temp_5 = object ;
  GALGAS_string temp_6 ;
  const enumGalgasBool test_7 = temp_5.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 500)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_classTypeForGeneration temp_8 = object ;
    temp_6 = temp_8.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 500)) ;
  }
  const GALGAS_classTypeForGeneration temp_9 = object ;
  const GALGAS_classTypeForGeneration temp_10 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 498)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 499)), temp_6, temp_9.getter_mIsAbstract (HERE), GALGAS_bool (kIsNotEqual, temp_10.getter_mSelfTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 502)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 497))) ;
  const GALGAS_classTypeForGeneration temp_11 = object ;
  const GALGAS_classTypeForGeneration temp_12 = object ;
  const GALGAS_classTypeForGeneration temp_13 = object ;
  const GALGAS_classTypeForGeneration temp_14 = object ;
  const GALGAS_classTypeForGeneration temp_15 = object ;
  const GALGAS_classTypeForGeneration temp_16 = object ;
  const GALGAS_classTypeForGeneration temp_17 = object ;
  const GALGAS_classTypeForGeneration temp_18 = object ;
  const GALGAS_classTypeForGeneration temp_19 = object ;
  const GALGAS_classTypeForGeneration temp_20 = object ;
  const GALGAS_classTypeForGeneration temp_21 = object ;
  const GALGAS_classTypeForGeneration temp_22 = object ;
  const GALGAS_classTypeForGeneration temp_23 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_11.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 505)), temp_12.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 506)), temp_13.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 507)), temp_14.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 508)), temp_15.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 509)), temp_16.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 510)), temp_17.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 511)), temp_18.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 512)), temp_19.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 513)), temp_20.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 514)), temp_21.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 515)), temp_22.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 516)), temp_23.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 517)) COMMA_SOURCE_FILE ("type-class.galgas", 504))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 504)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          const GALGAS_string constinArgument_inOutputDirectory,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  const GALGAS_classTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_19406 (temp_0.getter_mTypedAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_19406.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19406.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 529)) ;
    enumerator_19406.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classTypeForGeneration temp_2 = object ;
    test_1 = temp_2.getter_mGenerateHeaderInSeparateFile (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_classTypeForGeneration temp_3 = object ;
      const GALGAS_classTypeForGeneration temp_4 = object ;
      const GALGAS_classTypeForGeneration temp_5 = object ;
      GALGAS_string temp_6 ;
      const enumGalgasBool test_7 = temp_5.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 536)).boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_7) {
        const GALGAS_classTypeForGeneration temp_8 = object ;
        temp_6 = temp_8.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 536)) ;
      }
      const GALGAS_classTypeForGeneration temp_9 = object ;
      const GALGAS_classTypeForGeneration temp_10 = object ;
      const GALGAS_classTypeForGeneration temp_11 = object ;
      GALGAS_string var_part_31__19518 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 534)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 535)), temp_6, temp_9.getter_mTypedAttributeList (HERE), temp_10.getter_mAllTypedAttributeList (HERE), temp_11.getter_mIsAbstract (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 533))) ;
      const GALGAS_classTypeForGeneration temp_12 = object ;
      const GALGAS_classTypeForGeneration temp_13 = object ;
      const GALGAS_classTypeForGeneration temp_14 = object ;
      GALGAS_string temp_15 ;
      const enumGalgasBool test_16 = temp_14.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 544)).boolEnum () ;
      if (kBoolTrue == test_16) {
        temp_15 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_16) {
        const GALGAS_classTypeForGeneration temp_17 = object ;
        temp_15 = temp_17.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 544)) ;
      }
      const GALGAS_classTypeForGeneration temp_18 = object ;
      const GALGAS_classTypeForGeneration temp_19 = object ;
      const GALGAS_classTypeForGeneration temp_20 = object ;
      GALGAS_string var_part_32__19875 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, temp_12.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 542)), temp_13.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 543)), temp_15, temp_18.getter_mTypedAttributeList (HERE), temp_19.getter_mAllTypedAttributeList (HERE), temp_20.getter_mIsAbstract (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 541))) ;
      const GALGAS_classTypeForGeneration temp_21 = object ;
      GALGAS_string var_headerFileName_20241 = GALGAS_string ("separateHeaderFor_").add_operation (temp_21.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 549)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 549)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 551)), var_headerFileName_20241, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_part_31__19518, GALGAS_string ("\n"
        "\n"), var_part_32__19875, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 550)) ;
      }
      outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_20241, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 561)).add_operation (GALGAS_string ("\"\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 561)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_classTypeForGeneration temp_22 = object ;
    const GALGAS_classTypeForGeneration temp_23 = object ;
    const GALGAS_classTypeForGeneration temp_24 = object ;
    GALGAS_string temp_25 ;
    const enumGalgasBool test_26 = temp_24.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 566)).boolEnum () ;
    if (kBoolTrue == test_26) {
      temp_25 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_26) {
      const GALGAS_classTypeForGeneration temp_27 = object ;
      temp_25 = temp_27.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 566)) ;
    }
    const GALGAS_classTypeForGeneration temp_28 = object ;
    const GALGAS_classTypeForGeneration temp_29 = object ;
    const GALGAS_classTypeForGeneration temp_30 = object ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, temp_22.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 564)), temp_23.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 565)), temp_25, temp_28.getter_mTypedAttributeList (HERE), temp_29.getter_mAllTypedAttributeList (HERE), temp_30.getter_mIsAbstract (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 563))) ;
    const GALGAS_classTypeForGeneration temp_31 = object ;
    const GALGAS_classTypeForGeneration temp_32 = object ;
    const GALGAS_classTypeForGeneration temp_33 = object ;
    GALGAS_string temp_34 ;
    const enumGalgasBool test_35 = temp_33.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 574)).boolEnum () ;
    if (kBoolTrue == test_35) {
      temp_34 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_35) {
      const GALGAS_classTypeForGeneration temp_36 = object ;
      temp_34 = temp_36.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 574)) ;
    }
    const GALGAS_classTypeForGeneration temp_37 = object ;
    const GALGAS_classTypeForGeneration temp_38 = object ;
    const GALGAS_classTypeForGeneration temp_39 = object ;
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, temp_31.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 572)), temp_32.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 573)), temp_34, temp_37.getter_mTypedAttributeList (HERE), temp_38.getter_mAllTypedAttributeList (HERE), temp_39.getter_mIsAbstract (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 571))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 571)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_32_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_32_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  const GALGAS_classTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 589)) ;
  const GALGAS_classTypeForGeneration temp_1 = object ;
  const GALGAS_classTypeForGeneration temp_2 = object ;
  const GALGAS_classTypeForGeneration temp_3 = object ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = temp_3.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 593)).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_5) {
    const GALGAS_classTypeForGeneration temp_6 = object ;
    temp_4 = temp_6.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 593)) ;
  }
  const GALGAS_classTypeForGeneration temp_7 = object ;
  const GALGAS_classTypeForGeneration temp_8 = object ;
  const GALGAS_classTypeForGeneration temp_9 = object ;
  const GALGAS_classTypeForGeneration temp_10 = object ;
  const GALGAS_classTypeForGeneration temp_11 = object ;
  const GALGAS_classTypeForGeneration temp_12 = object ;
  const GALGAS_classTypeForGeneration temp_13 = object ;
  const GALGAS_classTypeForGeneration temp_14 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (inCompiler, temp_1.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 591)), temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 592)), temp_4, temp_7.getter_mTypedAttributeList (HERE), temp_8.getter_mAllTypedAttributeList (HERE), temp_9.getter_mAllTypedAttributeList (HERE).getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), temp_10.getter_mAllTypedAttributeList (HERE).getter_length (SOURCE_FILE ("type-class.galgas", 596)).substract_operation (temp_11.getter_mTypedAttributeList (HERE).getter_length (SOURCE_FILE ("type-class.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 596))  COMMA_SOURCE_FILE ("type-class.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 596)), temp_12.getter_mIsAbstract (HERE), temp_13.getter_mIsShared (HERE), GALGAS_bool (kIsNotEqual, temp_14.getter_mSelfTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 599)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 590))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                                     extensionMethod_classTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  const GALGAS_enumDeclarationAST temp_0 = object ;
  const GALGAS_enumDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2965 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mEnumTypeName (HERE).getter_string (SOURCE_FILE ("type-enum.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 74)), temp_1.getter_mEnumTypeName (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 74))  COMMA_SOURCE_FILE ("type-enum.galgas", 74)) ;
  {
  const GALGAS_enumDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2965, temp_2, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 75)) ;
  }
  GALGAS_bool var_circularReference_3209 = GALGAS_bool (true) ;
  const GALGAS_enumDeclarationAST temp_3 = object ;
  cEnumerator_enumConstantList enumerator_3247 (temp_3.getter_mConstantList (HERE), kENUMERATION_UP) ;
  bool bool_4 = var_circularReference_3209.isValidAndTrue () ;
  if (enumerator_3247.hasCurrentObject () && bool_4) {
    while (enumerator_3247.hasCurrentObject () && bool_4) {
      GALGAS_bool var_namesCurrentType_3299 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_3352 (enumerator_3247.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
      bool bool_5 = var_namesCurrentType_3299.operator_not (SOURCE_FILE ("type-enum.galgas", 80)).isValidAndTrue () ;
      if (enumerator_3352.hasCurrentObject () && bool_5) {
        while (enumerator_3352.hasCurrentObject () && bool_5) {
          GALGAS_lstring var_propertyKey_3404 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3352.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("type-enum.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 81)), enumerator_3352.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 81))  COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, var_propertyKey_3404.getter_string (HERE).objectCompare (var_key_2965.getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_namesCurrentType_3299 = GALGAS_bool (true) ;
            }
          }
          enumerator_3352.gotoNextObject () ;
          if (enumerator_3352.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_3299.operator_not (SOURCE_FILE ("type-enum.galgas", 80)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_namesCurrentType_3299.operator_not (SOURCE_FILE ("type-enum.galgas", 86)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_circularReference_3209 = GALGAS_bool (false) ;
        }
      }
      enumerator_3247.gotoNextObject () ;
      if (enumerator_3247.hasCurrentObject ()) {
        bool_4 = var_circularReference_3209.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_circularReference_3209.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumDeclarationAST temp_9 = object ;
      cEnumerator_enumConstantList enumerator_3759 (temp_9.getter_mConstantList (HERE), kENUMERATION_UP) ;
      while (enumerator_3759.hasCurrentObject ()) {
        cEnumerator__32_lstringlist enumerator_3809 (enumerator_3759.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_3809.hasCurrentObject ()) {
          GALGAS_lstring var_propertyKey_3836 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3809.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("type-enum.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 94)), enumerator_3809.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 94))  COMMA_SOURCE_FILE ("type-enum.galgas", 94)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, var_propertyKey_3836.getter_string (HERE).objectCompare (var_key_2965.getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2965, var_propertyKey_3836 COMMA_SOURCE_FILE ("type-enum.galgas", 96)) ;
              }
            }
          }
          enumerator_3809.gotoNextObject () ;
        }
        enumerator_3759.gotoNextObject () ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                                extensionMethod_enumDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_enumDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_constructorMap var_constructorMap_4830 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 113)) ;
  GALGAS_setterMap var_setterMap_4858 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 114)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4902 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 115)) ;
  GALGAS_classMethodMap var_classMethodMap_4940 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 116)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_4984 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 117)) ;
  GALGAS_unifiedTypeMap_2D_entry var_enumTypeEntry_5120 ;
  {
  const GALGAS_enumDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.getter_mEnumTypeName (HERE), var_enumTypeEntry_5120 COMMA_SOURCE_FILE ("type-enum.galgas", 119)) ;
  }
  GALGAS_constantIndexMap var_constantMap_5171 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 121)) ;
  GALGAS_bool var_hasAssociatedValues_5204 = GALGAS_bool (false) ;
  const GALGAS_enumDeclarationAST temp_1 = object ;
  cEnumerator_enumConstantList enumerator_5243 (temp_1.getter_mConstantList (HERE), kENUMERATION_UP) ;
  while (enumerator_5243.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_5294 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 124)) ;
    GALGAS_functionSignature var_argumentTypeList_5339 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 125)) ;
    cEnumerator__32_lstringlist enumerator_5410 (enumerator_5243.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5410.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_5516 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5410.current_mValue_30_ (HERE), var_associatedTypeEntry_5516 COMMA_SOURCE_FILE ("type-enum.galgas", 127)) ;
      }
      var_argumentTypeList_5339.addAssign_operation (enumerator_5410.current_mValue_31_ (HERE), var_associatedTypeEntry_5516, enumerator_5410.current_mValue_30_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 128)) ;
      var_associatedTypeList_5294.addAssign_operation (var_associatedTypeEntry_5516  COMMA_SOURCE_FILE ("type-enum.galgas", 129)) ;
      var_hasAssociatedValues_5204 = GALGAS_bool (true) ;
      enumerator_5410.gotoNextObject () ;
    }
    {
    var_constantMap_5171.setter_insertKey (enumerator_5243.current_mConstantName (HERE), var_constantMap_5171.getter_count (SOURCE_FILE ("type-enum.galgas", 132)), var_associatedTypeList_5294, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 132)) ;
    }
    {
    var_constructorMap_4830.setter_insertOrReplace (enumerator_5243.current_mConstantName (HERE), var_argumentTypeList_5339, GALGAS_bool (false), var_enumTypeEntry_5120 COMMA_SOURCE_FILE ("type-enum.galgas", 133)) ;
    }
    enumerator_5243.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_2 = object ;
  cEnumerator_enumConstantList enumerator_5944 (temp_2.getter_mConstantList (HERE), kENUMERATION_UP) ;
  while (enumerator_5944.hasCurrentObject ()) {
    GALGAS_optionalMethodSignature var_argumentTypeList_5993 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 142)) ;
    cEnumerator__32_lstringlist enumerator_6064 (enumerator_5944.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6064.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_6170 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_6064.current_mValue_30_ (HERE), var_associatedTypeEntry_6170 COMMA_SOURCE_FILE ("type-enum.galgas", 144)) ;
      }
      var_argumentTypeList_5993.addAssign_operation (GALGAS_bool (false), enumerator_6064.current_mValue_31_ (HERE), var_associatedTypeEntry_6170, enumerator_6064.current_mValue_30_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 145)) ;
      enumerator_6064.gotoNextObject () ;
    }
    {
    var_optionalMethodMap_4984.setter_insertKey (enumerator_5944.current_mConstantName (HERE), var_argumentTypeList_5993, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 147)) ;
    }
    enumerator_5944.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_3 = object ;
  cEnumerator_enumConstantList enumerator_6409 (temp_3.getter_mConstantList (HERE), kENUMERATION_UP) ;
  while (enumerator_6409.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_6409.current_mAssociatedValueDefinitionList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 154)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_unifiedTypeMapEntryList var_associatedTypeList_6518 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 155)) ;
        GALGAS_formalParameterSignature var_argumentTypeList_6572 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 156)) ;
        cEnumerator__32_lstringlist enumerator_6645 (enumerator_6409.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_6645.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_6753 ;
          {
          GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_6645.current_mValue_30_ (HERE), var_associatedTypeEntry_6753 COMMA_SOURCE_FILE ("type-enum.galgas", 158)) ;
          }
          var_argumentTypeList_6572.addAssign_operation (enumerator_6645.current_mValue_31_ (HERE), var_associatedTypeEntry_6753, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-enum.galgas", 159)), enumerator_6645.current_mValue_30_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 159)) ;
          var_associatedTypeList_6518.addAssign_operation (var_associatedTypeEntry_6753  COMMA_SOURCE_FILE ("type-enum.galgas", 160)) ;
          var_hasAssociatedValues_5204 = GALGAS_bool (true) ;
          enumerator_6645.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_4902.setter_insertKey (enumerator_6409.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-enum.galgas", 165)), var_argumentTypeList_6572, enumerator_6409.current_mConstantName (HERE).getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 169)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 163)) ;
        }
      }
    }
    enumerator_6409.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_7257 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_7257, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 175)) ;
  }
  const GALGAS_enumDeclarationAST temp_5 = object ;
  cEnumerator_enumConstantList enumerator_7289 (temp_5.getter_mConstantList (HERE), kENUMERATION_UP) ;
  while (enumerator_7289.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument (var_getterMap_7257, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("is").add_operation (enumerator_7289.current_mConstantName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 180)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 177)) ;
    }
    enumerator_7289.gotoNextObject () ;
  }
  {
  const GALGAS_enumDeclarationAST temp_6 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_6.getter_mEnumTypeName (HERE), var_getterMap_7257, var_setterMap_4858, var_instanceMethodMap_4902, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 186)) ;
  }
  GALGAS_string var_defaultConstructorName_7851 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_enumDeclarationAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.getter_mDefaultConstantName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_unifiedTypeMapEntryList var_associatedTypeList_8010 ;
      const GALGAS_enumDeclarationAST temp_9 = object ;
      GALGAS_uint joker_7985 ; // Joker input parameter
      var_constantMap_5171.method_searchKey (temp_9.getter_mDefaultConstantName (HERE), joker_7985, var_associatedTypeList_8010, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 199)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_8010.getter_length (SOURCE_FILE ("type-enum.galgas", 200)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_enumDeclarationAST temp_11 = object ;
          var_defaultConstructorName_7851 = temp_11.getter_mDefaultConstantName (HERE).getter_string (HERE) ;
        }
      }
      if (kBoolFalse == test_10) {
        const GALGAS_enumDeclarationAST temp_12 = object ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.getter_mDefaultConstantName (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 203)), GALGAS_string ("the default constant should have no associated values"), fixItArray13  COMMA_SOURCE_FILE ("type-enum.galgas", 203)) ;
      }
    }
  }
  {
  const GALGAS_enumDeclarationAST temp_14 = object ;
  const GALGAS_enumDeclarationAST temp_15 = object ;
  const GALGAS_enumDeclarationAST temp_16 = object ;
  const GALGAS_enumDeclarationAST temp_17 = object ;
  GALGAS_headerKind temp_18 ;
  const enumGalgasBool test_19 = var_hasAssociatedValues_5204.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-enum.galgas", 234)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-enum.galgas", 234)) ;
  }
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_14.getter_mEnumTypeName (HERE), temp_15.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-enum.galgas", 211)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("type-enum.galgas", 212)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 214)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 215)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 216)), var_constructorMap_4830, var_getterMap_7257, var_setterMap_4858, var_instanceMethodMap_4902, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 221)), var_optionalMethodMap_4984, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 223)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-enum.galgas", 224)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-enum.galgas", 224)) COMMA_SOURCE_FILE ("type-enum.galgas", 224)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 225)), var_constantMap_5171, temp_16.getter_mConstantList (HERE), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 228)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 229)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-enum.galgas", 231)), var_defaultConstructorName_7851, GALGAS_string ("enum-").add_operation (temp_17.getter_mEnumTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-enum.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 233)), temp_18, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 207)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                               extensionMethod_enumDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumDeclarationAST_enterInSemanticContext (defineExtensionMethod_enumDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  const GALGAS_enumDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_9850 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mEnumTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 251)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9850, var_nameForUsefulness_9850, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 252)) ;
  }
  GALGAS_stringlist var_constantList_10017 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 254)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_10096 = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 255)) ;
  GALGAS_constantIndexMap var_constantMap_10119 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 256)) ;
  const GALGAS_enumDeclarationAST temp_1 = object ;
  cEnumerator_enumConstantList enumerator_10180 (temp_1.getter_mConstantList (HERE), kENUMERATION_UP) ;
  while (enumerator_10180.hasCurrentObject ()) {
    var_constantList_10017.addAssign_operation (enumerator_10180.current_mConstantName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 258)) ;
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_10273 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 259)) ;
    GALGAS_stringset var_associatedValueNameSet_10316 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enum.galgas", 260)) ;
    cEnumerator__32_lstringlist enumerator_10366 (enumerator_10180.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_10366.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_10409 = function_typeNameForUsefulEntitiesGraph (enumerator_10366.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 262)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9850, var_propertyTypeNameForUsefulness_10409 COMMA_SOURCE_FILE ("type-enum.galgas", 263)) ;
      }
      GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_10573 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_10366.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 264)) ;
      var_associatedTypeList_10273.addAssign_operation (var_associatedTypeEntry_10573  COMMA_SOURCE_FILE ("type-enum.galgas", 265)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_associatedValueNameSet_10316.getter_hasKey (enumerator_10366.current_mValue_31_ (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-enum.galgas", 266)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_10366.current_mValue_31_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 267)), GALGAS_string ("duplicated name"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 267)) ;
        }
      }
      var_associatedValueNameSet_10316.addAssign_operation (enumerator_10366.current_mValue_31_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 269)) ;
      enumerator_10366.gotoNextObject () ;
    }
    {
    var_constantMap_10119.setter_insertKey (enumerator_10180.current_mConstantName (HERE), var_constantMap_10119.getter_count (SOURCE_FILE ("type-enum.galgas", 271)), var_associatedTypeList_10273, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 271)) ;
    }
    var_enumConstantListForGeneration_10096.addAssign_operation (enumerator_10180.current_mConstantName (HERE).getter_string (HERE), var_associatedTypeList_10273  COMMA_SOURCE_FILE ("type-enum.galgas", 272)) ;
    enumerator_10180.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_4 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_11056 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_4.getter_mEnumTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 275)) ;
  const GALGAS_enumDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (temp_5.getter_mEnumTypeName (HERE).getter_string (SOURCE_FILE ("type-enum.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 277)), GALGAS_enumTypeForGeneration::constructor_new (var_selfType_11056, var_enumConstantListForGeneration_10096  COMMA_SOURCE_FILE ("type-enum.galgas", 278))  COMMA_SOURCE_FILE ("type-enum.galgas", 276)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                         extensionMethod_enumDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumDeclarationAST_semanticAnalysis (defineExtensionMethod_enumDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" enum"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Enumeration\n"
    "  public: typedef enum {\n"
    "    kNotBuilt" ;
  GALGAS_uint index_614_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_614 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_614.hasCurrentObject ()) {
      result << ",\n"
        "    kEnum_" ;
      result << enumerator_614.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 15)).stringValue () ;
      index_614_.increment () ;
      enumerator_614.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } enumeration ;\n"
    "  \n"
    "//--------------------------------- Private data member\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;\n"
      "  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {\n"
      "    return mAssociatedValues.unsafePointer () ;\n"
      "  }\n"
      "\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "  private: enumeration mEnum ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }\n"
    "  public: inline enumeration enumValue (void) const { return mEnum ; }\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "//\n"
      "//" ;
    result << GALGAS_string (" Phase 2: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).add_operation (GALGAS_string (" enum, associated values"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).stringValue () ;
    result << "\n"
      "//\n" ;
    GALGAS_uint index_252_ (0) ;
    if (in_CONSTANT_5F_LIST.isValid ()) {
      cEnumerator_enumConstantListForGeneration enumerator_252 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_252.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_252.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "//----------------------------------------------------------------------------------------------------------------------\n"
            "\n"
            "class cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_252.current_mConstantName (HERE).stringValue () ;
          result << " : public cEnumAssociatedValues {\n" ;
          GALGAS_uint index_588_idx (0) ;
          if (enumerator_252.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_588 (enumerator_252.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_588.hasCurrentObject ()) {
              result << "  public: const GALGAS_" ;
              result << enumerator_588.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " mAssociatedValue" ;
              result << index_588_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " ;\n" ;
              index_588_idx.increment () ;
              enumerator_588.gotoNextObject () ;
            }
          }
          result << "\n"
            "//--- Constructor\n"
            "  public: cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_252.current_mConstantName (HERE).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_868_idx (0) ;
          if (enumerator_252.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_868 (enumerator_252.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_868.hasCurrentObject ()) {
              result << "const GALGAS_" ;
              result << enumerator_868.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              result << " & inAssociatedValue" ;
              result << index_868_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              if (enumerator_868.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_868_idx.increment () ;
              enumerator_868.gotoNextObject () ;
            }
          }
          result << "\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS) ;\n"
            "\n"
            "  public: virtual void description (" ;
          columnMarker = result.currentColumn () ;
          result << "C_String & ioString,\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "const int32_t inIndentation) const ;\n"
            "  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;\n"
            "\n"
            "  public: virtual ~ cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_252.current_mConstantName (HERE).stringValue () ;
          result << " (void) {}\n"
            "} ;\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
        }
        index_252_.increment () ;
        enumerator_252.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                                         const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  GALGAS_uint index_27_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_27 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_27.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_27.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << "::cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_389_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_389 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_389.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << enumerator_389.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            result << " & inAssociatedValue" ;
            result << index_389_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            if (enumerator_389.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_389_idx.increment () ;
            enumerator_389.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) :\n"
          "cEnumAssociatedValues (THERE)" ;
        GALGAS_uint index_626_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_626 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_626.hasCurrentObject ()) {
            result << ",\n"
              "mAssociatedValue" ;
            result << index_626_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << " (inAssociatedValue" ;
            result << index_626_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << ")" ;
            index_626_idx.increment () ;
            enumerator_626.gotoNextObject () ;
          }
        }
        result << " {\n"
          "} ;\n"
          "\n"
          "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << "::description (" ;
        columnMarker = result.currentColumn () ;
        result << "C_String & ioString,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const int32_t inIndentation) const {\n"
          "  ioString << \"(\\n\" ;\n" ;
        GALGAS_uint index_1128_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1128 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1128.hasCurrentObject ()) {
            result << "  mAssociatedValue" ;
            result << index_1128_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue () ;
            result << ".description (ioString, inIndentation) ;\n" ;
            index_1128_idx.increment () ;
            enumerator_1128.gotoNextObject () ;
          }
        }
        result << "  ioString << \")\" ;\n"
          "}\n"
          "\n"
          "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "typeComparisonResult cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << "::compare (const cEnumAssociatedValues * inOperand) const {\n"
          "  const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = dynamic_cast<const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << " *> (inOperand) ;\n"
          "  macroValidPointer (ptr) ;\n"
          "  typeComparisonResult result = kOperandEqual ;\n" ;
        GALGAS_uint index_1857_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1857 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1857.hasCurrentObject ()) {
            result << "  if (result == kOperandEqual) {\n"
              "    result = mAssociatedValue" ;
            result << index_1857_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ".objectCompare (ptr->mAssociatedValue" ;
            result << index_1857_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ") ;\n"
              "  }\n" ;
            index_1857_idx.increment () ;
            enumerator_1857.gotoNextObject () ;
          }
        }
        result << "  return result ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_27_.increment () ;
      enumerator_27.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_1 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "mAssociatedValues (),\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "mEnum (kNotBuilt) {\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_2383_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_2383 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2383.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_2383.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 54)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2383.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 55)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "UNUSED_LOCATION_ARGS" ;
      }else if (kBoolFalse == test_2) {
        GALGAS_uint index_2768_idx (0) ;
        if (enumerator_2383.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_2768 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_2768.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << enumerator_2768.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            result << " & inAssociatedValue" ;
            result << index_2768_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            if (enumerator_2768.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_2768_idx.increment () ;
            enumerator_2768.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS" ;
      }
      result << ") {\n"
        "  GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " result ;\n" ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2383.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  result.mEnum = kEnum_" ;
        result << enumerator_2383.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 67)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_3) {
        result << "  if (" ;
        GALGAS_uint index_3173_idx (0) ;
        if (enumerator_2383.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3173 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3173.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3173_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 71)).stringValue () ;
            result << ".isValid ()" ;
            if (enumerator_3173.hasNextObject ()) {
              result << " && " ;
            }
            index_3173_idx.increment () ;
            enumerator_3173.gotoNextObject () ;
          }
        }
        result << ") {\n"
          "    result.mEnum = kEnum_" ;
        result << enumerator_2383.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).stringValue () ;
        result << " ;\n"
          "    cEnumAssociatedValues * ptr = NULL ;\n"
          "    macroMyNew (ptr, cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_2383.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        GALGAS_uint index_3529_idx (0) ;
        if (enumerator_2383.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3529 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3529.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3529_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue () ;
            if (enumerator_3529.hasNextObject ()) {
              result << ", " ;
            }
            index_3529_idx.increment () ;
            enumerator_3529.gotoNextObject () ;
          }
        }
        result << " COMMA_THERE)) ;\n"
          "    result.mAssociatedValues.setPointer (ptr) ;\n"
          "    macroDetachSharedObject (ptr) ;\n"
          "  }\n" ;
      }
      result << "  return result ;\n"
        "}\n"
        "\n" ;
      index_2383_.increment () ;
      enumerator_2383.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3796_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_3796 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3796.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, enumerator_3796.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::method_" ;
        result << enumerator_3796.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 94)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_4120_idx (0) ;
        if (enumerator_3796.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4120 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4120.hasCurrentObject ()) {
            result << "GALGAS_" ;
            result << enumerator_4120.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << " & outAssociatedValue" ;
            result << index_4120_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            index_4120_idx.increment () ;
            enumerator_4120.gotoNextObject () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) const {\n"
          "  if (mEnum != kEnum_" ;
        result << enumerator_3796.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 100)).stringValue () ;
        result << ") {\n" ;
        GALGAS_uint index_4421_idx (0) ;
        if (enumerator_3796.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4421 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4421.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_4421_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 102)).stringValue () ;
            result << ".drop () ;\n" ;
            index_4421_idx.increment () ;
            enumerator_4421.gotoNextObject () ;
          }
        }
        result << "    C_String s ;\n"
          "    s << \"method @" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " " ;
        result << enumerator_3796.current_mConstantName (HERE).stringValue () ;
        result << " invoked with an invalid enum value\" ;\n"
          "    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n"
          "  }else{\n"
          "    const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3796.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3796.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_4919_idx (0) ;
        if (enumerator_3796.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4919 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4919.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_4919_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_4919_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " ;\n" ;
            index_4919_idx.increment () ;
            enumerator_4919.gotoNextObject () ;
          }
        }
        result << "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_4) {
      }
      index_3796_.increment () ;
      enumerator_3796.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5079_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5079 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5079.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::optional_" ;
      result << enumerator_5079.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 120)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_5361_idx (0) ;
      if (enumerator_5079.current_mAssociatedValueTypeList (HERE).isValid ()) {
        cEnumerator_unifiedTypeMapEntryList enumerator_5361 (enumerator_5079.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
        while (enumerator_5361.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << enumerator_5361.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          result << " & outAssociatedValue" ;
          result << index_5361_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          if (enumerator_5361.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_5361_idx.increment () ;
          enumerator_5361.gotoNextObject () ;
        }
      }
      result << ") const {\n"
        "  const bool ok = mEnum == kEnum_" ;
      result << enumerator_5079.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 128)).stringValue () ;
      result << " ;\n" ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, enumerator_5079.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 129)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "  if (ok) {\n"
          "    const auto * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5079.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n"
          "    // const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5079.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5079.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_6015_idx (0) ;
        if (enumerator_5079.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_6015 (enumerator_5079.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_6015.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_6015_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 134)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_6015_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 134)).stringValue () ;
            result << " ;\n" ;
            index_6015_idx.increment () ;
            enumerator_6015.gotoNextObject () ;
          }
        }
        result << "  }\n" ;
      }else if (kBoolFalse == test_5) {
      }
      result << "  return ok ;\n"
        "}\n"
        "\n" ;
      index_5079_.increment () ;
      enumerator_5079.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static const char * gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [" ;
  result << in_CONSTANT_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).stringValue () ;
  result << "] = {\n"
    "  \"(not built)\"" ;
  GALGAS_uint index_6455_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6455 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6455.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << enumerator_6455.current_mConstantName (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 147)).stringValue () ;
      index_6455_.increment () ;
      enumerator_6455.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  GALGAS_uint index_6537_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6537 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6537.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_is" ;
      result << enumerator_6537.current_mConstantName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  return GALGAS_bool (kNotBuilt != mEnum, kEnum_" ;
      result << enumerator_6537.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 156)).stringValue () ;
      result << " == mEnum) ;\n"
        "}\n"
        "\n" ;
      index_6537_.increment () ;
      enumerator_6537.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t " ;
  const enumGalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "inIndentation" ;
  }else if (kBoolFalse == test_6) {
    result << "/* inIndentation */" ;
  }
  result << ") const {\n"
    "  ioString << \"<enum @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ": \" << gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [mEnum] ;\n" ;
  const enumGalgasBool test_7 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "  mAssociatedValues.description (ioString, inIndentation) ;\n" ;
  }else if (kBoolFalse == test_7) {
  }
  result << "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = kOperandNotValid ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    if (mEnum < inOperand.mEnum) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (mEnum > inOperand.mEnum) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else{\n" ;
  const enumGalgasBool test_8 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;\n" ;
  }else if (kBoolFalse == test_8) {
    result << "      result = kOperandEqual ;\n" ;
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_13116 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_13155 (temp_0.getter_mConstantList (HERE), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_13116.operator_not (SOURCE_FILE ("type-enum.galgas", 331)).isValidAndTrue () ;
  if (enumerator_13155.hasCurrentObject () && bool_1) {
    while (enumerator_13155.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_13116 = GALGAS_bool (kIsStrictSup, enumerator_13155.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 332)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_13155.gotoNextObject () ;
      if (enumerator_13155.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_13116.operator_not (SOURCE_FILE ("type-enum.galgas", 331)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 335)), temp_3.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 336)), temp_4.getter_mConstantList (HERE), var_hasAssociatedValues_13116 COMMA_SOURCE_FILE ("type-enum.galgas", 334))) ;
  const GALGAS_enumTypeForGeneration temp_5 = object ;
  const GALGAS_enumTypeForGeneration temp_6 = object ;
  const GALGAS_enumTypeForGeneration temp_7 = object ;
  const GALGAS_enumTypeForGeneration temp_8 = object ;
  const GALGAS_enumTypeForGeneration temp_9 = object ;
  const GALGAS_enumTypeForGeneration temp_10 = object ;
  const GALGAS_enumTypeForGeneration temp_11 = object ;
  const GALGAS_enumTypeForGeneration temp_12 = object ;
  const GALGAS_enumTypeForGeneration temp_13 = object ;
  const GALGAS_enumTypeForGeneration temp_14 = object ;
  const GALGAS_enumTypeForGeneration temp_15 = object ;
  const GALGAS_enumTypeForGeneration temp_16 = object ;
  const GALGAS_enumTypeForGeneration temp_17 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_5.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 341)), temp_6.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 342)), temp_7.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 343)), temp_8.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 344)), temp_9.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 345)), temp_10.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 346)), temp_11.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 347)), temp_12.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 348)), temp_13.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 349)), temp_14.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 350)), temp_15.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 351)), temp_16.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 352)), temp_17.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 353)) COMMA_SOURCE_FILE ("type-enum.galgas", 340))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 340)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_14442 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_14481 (temp_0.getter_mConstantList (HERE), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_14442.operator_not (SOURCE_FILE ("type-enum.galgas", 365)).isValidAndTrue () ;
  if (enumerator_14481.hasCurrentObject () && bool_1) {
    while (enumerator_14481.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_14442 = GALGAS_bool (kIsStrictSup, enumerator_14481.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 366)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_14481.gotoNextObject () ;
      if (enumerator_14481.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_14442.operator_not (SOURCE_FILE ("type-enum.galgas", 365)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_14615 (temp_2.getter_mConstantList (HERE), kENUMERATION_UP) ;
  while (enumerator_14615.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapEntryList enumerator_14657 (enumerator_14615.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14657.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName_31_ (enumerator_14657.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 370)) ;
      enumerator_14657.gotoNextObject () ;
    }
    enumerator_14615.gotoNextObject () ;
  }
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  const GALGAS_enumTypeForGeneration temp_5 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 374)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 375)), temp_5.getter_mConstantList (HERE), var_hasAssociatedValues_14442 COMMA_SOURCE_FILE ("type-enum.galgas", 373))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_32_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_15251 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_15290 (temp_0.getter_mConstantList (HERE), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_15251.operator_not (SOURCE_FILE ("type-enum.galgas", 389)).isValidAndTrue () ;
  if (enumerator_15290.hasCurrentObject () && bool_1) {
    while (enumerator_15290.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_15251 = GALGAS_bool (kIsStrictSup, enumerator_15290.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 390)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_15290.gotoNextObject () ;
      if (enumerator_15290.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_15251.operator_not (SOURCE_FILE ("type-enum.galgas", 389)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 392)) ;
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  const GALGAS_enumTypeForGeneration temp_5 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 394)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 395)), temp_5.getter_mConstantList (HERE), var_hasAssociatedValues_15251 COMMA_SOURCE_FILE ("type-enum.galgas", 393))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                                     extensionMethod_enumTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  const GALGAS_externTypeDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_7490 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mExternTypeName (HERE).getter_string (SOURCE_FILE ("type-extern.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 190)), temp_1.getter_mExternTypeName (HERE).getter_location (SOURCE_FILE ("type-extern.galgas", 190))  COMMA_SOURCE_FILE ("type-extern.galgas", 190)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7490, temp_2, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 191)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                                extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                             const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                             const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_getterMap var_getterMap_8460 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_8460, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 204)) ;
  }
  GALGAS_constructorMap var_constructorMap_8495 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 205)) ;
  GALGAS_setterMap var_setterMap_8523 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 206)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_8567 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 207)) ;
  GALGAS_classMethodMap var_classMethodMap_8605 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 208)) ;
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  cEnumerator_externTypeConstructorList enumerator_8672 (temp_0.getter_mExternTypeConstructorList (HERE), kENUMERATION_UP) ;
  while (enumerator_8672.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_returnedTypeEntry_8781 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8672.current_mResultTypeName (HERE), var_returnedTypeEntry_8781 COMMA_SOURCE_FILE ("type-extern.galgas", 211)) ;
    }
    GALGAS_functionSignature var_arguments_8822 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 213)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_8856 (enumerator_8672.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_8856.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_argumentTypeEntry_8976 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8856.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_8976 COMMA_SOURCE_FILE ("type-extern.galgas", 215)) ;
      }
      var_arguments_8822.addAssign_operation (enumerator_8856.current_mFormalSelector (HERE), var_argumentTypeEntry_8976, enumerator_8856.current_mFormalParameterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 216)) ;
      enumerator_8856.gotoNextObject () ;
    }
    {
    var_constructorMap_8495.setter_insertKey (enumerator_8672.current_mConstructorName (HERE), var_arguments_8822, GALGAS_bool (true), var_returnedTypeEntry_8781, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 219)) ;
    }
    enumerator_8672.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = object ;
  cEnumerator_externTypeGetterList enumerator_9284 (temp_1.getter_mExternTypeGetterList (HERE), kENUMERATION_UP) ;
  while (enumerator_9284.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_returnedTypeEntry_9393 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9284.current_mResultTypeName (HERE), var_returnedTypeEntry_9393 COMMA_SOURCE_FILE ("type-extern.galgas", 228)) ;
    }
    GALGAS_functionSignature var_arguments_9434 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 230)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_9468 (enumerator_9284.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_9468.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_argumentTypeEntry_9588 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9468.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_9588 COMMA_SOURCE_FILE ("type-extern.galgas", 232)) ;
      }
      var_arguments_9434.addAssign_operation (enumerator_9468.current_mFormalSelector (HERE), var_argumentTypeEntry_9588, enumerator_9468.current_mFormalParameterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 233)) ;
      enumerator_9468.gotoNextObject () ;
    }
    {
    var_getterMap_8460.setter_insertKey (enumerator_9284.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 238)), var_arguments_9434, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 240)), GALGAS_bool (true), var_returnedTypeEntry_9393, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 243)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 236)) ;
    }
    enumerator_9284.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  cEnumerator_externTypeSetterList enumerator_10011 (temp_2.getter_mExternTypeSetterList (HERE), kENUMERATION_UP) ;
  while (enumerator_10011.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_10061 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 249)) ;
    cEnumerator_formalParameterListAST enumerator_10101 (enumerator_10011.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_10101.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_10267 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10101.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_10267 COMMA_SOURCE_FILE ("type-extern.galgas", 251)) ;
      }
      var_routineSignature_10061.addAssign_operation (enumerator_10101.current_mFormalSelector (HERE), var_parameterTypeIndex_10267, enumerator_10101.current_mFormalArgumentPassingMode (HERE), enumerator_10101.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 256)) ;
      enumerator_10101.gotoNextObject () ;
    }
    {
    var_setterMap_8523.setter_insertKey (enumerator_10011.current_mSetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 261)), var_routineSignature_10061, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 264)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
    }
    enumerator_10011.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_3 = object ;
  cEnumerator_externTypeMethodList enumerator_10690 (temp_3.getter_mExternTypeMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_10690.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_10718 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 270)) ;
    cEnumerator_formalParameterListAST enumerator_10783 (enumerator_10690.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_10783.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_10833 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10783.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_10833 COMMA_SOURCE_FILE ("type-extern.galgas", 273)) ;
      }
      var_routineSignature_10718.addAssign_operation (enumerator_10783.current_mFormalSelector (HERE), var_parameterTypeIndex_10833, enumerator_10783.current_mFormalArgumentPassingMode (HERE), enumerator_10783.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 278)) ;
      enumerator_10783.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_8567.setter_insertKey (enumerator_10690.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 283)), var_routineSignature_10718, enumerator_10690.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 287)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 281)) ;
    }
    enumerator_10690.gotoNextObject () ;
  }
  {
  const GALGAS_externTypeDeclarationAST temp_4 = object ;
  const GALGAS_externTypeDeclarationAST temp_5 = object ;
  const GALGAS_externTypeDeclarationAST temp_6 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_4.getter_mExternTypeName (HERE), temp_5.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-extern.galgas", 296)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 297)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 299)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 300)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 301)), var_constructorMap_8495, var_getterMap_8460, var_setterMap_8523, var_instanceMethodMap_8567, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 306)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 307)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 308)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-extern.galgas", 309)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 310)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 311)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 312)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 313)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 314)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-extern.galgas", 316)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (temp_6.getter_mExternTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 318)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 292)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                               extensionMethod_externTypeDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterInSemanticContext (defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_12908 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mExternTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 336)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12908, var_nameForUsefulness_12908, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 337)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = object ;
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  const GALGAS_externTypeDeclarationAST temp_3 = object ;
  const GALGAS_externTypeDeclarationAST temp_4 = object ;
  const GALGAS_externTypeDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (temp_1.getter_mExternTypeName (HERE).getter_string (SOURCE_FILE ("type-extern.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 340)), GALGAS_externTypeDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_2.getter_mExternTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 342)), temp_3.getter_mExternTypeName (HERE).getter_string (HERE), temp_4.getter_mCppPreDeclarationCode (HERE), temp_5.getter_mCppClassCode (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 341))  COMMA_SOURCE_FILE ("type-extern.galgas", 339)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                         extensionMethod_externTypeDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationAST_semanticAnalysis (defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationForGeneration * object = (const cPtr_externTypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationForGeneration) ;
  const GALGAS_externTypeDeclarationForGeneration temp_0 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_1 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_2 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 365)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 366)), temp_2.getter_mCppPreDeclarationCode (HERE), temp_3.getter_mCppClassCode (HERE) COMMA_SOURCE_FILE ("type-extern.galgas", 364))) ;
  const GALGAS_externTypeDeclarationForGeneration temp_4 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_5 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_6 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_7 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_8 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_9 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_10 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_11 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_12 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_13 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_14 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_15 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_16 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_4.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 371)), temp_5.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 372)), temp_6.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 373)), temp_7.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 374)), temp_8.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 375)), temp_9.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 376)), temp_10.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 377)), temp_11.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 378)), temp_12.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 379)), temp_13.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 380)), temp_14.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 381)), temp_15.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 382)), temp_16.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 383)) COMMA_SOURCE_FILE ("type-extern.galgas", 370))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 370)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  const GALGAS_graphDeclarationAST temp_0 = object ;
  const GALGAS_graphDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2707 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mGraphTypeName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 64)), temp_1.getter_mGraphTypeName (HERE).getter_location (SOURCE_FILE ("type-graph.galgas", 64))  COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  {
  const GALGAS_graphDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2707, temp_2, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = object ;
  const GALGAS_graphDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2707, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.getter_mAssociatedListTypeName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 66)), temp_4.getter_mAssociatedListTypeName (HERE).getter_location (SOURCE_FILE ("type-graph.galgas", 66))  COMMA_SOURCE_FILE ("type-graph.galgas", 66)) COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                                extensionMethod_graphDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeEntry_3854 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeEntry_3854 COMMA_SOURCE_FILE ("type-graph.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeEntry_4023 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeEntry_4023 COMMA_SOURCE_FILE ("type-graph.galgas", 85)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_graphTypeEntry_4188 ;
  {
  const GALGAS_graphDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.getter_mGraphTypeName (HERE), var_graphTypeEntry_4188 COMMA_SOURCE_FILE ("type-graph.galgas", 91)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeEntry_4381 ;
  {
  const GALGAS_graphDeclarationAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_1.getter_mAssociatedListTypeName (HERE), var_associatedListTypeEntry_4381 COMMA_SOURCE_FILE ("type-graph.galgas", 97)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringListTypeEntry_4563 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeEntry_4563 COMMA_SOURCE_FILE ("type-graph.galgas", 103)) ;
  }
  GALGAS_getterMap var_getterMap_4657 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4657, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 109)) ;
  }
  GALGAS_constructorMap var_constructorMap_4692 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 110)) ;
  GALGAS_setterMap var_setterMap_4720 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 111)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4764 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 112)) ;
  GALGAS_classMethodMap var_classMethodMap_4802 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 113)) ;
  GALGAS_formalParameterSignature var_formalParameterList_4893 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 115)) ;
  var_formalParameterList_4893.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 117)), var_associatedListTypeEntry_4381, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 119)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 116)) ;
  var_formalParameterList_4893.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 122)), var_lstringListTypeEntry_4563, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 124)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 121)) ;
  var_formalParameterList_4893.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 127)), var_associatedListTypeEntry_4381, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 129)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 126)) ;
  var_formalParameterList_4893.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 132)), var_lstringListTypeEntry_4563, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 134)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 131)) ;
  {
  var_instanceMethodMap_4764.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 137))  COMMA_SOURCE_FILE ("type-graph.galgas", 137)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 138)), var_formalParameterList_4893, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 140)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 142)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 136)) ;
  }
  {
  var_instanceMethodMap_4764.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 146))  COMMA_SOURCE_FILE ("type-graph.galgas", 146)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 147)), var_formalParameterList_4893, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 149)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 151)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 145)) ;
  }
  var_formalParameterList_4893 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 156)) ;
  var_formalParameterList_4893.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 158)), var_associatedListTypeEntry_4381, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 160)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 157)) ;
  var_formalParameterList_4893.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 163)), var_lstringListTypeEntry_4563, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 165)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 162)) ;
  {
  var_instanceMethodMap_4764.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 168))  COMMA_SOURCE_FILE ("type-graph.galgas", 168)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 169)), var_formalParameterList_4893, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 171)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 173)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 167)) ;
  }
  {
  var_instanceMethodMap_4764.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 177))  COMMA_SOURCE_FILE ("type-graph.galgas", 177)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 178)), var_formalParameterList_4893, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 180)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 182)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 176)) ;
  }
  {
  var_instanceMethodMap_4764.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 186))  COMMA_SOURCE_FILE ("type-graph.galgas", 186)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 187)), var_formalParameterList_4893, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 189)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 191)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 185)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_2 = object ;
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4657, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("reversedGraph"), temp_2.getter_mGraphTypeName (HERE).getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 196)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4657, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 204)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4657, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 212)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4657, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 220)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4657, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 228)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_4657, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 236)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_4657, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 246)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4657, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 256)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4657, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 264)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4657, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 272)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = object ;
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_4657, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), temp_3.getter_mGraphTypeName (HERE).getter_string (HERE), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 280)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_4657, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 292)) ;
  }
  {
  var_constructorMap_4692.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 303))  COMMA_SOURCE_FILE ("type-graph.galgas", 303)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 304)), GALGAS_bool (false), var_graphTypeEntry_4188, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 302)) ;
  }
  var_formalParameterList_4893 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 309)) ;
  var_formalParameterList_4893.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 311)), var_lstringTypeEntry_4023, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 313)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 310)) ;
  cEnumerator_functionSignature enumerator_10865 (var_associatedListTypeEntry_4381.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 315)), kENUMERATION_UP) ;
  while (enumerator_10865.hasCurrentObject ()) {
    var_formalParameterList_4893.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 317)), enumerator_10865.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 319)), enumerator_10865.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 316)) ;
    enumerator_10865.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_4 = object ;
  cEnumerator_graphInsertModifierList enumerator_11060 (temp_4.getter_mInsertModifierList (HERE), kENUMERATION_UP) ;
  while (enumerator_11060.hasCurrentObject ()) {
    {
    var_setterMap_4720.setter_insertOrReplace (enumerator_11060.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 325)), var_formalParameterList_4893, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 328)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 323)) ;
    }
    enumerator_11060.gotoNextObject () ;
  }
  {
  var_setterMap_4720.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 335))  COMMA_SOURCE_FILE ("type-graph.galgas", 335)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 336)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 337)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 339)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 334)) ;
  }
  var_formalParameterList_4893 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 343)) ;
  var_formalParameterList_4893.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 344)), var_stringTypeEntry_3854, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 344)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 344)) ;
  {
  var_setterMap_4720.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 346))  COMMA_SOURCE_FILE ("type-graph.galgas", 346)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 347)), var_formalParameterList_4893, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 350)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 345)) ;
  }
  var_formalParameterList_4893 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 355)) ;
  var_formalParameterList_4893.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 356)), var_lstringTypeEntry_4023, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 356)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 356)) ;
  var_formalParameterList_4893.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 357)), var_lstringTypeEntry_4023, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 357)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 357)) ;
  {
  var_setterMap_4720.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 359))  COMMA_SOURCE_FILE ("type-graph.galgas", 359)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 360)), var_formalParameterList_4893, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 363)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 358)) ;
  }
  var_formalParameterList_4893 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 368)) ;
  var_formalParameterList_4893.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 369)), var_lstringTypeEntry_4023, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 369)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 369)) ;
  {
  var_setterMap_4720.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 371))  COMMA_SOURCE_FILE ("type-graph.galgas", 371)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 372)), var_formalParameterList_4893, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 375)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 370)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_5 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_5.getter_mGraphTypeName (HERE), var_getterMap_4657, var_setterMap_4720, var_instanceMethodMap_4764, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 380)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_6 = object ;
  const GALGAS_graphDeclarationAST temp_7 = object ;
  const GALGAS_graphDeclarationAST temp_8 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_6.getter_mGraphTypeName (HERE), temp_7.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-graph.galgas", 395)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 396)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 398)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 399)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 400)), var_constructorMap_4692, var_getterMap_4657, var_setterMap_4720, var_instanceMethodMap_4764, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 405)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 406)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 407)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 408)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 409)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 410)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 411)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 412)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 413)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-graph.galgas", 415)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (temp_8.getter_mGraphTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 417)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 391)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                               extensionMethod_graphDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationAST_enterInSemanticContext (defineExtensionMethod_graphDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  const GALGAS_graphDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_15084 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mGraphTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 435)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15084, var_nameForUsefulness_15084, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 436)) ;
  }
  const GALGAS_graphDeclarationAST temp_1 = object ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_15252 = function_typeNameForUsefulEntitiesGraph (temp_1.getter_mAssociatedListTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 437)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15084, var_associatedTypeNameForUsefulness_15252 COMMA_SOURCE_FILE ("type-graph.galgas", 438)) ;
  }
  const GALGAS_graphDeclarationAST temp_2 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_graphTypeEntry_15431 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_2.getter_mGraphTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 440)) ;
  const GALGAS_graphDeclarationAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeEntry_15546 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_3.getter_mAssociatedListTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 441)) ;
  const GALGAS_graphDeclarationAST temp_4 = object ;
  const GALGAS_graphDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListElementTypeEntry_15677 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (temp_4.getter_mAssociatedListTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 444)), temp_5.getter_mAssociatedListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 444)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 442)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, var_associatedListTypeEntry_15546.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 445)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 445)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_graphDeclarationAST temp_7 = object ;
      const GALGAS_graphDeclarationAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_7.getter_mAssociatedListTypeName (HERE).getter_location (SOURCE_FILE ("type-graph.galgas", 446)), GALGAS_string ("the '@").add_operation (temp_8.getter_mAssociatedListTypeName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 446)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 446)), fixItArray9  COMMA_SOURCE_FILE ("type-graph.galgas", 446)) ;
    }
  }
  GALGAS_stringset temp_10 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 449)) ;
  temp_10.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 449)) ;
  temp_10.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 449)) ;
  GALGAS_stringset var_reservedModifierNames_16123 = temp_10 ;
  const GALGAS_graphDeclarationAST temp_11 = object ;
  cEnumerator_graphInsertModifierList enumerator_16187 (temp_11.getter_mInsertModifierList (HERE), kENUMERATION_UP) ;
  while (enumerator_16187.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_reservedModifierNames_16123.getter_hasKey (enumerator_16187.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 451)) COMMA_SOURCE_FILE ("type-graph.galgas", 451)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_16187.current_mInsertModifierName (HERE).getter_location (SOURCE_FILE ("type-graph.galgas", 452)), GALGAS_string ("the '").add_operation (enumerator_16187.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 452)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 452)), fixItArray13  COMMA_SOURCE_FILE ("type-graph.galgas", 452)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_16187.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 454)) ;
    }
    enumerator_16187.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_14 = object ;
  const GALGAS_graphDeclarationAST temp_15 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (temp_14.getter_mGraphTypeName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 458)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeEntry_15431, var_associatedListTypeEntry_15546, var_associatedListElementTypeEntry_15677, temp_15.getter_mInsertModifierList (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 459))  COMMA_SOURCE_FILE ("type-graph.galgas", 457)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                         extensionMethod_graphDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationAST_semanticAnalysis (defineExtensionMethod_graphDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_string & outArgument_outHeader,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  const GALGAS_graphDeclarationForGeneration temp_0 = object ;
  const GALGAS_graphDeclarationForGeneration temp_1 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 483)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 484)) COMMA_SOURCE_FILE ("type-graph.galgas", 482))) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = object ;
  const GALGAS_graphDeclarationForGeneration temp_3 = object ;
  const GALGAS_graphDeclarationForGeneration temp_4 = object ;
  const GALGAS_graphDeclarationForGeneration temp_5 = object ;
  const GALGAS_graphDeclarationForGeneration temp_6 = object ;
  const GALGAS_graphDeclarationForGeneration temp_7 = object ;
  const GALGAS_graphDeclarationForGeneration temp_8 = object ;
  const GALGAS_graphDeclarationForGeneration temp_9 = object ;
  const GALGAS_graphDeclarationForGeneration temp_10 = object ;
  const GALGAS_graphDeclarationForGeneration temp_11 = object ;
  const GALGAS_graphDeclarationForGeneration temp_12 = object ;
  const GALGAS_graphDeclarationForGeneration temp_13 = object ;
  const GALGAS_graphDeclarationForGeneration temp_14 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 487)), temp_3.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 488)), temp_4.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 489)), temp_5.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 490)), temp_6.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 491)), temp_7.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)), temp_8.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)), temp_9.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 494)), temp_10.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 495)), temp_11.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 496)), temp_12.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 497)), temp_13.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 498)), temp_14.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 499)) COMMA_SOURCE_FILE ("type-graph.galgas", 486))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 486)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                              extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_string & outArgument_outImplementation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  const GALGAS_graphDeclarationForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 509)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mAssociatedListTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 510)) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.getter_mAssociatedListElementTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 511)) ;
  const GALGAS_graphDeclarationForGeneration temp_3 = object ;
  const GALGAS_graphDeclarationForGeneration temp_4 = object ;
  const GALGAS_graphDeclarationForGeneration temp_5 = object ;
  const GALGAS_graphDeclarationForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.getter_mSelfTypeEntry (HERE), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 514)), temp_5.getter_mAssociatedListTypeEntry (HERE), temp_6.getter_mInsertModifierList (HERE) COMMA_SOURCE_FILE ("type-graph.galgas", 512))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                                     extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  const GALGAS_listDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2245 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mListTypeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 49)), temp_1.getter_mListTypeName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 49))  COMMA_SOURCE_FILE ("type-list.galgas", 49)) ;
  {
  const GALGAS_listDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2245, temp_2, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
  }
  const GALGAS_listDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_2405 (temp_3.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_2405.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2405.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 52)), enumerator_2405.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 52))  COMMA_SOURCE_FILE ("type-list.galgas", 52)) COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
    }
    enumerator_2405.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                                extensionMethod_listDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList_3314 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 67)) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_3350 (temp_0.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_3350.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_3462 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_3350.current_mPropertyTypeName (HERE), var_attributeTypeIndex_3462 COMMA_SOURCE_FILE ("type-list.galgas", 69)) ;
    }
    GALGAS_bool var_hasSetter_3481 = enumerator_3350.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasGetter_3511 = enumerator_3350.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_3543 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3580 (enumerator_3350.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_3580.hasCurrentObject ()) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, enumerator_3580.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 74)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticWarning (enumerator_3580.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 75)), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 75)) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_3580.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 80)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticWarning (enumerator_3580.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 81)), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray4  COMMA_SOURCE_FILE ("type-list.galgas", 81)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_3580.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 86)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = var_hasSelector_3543.boolEnum () ;
                if (kBoolTrue == test_6) {
                  TC_Array <C_FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_3580.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 88)), GALGAS_string ("the '%selector' attribute is already named"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 88)) ;
                }
              }
              var_hasSelector_3543 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            GALGAS_stringlist temp_9 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 94)) ;
            temp_9.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 94)) ;
            appendFixItActions (fixItArray8, kFixItReplace, temp_9) ;
            inCompiler->emitSemanticError (enumerator_3580.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 92)), GALGAS_string ("only '%selector' attribute is allowed here"), fixItArray8  COMMA_SOURCE_FILE ("type-list.galgas", 92)) ;
          }
        }
      }
      enumerator_3580.gotoNextObject () ;
    }
    var_typedAttributeList_3314.addAssign_operation (var_attributeTypeIndex_3462, enumerator_3350.current_mPropertyName (HERE), var_hasSetter_3481, var_hasGetter_3511, var_hasSelector_3543  COMMA_SOURCE_FILE ("type-list.galgas", 97)) ;
    enumerator_3350.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_uintType_4669 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_4669 COMMA_SOURCE_FILE ("type-list.galgas", 100)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listTypeIndex_4794 ;
  {
  const GALGAS_listDeclarationAST temp_10 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_10.getter_mListTypeName (HERE), var_listTypeIndex_4794 COMMA_SOURCE_FILE ("type-list.galgas", 102)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listElementTypeIndex_5042 ;
  {
  const GALGAS_listDeclarationAST temp_11 = object ;
  const GALGAS_listDeclarationAST temp_12 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_11.getter_mListTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 106)), temp_12.getter_mListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 106)), var_listElementTypeIndex_5042 COMMA_SOURCE_FILE ("type-list.galgas", 104)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5123 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 110)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_5178 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 111)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_5242 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 112)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_5305 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 113)) ;
  cEnumerator_typedPropertyList enumerator_5341 (var_typedAttributeList_3314, kENUMERATION_UP) ;
  while (enumerator_5341.hasCurrentObject ()) {
    GALGAS_string temp_13 ;
    const enumGalgasBool test_14 = enumerator_5341.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_14) {
      temp_13 = enumerator_5341.current_mPropertyName (HERE).getter_string (HERE) ;
    }else if (kBoolFalse == test_14) {
      temp_13 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_5361 = temp_13 ;
    var_enumerationDescriptor_5123.addAssign_operation (enumerator_5341.current_mPropertyTypeEntry (HERE), enumerator_5341.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 116)) ;
    var_constructorAttributeTypeList_5178.addAssign_operation (var_selector_5361.getter_nowhere (SOURCE_FILE ("type-list.galgas", 118)), enumerator_5341.current_mPropertyTypeEntry (HERE), enumerator_5341.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 117)) ;
    var_setterOutputFormalArgumentList_5242.addAssign_operation (var_selector_5361.getter_nowhere (SOURCE_FILE ("type-list.galgas", 122)), enumerator_5341.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 124)), enumerator_5341.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 121)) ;
    var_setterInputFormalArgumentList_5305.addAssign_operation (var_selector_5361.getter_nowhere (SOURCE_FILE ("type-list.galgas", 127)), enumerator_5341.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 129)), enumerator_5341.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 126)) ;
    enumerator_5341.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_5943 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 133)) ;
  {
  const GALGAS_listDeclarationAST temp_15 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_5943, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyList"), temp_15.getter_mListTypeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 138)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 134)) ;
  }
  {
  var_constructorMap_5943.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 142))  COMMA_SOURCE_FILE ("type-list.galgas", 142)), var_constructorAttributeTypeList_5178, GALGAS_bool (false), var_listTypeIndex_4794, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 141)) ;
  }
  GALGAS_getterMap var_getterMap_6388 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6388, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 148)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6388, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 149)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6388, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 156)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_16 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_6388, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_16.getter_mListTypeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 167)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 163)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_17 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_6388, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_17.getter_mListTypeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 174)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 170)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_18 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_6388, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), temp_18.getter_mListTypeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 181)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 177)) ;
  }
  cEnumerator_typedPropertyList enumerator_7400 (var_typedAttributeList_3314, kENUMERATION_UP) ;
  while (enumerator_7400.hasCurrentObject ()) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = enumerator_7400.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_19) {
        {
        GALGAS_functionSignature temp_20 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 189)) ;
        temp_20.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 189)), var_uintType_4669, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 189)) ;
        var_getterMap_6388.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_7400.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 187)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 187)), enumerator_7400.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 187))  COMMA_SOURCE_FILE ("type-list.galgas", 187)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 188)), temp_20, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 190)), GALGAS_bool (true), enumerator_7400.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 193)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 186)) ;
        }
      }
    }
    enumerator_7400.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_7885 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 199)) ;
  {
  var_instanceMethodMap_7885.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 201))  COMMA_SOURCE_FILE ("type-list.galgas", 201)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 202)), var_setterOutputFormalArgumentList_5242, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 204)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 206)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 200)) ;
  }
  {
  var_instanceMethodMap_7885.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 210))  COMMA_SOURCE_FILE ("type-list.galgas", 210)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 211)), var_setterOutputFormalArgumentList_5242, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 213)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 215)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 209)) ;
  }
  GALGAS_setterMap var_setterMap_8403 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 219)) ;
  {
  GALGAS_formalParameterSignature temp_21 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 223)) ;
  temp_21.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 223)), var_listElementTypeIndex_5042, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-list.galgas", 223)), GALGAS_string ("inElement")  COMMA_SOURCE_FILE ("type-list.galgas", 223)) ;
  var_setterMap_8403.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("append"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 221))  COMMA_SOURCE_FILE ("type-list.galgas", 221)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 222)), temp_21, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 225)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 220)) ;
  }
  {
  var_setterMap_8403.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 229))  COMMA_SOURCE_FILE ("type-list.galgas", 229)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 230)), var_setterOutputFormalArgumentList_5242, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 233)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 228)) ;
  }
  {
  var_setterMap_8403.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 237))  COMMA_SOURCE_FILE ("type-list.galgas", 237)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 238)), var_setterOutputFormalArgumentList_5242, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 241)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 236)) ;
  }
  var_setterOutputFormalArgumentList_5242.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 244)), var_uintType_4669, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 244)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 244)) ;
  {
  var_setterMap_8403.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 246))  COMMA_SOURCE_FILE ("type-list.galgas", 246)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 247)), var_setterOutputFormalArgumentList_5242, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 250)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 245)) ;
  }
  cEnumerator_typedPropertyList enumerator_9462 (var_typedAttributeList_3314, kENUMERATION_UP) ;
  while (enumerator_9462.hasCurrentObject ()) {
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = enumerator_9462.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_22) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_9523 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 256)) ;
        var_setterFormalArgumentList_9523.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 257)), enumerator_9462.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 257)), enumerator_9462.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 257)) ;
        var_setterFormalArgumentList_9523.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 258)), var_uintType_4669, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 258)), enumerator_9462.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 258)) ;
        {
        var_setterMap_8403.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9462.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 260)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 260)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 260)), enumerator_9462.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 260))  COMMA_SOURCE_FILE ("type-list.galgas", 260)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 261)), var_setterFormalArgumentList_9523, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 264)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 259)) ;
        }
      }
    }
    enumerator_9462.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_5305.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 270)), var_uintType_4669, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 270)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 270)) ;
  {
  var_setterMap_8403.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 272))  COMMA_SOURCE_FILE ("type-list.galgas", 272)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 273)), var_setterInputFormalArgumentList_5305, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 276)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 271)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_23 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_23.getter_mListTypeName (HERE), var_getterMap_6388, var_setterMap_8403, var_instanceMethodMap_7885, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 281)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_24 = object ;
  const GALGAS_listDeclarationAST temp_25 = object ;
  const GALGAS_listDeclarationAST temp_26 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_24.getter_mListTypeName (HERE), temp_25.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-list.galgas", 296)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 297)), GALGAS_bool (true), var_typedAttributeList_3314, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 300)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 301)), var_constructorMap_5943, var_getterMap_6388, var_setterMap_8403, var_instanceMethodMap_7885, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 306)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 307)), var_enumerationDescriptor_5123, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 309)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 309)) COMMA_SOURCE_FILE ("type-list.galgas", 309)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-list.galgas", 309)) COMMA_SOURCE_FILE ("type-list.galgas", 309)), var_constructorAttributeTypeList_5178, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 311)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 312)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 313)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 314)), GALGAS_bool (false), var_listElementTypeIndex_5042, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (temp_26.getter_mListTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 318)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 292)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                               extensionMethod_listDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_enterInSemanticContext (defineExtensionMethod_listDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_12039 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 328)) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_12075 (temp_0.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_12075.hasCurrentObject ()) {
    var_structAttributeList_12039.addAssign_operation (enumerator_12075.current_mPropertyTypeName (HERE), enumerator_12075.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 334))  COMMA_SOURCE_FILE ("type-list.galgas", 330)) ;
    enumerator_12075.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_1 = object ;
  const GALGAS_listDeclarationAST temp_2 = object ;
  const GALGAS_listDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.getter_mIsPredefined (HERE), GALGAS_lstring::constructor_new (temp_2.getter_mListTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 338)), temp_3.getter_mListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 338)), var_structAttributeList_12039, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 336))  COMMA_SOURCE_FILE ("type-list.galgas", 336)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                             extensionMethod_listDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_addAssociatedElement (defineExtensionMethod_listDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_13179 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mListTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 358)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13179, var_nameForUsefulness_13179, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 359)) ;
  }
  const GALGAS_listDeclarationAST temp_1 = object ;
  const GALGAS_listDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_13343 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.getter_mListTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 360)), temp_2.getter_mListTypeName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 360))  COMMA_SOURCE_FILE ("type-list.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 360)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_13179, var_elementTypeNameForUsefulness_13343 COMMA_SOURCE_FILE ("type-list.galgas", 361)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_13575 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 363)) ;
  GALGAS_propertyIndexMap var_attributeMap_13613 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 364)) ;
  const GALGAS_listDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_13649 (temp_3.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_13649.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_13690 = function_typeNameForUsefulEntitiesGraph (enumerator_13649.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 366)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_13179, var_propertyTypeNameForUsefulness_13690 COMMA_SOURCE_FILE ("type-list.galgas", 367)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_13842 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_13649.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 368)) ;
    GALGAS_bool var_hasSetter_13943 = enumerator_13649.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasGetter_13973 = enumerator_13649.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_14005 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_14042 (enumerator_13649.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14042.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_14042.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 373)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (enumerator_14042.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 374)), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray5  COMMA_SOURCE_FILE ("type-list.galgas", 374)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, enumerator_14042.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 379)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (enumerator_14042.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 380)), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 380)) ;
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsEqual, enumerator_14042.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 385)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_8) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_hasSelector_14005.boolEnum () ;
                if (kBoolTrue == test_9) {
                  TC_Array <C_FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (enumerator_14042.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 387)), GALGAS_string ("the '%selector' attribute is already named"), fixItArray10  COMMA_SOURCE_FILE ("type-list.galgas", 387)) ;
                }
              }
              var_hasSelector_14005 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            GALGAS_stringlist temp_12 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 393)) ;
            temp_12.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 393)) ;
            appendFixItActions (fixItArray11, kFixItReplace, temp_12) ;
            inCompiler->emitSemanticError (enumerator_14042.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 391)), GALGAS_string ("only '%selector' attribut is allowed here"), fixItArray11  COMMA_SOURCE_FILE ("type-list.galgas", 391)) ;
          }
        }
      }
      enumerator_14042.gotoNextObject () ;
    }
    var_typedAttributeList_13575.addAssign_operation (var_t_13842, enumerator_13649.current_mPropertyName (HERE), var_hasSetter_13943, var_hasGetter_13973, var_hasSelector_14005  COMMA_SOURCE_FILE ("type-list.galgas", 396)) ;
    {
    var_attributeMap_13613.setter_insertKey (enumerator_13649.current_mPropertyName (HERE), var_t_13842, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 402)) ;
    }
    enumerator_13649.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_13 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_15095 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_13.getter_mListTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 405)) ;
  const GALGAS_listDeclarationAST temp_14 = object ;
  const GALGAS_listDeclarationAST temp_15 = object ;
  const GALGAS_listDeclarationAST temp_16 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (temp_14.getter_mListTypeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 407)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_15095, GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (temp_15.getter_mListTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 410)), temp_16.getter_mListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 410)), var_typedAttributeList_13575  COMMA_SOURCE_FILE ("type-list.galgas", 408))  COMMA_SOURCE_FILE ("type-list.galgas", 406)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                         extensionMethod_listDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_semanticAnalysis (defineExtensionMethod_listDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'listGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_listGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_listGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_listGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_listGenerationTemplate_0,
  0,
  gWrapperAllDirectories_listGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_list {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- List constructor used by listmap\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) ;\n"
    "\n"
    "//--------------------------------- Element constructor\n"
    "  public: static void makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_787_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_787 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_787.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << enumerator_787.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_787.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      index_787_.increment () ;
      enumerator_787.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                         const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cCollectionElement {\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mObject ;\n"
    "\n"
    "//--- Constructors\n"
    "  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_545_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_545 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_545.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_545.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_545.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_545.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_545_.increment () ;
      enumerator_545.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public: virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public: virtual cCollectionElement * copy (void) ;\n"
    "\n"
    "//--- Description\n"
    "  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1555_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1555 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1555.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_1555.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1555.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      if (enumerator_1555.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1555_.increment () ;
      enumerator_1555.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_1792_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1792 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1792.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_1792.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 45)).stringValue () ;
      if (enumerator_1792.hasNextObject ()) {
        result << ", " ;
      }
      index_1792_.increment () ;
      enumerator_1792.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_2210_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2210 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2210.hasCurrentObject ()) {
      result << "inElement.mProperty_" ;
      result << enumerator_2210.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 57)).stringValue () ;
      if (enumerator_2210.hasNextObject ()) {
        result << ", " ;
      }
      index_2210_.increment () ;
      enumerator_2210.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mObject.isValid () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cCollectionElement * cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cCollectionElement * result = NULL ;\n"
    "  macroMyNew (result, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2859_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2859 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2859.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_2859.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 75)).stringValue () ;
      if (enumerator_2859.hasNextObject ()) {
        result << ", " ;
      }
      index_2859_.increment () ;
      enumerator_2859.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_3257_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3257 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3257.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n"
        "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
        "  ioString << " ;
      result << enumerator_3257.current_mPropertyName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 89)).stringValue () ;
      result << " \":\" ;\n"
        "  mObject.mProperty_" ;
      result << enumerator_3257.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3257_.increment () ;
      enumerator_3257.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "  macroValidSharedObject (operand, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return mObject.objectCompare (operand->mObject) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_list () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) :\n"
    "AC_GALGAS_list (inSharedArray) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (UNUSED_LOCATION_ARGS) {\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "  (capCollectionElementArray ()) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_listWithValue (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5024_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5024 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5024.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_5024.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      result << " & inOperand" ;
      result << index_5024_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      if (enumerator_5024.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5024_IDX.increment () ;
      enumerator_5024.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_5256_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5256 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5256.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_5256_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 131)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_5256.hasNextObject ()) {
        result << " && " ;
      }
      index_5256_IDX.increment () ;
      enumerator_5256.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (capCollectionElementArray ()) ;\n"
    "    capCollectionElement attributes ;\n"
    "    GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_5550_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5550 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5550.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_5550_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 139)).stringValue () ;
      index_5550_IDX.increment () ;
      enumerator_5550.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    result.appendObject (attributes) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_5927_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5927 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5927.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_5927.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      result << " & in_" ;
      result << enumerator_5927.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      index_5927_.increment () ;
      enumerator_5927.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6229_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6229 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6229.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_6229.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 158)).stringValue () ;
      if (enumerator_6229.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6229_.increment () ;
      enumerator_6229.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "  outAttributes.setPointer (p) ;\n"
    "  macroDetachSharedObject (p) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6611_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6611 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6611.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_6611.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      result << " & inOperand" ;
      result << index_6611_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      if (enumerator_6611.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6611_IDX.increment () ;
      enumerator_6611.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (" ;
  GALGAS_uint index_6828_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6828 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6828.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_6828_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 177)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_6828.hasNextObject ()) {
        result << " && " ;
      }
      index_6828_IDX.increment () ;
      enumerator_6828.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "      cCollectionElement * p = NULL ;\n"
    "      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7046_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7046 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7046.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7046_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 184)).stringValue () ;
      if (enumerator_7046.hasNextObject ()) {
        result << ", " ;
      }
      index_7046_IDX.increment () ;
      enumerator_7046.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "      capCollectionElement attributes ;\n"
    "      attributes.setPointer (p) ;\n"
    "      macroDetachSharedObject (p) ;\n"
    "      appendObject (attributes) ;\n"
    "    }else{ // Destroy receiver\n"
    "      drop () ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_append (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inElement,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (inElement.isValid ()) {\n"
    "      cCollectionElement * p = NULL ;\n"
    "      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inElement COMMA_THERE)) ;\n"
    "      capCollectionElement attributes ;\n"
    "      attributes.setPointer (p) ;\n"
    "      macroDetachSharedObject (p) ;\n"
    "      appendObject (attributes) ;\n"
    "    }else{\n"
    "      drop () ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_insertAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8197_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8197 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8197.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_8197.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue () ;
      result << " inOperand" ;
      result << index_8197_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8197_IDX.increment () ;
      enumerator_8197.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inInsertionIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (inInsertionIndex.isValid ()" ;
  GALGAS_uint index_8505_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8505 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8505.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_8505_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 229)).stringValue () ;
      result << ".isValid ()" ;
      index_8505_IDX.increment () ;
      enumerator_8505.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "      cCollectionElement * p = NULL ;\n"
    "      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_8710_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8710 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8710.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_8710_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 235)).stringValue () ;
      if (enumerator_8710.hasNextObject ()) {
        result << ", " ;
      }
      index_8710_IDX.increment () ;
      enumerator_8710.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "      capCollectionElement attributes ;\n"
    "      attributes.setPointer (p) ;\n"
    "      macroDetachSharedObject (p) ;\n"
    "      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;\n"
    "    }else{\n"
    "      drop () ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_removeAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9254_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9254 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9254.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_9254.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 253)).stringValue () ;
      result << " & outOperand" ;
      result << index_9254_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 253)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9254_IDX.increment () ;
      enumerator_9254.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inRemoveIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (inRemoveIndex.isValid ()) {\n"
    "      capCollectionElement attributes ;\n"
    "      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;\n"
    "      cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "      if (NULL == p) {\n" ;
  GALGAS_uint index_9822_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9822 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9822.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_9822_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 266)).stringValue () ;
      result << ".drop () ;\n" ;
      index_9822_IDX.increment () ;
      enumerator_9822.gotoNextObject () ;
    }
  }
  result << "        drop () ;\n"
    "      }else{\n"
    "        macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10030_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10030 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10030.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_10030_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 273)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_10030.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 273)).stringValue () ;
      result << " ;\n" ;
      index_10030_IDX.increment () ;
      enumerator_10030.gotoNextObject () ;
    }
  }
  result << "      }\n"
    "    }else{\n" ;
  GALGAS_uint index_10209_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10209 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10209.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_10209_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 279)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10209_IDX.increment () ;
      enumerator_10209.gotoNextObject () ;
    }
  }
  result << "      drop () ;    \n"
    "    }\n"
    "  }else{\n" ;
  GALGAS_uint index_10343_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10343 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10343.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10343_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 286)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10343_IDX.increment () ;
      enumerator_10343.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popFirst (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10623_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10623 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10623.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_10623.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue () ;
      result << " & outOperand" ;
      result << index_10623_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10623_IDX.increment () ;
      enumerator_10623.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  capCollectionElement attributes ;\n"
    "  removeFirstObject (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_11040_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11040 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11040.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11040_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 305)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11040_IDX.increment () ;
      enumerator_11040.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11218_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11218 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11218.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11218_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11218.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue () ;
      result << " ;\n" ;
      index_11218_IDX.increment () ;
      enumerator_11218.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popLast (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11556_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11556 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11556.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_11556.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue () ;
      result << " & outOperand" ;
      result << index_11556_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11556_IDX.increment () ;
      enumerator_11556.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  capCollectionElement attributes ;\n"
    "  removeLastObject (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_11972_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11972 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11972.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11972_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 330)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11972_IDX.increment () ;
      enumerator_11972.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_12150_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12150 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12150.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12150_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_12150.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue () ;
      result << " ;\n" ;
      index_12150_IDX.increment () ;
      enumerator_12150.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_first (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12486_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12486 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12486.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_12486.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue () ;
      result << " & outOperand" ;
      result << index_12486_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12486_IDX.increment () ;
      enumerator_12486.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElement attributes ;\n"
    "  readFirst (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_12901_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12901 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12901.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12901_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 355)).stringValue () ;
      result << ".drop () ;\n" ;
      index_12901_IDX.increment () ;
      enumerator_12901.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_13079_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13079 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13079.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13079_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_13079.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue () ;
      result << " ;\n" ;
      index_13079_IDX.increment () ;
      enumerator_13079.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_last (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13414_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13414 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13414.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_13414.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue () ;
      result << " & outOperand" ;
      result << index_13414_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13414_IDX.increment () ;
      enumerator_13414.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElement attributes ;\n"
    "  readLast (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_13828_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13828 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13828.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13828_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 380)).stringValue () ;
      result << ".drop () ;\n" ;
      index_13828_IDX.increment () ;
      enumerator_13828.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_14006_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14006 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14006.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_14006_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_14006.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue () ;
      result << " ;\n" ;
      index_14006_IDX.increment () ;
      enumerator_14006.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::add_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand,\n"
    "                                            " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "                                            " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    result = *this ;\n"
    "    result.appendList (inOperand) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListWithRange (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_range & inRange,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListFromIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inIndex,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListToIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inIndex,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::plusAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inOperand,\n"
    "                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
    "  appendList (inOperand) ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_16806_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16806 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16806.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_16806.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_16806.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_16806.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue () ;
        result << " inOperand,\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_uint inIndex,\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) {\n"
          "  cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;\n"
          "  if (NULL != p) {\n"
          "    macroValidSharedObject (p, cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    macroUniqueSharedObject (p) ;\n"
          "    p->mObject.mProperty_" ;
        result << enumerator_16806.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 454)).stringValue () ;
        result << " = inOperand ;\n"
          "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      const enumGalgasBool test_1 = enumerator_16806.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "GALGAS_" ;
        result << enumerator_16806.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 461)).stringValue () ;
        result << " GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::getter_" ;
        result << enumerator_16806.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 461)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "const GALGAS_uint & inIndex,\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) const {\n"
          "  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;\n"
          "  cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) attributes.ptr () ;\n"
          "  GALGAS_" ;
        result << enumerator_16806.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 466)).stringValue () ;
        result << " result ;\n"
          "  if (NULL != p) {\n"
          "    macroValidSharedObject (p, cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    result = p->mObject.mProperty_" ;
        result << enumerator_16806.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 469)).stringValue () ;
        result << " ;\n"
          "  }\n"
          "  return result ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_16806_IDX.increment () ;
      enumerator_16806.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n"
    "                   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const typeEnumerationOrder inOrder) :\n"
    "cGenericAbstractEnumerator (inOrder) {\n"
    "  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current (LOCATION_ARGS) const {\n"
    "  const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return p->mObject ;\n"
    "}\n"
    "\n"
    "\n" ;
  GALGAS_uint index_19773_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19773 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19773.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_19773.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 496)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_19773.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 496)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n"
        "  macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mObject.mProperty_" ;
      result << enumerator_19773.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 499)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_19773_IDX.increment () ;
      enumerator_19773.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  const GALGAS_listTypeForGeneration temp_0 = object ;
  const GALGAS_listTypeForGeneration temp_1 = object ;
  const GALGAS_listTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 448)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 449)), temp_2.getter_mTypedAttributeList (HERE) COMMA_SOURCE_FILE ("type-list.galgas", 447))) ;
  const GALGAS_listTypeForGeneration temp_3 = object ;
  const GALGAS_listTypeForGeneration temp_4 = object ;
  const GALGAS_listTypeForGeneration temp_5 = object ;
  const GALGAS_listTypeForGeneration temp_6 = object ;
  const GALGAS_listTypeForGeneration temp_7 = object ;
  const GALGAS_listTypeForGeneration temp_8 = object ;
  const GALGAS_listTypeForGeneration temp_9 = object ;
  const GALGAS_listTypeForGeneration temp_10 = object ;
  const GALGAS_listTypeForGeneration temp_11 = object ;
  const GALGAS_listTypeForGeneration temp_12 = object ;
  const GALGAS_listTypeForGeneration temp_13 = object ;
  const GALGAS_listTypeForGeneration temp_14 = object ;
  const GALGAS_listTypeForGeneration temp_15 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 453)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 454)), temp_5.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 455)), temp_6.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 456)), temp_7.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 457)), temp_8.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 458)), temp_9.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 459)), temp_10.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 460)), temp_11.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 461)), temp_12.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 462)), temp_13.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 463)), temp_14.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 464)), temp_15.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 465)) COMMA_SOURCE_FILE ("type-list.galgas", 452))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 452)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                              extensionMethod_listTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  const GALGAS_listTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_17994 (temp_0.getter_mTypedAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_17994.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17994.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 476)) ;
    enumerator_17994.gotoNextObject () ;
  }
  const GALGAS_listTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mListElementTypeIndex (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 478)) ;
  const GALGAS_listTypeForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 479)) ;
  const GALGAS_listTypeForGeneration temp_3 = object ;
  const GALGAS_listTypeForGeneration temp_4 = object ;
  const GALGAS_listTypeForGeneration temp_5 = object ;
  const GALGAS_listTypeForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 481)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 482)), temp_5.getter_mTypedAttributeList (HERE), temp_6.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 484)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 484)) COMMA_SOURCE_FILE ("type-list.galgas", 480))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                                     extensionMethod_listTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_1796 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 37)) ;
  var_structAttributeList_1796.addAssign_operation (GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 39)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 40)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 42))  COMMA_SOURCE_FILE ("type-listmap.galgas", 38)) ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  var_structAttributeList_1796.addAssign_operation (temp_0.getter_mAssociatedListTypeName (HERE), GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 45)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 47))  COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  const GALGAS_listmapDeclarationAST temp_1 = object ;
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.getter_mIsPredefined (HERE), GALGAS_lstring::constructor_new (temp_2.getter_mListmapTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), temp_3.getter_mListmapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), var_structAttributeList_1796, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 49))  COMMA_SOURCE_FILE ("type-listmap.galgas", 49)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                             extensionMethod_listmapDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_addAssociatedElement (defineExtensionMethod_listmapDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                           GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                           GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                           GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                           GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  const GALGAS_listmapDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_3094 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mListmapTypeName (HERE).getter_string (SOURCE_FILE ("type-listmap.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 67)), temp_1.getter_mListmapTypeName (HERE).getter_location (SOURCE_FILE ("type-listmap.galgas", 67))  COMMA_SOURCE_FILE ("type-listmap.galgas", 67)) ;
  {
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3094, temp_2, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 68)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  const GALGAS_listmapDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3094, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.getter_mAssociatedListTypeName (HERE).getter_string (SOURCE_FILE ("type-listmap.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 69)), temp_4.getter_mAssociatedListTypeName (HERE).getter_location (SOURCE_FILE ("type-listmap.galgas", 69))  COMMA_SOURCE_FILE ("type-listmap.galgas", 69)) COMMA_SOURCE_FILE ("type-listmap.galgas", 69)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                                extensionMethod_listmapDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum_4254 ;
  GALGAS_typedPropertyList var_listTypedAttributeList_4312 ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  GALGAS_bool joker_4216_3 ; // Joker input parameter
  GALGAS_bool joker_4216_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_4216_1 ; // Joker input parameter
  GALGAS_bool joker_4260 ; // Joker input parameter
  GALGAS_propertyMap joker_4318_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_4318_19 ; // Joker input parameter
  GALGAS_constructorMap joker_4318_18 ; // Joker input parameter
  GALGAS_getterMap joker_4318_17 ; // Joker input parameter
  GALGAS_setterMap joker_4318_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_4318_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_4318_14 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_4318_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_4318_12 ; // Joker input parameter
  GALGAS_operators joker_4318_11 ; // Joker input parameter
  GALGAS_functionSignature joker_4318_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_4318_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_4318_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4318_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4318_6 ; // Joker input parameter
  GALGAS_bool joker_4318_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_4318_4 ; // Joker input parameter
  GALGAS_string joker_4318_3 ; // Joker input parameter
  GALGAS_string joker_4318_2 ; // Joker input parameter
  GALGAS_headerKind joker_4318_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (temp_0.getter_mAssociatedListTypeName (HERE), joker_4216_3, joker_4216_2, joker_4216_1, var_typeKindEnum_4254, joker_4260, var_listTypedAttributeList_4312, joker_4318_20, joker_4318_19, joker_4318_18, joker_4318_17, joker_4318_16, joker_4318_15, joker_4318_14, joker_4318_13, joker_4318_12, joker_4318_11, joker_4318_10, joker_4318_9, joker_4318_8, joker_4318_7, joker_4318_6, joker_4318_5, joker_4318_4, joker_4318_3, joker_4318_2, joker_4318_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 82)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_4254.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 90)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_listmapDeclarationAST temp_2 = object ;
      const GALGAS_listmapDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.getter_mAssociatedListTypeName (HERE).getter_location (SOURCE_FILE ("type-listmap.galgas", 91)), GALGAS_string ("the '@").add_operation (temp_3.getter_mAssociatedListTypeName (HERE).getter_string (SOURCE_FILE ("type-listmap.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 91)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 91)), fixItArray4  COMMA_SOURCE_FILE ("type-listmap.galgas", 91)) ;
      var_listTypedAttributeList_4312 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 92)) ;
    }
  }
  GALGAS_constructorMap var_constructorMap_4591 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 95)) ;
  GALGAS_getterMap var_getterMap_4681 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4681, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 96)) ;
  }
  GALGAS_setterMap var_setterMap_4706 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 97)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4750 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 98)) ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeIndex_4909 ;
  {
  const GALGAS_listmapDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.getter_mAssociatedListTypeName (HERE), var_associatedListTypeIndex_4909 COMMA_SOURCE_FILE ("type-listmap.galgas", 100)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_5043 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_5043 COMMA_SOURCE_FILE ("type-listmap.galgas", 102)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4681, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 104)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4681, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 111)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4681, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 118)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_6 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_4681, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), temp_6.getter_mAssociatedListTypeName (HERE).getter_string (SOURCE_FILE ("type-listmap.galgas", 131)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 125)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_7 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_4591, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_7.getter_mListmapTypeName (HERE).getter_string (SOURCE_FILE ("type-listmap.galgas", 139)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 135)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_6089 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 143)) ;
  var_enumeratorDescriptor_6089.addAssign_operation (var_stringTypeIndex_5043, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 144)) ;
  var_enumeratorDescriptor_6089.addAssign_operation (var_associatedListTypeIndex_4909, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 145)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_6302 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 147)) ;
  var_addAssignOperatorDescription_6302.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 148)), var_stringTypeIndex_5043, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 148)) ;
  cEnumerator_typedPropertyList enumerator_6434 (var_listTypedAttributeList_4312, kENUMERATION_UP) ;
  while (enumerator_6434.hasCurrentObject ()) {
    var_addAssignOperatorDescription_6302.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 150)), enumerator_6434.current_mPropertyTypeEntry (HERE), enumerator_6434.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 150)) ;
    enumerator_6434.gotoNextObject () ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_8 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_8.getter_mListmapTypeName (HERE), var_getterMap_4681, var_setterMap_4706, var_instanceMethodMap_4750, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 153)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listElementTypeIndex_7069 ;
  {
  const GALGAS_listmapDeclarationAST temp_9 = object ;
  const GALGAS_listmapDeclarationAST temp_10 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_9.getter_mListmapTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), temp_10.getter_mListmapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), var_listElementTypeIndex_7069 COMMA_SOURCE_FILE ("type-listmap.galgas", 164)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_11 = object ;
  const GALGAS_listmapDeclarationAST temp_12 = object ;
  const GALGAS_listmapDeclarationAST temp_13 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_11.getter_mListmapTypeName (HERE), temp_12.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-listmap.galgas", 174)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 175)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 177)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 178)), var_listTypedAttributeList_4312, var_constructorMap_4591, var_getterMap_4681, var_setterMap_4706, var_instanceMethodMap_4750, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 184)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 185)), var_enumeratorDescriptor_6089, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 187)), var_addAssignOperatorDescription_6302, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 189)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 190)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 191)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 192)), GALGAS_bool (false), var_listElementTypeIndex_7069, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (temp_13.getter_mListmapTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 196)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 170)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                               extensionMethod_listmapDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterInSemanticContext (defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                    GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_8738 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mListmapTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 214)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8738, var_nameForUsefulness_8738, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 215)) ;
  }
  const GALGAS_listmapDeclarationAST temp_1 = object ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_8908 = function_typeNameForUsefulEntitiesGraph (temp_1.getter_mAssociatedListTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 216)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8738, var_associatedTypeNameForUsefulness_8908 COMMA_SOURCE_FILE ("type-listmap.galgas", 217)) ;
  }
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_9096 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_2.getter_mListmapTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 218)), temp_3.getter_mListmapTypeName (HERE).getter_location (SOURCE_FILE ("type-listmap.galgas", 218))  COMMA_SOURCE_FILE ("type-listmap.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 218)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8738, var_elementTypeNameForUsefulness_9096 COMMA_SOURCE_FILE ("type-listmap.galgas", 219)) ;
  }
  GALGAS_typeKindEnum var_typeKindEnum_9453 ;
  GALGAS_typedPropertyList var_listTypeAttributeList_9510 ;
  const GALGAS_listmapDeclarationAST temp_4 = object ;
  GALGAS_bool joker_9415_3 ; // Joker input parameter
  GALGAS_bool joker_9415_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_9415_1 ; // Joker input parameter
  GALGAS_bool joker_9459 ; // Joker input parameter
  GALGAS_propertyMap joker_9516_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9516_19 ; // Joker input parameter
  GALGAS_constructorMap joker_9516_18 ; // Joker input parameter
  GALGAS_getterMap joker_9516_17 ; // Joker input parameter
  GALGAS_setterMap joker_9516_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9516_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_9516_14 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_9516_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9516_12 ; // Joker input parameter
  GALGAS_operators joker_9516_11 ; // Joker input parameter
  GALGAS_functionSignature joker_9516_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9516_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_9516_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9516_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9516_6 ; // Joker input parameter
  GALGAS_bool joker_9516_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_9516_4 ; // Joker input parameter
  GALGAS_string joker_9516_3 ; // Joker input parameter
  GALGAS_string joker_9516_2 ; // Joker input parameter
  GALGAS_headerKind joker_9516_1 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mTypeMap (HERE).method_searchKey (temp_4.getter_mAssociatedListTypeName (HERE), joker_9415_3, joker_9415_2, joker_9415_1, var_typeKindEnum_9453, joker_9459, var_listTypeAttributeList_9510, joker_9516_20, joker_9516_19, joker_9516_18, joker_9516_17, joker_9516_16, joker_9516_15, joker_9516_14, joker_9516_13, joker_9516_12, joker_9516_11, joker_9516_10, joker_9516_9, joker_9516_8, joker_9516_7, joker_9516_6, joker_9516_5, joker_9516_4, joker_9516_3, joker_9516_2, joker_9516_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 221)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_9453.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 230)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_listmapDeclarationAST temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.getter_mAssociatedListTypeName (HERE).getter_location (SOURCE_FILE ("type-listmap.galgas", 231)), GALGAS_string ("associated type should be a list type"), fixItArray7  COMMA_SOURCE_FILE ("type-listmap.galgas", 231)) ;
    }
  }
  const GALGAS_listmapDeclarationAST temp_8 = object ;
  const GALGAS_listmapDeclarationAST temp_9 = object ;
  const GALGAS_listmapDeclarationAST temp_10 = object ;
  const GALGAS_listmapDeclarationAST temp_11 = object ;
  const GALGAS_listmapDeclarationAST temp_12 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (temp_8.getter_mListmapTypeName (HERE).getter_string (SOURCE_FILE ("type-listmap.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 235)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_9.getter_mListmapTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 237)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_10.getter_mAssociatedListTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 238)), var_listTypeAttributeList_9510, GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (temp_11.getter_mListmapTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 240)), temp_12.getter_mListmapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 240))  COMMA_SOURCE_FILE ("type-listmap.galgas", 236))  COMMA_SOURCE_FILE ("type-listmap.galgas", 234)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                         extensionMethod_listmapDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_semanticAnalysis (defineExtensionMethod_listmapDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  const GALGAS_listmapTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_11009 (temp_0.getter_mAssociatedListTypedAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_11009.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_11009.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 260)) ;
    enumerator_11009.gotoNextObject () ;
  }
  const GALGAS_listmapTypeForGeneration temp_1 = object ;
  const GALGAS_listmapTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, temp_1.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 264)), temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 265)) COMMA_SOURCE_FILE ("type-listmap.galgas", 263))) ;
  const GALGAS_listmapTypeForGeneration temp_3 = object ;
  const GALGAS_listmapTypeForGeneration temp_4 = object ;
  const GALGAS_listmapTypeForGeneration temp_5 = object ;
  const GALGAS_listmapTypeForGeneration temp_6 = object ;
  const GALGAS_listmapTypeForGeneration temp_7 = object ;
  const GALGAS_listmapTypeForGeneration temp_8 = object ;
  const GALGAS_listmapTypeForGeneration temp_9 = object ;
  const GALGAS_listmapTypeForGeneration temp_10 = object ;
  const GALGAS_listmapTypeForGeneration temp_11 = object ;
  const GALGAS_listmapTypeForGeneration temp_12 = object ;
  const GALGAS_listmapTypeForGeneration temp_13 = object ;
  const GALGAS_listmapTypeForGeneration temp_14 = object ;
  const GALGAS_listmapTypeForGeneration temp_15 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 269)), temp_5.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 270)), temp_6.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 271)), temp_7.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 272)), temp_8.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 273)), temp_9.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 274)), temp_10.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 275)), temp_11.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 276)), temp_12.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 277)), temp_13.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 278)), temp_14.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 279)), temp_15.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 280)) COMMA_SOURCE_FILE ("type-listmap.galgas", 267))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 267)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                              extensionMethod_listmapTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  const GALGAS_listmapTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 290)) ;
  const GALGAS_listmapTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mAssociatedListMapElementTypeIndex (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 291)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = object ;
  const GALGAS_listmapTypeForGeneration temp_3 = object ;
  const GALGAS_listmapTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 293)), temp_3.getter_mAssociatedListTypeIndex (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 294)), temp_4.getter_mAssociatedListTypedAttributeList (HERE) COMMA_SOURCE_FILE ("type-listmap.galgas", 292))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                                     extensionMethod_listmapTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dictDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_dictDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  const GALGAS_dictDeclarationAST temp_0 = object ;
  result_outString = GALGAS_string ("dict @").add_operation (temp_0.getter_mDictTypeName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 15)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 15)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_dictDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                          extensionGetter_dictDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_dictDeclarationAST_keyRepresentation (defineExtensionGetter_dictDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_2769 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 68)) ;
  const GALGAS_dictDeclarationAST temp_0 = object ;
  var_structAttributeList_2769.addAssign_operation (temp_0.getter_mKeyTypeName (HERE), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 69)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 69))  COMMA_SOURCE_FILE ("type-dict.galgas", 69)) ;
  const GALGAS_dictDeclarationAST temp_1 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_2876 (temp_1.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_2876.hasCurrentObject ()) {
    var_structAttributeList_2769.addAssign_operation (enumerator_2876.current_mPropertyTypeName (HERE), enumerator_2876.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 71))  COMMA_SOURCE_FILE ("type-dict.galgas", 71)) ;
    enumerator_2876.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_2 = object ;
  const GALGAS_dictDeclarationAST temp_3 = object ;
  const GALGAS_dictDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_2.getter_mIsPredefined (HERE), GALGAS_lstring::constructor_new (temp_3.getter_mDictTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 75)), temp_4.getter_mDictTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 75)), var_structAttributeList_2769, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-dict.galgas", 73))  COMMA_SOURCE_FILE ("type-dict.galgas", 73)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                             extensionMethod_dictDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictDeclarationAST_addAssociatedElement (defineExtensionMethod_dictDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  const GALGAS_dictDeclarationAST temp_0 = object ;
  const GALGAS_dictDeclarationAST temp_1 = object ;
  GALGAS_lstring var_dictionary_4019 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mDictTypeName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 92)), temp_1.getter_mDictTypeName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 92))  COMMA_SOURCE_FILE ("type-dict.galgas", 92)) ;
  {
  const GALGAS_dictDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_4019, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 93)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_3 = object ;
  const GALGAS_dictDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.getter_mKeyTypeName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 94)), temp_4.getter_mKeyTypeName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 94))  COMMA_SOURCE_FILE ("type-dict.galgas", 94)) COMMA_SOURCE_FILE ("type-dict.galgas", 94)) ;
  }
  const GALGAS_dictDeclarationAST temp_5 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_4291 (temp_5.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_4291.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4291.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 96)), enumerator_4291.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 96))  COMMA_SOURCE_FILE ("type-dict.galgas", 96)) COMMA_SOURCE_FILE ("type-dict.galgas", 96)) ;
    }
    enumerator_4291.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                                extensionMethod_dictDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_dictDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_keyTypeIndex_5257 ;
  {
  const GALGAS_dictDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.getter_mKeyTypeName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 110)), var_keyTypeIndex_5257 COMMA_SOURCE_FILE ("type-dict.galgas", 110)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5315 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_keyTypeIndex_5257, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 112)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_5436 = GALGAS_bool (false) ;
  const GALGAS_dictDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_5477 (temp_1.getter_mAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_5477.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_5477.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_5436.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_5477.current_mValue (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 118)), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-dict.galgas", 118)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_5436 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_5477.current_mValue (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 122)), GALGAS_string ("unknown attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 122)) ;
    }
    enumerator_5477.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_5753 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 126)) ;
  GALGAS_getterMap var_getterMap_5844 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5844, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 127)) ;
  }
  GALGAS_setterMap var_setterMap_5869 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 128)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5913 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 129)) ;
  {
  const GALGAS_dictDeclarationAST temp_6 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_5753, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyDict"), temp_6.getter_mDictTypeName (HERE).getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 131)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_7 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_5844, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), temp_7.getter_mKeyTypeName (HERE).getter_string (HERE), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 139)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5844, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 146)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_6589 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 154)) ;
  GALGAS_typedPropertyList var_typedPropertyList_6633 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 155)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_6711 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 156)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_6711.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 157)), var_keyTypeIndex_5257, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 157)) ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch_5436.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_6589.addAssign_operation (temp_8.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 159)), var_keyTypeIndex_5257, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 161)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 158)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_7060 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 163)) ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch_5436.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_7060.addAssign_operation (temp_10.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 165)), var_keyTypeIndex_5257, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 167)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 164)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_7309 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 169)) ;
  GALGAS_string temp_12 ;
  const enumGalgasBool test_13 = var_usesSelectorsInInsertAndSearch_5436.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_7309.addAssign_operation (GALGAS_bool (true), temp_12.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 172)), var_keyTypeIndex_5257, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 170)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_7496 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 175)) ;
  const GALGAS_dictDeclarationAST temp_14 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_7564 (temp_14.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_7564.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_7676 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7564.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7676 COMMA_SOURCE_FILE ("type-dict.galgas", 177)) ;
    }
    GALGAS_bool var_hasGetter_7695 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_7720 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_7747 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_6711.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 181)), var_attributeTypeIndex_7676, enumerator_7564.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 181)) ;
    var_typedPropertyList_6633.addAssign_operation (var_attributeTypeIndex_7676, enumerator_7564.current_mPropertyName (HERE), var_hasSetter_7720, var_hasGetter_7695, var_hasSelector_7747  COMMA_SOURCE_FILE ("type-dict.galgas", 182)) ;
    var_typesToIncludeInHeaderCompilation_7496.addAssign_operation (var_attributeTypeIndex_7676  COMMA_SOURCE_FILE ("type-dict.galgas", 183)) ;
    var_enumerationDescriptor_5315.addAssign_operation (var_attributeTypeIndex_7676, enumerator_7564.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 184))  COMMA_SOURCE_FILE ("type-dict.galgas", 184)) ;
    GALGAS_lstring temp_15 ;
    const enumGalgasBool test_16 = var_usesSelectorsInInsertAndSearch_5436.boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = enumerator_7564.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 186)) ;
    }
    var_insertMethodFormalArgumentList_6589.addAssign_operation (temp_15, var_attributeTypeIndex_7676, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 188)), enumerator_7564.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 185)) ;
    GALGAS_lstring temp_17 ;
    const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_5436.boolEnum () ;
    if (kBoolTrue == test_18) {
      temp_17 = enumerator_7564.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_18) {
      temp_17 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 191)) ;
    }
    var_removeMethodFormalArgumentList_7060.addAssign_operation (temp_17, var_attributeTypeIndex_7676, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-dict.galgas", 193)), enumerator_7564.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 190)) ;
    GALGAS_bool test_19 = var_usesSelectorsInInsertAndSearch_5436 ;
    if (kBoolTrue != test_19.boolEnum ()) {
      test_19 = var_hasSelector_7747 ;
    }
    GALGAS_lstring temp_20 ;
    const enumGalgasBool test_21 = test_19.boolEnum () ;
    if (kBoolTrue == test_21) {
      temp_20 = enumerator_7564.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_21) {
      temp_20 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 197)) ;
    }
    var_optionalMethodSignature_7309.addAssign_operation (GALGAS_bool (false), temp_20, var_attributeTypeIndex_7676, enumerator_7564.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 195)) ;
    enumerator_7564.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_22 = object ;
  var_setterMap_5869.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), temp_22.getter_mDictTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 203)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 204)), var_removeMethodFormalArgumentList_7060, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 207)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 202)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_23 = object ;
  const GALGAS_dictDeclarationAST temp_24 = object ;
  var_instanceMethodMap_5913.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("searchKey"), temp_23.getter_mDictTypeName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 212))  COMMA_SOURCE_FILE ("type-dict.galgas", 212)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 213)), var_removeMethodFormalArgumentList_7060, temp_24.getter_mDictTypeName (HERE).getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 217)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 211)) ;
  }
  const GALGAS_dictDeclarationAST temp_25 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_9372 (temp_25.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_9372.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_9396 = GALGAS_lstring::constructor_new (enumerator_9372.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 222)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 222)), enumerator_9372.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 222))  COMMA_SOURCE_FILE ("type-dict.galgas", 222)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_9583 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9372.current_mPropertyTypeName (HERE), var_attributeTypeIndex_9583 COMMA_SOURCE_FILE ("type-dict.galgas", 223)) ;
    }
    {
    GALGAS_functionSignature temp_26 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 227)) ;
    temp_26.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 227)), var_keyTypeIndex_5257, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 227)) ;
    var_getterMap_5844.setter_insertOrReplace (var_accessorName_9396, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 226)), temp_26, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 228)), GALGAS_bool (true), var_attributeTypeIndex_9583, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 231)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 224)) ;
    }
    enumerator_9372.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_27 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_9975 (temp_27.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_9975.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_9999 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9975.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 238)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 238)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 238)), enumerator_9975.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 239))  COMMA_SOURCE_FILE ("type-dict.galgas", 237)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_10289 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9975.current_mPropertyTypeName (HERE), var_attributeTypeIndex_10289 COMMA_SOURCE_FILE ("type-dict.galgas", 241)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_10330 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 246)) ;
    var_accessorFormalArgumentList_10330.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 247)), var_attributeTypeIndex_10289, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 247)), enumerator_9975.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 247)) ;
    var_accessorFormalArgumentList_10330.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 248)), var_keyTypeIndex_5257, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 248)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 248)) ;
    {
    var_setterMap_5869.setter_insertOrReplace (var_accessorName_9999, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 251)), var_accessorFormalArgumentList_10330, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 254)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 249)) ;
    }
    enumerator_9975.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_28 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_28.getter_mDictTypeName (HERE), var_getterMap_5844, var_setterMap_5869, var_instanceMethodMap_5913, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 259)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_elementTypeEntry_11289 ;
  {
  const GALGAS_dictDeclarationAST temp_29 = object ;
  const GALGAS_dictDeclarationAST temp_30 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_29.getter_mDictTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 272)), temp_30.getter_mDictTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 272)), var_elementTypeEntry_11289 COMMA_SOURCE_FILE ("type-dict.galgas", 270)) ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_11342 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 276)) ;
  {
  var_optionalMethodMap_11342.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 277)), var_optionalMethodSignature_7309, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 277)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_31 = object ;
  const GALGAS_dictDeclarationAST temp_32 = object ;
  const GALGAS_dictDeclarationAST temp_33 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_31.getter_mDictTypeName (HERE), temp_32.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-dict.galgas", 283)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-dict.galgas", 284)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 286)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 287)), var_typedPropertyList_6633, var_constructorMap_5753, var_getterMap_5844, var_setterMap_5869, var_instanceMethodMap_5913, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 293)), var_optionalMethodMap_11342, var_enumerationDescriptor_5315, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 296)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 296)) COMMA_SOURCE_FILE ("type-dict.galgas", 296)), var_argumentTypeListForAddAssignWithFieldExpressionList_6711, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 298)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 299)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 300)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 301)), GALGAS_bool (false), var_elementTypeEntry_11289, GALGAS_string ("emptyDict"), GALGAS_string ("dict-").add_operation (temp_33.getter_mDictTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 305)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-dict.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 279)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                               extensionMethod_dictDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictDeclarationAST_enterInSemanticContext (defineExtensionMethod_dictDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_12824 (inArgument_inString.getter_string (SOURCE_FILE ("type-dict.galgas", 315)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 315)), kENUMERATION_UP) ;
  while (enumerator_12824.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_12857 = enumerator_12824.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 316)) ;
    {
    GALGAS_string joker_12944 ; // Joker input parameter
    var_explodedArray_12857.setter_popFirst (joker_12944, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 317)) ;
    }
    cEnumerator_stringlist enumerator_12974 (var_explodedArray_12857, kENUMERATION_UP) ;
    while (enumerator_12974.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_12974.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 319)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_13031 = enumerator_12974.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 320)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_13031.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (inArgument_inString.getter_location (SOURCE_FILE ("type-dict.galgas", 322)), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 322)) ;
            }
          }
        }
      }
      enumerator_12974.gotoNextObject () ;
    }
    enumerator_12824.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'check_K_L_escapeCharacters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_13522 (inArgument_inString.getter_string (SOURCE_FILE ("type-dict.galgas", 332)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 332)), kENUMERATION_UP) ;
  while (enumerator_13522.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_13555 = enumerator_13522.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 333)) ;
    {
    GALGAS_string joker_13642 ; // Joker input parameter
    var_explodedArray_13555.setter_popFirst (joker_13642, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 334)) ;
    }
    cEnumerator_stringlist enumerator_13672 (var_explodedArray_13555, kENUMERATION_UP) ;
    while (enumerator_13672.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_13672.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 336)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_13729 = enumerator_13672.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 337)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_13729.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_13729.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 338)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (inArgument_inString.getter_location (SOURCE_FILE ("type-dict.galgas", 339)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 339)) ;
            }
          }
        }
      }
      enumerator_13672.gotoNextObject () ;
    }
    enumerator_13522.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForMapAndDict'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForMapAndDict (C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dict.galgas", 349)) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 350)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 351)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 352)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForMapAndDict ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForMapAndDict (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict) {
    gOnceFunctionResult_forbiddenKeysForMapAndDict = onceFunction_forbiddenKeysForMapAndDict (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForMapAndDict ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForMapAndDict (void) {
  gOnceFunctionResult_forbiddenKeysForMapAndDict.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForMapAndDict (NULL,
                                                                        releaseOnceFunctionResult_forbiddenKeysForMapAndDict) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForMapAndDict [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForMapAndDict (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForMapAndDict (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForMapAndDict ("forbiddenKeysForMapAndDict",
                                                                            functionWithGenericHeader_forbiddenKeysForMapAndDict,
                                                                            & kTypeDescriptor_GALGAS_stringset,
                                                                            0,
                                                                            functionArgs_forbiddenKeysForMapAndDict) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  const GALGAS_dictDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_14742 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mDictTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 366)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14742, var_nameForUsefulness_14742, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 367)) ;
  }
  const GALGAS_dictDeclarationAST temp_1 = object ;
  const GALGAS_dictDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_14906 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.getter_mDictTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 368)), temp_2.getter_mDictTypeName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 368))  COMMA_SOURCE_FILE ("type-dict.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 368)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14742, var_elementTypeNameForUsefulness_14906 COMMA_SOURCE_FILE ("type-dict.galgas", 369)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_15158 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 371)) ;
  GALGAS_propertyIndexMap var_attributeMap_15196 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 372)) ;
  const GALGAS_dictDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_15232 (temp_3.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_15232.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_15273 = function_typeNameForUsefulEntitiesGraph (enumerator_15232.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 374)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14742, var_propertyTypeNameForUsefulness_15273 COMMA_SOURCE_FILE ("type-dict.galgas", 375)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_15443 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_15232.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 376)) ;
    GALGAS_bool var_hasSetter_15522 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_15547 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_15574 = GALGAS_bool (false) ;
    var_typedAttributeList_15158.addAssign_operation (var_t_15443, enumerator_15232.current_mPropertyName (HERE), var_hasSetter_15522, var_hasGetter_15547, var_hasSelector_15574  COMMA_SOURCE_FILE ("type-dict.galgas", 380)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 386)).getter_hasKey (enumerator_15232.current_mPropertyName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-dict.galgas", 386)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_m_15780 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_15857 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 388)), kENUMERATION_UP) ;
        while (enumerator_15857.hasCurrentObject ()) {
          var_m_15780.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_15857.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 389)) ;
          enumerator_15857.gotoNextObject () ;
        }
        var_m_15780.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 391)) ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_15232.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 392)), var_m_15780, fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 392)) ;
      }
    }
    {
    var_attributeMap_15196.setter_insertKey (enumerator_15232.current_mPropertyName (HERE), var_t_15443, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 394)) ;
    }
    enumerator_15232.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_6 = object ;
  const GALGAS_dictDeclarationAST temp_7 = object ;
  const GALGAS_dictDeclarationAST temp_8 = object ;
  const GALGAS_dictDeclarationAST temp_9 = object ;
  const GALGAS_dictDeclarationAST temp_10 = object ;
  const GALGAS_dictDeclarationAST temp_11 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (temp_6.getter_mDictTypeName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 398)), GALGAS_dictTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_7.getter_mDictTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 400)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (temp_8.getter_mDictTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 401)), temp_9.getter_mDictTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 401)), temp_10.getter_mDictTypeName (HERE), var_typedAttributeList_15158, temp_11.getter_mKeyTypeName (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 399))  COMMA_SOURCE_FILE ("type-dict.galgas", 397)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                         extensionMethod_dictDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictDeclarationAST_semanticAnalysis (defineExtensionMethod_dictDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictTypeForGeneration * object = (const cPtr_dictTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_dictTypeForGeneration) ;
  const GALGAS_dictTypeForGeneration temp_0 = object ;
  const GALGAS_dictTypeForGeneration temp_1 = object ;
  const GALGAS_dictTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 426)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 427)), temp_2.getter_mTypedAttributeList (HERE) COMMA_SOURCE_FILE ("type-dict.galgas", 425))) ;
  const GALGAS_dictTypeForGeneration temp_3 = object ;
  const GALGAS_dictTypeForGeneration temp_4 = object ;
  const GALGAS_dictTypeForGeneration temp_5 = object ;
  const GALGAS_dictTypeForGeneration temp_6 = object ;
  const GALGAS_dictTypeForGeneration temp_7 = object ;
  const GALGAS_dictTypeForGeneration temp_8 = object ;
  const GALGAS_dictTypeForGeneration temp_9 = object ;
  const GALGAS_dictTypeForGeneration temp_10 = object ;
  const GALGAS_dictTypeForGeneration temp_11 = object ;
  const GALGAS_dictTypeForGeneration temp_12 = object ;
  const GALGAS_dictTypeForGeneration temp_13 = object ;
  const GALGAS_dictTypeForGeneration temp_14 = object ;
  const GALGAS_dictTypeForGeneration temp_15 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 431)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 432)), temp_5.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 433)), temp_6.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 434)), temp_7.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 435)), temp_8.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 436)), temp_9.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 437)), temp_10.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 438)), temp_11.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 439)), temp_12.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 440)), temp_13.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 441)), temp_14.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 442)), temp_15.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 443)) COMMA_SOURCE_FILE ("type-dict.galgas", 430))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 430)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_dictTypeForGeneration.mSlotID,
                                              extensionMethod_dictTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_dictTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictTypeForGeneration * object = (const cPtr_dictTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_dictTypeForGeneration) ;
  const GALGAS_dictTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mElementTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 453)) ;
  const GALGAS_dictTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 454)) ;
  const GALGAS_dictTypeForGeneration temp_2 = object ;
  const GALGAS_dictTypeForGeneration temp_3 = object ;
  const GALGAS_dictTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 456)), temp_3.getter_mTypedAttributeList (HERE), temp_4.getter_mKeyTypeName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 458)) COMMA_SOURCE_FILE ("type-dict.galgas", 455))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_dictTypeForGeneration.mSlotID,
                                                     extensionMethod_dictTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_dictTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@mapDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_mapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  const GALGAS_mapDeclarationAST temp_0 = object ;
  result_outString = GALGAS_string ("map @").add_operation (temp_0.getter_mMapTypeName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 49)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_mapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                          extensionGetter_mapDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_mapDeclarationAST_keyRepresentation (defineExtensionGetter_mapDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_6651 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 186)) ;
  var_structAttributeList_6651.addAssign_operation (GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 188)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 189)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 191))  COMMA_SOURCE_FILE ("type-map.galgas", 187)) ;
  const GALGAS_mapDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_6805 (temp_0.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_6805.hasCurrentObject ()) {
    var_structAttributeList_6651.addAssign_operation (enumerator_6805.current_mPropertyTypeName (HERE), enumerator_6805.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 197))  COMMA_SOURCE_FILE ("type-map.galgas", 193)) ;
    enumerator_6805.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_1 = object ;
  const GALGAS_mapDeclarationAST temp_2 = object ;
  const GALGAS_mapDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.getter_mIsPredefined (HERE), GALGAS_lstring::constructor_new (temp_2.getter_mMapTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 201)), temp_3.getter_mMapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 201)), var_structAttributeList_6651, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 199))  COMMA_SOURCE_FILE ("type-map.galgas", 199)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                             extensionMethod_mapDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapDeclarationAST_addAssociatedElement (defineExtensionMethod_mapDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  const GALGAS_mapDeclarationAST temp_0 = object ;
  const GALGAS_mapDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_7969 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mMapTypeName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 217)), temp_1.getter_mMapTypeName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 217))  COMMA_SOURCE_FILE ("type-map.galgas", 217)) ;
  {
  const GALGAS_mapDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7969, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 218)) ;
  }
  const GALGAS_mapDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_8127 (temp_3.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_8127.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_8127.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 220)), enumerator_8127.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 220))  COMMA_SOURCE_FILE ("type-map.galgas", 220)) COMMA_SOURCE_FILE ("type-map.galgas", 220)) ;
    }
    enumerator_8127.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                                extensionMethod_mapDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_mapDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                      const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                      const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_9100 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_9100 COMMA_SOURCE_FILE ("type-map.galgas", 234)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_locationTypeEntry_9235 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("location"), var_locationTypeEntry_9235 COMMA_SOURCE_FILE ("type-map.galgas", 236)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeIndex_9367 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_9367 COMMA_SOURCE_FILE ("type-map.galgas", 238)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 240)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_9367, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 240)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_9448 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_9531 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_9564 = GALGAS_bool (true) ;
  const GALGAS_mapDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_9604 (temp_1.getter_mAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_9604.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_9604.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_9531.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_9604.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 247)), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_9531 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_9604.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_activateSuggestion_9564.operator_not (SOURCE_FILE ("type-map.galgas", 251)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_9604.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 252)), GALGAS_string ("duplicated attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 252)) ;
            }
          }
          var_activateSuggestion_9564 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_9604.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 256)), GALGAS_string ("unknown attribute"), fixItArray8  COMMA_SOURCE_FILE ("type-map.galgas", 256)) ;
      }
    }
    enumerator_9604.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_10043 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 260)) ;
  GALGAS_getterMap var_getterMap_10134 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_10134, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 261)) ;
  }
  GALGAS_setterMap var_setterMap_10158 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 262)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_10202 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 263)) ;
  {
  const GALGAS_mapDeclarationAST temp_9 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_10043, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_9.getter_mMapTypeName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 269)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 265)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_10 = object ;
  const GALGAS_mapDeclarationAST temp_11 = object ;
  routine_enterConstructorWithArgument (var_constructorMap_10043, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("mapWithMapToOverride"), temp_10.getter_mMapTypeName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 276)), GALGAS_string ("inMap"), temp_11.getter_mMapTypeName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 278)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 272)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10134, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 282)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments (var_getterMap_10134, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 289)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10134, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 300)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10134, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 307)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_10134, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 314)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_10134, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 323)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_12 = object ;
  routine_enterBaseGetterWithoutArgument (var_getterMap_10134, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("overriddenMap"), temp_12.getter_mMapTypeName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 336)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 332)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10134, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 339)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_12362 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 347)) ;
  GALGAS_typedPropertyList var_typedPropertyList_12417 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 348)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_12492 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 349)) ;
  GALGAS_string temp_13 ;
  const enumGalgasBool test_14 = var_usesSelectorsInInsertAndSearch_9531.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_12492.addAssign_operation (GALGAS_bool (true), temp_13.getter_nowhere (SOURCE_FILE ("type-map.galgas", 352)), var_stringTypeIndex_9100, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 350)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_12715 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 355)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_12715.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 356)), var_lstringTypeIndex_9367, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 356)) ;
  GALGAS_string temp_15 ;
  const enumGalgasBool test_16 = var_usesSelectorsInInsertAndSearch_9531.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_12362.addAssign_operation (temp_15.getter_nowhere (SOURCE_FILE ("type-map.galgas", 358)), var_lstringTypeIndex_9367, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 360)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 357)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_13075 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 362)) ;
  GALGAS_string temp_17 ;
  const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_9531.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_13075.addAssign_operation (temp_17.getter_nowhere (SOURCE_FILE ("type-map.galgas", 364)), var_lstringTypeIndex_9367, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 366)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 363)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_13340 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 368)) ;
  const GALGAS_mapDeclarationAST temp_19 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_13376 (temp_19.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_13376.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_13488 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13376.current_mPropertyTypeName (HERE), var_attributeTypeIndex_13488 COMMA_SOURCE_FILE ("type-map.galgas", 370)) ;
    }
    GALGAS_bool var_hasGetter_13507 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_13532 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_13559 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13605 (enumerator_13376.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13605.hasCurrentObject ()) {
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = GALGAS_bool (kIsEqual, enumerator_13605.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_20) {
          var_hasSelector_13559 = GALGAS_bool (true) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = var_hasSelector_13559 ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = var_usesSelectorsInInsertAndSearch_9531 ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticWarning (enumerator_13605.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 378)), GALGAS_string ("%selector useless, map has %selectors attributes"), fixItArray23  COMMA_SOURCE_FILE ("type-map.galgas", 378)) ;
            }
          }
        }
      }
      enumerator_13605.gotoNextObject () ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_12715.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 382)), var_attributeTypeIndex_13488, enumerator_13376.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 382)) ;
    var_typedPropertyList_12417.addAssign_operation (var_attributeTypeIndex_13488, enumerator_13376.current_mPropertyName (HERE), var_hasSetter_13532, var_hasGetter_13507, var_hasSelector_13559  COMMA_SOURCE_FILE ("type-map.galgas", 383)) ;
    var_typesToIncludeInHeaderCompilation_13340.addAssign_operation (var_attributeTypeIndex_13488  COMMA_SOURCE_FILE ("type-map.galgas", 384)) ;
    var_enumerationDescriptor_9448.addAssign_operation (var_attributeTypeIndex_13488, enumerator_13376.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 385))  COMMA_SOURCE_FILE ("type-map.galgas", 385)) ;
    GALGAS_bool test_24 = var_usesSelectorsInInsertAndSearch_9531 ;
    if (kBoolTrue != test_24.boolEnum ()) {
      test_24 = var_hasSelector_13559 ;
    }
    GALGAS_lstring temp_25 ;
    const enumGalgasBool test_26 = test_24.boolEnum () ;
    if (kBoolTrue == test_26) {
      temp_25 = enumerator_13376.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_26) {
      temp_25 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 387)) ;
    }
    var_insertMethodFormalArgumentList_12362.addAssign_operation (temp_25, var_attributeTypeIndex_13488, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 389)), enumerator_13376.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 386)) ;
    GALGAS_bool test_27 = var_usesSelectorsInInsertAndSearch_9531 ;
    if (kBoolTrue != test_27.boolEnum ()) {
      test_27 = var_hasSelector_13559 ;
    }
    GALGAS_lstring temp_28 ;
    const enumGalgasBool test_29 = test_27.boolEnum () ;
    if (kBoolTrue == test_29) {
      temp_28 = enumerator_13376.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_29) {
      temp_28 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 392)) ;
    }
    var_removeMethodFormalArgumentList_13075.addAssign_operation (temp_28, var_attributeTypeIndex_13488, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 394)), enumerator_13376.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 391)) ;
    GALGAS_bool test_30 = var_usesSelectorsInInsertAndSearch_9531 ;
    if (kBoolTrue != test_30.boolEnum ()) {
      test_30 = var_hasSelector_13559 ;
    }
    GALGAS_lstring temp_31 ;
    const enumGalgasBool test_32 = test_30.boolEnum () ;
    if (kBoolTrue == test_32) {
      temp_31 = enumerator_13376.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_32) {
      temp_31 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 398)) ;
    }
    var_optionalMethodSignature_12492.addAssign_operation (GALGAS_bool (false), temp_31, var_attributeTypeIndex_13488, enumerator_13376.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 396)) ;
    enumerator_13376.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_33 = object ;
  cEnumerator_insertMethodListAST enumerator_14885 (temp_33.getter_mInsertMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_14885.hasCurrentObject ()) {
    enumGalgasBool test_34 = kBoolTrue ;
    if (kBoolTrue == test_34) {
      test_34 = var_setterMap_10158.getter_hasKey (enumerator_14885.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 404)) COMMA_SOURCE_FILE ("type-map.galgas", 404)).boolEnum () ;
      if (kBoolTrue == test_34) {
        TC_Array <C_FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (enumerator_14885.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 405)), GALGAS_string ("the '").add_operation (enumerator_14885.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 405)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 405)), fixItArray35  COMMA_SOURCE_FILE ("type-map.galgas", 405)) ;
      }
    }
    if (kBoolFalse == test_34) {
      {
      var_setterMap_10158.setter_insertOrReplace (enumerator_14885.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 409)), var_insertMethodFormalArgumentList_12362, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 412)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 407)) ;
      }
    }
    enumerator_14885.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_36 = object ;
  cEnumerator_mapRemoveMethodListAST enumerator_15337 (temp_36.getter_mRemoveMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_15337.hasCurrentObject ()) {
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      test_37 = var_setterMap_10158.getter_hasKey (enumerator_15337.current_mMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 419)) COMMA_SOURCE_FILE ("type-map.galgas", 419)).boolEnum () ;
      if (kBoolTrue == test_37) {
        TC_Array <C_FixItDescription> fixItArray38 ;
        inCompiler->emitSemanticError (enumerator_15337.current_mMethodName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 420)), GALGAS_string ("the '").add_operation (enumerator_15337.current_mMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 420)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 420)), fixItArray38  COMMA_SOURCE_FILE ("type-map.galgas", 420)) ;
      }
    }
    if (kBoolFalse == test_37) {
      {
      var_setterMap_10158.setter_insertOrReplace (enumerator_15337.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 424)), var_removeMethodFormalArgumentList_13075, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 427)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 422)) ;
      }
    }
    enumerator_15337.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_39 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_15838 (temp_39.getter_mSearchMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_15838.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_searchMethodFormalArgumentList_15880 = var_removeMethodFormalArgumentList_13075 ;
    enumGalgasBool test_40 = kBoolTrue ;
    if (kBoolTrue == test_40) {
      test_40 = enumerator_15838.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_40) {
        GALGAS_lstring temp_41 ;
        const enumGalgasBool test_42 = var_usesSelectorsInInsertAndSearch_9531.boolEnum () ;
        if (kBoolTrue == test_42) {
          temp_41 = GALGAS_string ("keyLocation").getter_nowhere (SOURCE_FILE ("type-map.galgas", 437)) ;
        }else if (kBoolFalse == test_42) {
          temp_41 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 437)) ;
        }
        var_searchMethodFormalArgumentList_15880.addAssign_operation (temp_41, var_locationTypeEntry_9235, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 439)), GALGAS_string ("outKeyLocation")  COMMA_SOURCE_FILE ("type-map.galgas", 436)) ;
      }
    }
    {
    var_instanceMethodMap_10202.setter_insertKey (enumerator_15838.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 444)), var_searchMethodFormalArgumentList_15880, enumerator_15838.current_mSearchMethodName (HERE).getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 448)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 442)) ;
    }
    enumerator_15838.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_43 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_16481 (temp_43.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_16481.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_16505 = GALGAS_lstring::constructor_new (enumerator_16481.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 454)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 454)), enumerator_16481.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 454))  COMMA_SOURCE_FILE ("type-map.galgas", 454)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_16692 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_16481.current_mPropertyTypeName (HERE), var_attributeTypeIndex_16692 COMMA_SOURCE_FILE ("type-map.galgas", 455)) ;
    }
    {
    GALGAS_functionSignature temp_44 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 459)) ;
    temp_44.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 459)), var_stringTypeIndex_9100, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 459)) ;
    var_getterMap_10134.setter_insertOrReplace (var_accessorName_16505, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 458)), temp_44, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 460)), GALGAS_bool (true), var_attributeTypeIndex_16692, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 463)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 456)) ;
    }
    enumerator_16481.gotoNextObject () ;
  }
  enumGalgasBool test_45 = kBoolTrue ;
  if (kBoolTrue == test_45) {
    const GALGAS_mapDeclarationAST temp_46 = object ;
    test_45 = GALGAS_bool (kIsSupOrEqual, temp_46.getter_mInsertOrReplaceDeclarationListAST (HERE).getter_length (SOURCE_FILE ("type-map.galgas", 468)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_45) {
      GALGAS_location var_insertOrReplaceLocation_17128 ;
      const GALGAS_mapDeclarationAST temp_47 = object ;
      temp_47.getter_mInsertOrReplaceDeclarationListAST (HERE).method_first (var_insertOrReplaceLocation_17128, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 470)) ;
      {
      var_setterMap_10158.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_17128  COMMA_SOURCE_FILE ("type-map.galgas", 472)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 473)), var_insertMethodFormalArgumentList_12362, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 476)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 471)) ;
      }
    }
  }
  const GALGAS_mapDeclarationAST temp_48 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_17568 (temp_48.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_17568.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_17592 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_17568.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 483)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 483)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 483)), enumerator_17568.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 484))  COMMA_SOURCE_FILE ("type-map.galgas", 482)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_17882 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_17568.current_mPropertyTypeName (HERE), var_attributeTypeIndex_17882 COMMA_SOURCE_FILE ("type-map.galgas", 486)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_17945 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 491)) ;
    var_accessorFormalArgumentList_17945.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 492)), var_attributeTypeIndex_17882, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 492)), enumerator_17568.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 492)) ;
    var_accessorFormalArgumentList_17945.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 493)), var_stringTypeIndex_9100, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 493)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 493)) ;
    {
    var_setterMap_10158.setter_insertOrReplace (var_accessorName_17592, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 496)), var_accessorFormalArgumentList_17945, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 499)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 494)) ;
    }
    enumerator_17568.gotoNextObject () ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_18410 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 504)) ;
  {
  var_optionalMethodMap_18410.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 505)), var_optionalMethodSignature_12492, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 505)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_49 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_49.getter_mMapTypeName (HERE), var_getterMap_10134, var_setterMap_10158, var_instanceMethodMap_10202, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 507)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_elementTypeEntry_19034 ;
  {
  const GALGAS_mapDeclarationAST temp_50 = object ;
  const GALGAS_mapDeclarationAST temp_51 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_50.getter_mMapTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 520)), temp_51.getter_mMapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 520)), var_elementTypeEntry_19034 COMMA_SOURCE_FILE ("type-map.galgas", 518)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_52 = object ;
  const GALGAS_mapDeclarationAST temp_53 = object ;
  const GALGAS_mapDeclarationAST temp_54 = object ;
  const GALGAS_mapDeclarationAST temp_55 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_52.getter_mMapTypeName (HERE), temp_53.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-map.galgas", 528)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-map.galgas", 529)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 531)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 532)), var_typedPropertyList_12417, var_constructorMap_10043, var_getterMap_10134, var_setterMap_10158, var_instanceMethodMap_10202, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 538)), var_optionalMethodMap_18410, var_enumerationDescriptor_9448, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 541)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 541)) COMMA_SOURCE_FILE ("type-map.galgas", 541)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 541)) COMMA_SOURCE_FILE ("type-map.galgas", 541)), var_argumentTypeListForAddAssignWithFieldExpressionList_12715, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 543)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 544)), temp_54.getter_mSearchMethodList (HERE), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 546)), GALGAS_bool (false), var_elementTypeEntry_19034, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (temp_55.getter_mMapTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 550)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-map.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 524)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                               extensionMethod_mapDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapDeclarationAST_enterInSemanticContext (defineExtensionMethod_mapDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  const GALGAS_mapDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_21091 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mMapTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 580)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_21091, var_nameForUsefulness_21091, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 581)) ;
  }
  const GALGAS_mapDeclarationAST temp_1 = object ;
  const GALGAS_mapDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_21254 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.getter_mMapTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 582)), temp_2.getter_mMapTypeName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 582))  COMMA_SOURCE_FILE ("type-map.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 582)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_21091, var_elementTypeNameForUsefulness_21254 COMMA_SOURCE_FILE ("type-map.galgas", 583)) ;
  }
  GALGAS_bool var_usesSelectorsInInsertAndSearch_21492 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_21525 = GALGAS_bool (true) ;
  const GALGAS_mapDeclarationAST temp_3 = object ;
  cEnumerator_lstringlist enumerator_21565 (temp_3.getter_mAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_21565.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, enumerator_21565.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_usesSelectorsInInsertAndSearch_21492 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_21565.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_activateSuggestion_21525 = GALGAS_bool (false) ;
        }
      }
    }
    enumerator_21565.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_21800 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 595)) ;
  GALGAS_propertyIndexMap var_attributeMap_21838 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 596)) ;
  const GALGAS_mapDeclarationAST temp_6 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_21874 (temp_6.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_21874.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_21915 = function_typeNameForUsefulEntitiesGraph (enumerator_21874.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 598)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_21091, var_propertyTypeNameForUsefulness_21915 COMMA_SOURCE_FILE ("type-map.galgas", 599)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_22085 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_21874.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 600)) ;
    GALGAS_bool var_hasSetter_22164 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_22189 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_22216 = GALGAS_bool (false) ;
    var_typedAttributeList_21800.addAssign_operation (var_t_22085, enumerator_21874.current_mPropertyName (HERE), var_hasSetter_22164, var_hasGetter_22189, var_hasSelector_22216  COMMA_SOURCE_FILE ("type-map.galgas", 604)) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 610)).getter_hasKey (enumerator_21874.current_mPropertyName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-map.galgas", 610)).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_string var_m_22422 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_22499 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 612)), kENUMERATION_UP) ;
        while (enumerator_22499.hasCurrentObject ()) {
          var_m_22422.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_22499.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 613)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 613)) ;
          enumerator_22499.gotoNextObject () ;
        }
        var_m_22422.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 615)) ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_21874.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 616)), var_m_22422, fixItArray8  COMMA_SOURCE_FILE ("type-map.galgas", 616)) ;
      }
    }
    {
    var_attributeMap_21838.setter_insertKey (enumerator_21874.current_mPropertyName (HERE), var_t_22085, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 618)) ;
    }
    enumerator_21874.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_22726 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 621)) ;
  const GALGAS_mapDeclarationAST temp_9 = object ;
  cEnumerator_insertMethodListAST enumerator_22766 (temp_9.getter_mInsertMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_22766.hasCurrentObject ()) {
    {
    var_insertMethodMap_22726.setter_insertKey (enumerator_22766.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 623)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_22766.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 624)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_22766.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 625)) ;
    }
    enumerator_22766.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_22995 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 628)) ;
  const GALGAS_mapDeclarationAST temp_10 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_23035 (temp_10.getter_mSearchMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_23035.hasCurrentObject ()) {
    {
    var_searchMethodMap_22995.setter_insertKey (enumerator_23035.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 630)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_23035.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 631)) ;
    }
    enumerator_23035.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_11 = object ;
  cEnumerator_mapRemoveMethodListAST enumerator_23206 (temp_11.getter_mRemoveMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_23206.hasCurrentObject ()) {
    {
    var_insertMethodMap_22726.setter_insertKey (enumerator_23206.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 635)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_23206.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 636)) ;
    }
    enumerator_23206.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_12 = object ;
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_23428 (temp_12.getter_mInsertOrReplaceDeclarationListAST (HERE), kENUMERATION_UP) ;
  GALGAS_uint index_23382 ((uint32_t) 0) ;
  while (enumerator_23428.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsStrictSup, index_23382.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticWarning (enumerator_23428.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray14  COMMA_SOURCE_FILE ("type-map.galgas", 641)) ;
      }
    }
    enumerator_23428.gotoNextObject () ;
    index_23382.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 639)) ;
  }
  const GALGAS_mapDeclarationAST temp_15 = object ;
  GALGAS_bool var_hasInsertOrReplaceModifier_23611 = GALGAS_bool (kIsStrictSup, temp_15.getter_mInsertOrReplaceDeclarationListAST (HERE).getter_length (SOURCE_FILE ("type-map.galgas", 644)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = var_hasInsertOrReplaceModifier_23611.operator_and (var_insertMethodMap_22726.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 645)) COMMA_SOURCE_FILE ("type-map.galgas", 645)).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_location var_insertOrReplaceDeclarationLocation_23798 ;
      const GALGAS_mapDeclarationAST temp_17 = object ;
      temp_17.getter_mInsertOrReplaceDeclarationListAST (HERE).method_first (var_insertOrReplaceDeclarationLocation_23798, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 647)) ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_23798, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray18  COMMA_SOURCE_FILE ("type-map.galgas", 648)) ;
    }
  }
  const GALGAS_mapDeclarationAST temp_19 = object ;
  const GALGAS_mapDeclarationAST temp_20 = object ;
  const GALGAS_mapDeclarationAST temp_21 = object ;
  const GALGAS_mapDeclarationAST temp_22 = object ;
  const GALGAS_mapDeclarationAST temp_23 = object ;
  const GALGAS_mapDeclarationAST temp_24 = object ;
  const GALGAS_mapDeclarationAST temp_25 = object ;
  const GALGAS_mapDeclarationAST temp_26 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (temp_19.getter_mMapTypeName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 652)), GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_20.getter_mMapTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 654)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (temp_21.getter_mMapTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 655)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 655)), temp_22.getter_mMapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 655)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 655)), temp_23.getter_mMapTypeName (HERE), var_typedAttributeList_21800, temp_24.getter_mInsertMethodList (HERE), temp_25.getter_mSearchMethodList (HERE), temp_26.getter_mRemoveMethodList (HERE), var_hasInsertOrReplaceModifier_23611, var_activateSuggestion_21525  COMMA_SOURCE_FILE ("type-map.galgas", 653))  COMMA_SOURCE_FILE ("type-map.galgas", 651)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                         extensionMethod_mapDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapDeclarationAST_semanticAnalysis (defineExtensionMethod_mapDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  const GALGAS_mapTypeForGeneration temp_0 = object ;
  const GALGAS_mapTypeForGeneration temp_1 = object ;
  const GALGAS_mapTypeForGeneration temp_2 = object ;
  const GALGAS_mapTypeForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 688)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 689)), temp_2.getter_mTypedAttributeList (HERE), temp_3.getter_mSearchMethodList (HERE) COMMA_SOURCE_FILE ("type-map.galgas", 687))) ;
  const GALGAS_mapTypeForGeneration temp_4 = object ;
  const GALGAS_mapTypeForGeneration temp_5 = object ;
  const GALGAS_mapTypeForGeneration temp_6 = object ;
  const GALGAS_mapTypeForGeneration temp_7 = object ;
  const GALGAS_mapTypeForGeneration temp_8 = object ;
  const GALGAS_mapTypeForGeneration temp_9 = object ;
  const GALGAS_mapTypeForGeneration temp_10 = object ;
  const GALGAS_mapTypeForGeneration temp_11 = object ;
  const GALGAS_mapTypeForGeneration temp_12 = object ;
  const GALGAS_mapTypeForGeneration temp_13 = object ;
  const GALGAS_mapTypeForGeneration temp_14 = object ;
  const GALGAS_mapTypeForGeneration temp_15 = object ;
  const GALGAS_mapTypeForGeneration temp_16 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_4.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 694)), temp_5.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 695)), temp_6.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 696)), temp_7.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 697)), temp_8.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 698)), temp_9.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 699)), temp_10.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 700)), temp_11.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 701)), temp_12.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 702)), temp_13.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 703)), temp_14.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 704)), temp_15.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 705)), temp_16.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 706)) COMMA_SOURCE_FILE ("type-map.galgas", 693))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 693)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                              extensionMethod_mapTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  const GALGAS_mapTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_26837 (temp_0.getter_mTypedAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_26837.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_26837.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 717)) ;
    enumerator_26837.gotoNextObject () ;
  }
  const GALGAS_mapTypeForGeneration temp_1 = object ;
  const GALGAS_mapTypeForGeneration temp_2 = object ;
  const GALGAS_mapTypeForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, temp_1.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 721)), temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 722)), temp_3.getter_mTypedAttributeList (HERE) COMMA_SOURCE_FILE ("type-map.galgas", 720))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                              extensionMethod_mapTypeForGeneration_appendDeclaration_32_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_mapTypeForGeneration_appendDeclaration_32_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  const GALGAS_mapTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mElementTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 733)) ;
  const GALGAS_mapTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 734)) ;
  const GALGAS_mapTypeForGeneration temp_2 = object ;
  const GALGAS_mapTypeForGeneration temp_3 = object ;
  const GALGAS_mapTypeForGeneration temp_4 = object ;
  const GALGAS_mapTypeForGeneration temp_5 = object ;
  const GALGAS_mapTypeForGeneration temp_6 = object ;
  const GALGAS_mapTypeForGeneration temp_7 = object ;
  const GALGAS_mapTypeForGeneration temp_8 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 736)), temp_3.getter_mTypedAttributeList (HERE), temp_4.getter_mInsertMethodList (HERE), temp_5.getter_mSearchMethodList (HERE), temp_6.getter_mRemoveMethodList (HERE), temp_7.getter_mHasInsertOrReplaceModifier (HERE), temp_8.getter_mActivateSuggestions (HERE) COMMA_SOURCE_FILE ("type-map.galgas", 735))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                                     extensionMethod_mapTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_mapTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapEntryDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapEntryDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                            GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                            GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                            GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                            GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapEntryDeclarationAST * object = (const cPtr_mapEntryDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryDeclarationAST) ;
  const GALGAS_mapEntryDeclarationAST temp_0 = object ;
  const GALGAS_mapEntryDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_1333 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mMapEntryTypeName (HERE).getter_string (SOURCE_FILE ("type-map-entry.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 20)), temp_1.getter_mMapEntryTypeName (HERE).getter_location (SOURCE_FILE ("type-map-entry.galgas", 20))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 20)) ;
  {
  const GALGAS_mapEntryDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1333, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 21)) ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_3 = object ;
  const GALGAS_mapEntryDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1333, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.getter_mAssociatedMapTypeName (HERE).getter_string (SOURCE_FILE ("type-map-entry.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 23)), temp_4.getter_mAssociatedMapTypeName (HERE).getter_location (SOURCE_FILE ("type-map-entry.galgas", 24))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 23)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 22)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapEntryDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapEntryDeclarationAST.mSlotID,
                                                extensionMethod_mapEntryDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapEntryDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_mapEntryDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapEntryDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapEntryDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapEntryDeclarationAST * object = (const cPtr_mapEntryDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum_2503 ;
  GALGAS_typedPropertyList var_mapTypedAttributeList_2561 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_2620 ;
  const GALGAS_mapEntryDeclarationAST temp_0 = object ;
  GALGAS_bool joker_2465_3 ; // Joker input parameter
  GALGAS_bool joker_2465_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_2465_1 ; // Joker input parameter
  GALGAS_bool joker_2509_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_2509_2 ; // Joker input parameter
  GALGAS_propertyMap joker_2509_1 ; // Joker input parameter
  GALGAS_constructorMap joker_2567_11 ; // Joker input parameter
  GALGAS_getterMap joker_2567_10 ; // Joker input parameter
  GALGAS_setterMap joker_2567_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_2567_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_2567_7 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_2567_6 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_2567_5 ; // Joker input parameter
  GALGAS_operators joker_2567_4 ; // Joker input parameter
  GALGAS_functionSignature joker_2567_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_2567_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_2567_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2626_6 ; // Joker input parameter
  GALGAS_bool joker_2626_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_2626_4 ; // Joker input parameter
  GALGAS_string joker_2626_3 ; // Joker input parameter
  GALGAS_string joker_2626_2 ; // Joker input parameter
  GALGAS_headerKind joker_2626_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (temp_0.getter_mAssociatedMapTypeName (HERE), joker_2465_3, joker_2465_2, joker_2465_1, var_typeKindEnum_2503, joker_2509_3, joker_2509_2, joker_2509_1, var_mapTypedAttributeList_2561, joker_2567_11, joker_2567_10, joker_2567_9, joker_2567_8, joker_2567_7, joker_2567_6, joker_2567_5, joker_2567_4, joker_2567_3, joker_2567_2, joker_2567_1, var_searchMethodList_2620, joker_2626_6, joker_2626_5, joker_2626_4, joker_2626_3, joker_2626_2, joker_2626_1, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 39)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_2503.objectCompare (GALGAS_typeKindEnum::constructor_sharedMapType (SOURCE_FILE ("type-map-entry.galgas", 49)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_mapEntryDeclarationAST temp_2 = object ;
      const GALGAS_mapEntryDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.getter_mAssociatedMapTypeName (HERE).getter_location (SOURCE_FILE ("type-map-entry.galgas", 50)), GALGAS_string ("the @").add_operation (temp_3.getter_mAssociatedMapTypeName (HERE).getter_string (SOURCE_FILE ("type-map-entry.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 50)).add_operation (GALGAS_string (" should be an unique map type"), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 50)), fixItArray4  COMMA_SOURCE_FILE ("type-map-entry.galgas", 50)) ;
      var_mapTypedAttributeList_2561 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 51)) ;
    }
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_2864 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 54)) ;
  GALGAS_constructorMap var_constructorMap_2921 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 55)) ;
  GALGAS_getterMap var_getterMap_3012 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_3012, inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 56)) ;
  }
  GALGAS_setterMap var_setterMap_3037 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 57)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_3081 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 58)) ;
  GALGAS_classMethodMap var_classMethodMap_3118 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 59)) ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedMapTypeIndex_3275 ;
  {
  const GALGAS_mapEntryDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.getter_mAssociatedMapTypeName (HERE), var_associatedMapTypeIndex_3275 COMMA_SOURCE_FILE ("type-map-entry.galgas", 61)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_3404 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_3404 COMMA_SOURCE_FILE ("type-map-entry.galgas", 63)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeIndex_3536 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_3536 COMMA_SOURCE_FILE ("type-map-entry.galgas", 65)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_mapEntryTypeIndex_3674 ;
  {
  const GALGAS_mapEntryDeclarationAST temp_6 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_6.getter_mMapEntryTypeName (HERE), var_mapEntryTypeIndex_3674 COMMA_SOURCE_FILE ("type-map-entry.galgas", 67)) ;
  }
  GALGAS_formalParameterSignature var_argList_3761 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 69)) ;
  var_argList_3761.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 70)), var_associatedMapTypeIndex_3275, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-entry.galgas", 70)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 70)) ;
  var_argList_3761.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 71)), var_lstringTypeIndex_3536, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-entry.galgas", 71)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 71)) ;
  var_argList_3761.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 72)), var_mapEntryTypeIndex_3674, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-entry.galgas", 72)), GALGAS_string ("outEntry")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 72)) ;
  {
  var_classMethodMap_3118.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeEntry"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 74))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 74)), var_argList_3761, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 73)) ;
  }
  {
  var_classMethodMap_3118.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeOptionalEntry"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 79))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 79)), var_argList_3761, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 78)) ;
  }
  var_argList_3761 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 84)) ;
  var_argList_3761.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 85)), var_associatedMapTypeIndex_3275, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-entry.galgas", 85)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 85)) ;
  var_argList_3761.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 86)), var_stringTypeIndex_3404, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-entry.galgas", 86)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 86)) ;
  var_argList_3761.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 87)), var_mapEntryTypeIndex_3674, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-entry.galgas", 87)), GALGAS_string ("outEntry")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 87)) ;
  {
  var_classMethodMap_3118.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeEntryFromString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 89))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 89)), var_argList_3761, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 88)) ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_7 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_2921, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("null"), temp_7.getter_mMapEntryTypeName (HERE).getter_string (SOURCE_FILE ("type-map-entry.galgas", 98)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 94)) ;
  }
  GALGAS_functionSignature var_constructorAttributeTypeList_5053 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 102)) ;
  var_constructorAttributeTypeList_5053.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 103)), var_associatedMapTypeIndex_3275, GALGAS_string ("inMap")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 103)) ;
  var_constructorAttributeTypeList_5053.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 104)), var_lstringTypeIndex_3536, GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 104)) ;
  cEnumerator_mapSearchMethodListAST enumerator_5262 (var_searchMethodList_2620, kENUMERATION_UP) ;
  while (enumerator_5262.hasCurrentObject ()) {
    {
    var_constructorMap_2921.setter_insertKey (enumerator_5262.current_mSearchMethodName (HERE), var_constructorAttributeTypeList_5053, GALGAS_bool (true), var_mapEntryTypeIndex_3674, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 106)) ;
    }
    enumerator_5262.gotoNextObject () ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_3012, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isSolved"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 114)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_3012, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 121)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_3012, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isRegular"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 128)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_3012, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkey"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 135)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_3012, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("key"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 142)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_3012, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 149)) ;
  }
  GALGAS_getterMap var_inheritedGetterMap_6598 = var_getterMap_3012 ;
  cEnumerator_typedPropertyList enumerator_6644 (var_mapTypedAttributeList_2561, kENUMERATION_UP) ;
  while (enumerator_6644.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_inheritedGetterMap_6598.getter_hasKey (enumerator_6644.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map-entry.galgas", 159)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 159)).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_string var_s_6727 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_6776 (var_inheritedGetterMap_6598.getter_keySet (SOURCE_FILE ("type-map-entry.galgas", 161)), kENUMERATION_UP) ;
        while (enumerator_6776.hasCurrentObject ()) {
          var_s_6727.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_6776.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 162)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 162)) ;
          if (enumerator_6776.hasNextObject ()) {
            var_s_6727.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 163)) ;
          }
          enumerator_6776.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_6644.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map-entry.galgas", 165)), GALGAS_string ("the map has a associated map entry, which has predefined getters: ").add_operation (var_s_6727, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 165)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 165)), fixItArray9  COMMA_SOURCE_FILE ("type-map-entry.galgas", 165)) ;
      }
    }
    if (kBoolFalse == test_8) {
      {
      var_getterMap_3012.setter_insertKey (enumerator_6644.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map-entry.galgas", 170)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 171)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 172)), GALGAS_bool (true), enumerator_6644.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map-entry.galgas", 175)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 168)) ;
      }
    }
    enumerator_6644.gotoNextObject () ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_10 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_10.getter_mMapEntryTypeName (HERE), var_getterMap_3012, var_setterMap_3037, var_instanceMethodMap_3081, inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 181)) ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_11 = object ;
  const GALGAS_mapEntryDeclarationAST temp_12 = object ;
  const GALGAS_mapEntryDeclarationAST temp_13 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_11.getter_mMapEntryTypeName (HERE), temp_12.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-map-entry.galgas", 196)), GALGAS_typeKindEnum::constructor_sharedMapEntryType (SOURCE_FILE ("type-map-entry.galgas", 197)), GALGAS_bool (false), var_mapTypedAttributeList_2561, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 200)), var_mapTypedAttributeList_2561, var_constructorMap_2921, var_getterMap_3012, var_setterMap_3037, var_instanceMethodMap_3081, var_classMethodMap_3118, var_optionalMethodMap_2864, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 208)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map-entry.galgas", 209)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 210)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 211)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 212)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 213)), var_searchMethodList_2620, GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-map-entry.galgas", 216)), GALGAS_string ("null"), GALGAS_string ("mapentry-").add_operation (temp_13.getter_mMapEntryTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-map-entry.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 218)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-map-entry.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 192)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapEntryDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapEntryDeclarationAST.mSlotID,
                                               extensionMethod_mapEntryDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapEntryDeclarationAST_enterInSemanticContext (defineExtensionMethod_mapEntryDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapEntryDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapEntryDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapEntryDeclarationAST * object = (const cPtr_mapEntryDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryDeclarationAST) ;
  const GALGAS_mapEntryDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_9182 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mMapEntryTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 236)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9182, var_nameForUsefulness_9182, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 237)) ;
  }
  GALGAS_typedPropertyList var_listTypeAttributeList_9488 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_9547 ;
  const GALGAS_mapEntryDeclarationAST temp_1 = object ;
  GALGAS_bool joker_9436_7 ; // Joker input parameter
  GALGAS_bool joker_9436_6 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_9436_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_9436_4 ; // Joker input parameter
  GALGAS_bool joker_9436_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9436_2 ; // Joker input parameter
  GALGAS_propertyMap joker_9436_1 ; // Joker input parameter
  GALGAS_constructorMap joker_9494_11 ; // Joker input parameter
  GALGAS_getterMap joker_9494_10 ; // Joker input parameter
  GALGAS_setterMap joker_9494_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9494_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_9494_7 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_9494_6 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9494_5 ; // Joker input parameter
  GALGAS_operators joker_9494_4 ; // Joker input parameter
  GALGAS_functionSignature joker_9494_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9494_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_9494_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9553_6 ; // Joker input parameter
  GALGAS_bool joker_9553_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_9553_4 ; // Joker input parameter
  GALGAS_string joker_9553_3 ; // Joker input parameter
  GALGAS_string joker_9553_2 ; // Joker input parameter
  GALGAS_headerKind joker_9553_1 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mTypeMap (HERE).method_searchKey (temp_1.getter_mAssociatedMapTypeName (HERE), joker_9436_7, joker_9436_6, joker_9436_5, joker_9436_4, joker_9436_3, joker_9436_2, joker_9436_1, var_listTypeAttributeList_9488, joker_9494_11, joker_9494_10, joker_9494_9, joker_9494_8, joker_9494_7, joker_9494_6, joker_9494_5, joker_9494_4, joker_9494_3, joker_9494_2, joker_9494_1, var_searchMethodList_9547, joker_9553_6, joker_9553_5, joker_9553_4, joker_9553_3, joker_9553_2, joker_9553_1, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 239)) ;
  const GALGAS_mapEntryDeclarationAST temp_2 = object ;
  const GALGAS_mapEntryDeclarationAST temp_3 = object ;
  const GALGAS_mapEntryDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map entry ").add_operation (temp_2.getter_mMapEntryTypeName (HERE).getter_string (SOURCE_FILE ("type-map-entry.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 249)), GALGAS_mapEntryTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_3.getter_mMapEntryTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 251)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_4.getter_mAssociatedMapTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 252)), var_listTypeAttributeList_9488, var_searchMethodList_9547  COMMA_SOURCE_FILE ("type-map-entry.galgas", 250))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 248)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapEntryDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapEntryDeclarationAST.mSlotID,
                                         extensionMethod_mapEntryDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapEntryDeclarationAST_semanticAnalysis (defineExtensionMethod_mapEntryDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'mapEntryGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_mapEntryGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_mapEntryGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_mapEntryGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_mapEntryGenerationTemplate_0,
  0,
  gWrapperAllDirectories_mapEntryGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'mapEntryGenerationTemplate mapEntryTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_mapEntryGenerationTemplate_mapEntryTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                     const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_mapentry.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" map entry"), inCompiler COMMA_SOURCE_FILE ("GALGAS_mapentry.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_sharedMapEntry {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'mapEntryGenerationTemplate mapEntryTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_mapEntryGenerationTemplate_mapEntryTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                                 const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                 const GALGAS_string & in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER,
                                                                                                 const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                 const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_sharedMapEntry () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_null (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNullEntry (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeOptionalEntry (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & ioMap,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstring inKey,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & outEntry\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outEntry.internalMakeOptionalEntry (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeEntry (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & ioMap,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstring inKey,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & outEntry\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outEntry.internalMakeEntry (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeEntryFromString (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & ioMap,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_string inKey,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & outEntry\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outEntry.internalMakeEntryFromString (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_2102_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2102 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2102.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_2102.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 44)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_2102.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 44)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "C_Compiler * inCompiler\n"
        "                                       " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  GALGAS_" ;
      result << enumerator_2102.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 46)).stringValue () ;
      result << " result ;\n"
        "  const cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) getAttributeListPointer (inCompiler, " ;
      result << enumerator_2102.current_mPropertyName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 47)).stringValue () ;
      result << " COMMA_THERE) ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mProperty_" ;
      result << enumerator_2102.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 50)).stringValue () ;
      result << ";\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_2102_IDX.increment () ;
      enumerator_2102.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3042_IDX (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_3042 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3042.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_3042.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 58)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "const GALGAS_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " & inMap,\n"
        "                                                " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_lstring & inKey,\n"
        "                                                " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                                                " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " result ;\n"
        "  result.internalMakeRegularEntryBySearchingKey (inMap, inKey, kSearchErrorMessage_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3042.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 63)).stringValue () ;
      result << ", inCompiler COMMA_THERE) ;\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_3042_IDX.increment () ;
      enumerator_3042.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapEntryTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapEntryTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapEntryTypeForGeneration * object = (const cPtr_mapEntryTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryTypeForGeneration) ;
  const GALGAS_mapEntryTypeForGeneration temp_0 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_1 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapEntryGenerationTemplate_mapEntryTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 293)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 294)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 292))) ;
  const GALGAS_mapEntryTypeForGeneration temp_2 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_3 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_4 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_5 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_6 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_7 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_8 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_9 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_10 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_11 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_12 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_13 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_14 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 297)), temp_3.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 298)), temp_4.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 299)), temp_5.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 300)), temp_6.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 301)), temp_7.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 302)), temp_8.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 303)), temp_9.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 304)), temp_10.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 305)), temp_11.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 306)), temp_12.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 307)), temp_13.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 308)), temp_14.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 309)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 296))), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 296)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapEntryTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapEntryTypeForGeneration.mSlotID,
                                              extensionMethod_mapEntryTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapEntryTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapEntryTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapEntryTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapEntryTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapEntryTypeForGeneration * object = (const cPtr_mapEntryTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryTypeForGeneration) ;
  const GALGAS_mapEntryTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 319)) ;
  const GALGAS_mapEntryTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mAssociatedMapTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 320)) ;
  const GALGAS_mapEntryTypeForGeneration temp_2 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_3 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_4 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_5 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_mapEntryGenerationTemplate_mapEntryTypeSpecificImplementation (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 322)), temp_3.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 323)), temp_4.getter_mAssociatedMapTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 324)), temp_5.getter_mAssociatedMapTypedAttributeList (HERE), temp_6.getter_mSearchMethodList (HERE) COMMA_SOURCE_FILE ("type-map-entry.galgas", 321))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapEntryTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapEntryTypeForGeneration.mSlotID,
                                                     extensionMethod_mapEntryTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapEntryTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_mapEntryTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sharedMapDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                             GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  const GALGAS_sharedMapDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_12270 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mMapTypeName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 322)), temp_1.getter_mMapTypeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 322))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 322)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_12270, temp_2, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 323)) ;
  }
  const GALGAS_sharedMapDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_12428 (temp_3.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_12428.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_12428.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 325)), enumerator_12428.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 325))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 325)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 325)) ;
    }
    enumerator_12428.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                                extensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sharedMapDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_sharedMapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  result_outString = GALGAS_string ("shared map @").add_operation (temp_0.getter_mMapTypeName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 332)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_sharedMapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                          extensionGetter_sharedMapDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_sharedMapDeclarationAST_keyRepresentation (defineExtensionGetter_sharedMapDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sharedMapDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                            const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                            const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_13559 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 345)) ;
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_13711 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_13711 COMMA_SOURCE_FILE ("type-shared-map.galgas", 347)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeIndex_13843 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_13843 COMMA_SOURCE_FILE ("type-shared-map.galgas", 349)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringlistTypeIndex_13987 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex_13987 COMMA_SOURCE_FILE ("type-shared-map.galgas", 351)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 355)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_13843, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 355)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_14223 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_14308 = GALGAS_bool (false) ;
  const GALGAS_sharedMapDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_14349 (temp_1.getter_mAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_14349.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_14349.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_14308.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_14349.current_mValue (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 361)), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-shared-map.galgas", 361)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_14308 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_14349.current_mValue (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 365)), GALGAS_string ("unknown attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-shared-map.galgas", 365)) ;
    }
    enumerator_14349.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_14625 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 369)) ;
  GALGAS_getterMap var_getterMap_14715 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_14715, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 370)) ;
  }
  GALGAS_setterMap var_setterMap_14740 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 371)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_14784 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 372)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_6 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_14625, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_6.getter_mMapTypeName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 378)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 374)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14715, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 382)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14715, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 389)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_14715, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 396)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_14715, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 405)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14715, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 414)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14715, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("unsolvedEntryCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 421)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14715, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("unsolvedEntryList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 428)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14715, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 435)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_17359 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 463)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_17423 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 464)) ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = var_usesSelectorsInInsertAndSearch_14308.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_17423.addAssign_operation (temp_7.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 466)), var_lstringTypeIndex_13843, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 468)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 465)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_17657 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 470)) ;
  GALGAS_string temp_9 ;
  const enumGalgasBool test_10 = var_usesSelectorsInInsertAndSearch_14308.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_17657.addAssign_operation (temp_9.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 472)), var_lstringTypeIndex_13843, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 474)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 471)) ;
  const GALGAS_sharedMapDeclarationAST temp_11 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_17863 (temp_11.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_17863.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_17975 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_17863.current_mPropertyTypeName (HERE), var_attributeTypeIndex_17975 COMMA_SOURCE_FILE ("type-shared-map.galgas", 477)) ;
    }
    GALGAS_bool var_hasGetter_17994 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_18019 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_18046 = GALGAS_bool (false) ;
    var_typedAttributeList_17359.addAssign_operation (var_attributeTypeIndex_17975, enumerator_17863.current_mPropertyName (HERE), var_hasSetter_18019, var_hasGetter_17994, var_hasSelector_18046  COMMA_SOURCE_FILE ("type-shared-map.galgas", 481)) ;
    var_enumerationDescriptor_14223.addAssign_operation (var_attributeTypeIndex_17975, enumerator_17863.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 482))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 482)) ;
    GALGAS_lstring temp_12 ;
    const enumGalgasBool test_13 = var_usesSelectorsInInsertAndSearch_14308.boolEnum () ;
    if (kBoolTrue == test_13) {
      temp_12 = enumerator_17863.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_13) {
      temp_12 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 484)) ;
    }
    var_insertMethodFormalArgumentList_17423.addAssign_operation (temp_12, var_attributeTypeIndex_17975, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 486)), enumerator_17863.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 483)) ;
    GALGAS_lstring temp_14 ;
    const enumGalgasBool test_15 = var_usesSelectorsInInsertAndSearch_14308.boolEnum () ;
    if (kBoolTrue == test_15) {
      temp_14 = enumerator_17863.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_15) {
      temp_14 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 489)) ;
    }
    var_removeMethodFormalArgumentList_17657.addAssign_operation (temp_14, var_attributeTypeIndex_17975, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 491)), enumerator_17863.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 488)) ;
    enumerator_17863.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_16 = object ;
  cEnumerator_insertMethodListAST enumerator_18705 (temp_16.getter_mInsertMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_18705.hasCurrentObject ()) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = var_setterMap_14740.getter_hasKey (enumerator_18705.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 496)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 496)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_18705.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 497)), GALGAS_string ("the '").add_operation (enumerator_18705.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 497)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 497)), fixItArray18  COMMA_SOURCE_FILE ("type-shared-map.galgas", 497)) ;
      }
    }
    if (kBoolFalse == test_17) {
      {
      var_setterMap_14740.setter_insertOrReplace (enumerator_18705.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 501)), var_insertMethodFormalArgumentList_17423, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 504)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 499)) ;
      }
    }
    enumerator_18705.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList_19194 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 510)) ;
  var_enterEdgeFormalArgumentList_19194.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 511)), var_lstringTypeIndex_13843, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 511)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 511)) ;
  var_enterEdgeFormalArgumentList_19194.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 512)), var_lstringTypeIndex_13843, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 512)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 512)) ;
  {
  var_setterMap_14740.setter_insertOrReplace (GALGAS_string ("enterEdge").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 514)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 515)), var_enterEdgeFormalArgumentList_19194, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 518)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 513)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList_19714 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 522)) ;
  var_topologicalSortFormalArgumentList_19714.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 523)), var_lstringlistTypeIndex_13987, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 523)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 523)) ;
  var_topologicalSortFormalArgumentList_19714.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 524)), var_lstringlistTypeIndex_13987, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 524)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 524)) ;
  {
  var_instanceMethodMap_14784.setter_insertKey (GALGAS_string ("topologicalSort").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 526)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 527)), var_topologicalSortFormalArgumentList_19714, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 529)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 531)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 525)) ;
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GALGAS_sharedMapDeclarationAST temp_20 = object ;
    test_19 = GALGAS_bool (kIsEqual, temp_20.getter_mMapStateList (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 535)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_sharedMapDeclarationAST temp_21 = object ;
      cEnumerator_mapSearchMethodListAST enumerator_20342 (temp_21.getter_mSearchMethodList (HERE), kENUMERATION_UP) ;
      while (enumerator_20342.hasCurrentObject ()) {
        {
        var_instanceMethodMap_14784.setter_insertKey (enumerator_20342.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 539)), var_removeMethodFormalArgumentList_17657, enumerator_20342.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 541)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 543)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 537)) ;
        }
        enumerator_20342.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_19) {
    const GALGAS_sharedMapDeclarationAST temp_22 = object ;
    cEnumerator_mapSearchMethodListAST enumerator_20663 (temp_22.getter_mSearchMethodList (HERE), kENUMERATION_UP) ;
    while (enumerator_20663.hasCurrentObject ()) {
      {
      var_setterMap_14740.setter_insertKey (enumerator_20663.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 551)), var_removeMethodFormalArgumentList_17657, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 554)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 549)) ;
      }
      enumerator_20663.gotoNextObject () ;
    }
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    const GALGAS_sharedMapDeclarationAST temp_24 = object ;
    test_23 = GALGAS_bool (kIsStrictSup, temp_24.getter_mMapStateList (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 560)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_unifiedTypeMap_2D_entry var_locationTypeIndex_21130 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex_21130 COMMA_SOURCE_FILE ("type-shared-map.galgas", 561)) ;
      }
      {
      var_setterMap_14740.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 563))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 563)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 564)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 565)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 567)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 562)) ;
      }
      {
      var_setterMap_14740.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 571))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 571)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 572)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 573)), var_locationTypeIndex_21130, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 573)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 573)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 575)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 570)) ;
      }
      {
      var_setterMap_14740.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 579))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 579)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 580)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 581)), var_locationTypeIndex_21130, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 581)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 581)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 583)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 578)) ;
      }
      {
      var_instanceMethodMap_14784.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 587))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 587)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 588)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 589)), var_locationTypeIndex_21130, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 589)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 589)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 590)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 592)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 586)) ;
      }
      const GALGAS_sharedMapDeclarationAST temp_25 = object ;
      cEnumerator_mapOverrideBlockListAST enumerator_22356 (temp_25.getter_mMapOverrideBlockListAST (HERE), kENUMERATION_UP) ;
      while (enumerator_22356.hasCurrentObject ()) {
        {
        var_setterMap_14740.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_22356.current_mOverrideBlockName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 597)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 597))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 597)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 598)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 599)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 601)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 596)) ;
        }
        enumerator_22356.gotoNextObject () ;
      }
    }
  }
  const GALGAS_sharedMapDeclarationAST temp_26 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_22723 (temp_26.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_22723.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_22747 = GALGAS_lstring::constructor_new (enumerator_22723.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 608)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 608)), enumerator_22723.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 608))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 608)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_22934 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_22723.current_mPropertyTypeName (HERE), var_attributeTypeIndex_22934 COMMA_SOURCE_FILE ("type-shared-map.galgas", 609)) ;
    }
    {
    GALGAS_functionSignature temp_27 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 613)) ;
    temp_27.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 613)), var_stringTypeIndex_13711, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 613)) ;
    var_getterMap_14715.setter_insertOrReplace (var_accessorName_22747, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 612)), temp_27, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 614)), GALGAS_bool (true), var_attributeTypeIndex_22934, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 617)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 610)) ;
    }
    enumerator_22723.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_28 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_23339 (temp_28.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_23339.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_23363 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_23339.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 623)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 623)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 623)), enumerator_23339.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 623))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 623)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_23595 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_23339.current_mPropertyTypeName (HERE), var_attributeTypeIndex_23595 COMMA_SOURCE_FILE ("type-shared-map.galgas", 624)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_23653 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 625)) ;
    var_accessorFormalArgumentList_23653.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 626)), var_attributeTypeIndex_23595, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 626)), enumerator_23339.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 626)) ;
    var_accessorFormalArgumentList_23653.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 627)), var_stringTypeIndex_13711, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 627)), enumerator_23339.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 627)) ;
    {
    var_setterMap_14740.setter_insertOrReplace (var_accessorName_23363, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 630)), var_accessorFormalArgumentList_23653, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 633)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 628)) ;
    }
    enumerator_23339.gotoNextObject () ;
  }
  {
  const GALGAS_sharedMapDeclarationAST temp_29 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_29.getter_mMapTypeName (HERE), var_getterMap_14715, var_setterMap_14740, var_instanceMethodMap_14784, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 638)) ;
  }
  {
  const GALGAS_sharedMapDeclarationAST temp_30 = object ;
  const GALGAS_sharedMapDeclarationAST temp_31 = object ;
  const GALGAS_sharedMapDeclarationAST temp_32 = object ;
  const GALGAS_sharedMapDeclarationAST temp_33 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_30.getter_mMapTypeName (HERE), temp_31.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 653)), GALGAS_typeKindEnum::constructor_sharedMapType (SOURCE_FILE ("type-shared-map.galgas", 654)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 656)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 657)), var_typedAttributeList_17359, var_constructorMap_14625, var_getterMap_14715, var_setterMap_14740, var_instanceMethodMap_14784, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 663)), var_optionalMethodMap_13559, var_enumerationDescriptor_14223, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-shared-map.galgas", 666)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-shared-map.galgas", 666)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 666)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 667)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 668)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 669)), temp_32.getter_mSearchMethodList (HERE), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 671)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 673)), GALGAS_string ("emptyMap"), GALGAS_string ("sharedmap-").add_operation (temp_33.getter_mMapTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-shared-map.galgas", 675)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 675)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-shared-map.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 649)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sharedMapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                               extensionMethod_sharedMapDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterInSemanticContext (defineExtensionMethod_sharedMapDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sharedMapDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sharedMapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_string constinArgument_inProductDirectory,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_28116 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mMapTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 758)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_28116, var_nameForUsefulness_28116, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 759)) ;
  }
  const GALGAS_sharedMapDeclarationAST temp_1 = object ;
  const GALGAS_sharedMapDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_28279 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.getter_mMapTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string ("-entry"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 760)), temp_2.getter_mMapTypeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 760))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 760)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_28116, var_elementTypeNameForUsefulness_28279 COMMA_SOURCE_FILE ("type-shared-map.galgas", 761)) ;
  }
  GALGAS_mapAutomatonMessageKind var_shadowBehaviour_28510 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 763)) ;
  GALGAS_string var_shadowMessage_28543 = GALGAS_string::makeEmptyString () ;
  const GALGAS_sharedMapDeclarationAST temp_3 = object ;
  cEnumerator_sharedMapAttributeListAST enumerator_28625 (temp_3.getter_mSharedMapAttributeListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_28625.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, enumerator_28625.current_mAttributeName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("shadow"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_28625.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 767)), GALGAS_string ("only %shadow attribute is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("type-shared-map.galgas", 767)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_shadowBehaviour_28510.objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 768)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_28625.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 769)), GALGAS_string ("duplicated attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-shared-map.galgas", 769)) ;
        }
      }
      if (kBoolFalse == test_6) {
        GALGAS_mapAutomatonMessageKind temp_8 ;
        const enumGalgasBool test_9 = enumerator_28625.current_mIsError (HERE).boolEnum () ;
        if (kBoolTrue == test_9) {
          temp_8 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 771)) ;
        }else if (kBoolFalse == test_9) {
          temp_8 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 771)) ;
        }
        var_shadowBehaviour_28510 = temp_8 ;
        {
        routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_28625.current_mMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 772)) ;
        }
        var_shadowMessage_28543 = enumerator_28625.current_mMessage (HERE).getter_string (HERE) ;
      }
    }
    enumerator_28625.gotoNextObject () ;
  }
  GALGAS_stringset var_initialStateSet_29089 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 777)) ;
  const GALGAS_sharedMapDeclarationAST temp_10 = object ;
  cEnumerator_insertMethodListAST enumerator_29129 (temp_10.getter_mInsertMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_29129.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      const GALGAS_sharedMapDeclarationAST temp_12 = object ;
      test_11 = GALGAS_bool (kIsStrictSup, temp_12.getter_mMapStateList (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 779)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_11) {
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          test_13 = GALGAS_bool (kIsEqual, enumerator_29129.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 780)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_29129.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 781)), GALGAS_string ("the '").add_operation (enumerator_29129.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 781)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 781)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 781)), fixItArray14  COMMA_SOURCE_FILE ("type-shared-map.galgas", 781)) ;
          }
        }
        if (kBoolFalse == test_13) {
          var_initialStateSet_29089.addAssign_operation (enumerator_29129.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 783))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 783)) ;
        }
      }
    }
    if (kBoolFalse == test_11) {
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_29129.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 785)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (enumerator_29129.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 786)), GALGAS_string ("the '").add_operation (enumerator_29129.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 786)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 786)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 786)), fixItArray16  COMMA_SOURCE_FILE ("type-shared-map.galgas", 786)) ;
        }
      }
    }
    enumerator_29129.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap_29670 = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 790)) ;
  const GALGAS_sharedMapDeclarationAST temp_17 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_29710 (temp_17.getter_mSearchMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_29710.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      const GALGAS_sharedMapDeclarationAST temp_19 = object ;
      test_18 = GALGAS_bool (kIsStrictSup, temp_19.getter_mMapStateList (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 792)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_18) {
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = GALGAS_bool (kIsEqual, enumerator_29710.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 793)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_29710.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 794)), GALGAS_string ("the '").add_operation (enumerator_29710.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 794)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 794)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 794)), fixItArray21  COMMA_SOURCE_FILE ("type-shared-map.galgas", 794)) ;
          }
        }
        if (kBoolFalse == test_20) {
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = var_mapAutomatonActionMap_29670.getter_hasKey (enumerator_29710.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 795)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 795)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 795)).boolEnum () ;
            if (kBoolTrue == test_22) {
              {
              var_mapAutomatonActionMap_29670.setter_insertKey (enumerator_29710.current_mActionName (HERE), var_mapAutomatonActionMap_29670.getter_count (SOURCE_FILE ("type-shared-map.galgas", 796)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 796)) ;
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_18) {
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        test_23 = GALGAS_bool (kIsNotEqual, enumerator_29710.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 798)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_23) {
          TC_Array <C_FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (enumerator_29710.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 799)), GALGAS_string ("the '").add_operation (enumerator_29710.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 799)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 799)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 799)), fixItArray24  COMMA_SOURCE_FILE ("type-shared-map.galgas", 799)) ;
        }
      }
    }
    enumerator_29710.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap_30326 = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 803)) ;
  const GALGAS_sharedMapDeclarationAST temp_25 = object ;
  cEnumerator_mapStateList enumerator_30362 (temp_25.getter_mMapStateList (HERE), kENUMERATION_UP) ;
  while (enumerator_30362.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap_30326.setter_insertKey (enumerator_30362.current_mStateName (HERE), var_mapAutomatonStateMap_30326.getter_count (SOURCE_FILE ("type-shared-map.galgas", 805)), enumerator_30362.current_mStateMessageKind (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 805)) ;
    }
    enumerator_30362.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_26 = object ;
  cEnumerator_mapStateList enumerator_30502 (temp_26.getter_mMapStateList (HERE), kENUMERATION_UP) ;
  while (enumerator_30502.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_30535 (enumerator_30502.current_mTransitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_30535.hasCurrentObject ()) {
      GALGAS_uint joker_30596_2 ; // Joker input parameter
      GALGAS_mapAutomatonMessageKind joker_30596_1 ; // Joker input parameter
      var_mapAutomatonStateMap_30326.method_searchKey (enumerator_30535.current_mTargetStateName (HERE), joker_30596_2, joker_30596_1, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 809)) ;
      enumerator_30535.gotoNextObject () ;
    }
    enumerator_30502.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions_30686 = var_mapAutomatonActionMap_29670.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 813)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList_30760 = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 814)) ;
  const GALGAS_sharedMapDeclarationAST temp_27 = object ;
  cEnumerator_mapStateList enumerator_30796 (temp_27.getter_mMapStateList (HERE), kENUMERATION_UP) ;
  while (enumerator_30796.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState_30837 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 816)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList_30905 = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 817)) ;
    cEnumerator_mapStateTransitionList enumerator_30940 (enumerator_30796.current_mTransitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_30940.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex_31018 ;
      var_mapAutomatonActionMap_29670.method_searchKey (enumerator_30940.current_mActionName (HERE), var_actionIndex_31018, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 819)) ;
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = var_actionsForCurrentState_30837.getter_hasKey (enumerator_30940.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 820)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 820)).boolEnum () ;
        if (kBoolTrue == test_28) {
          TC_Array <C_FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (enumerator_30940.current_mActionName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 821)), GALGAS_string ("the '").add_operation (enumerator_30940.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 821)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 821)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 821)), fixItArray29  COMMA_SOURCE_FILE ("type-shared-map.galgas", 821)) ;
        }
      }
      var_actionsForCurrentState_30837.addAssign_operation (enumerator_30940.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 823))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 823)) ;
      GALGAS_uint var_targetStateIndex_31329 ;
      GALGAS_mapAutomatonMessageKind joker_31331 ; // Joker input parameter
      var_mapAutomatonStateMap_30326.method_searchKey (enumerator_30940.current_mTargetStateName (HERE), var_targetStateIndex_31329, joker_31331, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 824)) ;
      var_mapStateTransitionSortedList_30905.addAssign_operation (var_actionIndex_31018, enumerator_30940.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 827)), var_targetStateIndex_31329, enumerator_30940.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 829)), enumerator_30940.current_mTransitionMessageKind (HERE), enumerator_30940.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 831))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 825)) ;
      enumerator_30940.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex_31630 ;
    GALGAS_mapAutomatonMessageKind joker_31632 ; // Joker input parameter
    var_mapAutomatonStateMap_30326.method_searchKey (enumerator_30796.current_mStateName (HERE), var_stateIndex_31630, joker_31632, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 833)) ;
    var_mapStateSortedList_30760.addAssign_operation (var_stateIndex_31630, enumerator_30796.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 836)), enumerator_30796.current_mStateMessageKind (HERE), enumerator_30796.current_mStateMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 838)), var_mapStateTransitionSortedList_30905  COMMA_SOURCE_FILE ("type-shared-map.galgas", 834)) ;
    GALGAS_stringset var_missingActions_31830 = var_allActions_30686.substract_operation (var_actionsForCurrentState_30837, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 840)) ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      test_30 = GALGAS_bool (kIsStrictSup, var_missingActions_31830.getter_count (SOURCE_FILE ("type-shared-map.galgas", 841)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_30) {
        GALGAS_string var_s_31923 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_31959 (var_missingActions_31830, kENUMERATION_UP) ;
        while (enumerator_31959.hasCurrentObject ()) {
          var_s_31923.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_31959.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 844)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 844)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 844)) ;
          if (enumerator_31959.hasNextObject ()) {
            var_s_31923.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 845)) ;
          }
          enumerator_31959.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_30796.current_mStateName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 847)), GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s_31923, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 847)), fixItArray31  COMMA_SOURCE_FILE ("type-shared-map.galgas", 847)) ;
      }
    }
    enumerator_30796.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates_32204 = var_initialStateSet_29089 ;
  GALGAS_bool var_progress_32239 = GALGAS_bool (true) ;
  const GALGAS_sharedMapDeclarationAST temp_32 = object ;
  if (temp_32.getter_mMapStateList (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 853)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 853)).isValid ()) {
    uint32_t variant_32253 = temp_32.getter_mMapStateList (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 853)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 853)).uintValue () ;
    bool loop_32253 = true ;
    while (loop_32253) {
      loop_32253 = var_progress_32239.isValid () ;
      if (loop_32253) {
        loop_32253 = var_progress_32239.boolValue () ;
      }
      if (loop_32253 && (0 == variant_32253)) {
        loop_32253 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 853)) ;
      }
      if (loop_32253) {
        variant_32253 -- ;
        var_progress_32239 = GALGAS_bool (false) ;
        const GALGAS_sharedMapDeclarationAST temp_33 = object ;
        cEnumerator_mapStateList enumerator_32359 (temp_33.getter_mMapStateList (HERE), kENUMERATION_UP) ;
        while (enumerator_32359.hasCurrentObject ()) {
          enumGalgasBool test_34 = kBoolTrue ;
          if (kBoolTrue == test_34) {
            test_34 = var_accessibleStates_32204.getter_hasKey (enumerator_32359.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 856)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 856)).boolEnum () ;
            if (kBoolTrue == test_34) {
              cEnumerator_mapStateTransitionList enumerator_32457 (enumerator_32359.current_mTransitionList (HERE), kENUMERATION_UP) ;
              while (enumerator_32457.hasCurrentObject ()) {
                enumGalgasBool test_35 = kBoolTrue ;
                if (kBoolTrue == test_35) {
                  test_35 = var_accessibleStates_32204.getter_hasKey (enumerator_32457.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 858)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 858)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 858)).boolEnum () ;
                  if (kBoolTrue == test_35) {
                    var_accessibleStates_32204.addAssign_operation (enumerator_32457.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 859))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 859)) ;
                    var_progress_32239 = GALGAS_bool (true) ;
                  }
                }
                enumerator_32457.gotoNextObject () ;
              }
            }
          }
          enumerator_32359.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates_32703 = var_mapAutomatonStateMap_30326.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 866)).substract_operation (var_accessibleStates_32204, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 866)) ;
  enumGalgasBool test_36 = kBoolTrue ;
  if (kBoolTrue == test_36) {
    test_36 = GALGAS_bool (kIsStrictSup, var_uselessStates_32703.getter_count (SOURCE_FILE ("type-shared-map.galgas", 867)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_36) {
      GALGAS_string var_s_32800 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_32833 (var_uselessStates_32703, kENUMERATION_UP) ;
      while (enumerator_32833.hasCurrentObject ()) {
        var_s_32800.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_32833.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 870)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 870)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 870)) ;
        if (enumerator_32833.hasNextObject ()) {
          var_s_32800.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 871)) ;
        }
        enumerator_32833.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray37 ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 873)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s_32800, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 873)), fixItArray37  COMMA_SOURCE_FILE ("type-shared-map.galgas", 873)) ;
    }
  }
  GALGAS_stringset var_neededAssociations_33103 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 877)) ;
  GALGAS_stringset var_accessibilityGraph_33140 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 878)) ;
  cEnumerator_mapAutomatonStateMap enumerator_33193 (var_mapAutomatonStateMap_30326, kENUMERATION_UP) ;
  while (enumerator_33193.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates_33227 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 880)) ;
    var_reachableStates_33227.addAssign_operation (enumerator_33193.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 881))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 881)) ;
    var_progress_32239 = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap_30326.getter_count (SOURCE_FILE ("type-shared-map.galgas", 883)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 883)).isValid ()) {
      uint32_t variant_33317 = var_mapAutomatonStateMap_30326.getter_count (SOURCE_FILE ("type-shared-map.galgas", 883)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 883)).uintValue () ;
      bool loop_33317 = true ;
      while (loop_33317) {
        loop_33317 = var_progress_32239.isValid () ;
        if (loop_33317) {
          loop_33317 = var_progress_32239.boolValue () ;
        }
        if (loop_33317 && (0 == variant_33317)) {
          loop_33317 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 883)) ;
        }
        if (loop_33317) {
          variant_33317 -- ;
          var_progress_32239 = GALGAS_bool (false) ;
          const GALGAS_sharedMapDeclarationAST temp_38 = object ;
          cEnumerator_mapStateList enumerator_33428 (temp_38.getter_mMapStateList (HERE), kENUMERATION_UP) ;
          while (enumerator_33428.hasCurrentObject ()) {
            enumGalgasBool test_39 = kBoolTrue ;
            if (kBoolTrue == test_39) {
              test_39 = var_reachableStates_33227.getter_hasKey (enumerator_33428.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 886)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 886)).boolEnum () ;
              if (kBoolTrue == test_39) {
                cEnumerator_mapStateTransitionList enumerator_33529 (enumerator_33428.current_mTransitionList (HERE), kENUMERATION_UP) ;
                while (enumerator_33529.hasCurrentObject ()) {
                  enumGalgasBool test_40 = kBoolTrue ;
                  if (kBoolTrue == test_40) {
                    test_40 = var_reachableStates_33227.getter_hasKey (enumerator_33529.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 888)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 888)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 888)).boolEnum () ;
                    if (kBoolTrue == test_40) {
                      var_reachableStates_33227.addAssign_operation (enumerator_33529.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 889))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)) ;
                      var_accessibilityGraph_33140.addAssign_operation (enumerator_33193.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 890)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 890)).add_operation (enumerator_33529.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 890)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 890))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 890)) ;
                      var_progress_32239 = GALGAS_bool (true) ;
                    }
                  }
                  enumerator_33529.gotoNextObject () ;
                }
              }
            }
            enumerator_33428.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_33891 (var_reachableStates_33227, kENUMERATION_UP) ;
    while (enumerator_33891.hasCurrentObject ()) {
      enumGalgasBool test_41 = kBoolTrue ;
      if (kBoolTrue == test_41) {
        test_41 = GALGAS_bool (kIsNotEqual, enumerator_33193.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 898)).objectCompare (enumerator_33891.current_key (HERE))).boolEnum () ;
        if (kBoolTrue == test_41) {
          var_neededAssociations_33103.addAssign_operation (enumerator_33193.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 899)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 899)).add_operation (enumerator_33891.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 899))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 899)) ;
        }
      }
      enumerator_33891.gotoNextObject () ;
    }
    enumerator_33193.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList_34086 = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 904)) ;
  const GALGAS_sharedMapDeclarationAST temp_42 = object ;
  cEnumerator_mapOverrideBlockListAST enumerator_34133 (temp_42.getter_mMapOverrideBlockListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_34133.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations_34171 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 906)) ;
    GALGAS_stringset var_neededCombinaisons_34210 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 907)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31__34301 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 908)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_34352 (enumerator_34133.current_mMapOverrideBlockDescriptor_31_AST (HERE), kENUMERATION_UP) ;
    while (enumerator_34352.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex_34430 ;
      GALGAS_mapAutomatonMessageKind joker_34432 ; // Joker input parameter
      var_mapAutomatonStateMap_30326.method_searchKey (enumerator_34352.current_mLeftState (HERE), var_startStateNameIndex_34430, joker_34432, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 910)) ;
      GALGAS_uint var_currentStateNameIndex_34512 ;
      GALGAS_mapAutomatonMessageKind joker_34514 ; // Joker input parameter
      var_mapAutomatonStateMap_30326.method_searchKey (enumerator_34352.current_mRightState (HERE), var_currentStateNameIndex_34512, joker_34514, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 911)) ;
      GALGAS_string var_association_34546 = enumerator_34352.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 912)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 912)).add_operation (enumerator_34352.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 912)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 912)) ;
      enumGalgasBool test_43 = kBoolTrue ;
      if (kBoolTrue == test_43) {
        test_43 = var_neededAssociations_33103.getter_hasKey (var_association_34546 COMMA_SOURCE_FILE ("type-shared-map.galgas", 913)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 913)).boolEnum () ;
        if (kBoolTrue == test_43) {
          TC_Array <C_FixItDescription> fixItArray44 ;
          inCompiler->emitSemanticWarning (enumerator_34352.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 914)), GALGAS_string ("the '").add_operation (var_association_34546, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 914)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 914)), fixItArray44  COMMA_SOURCE_FILE ("type-shared-map.galgas", 914)) ;
        }
      }
      enumGalgasBool test_45 = kBoolTrue ;
      if (kBoolTrue == test_45) {
        test_45 = var_handledAssociations_34171.getter_hasKey (var_association_34546 COMMA_SOURCE_FILE ("type-shared-map.galgas", 916)).boolEnum () ;
        if (kBoolTrue == test_45) {
          TC_Array <C_FixItDescription> fixItArray46 ;
          inCompiler->emitSemanticError (enumerator_34352.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 917)), GALGAS_string ("the '").add_operation (var_association_34546, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 918)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 918)), fixItArray46  COMMA_SOURCE_FILE ("type-shared-map.galgas", 917)) ;
        }
      }
      var_handledAssociations_34171.addAssign_operation (var_association_34546  COMMA_SOURCE_FILE ("type-shared-map.galgas", 920)) ;
      GALGAS_uint var_finalStateNameIndex_35028 ;
      GALGAS_mapAutomatonMessageKind joker_35030 ; // Joker input parameter
      var_mapAutomatonStateMap_30326.method_searchKey (enumerator_34352.current_mResultingState (HERE), var_finalStateNameIndex_35028, joker_35030, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 921)) ;
      enumGalgasBool test_47 = kBoolTrue ;
      if (kBoolTrue == test_47) {
        test_47 = GALGAS_bool (kIsNotEqual, enumerator_34352.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 922)).objectCompare (enumerator_34352.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 922)))).boolEnum () ;
        if (kBoolTrue == test_47) {
          var_neededCombinaisons_34210.addAssign_operation (enumerator_34352.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 923)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 923)).add_operation (enumerator_34352.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 923)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 923))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 923)) ;
          var_neededCombinaisons_34210.addAssign_operation (enumerator_34352.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 924)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 924)).add_operation (enumerator_34352.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 924)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 924))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 924)) ;
          enumGalgasBool test_48 = kBoolTrue ;
          if (kBoolTrue == test_48) {
            test_48 = var_accessibilityGraph_33140.getter_hasKey (enumerator_34352.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 925)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 925)).add_operation (enumerator_34352.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 925)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 925)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 925)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 925)).boolEnum () ;
            if (kBoolTrue == test_48) {
              TC_Array <C_FixItDescription> fixItArray49 ;
              inCompiler->emitSemanticError (enumerator_34352.current_mResultingState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 926)), GALGAS_string ("the '").add_operation (enumerator_34352.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 927)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 927)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 927)).add_operation (enumerator_34352.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 927)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 927)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 927)), fixItArray49  COMMA_SOURCE_FILE ("type-shared-map.galgas", 926)) ;
            }
          }
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_34352.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 930)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31__34301.addAssign_operation (var_startStateNameIndex_34430, enumerator_34352.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 933)), var_currentStateNameIndex_34512, enumerator_34352.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 935)), var_finalStateNameIndex_35028, enumerator_34352.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 937)), enumerator_34352.current_mMessageKind (HERE), enumerator_34352.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 939))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 931)) ;
      enumerator_34352.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations_35903 = var_neededAssociations_33103.substract_operation (var_handledAssociations_34171, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 941)) ;
    enumGalgasBool test_50 = kBoolTrue ;
    if (kBoolTrue == test_50) {
      test_50 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations_35903.getter_count (SOURCE_FILE ("type-shared-map.galgas", 942)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_50) {
        GALGAS_string var_s_36008 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_36051 (var_forgottenAssociations_35903, kENUMERATION_UP) ;
        while (enumerator_36051.hasCurrentObject ()) {
          var_s_36008.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_36051.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 945)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 945)) ;
          enumerator_36051.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray51 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 947)), var_forgottenAssociations_35903.getter_count (SOURCE_FILE ("type-shared-map.galgas", 947)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 947)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 947)).add_operation (var_s_36008, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 947)), fixItArray51  COMMA_SOURCE_FILE ("type-shared-map.galgas", 947)) ;
      }
    }
    GALGAS_stringset var_definedCombinaisons_36243 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 949)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32__36334 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 950)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_36385 (enumerator_34133.current_mMapOverrideBlockDescriptor_32_AST (HERE), kENUMERATION_UP) ;
    while (enumerator_36385.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex_36458 ;
      GALGAS_mapAutomatonMessageKind joker_36460 ; // Joker input parameter
      var_mapAutomatonStateMap_30326.method_searchKey (enumerator_36385.current_mLeftState (HERE), var_leftStateIndex_36458, joker_36460, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 952)) ;
      GALGAS_uint var_rightStateIndex_36534 ;
      GALGAS_mapAutomatonMessageKind joker_36536 ; // Joker input parameter
      var_mapAutomatonStateMap_30326.method_searchKey (enumerator_36385.current_mRightState (HERE), var_rightStateIndex_36534, joker_36536, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 953)) ;
      GALGAS_string var_combinaison_36568 = enumerator_36385.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 954)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 954)).add_operation (enumerator_36385.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 954)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 954)) ;
      enumGalgasBool test_52 = kBoolTrue ;
      if (kBoolTrue == test_52) {
        test_52 = var_neededCombinaisons_34210.getter_hasKey (var_combinaison_36568 COMMA_SOURCE_FILE ("type-shared-map.galgas", 955)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 955)).boolEnum () ;
        if (kBoolTrue == test_52) {
          TC_Array <C_FixItDescription> fixItArray53 ;
          inCompiler->emitSemanticError (enumerator_36385.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 956)), GALGAS_string ("the '").add_operation (enumerator_36385.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 957)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 957)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 957)).add_operation (enumerator_36385.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 957)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 957)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 957)), fixItArray53  COMMA_SOURCE_FILE ("type-shared-map.galgas", 956)) ;
        }
      }
      enumGalgasBool test_54 = kBoolTrue ;
      if (kBoolTrue == test_54) {
        test_54 = var_definedCombinaisons_36243.getter_hasKey (var_combinaison_36568 COMMA_SOURCE_FILE ("type-shared-map.galgas", 959)).boolEnum () ;
        if (kBoolTrue == test_54) {
          TC_Array <C_FixItDescription> fixItArray55 ;
          inCompiler->emitSemanticError (enumerator_36385.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 960)), GALGAS_string ("the '").add_operation (enumerator_36385.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 961)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 961)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 961)).add_operation (enumerator_36385.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 961)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 961)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 961)), fixItArray55  COMMA_SOURCE_FILE ("type-shared-map.galgas", 960)) ;
        }
      }
      var_definedCombinaisons_36243.addAssign_operation (var_combinaison_36568  COMMA_SOURCE_FILE ("type-shared-map.galgas", 963)) ;
      GALGAS_uint var_resultingStateNameIndex_37098 ;
      GALGAS_mapAutomatonMessageKind joker_37100 ; // Joker input parameter
      var_mapAutomatonStateMap_30326.method_searchKey (enumerator_36385.current_mResultingState (HERE), var_resultingStateNameIndex_37098, joker_37100, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 964)) ;
      enumGalgasBool test_56 = kBoolTrue ;
      if (kBoolTrue == test_56) {
        test_56 = GALGAS_bool (kIsNotEqual, enumerator_36385.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 965)).objectCompare (enumerator_36385.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 965)))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_36385.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 966)).objectCompare (enumerator_36385.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 966)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 965)).operator_and (var_accessibilityGraph_33140.getter_hasKey (enumerator_36385.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 967)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 967)).add_operation (enumerator_36385.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 967)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 967)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 967)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 967)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 966)).boolEnum () ;
        if (kBoolTrue == test_56) {
          TC_Array <C_FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (enumerator_36385.current_mResultingState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 968)), GALGAS_string ("the '").add_operation (enumerator_36385.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 969)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 969)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 969)).add_operation (enumerator_36385.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 969)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 969)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 969)), fixItArray57  COMMA_SOURCE_FILE ("type-shared-map.galgas", 968)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_36385.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 971)) ;
      }
      enumGalgasBool test_58 = kBoolTrue ;
      if (kBoolTrue == test_58) {
        test_58 = GALGAS_bool (kIsEqual, enumerator_36385.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 972)))).boolEnum () ;
        if (kBoolTrue == test_58) {
          var_definedCombinaisons_36243.addAssign_operation (enumerator_36385.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 973)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 973)).add_operation (enumerator_36385.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 973)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 973))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 973)) ;
          var_branchBehaviourSortedListForMapOverride_32__36334.addAssign_operation (var_rightStateIndex_36534, enumerator_36385.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 976)), var_leftStateIndex_36458, enumerator_36385.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 978)), var_resultingStateNameIndex_37098, enumerator_36385.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 980)), enumerator_36385.current_mMessageKind (HERE), enumerator_36385.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 982))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 974)) ;
        }
      }
      var_branchBehaviourSortedListForMapOverride_32__36334.addAssign_operation (var_leftStateIndex_36458, enumerator_36385.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 986)), var_rightStateIndex_36534, enumerator_36385.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 988)), var_resultingStateNameIndex_37098, enumerator_36385.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 990)), enumerator_36385.current_mMessageKind (HERE), enumerator_36385.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 992))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 984)) ;
      enumerator_36385.gotoNextObject () ;
    }
    enumGalgasBool test_59 = kBoolTrue ;
    if (kBoolTrue == test_59) {
      test_59 = GALGAS_bool (kIsEqual, var_forgottenAssociations_35903.getter_count (SOURCE_FILE ("type-shared-map.galgas", 994)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_59) {
        GALGAS_stringset var_forgottenCombinaisons_38403 = var_neededCombinaisons_34210.substract_operation (var_definedCombinaisons_36243, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 995)) ;
        enumGalgasBool test_60 = kBoolTrue ;
        if (kBoolTrue == test_60) {
          test_60 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons_38403.getter_count (SOURCE_FILE ("type-shared-map.galgas", 996)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_60) {
            GALGAS_string var_s_38512 = GALGAS_string::makeEmptyString () ;
            cEnumerator_stringset enumerator_38557 (var_forgottenCombinaisons_38403, kENUMERATION_UP) ;
            while (enumerator_38557.hasCurrentObject ()) {
              var_s_38512.plusAssign_operation(GALGAS_string ("\n"
                "  - ").add_operation (enumerator_38557.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 999)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 999)) ;
              enumerator_38557.gotoNextObject () ;
            }
            TC_Array <C_FixItDescription> fixItArray61 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1001)), var_forgottenCombinaisons_38403.getter_count (SOURCE_FILE ("type-shared-map.galgas", 1001)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1001)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1001)).add_operation (var_s_38512, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1001)), fixItArray61  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1001)) ;
          }
        }
      }
    }
    var_mapOverrideList_34086.addAssign_operation (enumerator_34133.current_mOverrideBlockName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1005)), var_branchBehaviourSortedListForMapOverride_31__34301, var_branchBehaviourSortedListForMapOverride_32__36334  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1004)) ;
    enumerator_34133.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_38951 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 1010)) ;
  GALGAS_propertyIndexMap var_attributeMap_38989 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1011)) ;
  const GALGAS_sharedMapDeclarationAST temp_62 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_39025 (temp_62.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_39025.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_39066 = function_typeNameForUsefulEntitiesGraph (enumerator_39025.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1013)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_28116, var_propertyTypeNameForUsefulness_39066 COMMA_SOURCE_FILE ("type-shared-map.galgas", 1014)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_39218 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_39025.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1015)) ;
    GALGAS_bool var_hasSetter_39319 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_39344 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_39371 = GALGAS_bool (false) ;
    var_typedAttributeList_38951.addAssign_operation (var_t_39218, enumerator_39025.current_mPropertyName (HERE), var_hasSetter_39319, var_hasGetter_39344, var_hasSelector_39371  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1019)) ;
    {
    var_attributeMap_38989.setter_insertKey (enumerator_39025.current_mPropertyName (HERE), var_t_39218, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1025)) ;
    }
    enumerator_39025.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_39604 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1028)) ;
  const GALGAS_sharedMapDeclarationAST temp_63 = object ;
  cEnumerator_insertMethodListAST enumerator_39654 (temp_63.getter_mInsertMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_39654.hasCurrentObject ()) {
    {
    var_insertMethodMap_39604.setter_insertKey (enumerator_39654.current (HERE).getter_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1030)) ;
    }
    cEnumerator_stringlist enumerator_39887 (enumerator_39654.current (HERE).getter_mErrorMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1032)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1032)), kENUMERATION_UP) ;
    while (enumerator_39887.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_39922 = enumerator_39887.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1033)) ;
      {
      GALGAS_string joker_40017 ; // Joker input parameter
      var_explodedArray_39922.setter_popFirst (joker_40017, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1034)) ;
      }
      cEnumerator_stringlist enumerator_40049 (var_explodedArray_39922, kENUMERATION_UP) ;
      while (enumerator_40049.hasCurrentObject ()) {
        enumGalgasBool test_64 = kBoolTrue ;
        if (kBoolTrue == test_64) {
          test_64 = GALGAS_bool (kIsStrictSup, enumerator_40049.current_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1036)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_64) {
            GALGAS_char var_c_40110 = enumerator_40049.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1037)) ;
            enumGalgasBool test_65 = kBoolTrue ;
            if (kBoolTrue == test_65) {
              test_65 = GALGAS_bool (kIsNotEqual, var_c_40110.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_40110.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1038)).boolEnum () ;
              if (kBoolTrue == test_65) {
                TC_Array <C_FixItDescription> fixItArray66 ;
                inCompiler->emitSemanticError (enumerator_39654.current (HERE).getter_mErrorMessage (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 1039)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message"), fixItArray66  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1039)) ;
              }
            }
          }
        }
        enumerator_40049.gotoNextObject () ;
      }
      enumerator_39887.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_40539 (enumerator_39654.current (HERE).getter_mShadowErrorMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1045)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1045)), kENUMERATION_UP) ;
    while (enumerator_40539.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_40574 = enumerator_40539.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1046)) ;
      {
      GALGAS_string joker_40675 ; // Joker input parameter
      var_explodedArray_40574.setter_popFirst (joker_40675, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1047)) ;
      }
      cEnumerator_stringlist enumerator_40714 (var_explodedArray_40574, kENUMERATION_UP) ;
      while (enumerator_40714.hasCurrentObject ()) {
        enumGalgasBool test_67 = kBoolTrue ;
        if (kBoolTrue == test_67) {
          test_67 = GALGAS_bool (kIsStrictSup, enumerator_40714.current (HERE).getter_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1049)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_67) {
            GALGAS_char var_c_40785 = enumerator_40714.current (HERE).getter_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1050)) ;
            enumGalgasBool test_68 = kBoolTrue ;
            if (kBoolTrue == test_68) {
              test_68 = GALGAS_bool (kIsNotEqual, var_c_40785.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_40785.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1051)).boolEnum () ;
              if (kBoolTrue == test_68) {
                TC_Array <C_FixItDescription> fixItArray69 ;
                inCompiler->emitSemanticError (enumerator_39654.current (HERE).getter_mErrorMessage (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 1052)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message"), fixItArray69  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1052)) ;
              }
            }
          }
        }
        enumerator_40714.gotoNextObject () ;
      }
      enumerator_40539.gotoNextObject () ;
    }
    enumerator_39654.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_41107 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1059)) ;
  const GALGAS_sharedMapDeclarationAST temp_70 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_41157 (temp_70.getter_mSearchMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_41157.hasCurrentObject ()) {
    enumGalgasBool test_71 = kBoolTrue ;
    if (kBoolTrue == test_71) {
      const GALGAS_sharedMapDeclarationAST temp_72 = object ;
      test_71 = GALGAS_bool (kIsEqual, temp_72.getter_mMapStateList (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1061)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_71) {
        {
        var_searchMethodMap_41107.setter_insertKey (enumerator_41157.current (HERE).getter_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1062)) ;
        }
      }
    }
    if (kBoolFalse == test_71) {
      {
      var_searchMethodMap_41107.setter_insertKey (enumerator_41157.current (HERE).getter_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1064)) ;
      }
    }
    cEnumerator_stringlist enumerator_41523 (enumerator_41157.current (HERE).getter_mErrorMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1067)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1067)), kENUMERATION_UP) ;
    while (enumerator_41523.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_41558 = enumerator_41523.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1068)) ;
      {
      GALGAS_string joker_41658 ; // Joker input parameter
      var_explodedArray_41558.setter_popFirst (joker_41658, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1069)) ;
      }
      cEnumerator_stringlist enumerator_41697 (var_explodedArray_41558, kENUMERATION_UP) ;
      while (enumerator_41697.hasCurrentObject ()) {
        enumGalgasBool test_73 = kBoolTrue ;
        if (kBoolTrue == test_73) {
          test_73 = GALGAS_bool (kIsStrictSup, enumerator_41697.current (HERE).getter_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1071)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_73) {
            GALGAS_char var_c_41768 = enumerator_41697.current (HERE).getter_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1072)) ;
            enumGalgasBool test_74 = kBoolTrue ;
            if (kBoolTrue == test_74) {
              test_74 = GALGAS_bool (kIsNotEqual, var_c_41768.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
              if (kBoolTrue == test_74) {
                TC_Array <C_FixItDescription> fixItArray75 ;
                inCompiler->emitSemanticError (enumerator_41157.current (HERE).getter_mErrorMessage (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 1074)), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message"), fixItArray75  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1074)) ;
              }
            }
          }
        }
        enumerator_41697.gotoNextObject () ;
      }
      enumerator_41523.gotoNextObject () ;
    }
    enumerator_41157.gotoNextObject () ;
  }
  const GALGAS_sharedMapDeclarationAST temp_76 = object ;
  const GALGAS_sharedMapDeclarationAST temp_77 = object ;
  const GALGAS_sharedMapDeclarationAST temp_78 = object ;
  const GALGAS_sharedMapDeclarationAST temp_79 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("shared map ").add_operation (temp_76.getter_mMapTypeName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1082)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1082)), GALGAS_sharedMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_77.getter_mMapTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1084)), var_typedAttributeList_38951, temp_78.getter_mInsertMethodList (HERE), temp_79.getter_mSearchMethodList (HERE), var_mapAutomatonStateMap_30326, var_mapAutomatonActionMap_29670, var_mapStateSortedList_30760, var_mapOverrideList_34086, var_shadowBehaviour_28510, var_shadowMessage_28543  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1083))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1081)) ;
  const GALGAS_sharedMapDeclarationAST temp_80 = object ;
  GALGAS_string var_graphFile_42578 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/shared-map-"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1097)).add_operation (temp_80.getter_mMapTypeName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1097)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1097)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1097)) ;
  enumGalgasBool test_81 = kBoolTrue ;
  if (kBoolTrue == test_81) {
    test_81 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_81) {
      GALGAS_string var_theGraph_42752 = GALGAS_string ("digraph G {\n") ;
      cEnumerator_mapAutomatonStateMap enumerator_42805 (var_mapAutomatonStateMap_30326, kENUMERATION_UP) ;
      while (enumerator_42805.hasCurrentObject ()) {
        var_theGraph_42752.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_42805.current_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1101)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1101)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1101)).add_operation (enumerator_42805.current_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1101)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1101)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1101)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1101)) ;
        enumGalgasBool test_82 = kBoolTrue ;
        if (kBoolTrue == test_82) {
          test_82 = var_initialStateSet_29089.getter_hasKey (enumerator_42805.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1102)).boolEnum () ;
          if (kBoolTrue == test_82) {
            var_theGraph_42752.plusAssign_operation(GALGAS_string (" shape=box color=blue"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1103)) ;
          }
        }
        if (kBoolFalse == test_82) {
          var_theGraph_42752.plusAssign_operation(GALGAS_string (" shape=box"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1105)) ;
        }
        switch (enumerator_42805.current_mStateMessageKind (HERE).enumValue ()) {
        case GALGAS_mapAutomatonMessageKind::kNotBuilt:
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
          {
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
          {
            var_theGraph_42752.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1110)) ;
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
          {
            var_theGraph_42752.plusAssign_operation(GALGAS_string (" fontcolor=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1112)) ;
          }
          break ;
        }
        var_theGraph_42752.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1114)) ;
        enumerator_42805.gotoNextObject () ;
      }
      const GALGAS_sharedMapDeclarationAST temp_83 = object ;
      cEnumerator_mapStateList enumerator_43288 (temp_83.getter_mMapStateList (HERE), kENUMERATION_UP) ;
      while (enumerator_43288.hasCurrentObject ()) {
        cEnumerator_mapStateTransitionList enumerator_43323 (enumerator_43288.current_mTransitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_43323.hasCurrentObject ()) {
          var_theGraph_42752.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_43288.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1118)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1118)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1118)).add_operation (enumerator_43323.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1118)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1118)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1118)).add_operation (enumerator_43323.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1118)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1118)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1118)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1118)) ;
          switch (enumerator_43323.current_mTransitionMessageKind (HERE).enumValue ()) {
          case GALGAS_mapAutomatonMessageKind::kNotBuilt:
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
            {
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
            {
              var_theGraph_42752.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\" color=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1122)) ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
            {
              var_theGraph_42752.plusAssign_operation(GALGAS_string (" fontcolor=\"red\" color=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1124)) ;
            }
            break ;
          }
          var_theGraph_42752.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1126)) ;
          enumerator_43323.gotoNextObject () ;
        }
        enumerator_43288.gotoNextObject () ;
      }
      var_theGraph_42752.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1129)) ;
      GALGAS_bool joker_43818 ; // Joker input parameter
      var_theGraph_42752.method_writeToFileWhenDifferentContents (var_graphFile_42578, joker_43818, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1130)) ;
    }
  }
  if (kBoolFalse == test_81) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_graphFile_42578, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1132)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sharedMapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                         extensionMethod_sharedMapDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_semanticAnalysis (defineExtensionMethod_sharedMapDeclarationAST_semanticAnalysis, NULL) ;

