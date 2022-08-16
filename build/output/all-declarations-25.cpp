#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-25.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticComponentGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticComponentGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticComponentGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticComponentGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticComponentGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticComponentGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                          const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                          const GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result << " callExtensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_640_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_640 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_640.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_640.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_640.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 11)).stringValue () ;
        result << " constin_" ;
        result << enumerator_640.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_640.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 13)).stringValue () ;
        result << " in_" ;
        result << enumerator_640.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 13)).stringValue () ;
      }
      index_640_.increment () ;
      enumerator_640.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                             const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                             const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                             const GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue () ;
  result << " callExtensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_628_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_628 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_628.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_628.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_628.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue () ;
        result << " in_" ;
        result << enumerator_628.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_628.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue () ;
        result << " in_" ;
        result << enumerator_628.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue () ;
      }
      index_628_.increment () ;
      enumerator_628.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 18)).stringValue () ;
  result << " result ;\n"
    "  if (nullptr != inObject) {\n"
    "    result = inObject->getter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 20)).stringValue () ;
  result << " (" ;
  GALGAS_uint index_1282_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1282 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1282.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_1282.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 22)).stringValue () ;
      result << ", " ;
      index_1282_.increment () ;
      enumerator_1282.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                  const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result << " callExtensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_625_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_625 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_625.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_625.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_625.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 11)).stringValue () ;
        result << " constin_" ;
        result << enumerator_625.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_625.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 13)).stringValue () ;
        result << " in_" ;
        result << enumerator_625.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 13)).stringValue () ;
      }
      index_625_.increment () ;
      enumerator_625.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                     const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const GALGAS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                     const GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_GETTER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue () ;
  result << " callExtensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_767_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_767 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_767.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_767.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_767.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 15)).stringValue () ;
        result << " in_" ;
        result << enumerator_767.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 15)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_767.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 17)).stringValue () ;
        result << " in_" ;
        result << enumerator_767.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 17)).stringValue () ;
      }
      index_767_.increment () ;
      enumerator_767.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 22)).stringValue () ;
  result << " result ;\n"
    "  if (nullptr != inObject) {\n"
    "    result = inObject->getter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 24)).stringValue () ;
  result << " (" ;
  GALGAS_uint index_1421_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1421 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1421.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_1421.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 26)).stringValue () ;
      result << ", " ;
      index_1421_.increment () ;
      enumerator_1421.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionGetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                               const GALGAS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                               const GALGAS_unifiedTypeMapEntry & /* in_RETURN_5F_TYPE */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Overriding extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_GETTER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typedef void (*extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_671_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_671 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_671.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_671_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue () ;
          result << " & ioArgument" ;
          result << index_671_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue () ;
            result << " & outArgument" ;
            result << index_671_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue () ;
            result << " inArgument" ;
            result << index_671_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_671_IDX.increment () ;
      enumerator_671.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 26)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 27)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 27)).stringValue () ;
  result << " inModifier) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 31)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 31)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2232_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2232 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2232.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2232.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_2232.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2232.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2232.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_2232.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2232.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2232.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_2232.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2232.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_2232.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue () ;
            result << " in_" ;
            result << enumerator_2232.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2232_.increment () ;
      enumerator_2232.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                             const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                             const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static TC_UniqueArray <extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inModifier) {\n"
    "  gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void freeExtensionModifier_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 18)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (void) {\n"
    "  gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 19)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 19)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_PrologueEpilogue gSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 24)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 24)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NULL,\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeExtensionModifier_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 25)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 25)).stringValue () ;
  result << ") ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 29)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 29)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2253_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2253 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2253.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_2253.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 32)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_2253.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2253.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_2253.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 34)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_2253.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2253.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2253.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_2253.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2253.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_2253.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue () ;
            result << " in_" ;
            result << enumerator_2253.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue () ;
          }
        }
      }
      index_2253_.increment () ;
      enumerator_2253.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "//--- Drop output arguments\n" ;
  GALGAS_uint index_3292_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_3292 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3292.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3292.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_3292.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_3292_.increment () ;
      enumerator_3292.gotoNextObject () ;
    }
  }
  result << "//--- Find setter\n"
    "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 53)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 56)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 56)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 57)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 57)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 58)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 58)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 63)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 63)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 64)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 64)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 68)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 68)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    f (inObject, " ;
  GALGAS_uint index_4974_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4974 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4974.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_4974.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 72)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_4974.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 73)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4974.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 74)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_4974.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 75)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_4974.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 76)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_4974.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 77)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_4974.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 79)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_4974_.increment () ;
      enumerator_4974.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                  const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typedef void (*extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_662_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_662 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_662.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_662.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_662.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_662_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_662.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_662.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue () ;
          result << " & ioArgument" ;
          result << index_662_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_662.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_662.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue () ;
            result << " & outArgument" ;
            result << index_662_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_662.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue () ;
            result << " inArgument" ;
            result << index_662_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_662_IDX.increment () ;
      enumerator_662.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 26)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue () ;
  result << " inModifier) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2236_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2236 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2236.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2236.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_2236.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2236.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2236.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_2236.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2236.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2236.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_2236.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2236.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_2236.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue () ;
            result << " in_" ;
            result << enumerator_2236.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2236_.increment () ;
      enumerator_2236.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionsetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                     const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static TC_UniqueArray <extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inModifier) {\n"
    "  gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_1503_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1503 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1503.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1503.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 21)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_1503.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue () ;
        result << " constin_" ;
        result << enumerator_1503.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1503.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 23)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_1503.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue () ;
          result << " & io_" ;
          result << enumerator_1503.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1503.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 25)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_1503.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue () ;
            result << " & out_" ;
            result << enumerator_1503.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_1503.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue () ;
            result << " in_" ;
            result << enumerator_1503.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue () ;
          }
        }
      }
      index_1503_.increment () ;
      enumerator_1503.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "//--- Drop output arguments\n" ;
  GALGAS_uint index_2542_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2542 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2542.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2542.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_2542.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 37)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_2542_.increment () ;
      enumerator_2542.gotoNextObject () ;
    }
  }
  result << "//--- Find setter\n"
    "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 42)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    extensionSetterSignature_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    f (inObject, " ;
  GALGAS_uint index_4224_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4224 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4224.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_4224.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 61)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_4224.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 62)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4224.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 63)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_4224.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 64)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_4224.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 65)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_4224.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 66)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_4224.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 68)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_4224_.increment () ;
      enumerator_4224.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_MODIFIER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void defineExtensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue () ;
  result << " (void) {\n"
    "  enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void freeExtensionModifier_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue () ;
  result << " (void) {\n"
    "  gExtensionModifierTable_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_PrologueEpilogue gSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "defineExtensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue () ;
  result << ",\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeExtensionModifier_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue () ;
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionSetterImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                               const GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Overriding extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_MODIFIER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void defineExtensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 10)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 10)).stringValue () ;
  result << " (void) {\n"
    "  enterExtensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 11)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "extensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 12)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_PrologueEpilogue gSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue () ;
  result << " (defineExtensionSetter_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue () ;
  result << ", NULL) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Abstract extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_599_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_599 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_599.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_599.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_599.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)).stringValue () ;
        result << " constin_" ;
        result << enumerator_599.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_599.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_599.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)).stringValue () ;
          result << " & io_" ;
          result << enumerator_599.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_599.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_599.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)).stringValue () ;
            result << " & out_" ;
            result << enumerator_599.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_599.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 17)).stringValue () ;
            result << " in_" ;
            result << enumerator_599.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_599_.increment () ;
      enumerator_599.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (C_Compiler * inCompiler,
                                                                                                             const GALGAS_unifiedTypeMapEntry & in_RECEIVER_5F_TYPE,
                                                                                                             const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                             const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Abstract extension method '@").add_operation (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "cPtr_" ;
  result << extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_659_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_659 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_659.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_659.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_659.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue () ;
        result << " constin_" ;
        result << enumerator_659.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_659.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_659.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue () ;
          result << " & io_" ;
          result << enumerator_659.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_659.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_659.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 15)).stringValue () ;
            result << " & out_" ;
            result << enumerator_659.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_659.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 17)).stringValue () ;
            result << " in_" ;
            result << enumerator_659.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_659_.increment () ;
      enumerator_659.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "//--- Drop output arguments\n" ;
  GALGAS_uint index_1698_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1698 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1698.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1698.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 25)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_1698.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 26)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_1698_.increment () ;
      enumerator_1698.gotoNextObject () ;
    }
  }
  result << "//--- Find method\n"
    "  if (nullptr != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 31)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 31)).stringValue () ;
  result << ") ;\n"
    "    inObject->method_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 32)).stringValue () ;
  result << " (" ;
  GALGAS_uint index_2251_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2251 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2251.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2251.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_2251.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2251.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_2251.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_2251.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_2251.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_2251.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_2251_.increment () ;
      enumerator_2251.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "  }\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                  const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_590_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_590 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_590.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_590.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_590.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 11)).stringValue () ;
        result << " constin_" ;
        result << enumerator_590.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_590.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_590.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 13)).stringValue () ;
          result << " & io_" ;
          result << enumerator_590.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_590.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_590.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 15)).stringValue () ;
            result << " & out_" ;
            result << enumerator_590.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_590.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 17)).stringValue () ;
            result << " in_" ;
            result << enumerator_590.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_590_.increment () ;
      enumerator_590.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                     const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void callExtensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 11)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_732_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_732 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_732.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_732.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 14)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_732.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 15)).stringValue () ;
        result << " constin_" ;
        result << enumerator_732.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 15)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_732.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 16)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_732.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 17)).stringValue () ;
          result << " & io_" ;
          result << enumerator_732.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 17)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_732.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 18)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_732.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 19)).stringValue () ;
            result << " & out_" ;
            result << enumerator_732.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 19)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_732.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 21)).stringValue () ;
            result << " in_" ;
            result << enumerator_732.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 21)).stringValue () ;
          }
        }
      }
      index_732_.increment () ;
      enumerator_732.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n" ;
  GALGAS_uint index_1743_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1743 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1743.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1743.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 28)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_1743.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 29)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_1743_.increment () ;
      enumerator_1743.gotoNextObject () ;
    }
  }
  result << "  if (nullptr != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 33)).stringValue () ;
  result << ") ;\n"
    "    inObject->method_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 34)).stringValue () ;
  result << "  (" ;
  GALGAS_uint index_2246_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2246 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2246.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2246.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_2246.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 37)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2246.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 38)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_2246.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 39)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_2246.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 40)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_2246.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 41)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_2246.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 43)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_2246_.increment () ;
      enumerator_2246.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "  }\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionMethodImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Overriding extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (C_Compiler * inCompiler,
                                                                                              const GALGAS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_string & in_FILEWRAPPER_5F_NAME
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_354_idx (0) ;
  if (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_354 (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_354.hasCurrentObject ()) {
      result << "extern const char * gWrapperFileContent_" ;
      result << enumerator_354.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 8)).stringValue () ;
      result << " ;\n" ;
      index_354_idx.increment () ;
      enumerator_354.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_648_idx (0) ;
  if (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_648 (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_648.hasCurrentObject ()) {
      result << "extern const uint8_t gWrapperFileContent_" ;
      result << enumerator_648.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 14)).stringValue () ;
      result << " [] ;\n" ;
      index_648_idx.increment () ;
      enumerator_648.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_936_idx (0) ;
  if (in_FILE_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_936 (in_FILE_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_936.hasCurrentObject ()) {
      result << "extern const cRegularFileWrapper gWrapperFile_" ;
      result << enumerator_936.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 20)).stringValue () ;
      result << " ;\n" ;
      index_936_idx.increment () ;
      enumerator_936.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1221_ (0) ;
  if (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1221 (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1221.hasCurrentObject ()) {
      result << "extern const cDirectoryWrapper gWrapperDirectory_" ;
      result << enumerator_1221.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 26)).stringValue () ;
      result << " ;\n" ;
      index_1221_.increment () ;
      enumerator_1221.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                 const GALGAS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_FILEWRAPPER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                            const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                            const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("' (as function)"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " extensionGetter_" ;
  result << in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class GALGAS_" ;
  result << in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue () ;
  result << " & inObject" ;
  GALGAS_uint index_635_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_635 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_635.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_635.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_635.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue () ;
        result << " & constinArgument" ;
        result << index_635_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "class GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_635.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue () ;
        result << " inArgument" ;
        result << index_635_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue () ;
      }
      index_635_IDX.increment () ;
      enumerator_635.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                               const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                               const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension Getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                            const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void extensionMethod_" ;
  result << in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class GALGAS_" ;
  result << in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " inObject" ;
  GALGAS_uint index_590_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_590 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_590.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_590.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_590.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue () ;
        result << " constin_" ;
        result << enumerator_590.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_590.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_590.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue () ;
          result << " & io_" ;
          result << enumerator_590.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_590.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_590.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue () ;
            result << " & out_" ;
            result << enumerator_590.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_590.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue () ;
            result << " in_" ;
            result << enumerator_590.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_590_.increment () ;
      enumerator_590.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterAsFunctionDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                            const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Extension setter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void extensionSetter_" ;
  result << in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class GALGAS_" ;
  result << in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " & ioObject" ;
  GALGAS_uint index_590_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_590 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_590.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_590.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_590.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue () ;
        result << " constin_" ;
        result << enumerator_590.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_590.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_590.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue () ;
          result << " & io_" ;
          result << enumerator_590.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_590.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_590.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue () ;
            result << " & out_" ;
            result << enumerator_590.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_590.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue () ;
            result << " in_" ;
            result << enumerator_590.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_590_.increment () ;
      enumerator_590.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                           const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                           const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " function_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_520_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_520 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_520.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_520.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_520.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue () ;
        result << " & constinArgument" ;
        result << index_520_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_0) {
        result << "class GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_520.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue () ;
        result << " inArgument" ;
        result << index_520_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_520_IDX.increment () ;
      enumerator_520.gotoNextObject () ;
    }
  }
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                              const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                              const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                              const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Function introspection                                                                       \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static const C_galgas_type_descriptor * functionArgs_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue () ;
  result << " [" ;
  result << in_FORMAL_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue () ;
  result << "] = {\n" ;
  GALGAS_uint index_932_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_932 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_932.hasCurrentObject ()) {
      result << "  & kTypeDescriptor_GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_932.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 15)).stringValue () ;
      result << ",\n" ;
      index_932_.increment () ;
      enumerator_932.gotoNextObject () ;
    }
  }
  result << "  NULL\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 23)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "static GALGAS_object functionWithGenericHeader_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 24)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const cObjectArray & /* inEffectiveParameterArray */,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_location & /* inErrorLocation */\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n"
      "  return function_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 28)).stringValue () ;
    result << " (inCompiler COMMA_THERE).getter_object (THERE) ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
    result << "static GALGAS_object functionWithGenericHeader_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 31)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const cObjectArray & inEffectiveParameterArray,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_location & /* inErrorLocation */\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n" ;
    GALGAS_uint index_2270_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2270 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2270.hasCurrentObject ()) {
        result << "  const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_2270.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result << " operand" ;
        result << index_2270_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result << " = GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_2270.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result << "::extractObject (" ;
        columnMarker = result.currentColumn () ;
        result << "inEffectiveParameterArray.objectAtIndex (" ;
        result << index_2270_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 37)).stringValue () ;
        result << " COMMA_HERE),\n"
          "  " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "inCompiler\n"
          "  " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_THERE) ;\n" ;
        index_2270_IDX.increment () ;
        enumerator_2270.gotoNextObject () ;
      }
    }
    result << "  return function_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 41)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_2770_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2770 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2770.hasCurrentObject ()) {
        result << "operand" ;
        result << index_2770_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 43)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_2770_IDX.increment () ;
        enumerator_2770.gotoNextObject () ;
      }
    }
    result << "inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_THERE).getter_object (THERE) ;\n"
      "}\n" ;
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_galgas_function_descriptor functionDescriptor_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << in_FUNCTION_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "functionWithGenericHeader_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 52)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "& kTypeDescriptor_GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << in_FORMAL_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "functionArgs_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 55)).stringValue () ;
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void routine_" ;
  result << in_ROUTINE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_497_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_497 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_497.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_497.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 9)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_497.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue () ;
        result << " constinArgument" ;
        result << index_497_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_497.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 11)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_497.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue () ;
          result << " & ioArgument" ;
          result << index_497_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_497.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 13)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_497.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue () ;
            result << " & outArgument" ;
            result << index_497_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_497.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue () ;
            result << " inArgument" ;
            result << index_497_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue () ;
          }
        }
      }
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_497_IDX.increment () ;
      enumerator_497.gotoNextObject () ;
    }
  }
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                             const GALGAS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_ROUTINE_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                                  const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                                  const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Once function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Function implementation                                                                      \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static bool gOnceFunctionResultAvailable_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 13)).stringValue () ;
  result << " = false ;\n"
    "static GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " gOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 14)).stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " function_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    "              " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (! gOnceFunctionResultAvailable_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 20)).stringValue () ;
  result << ") {\n"
    "    gOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue () ;
  result << " = onceFunction_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue () ;
  result << " (inCompiler COMMA_THERE) ;\n"
    "    gOnceFunctionResultAvailable_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 22)).stringValue () ;
  result << " = true ;\n"
    "  }\n"
    "  return gOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 24)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void releaseOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 29)).stringValue () ;
  result << " (void) {\n"
    "  gOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 30)).stringValue () ;
  result << ".drop () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_PrologueEpilogue gEpilogueForOnceFunction_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 35)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NULL,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "releaseOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
  result << ") ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Function introspection                                                                       \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static const C_galgas_type_descriptor * functionArgs_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue () ;
  result << " [" ;
  result << in_FORMAL_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue () ;
  result << "] = {\n" ;
  GALGAS_uint index_2770_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_2770 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2770.hasCurrentObject ()) {
      result << "  & kTypeDescriptor_GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_2770.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 45)).stringValue () ;
      result << ",\n" ;
      index_2770_.increment () ;
      enumerator_2770.gotoNextObject () ;
    }
  }
  result << "  NULL\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 53)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "static GALGAS_object functionWithGenericHeader_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 54)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const cObjectArray & /* inEffectiveParameterArray */,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_location & /* inErrorLocation */\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n"
      "  return function_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 58)).stringValue () ;
    result << " (inCompiler COMMA_THERE).getter_object (THERE) ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
    result << "static GALGAS_object functionWithGenericHeader_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 61)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const cObjectArray & inEffectiveParameterArray,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_location & /* inErrorLocation*/\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n" ;
    GALGAS_uint index_4107_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_4107 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4107.hasCurrentObject ()) {
        result << "  const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_4107.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << " operand" ;
        result << index_4107_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << " = GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_4107.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << "::extractObject (inEffectiveParameterArray.objectAtIndex (" ;
        result << index_4107_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << " COMMA_HERE), inCompiler COMMA_THERE) ;\n" ;
        index_4107_IDX.increment () ;
        enumerator_4107.gotoNextObject () ;
      }
    }
    result << "  return function_" ;
    result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 68)).stringValue () ;
    result << " (" ;
    GALGAS_uint index_4584_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_4584 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4584.hasCurrentObject ()) {
        result << "operand" ;
        result << index_4584_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 70)).stringValue () ;
        result << ", " ;
        index_4584_IDX.increment () ;
        enumerator_4584.gotoNextObject () ;
      }
    }
    result << "inCompiler COMMA_THERE).getter_object (THERE) ;\n"
      "}\n" ;
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_galgas_function_descriptor functionDescriptor_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << in_FUNCTION_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "functionWithGenericHeader_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 79)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "& kTypeDescriptor_GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << in_FORMAL_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "functionArgs_" ;
  result << in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 82)).stringValue () ;
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (C_Compiler * inCompiler,
                                                                                                      const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_string filewrapperTemplate_" ;
  result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class C_Compiler * inCompiler" ;
  GALGAS_uint index_611_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_611 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_611.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_611.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 9)).stringValue () ;
      result << " & " ;
      result << enumerator_611.current_mFormalArgumentCppName (HERE).stringValue () ;
      index_611_.increment () ;
      enumerator_611.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                         const GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                         const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const GALGAS_stringset & in_UNUSED_5F_VAR_5F_SET,
                                                                                                         const GALGAS_bool & in_USES_5F_COLUMN_5F_MARKER,
                                                                                                         const GALGAS_string & in_GENERATED_5F_INSTRUCTION_5F_STRING
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_string filewrapperTemplate_" ;
  result << in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * " ;
  const enumGalgasBool test_0 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "/* " ;
    result << function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 9)).stringValue () ;
    result << " */" ;
  }else if (kBoolFalse == test_0) {
    result << function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 11)).stringValue () ;
  }
  GALGAS_uint index_720_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_720 (in_FORMAL_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_720.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_720.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 14)).stringValue () ;
      result << " & " ;
      const enumGalgasBool test_1 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (enumerator_720.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 15)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "/* " ;
        result << enumerator_720.current_mFormalArgumentCppName (HERE).stringValue () ;
        result << " */" ;
      }else if (kBoolFalse == test_1) {
        result << enumerator_720.current_mFormalArgumentCppName (HERE).stringValue () ;
      }
      index_720_.increment () ;
      enumerator_720.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
    "  C_String result ;\n" ;
  const enumGalgasBool test_2 = in_USES_5F_COLUMN_5F_MARKER.boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  uint32_t columnMarker = 0 ;\n" ;
  }else if (kBoolFalse == test_2) {
  }
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation ((int32_t) GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ()) ;
  }
  result << in_GENERATED_5F_INSTRUCTION_5F_STRING.stringValue () ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (- ((int32_t) GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result << "  return GALGAS_string (result) ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@routinePrototypeDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_routinePrototypeDeclarationForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1066)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routinePrototypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_routinePrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_string & outArgument_outHeader,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routinePrototypeDeclarationForGeneration temp_0 = this ;
  const GALGAS_routinePrototypeDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, temp_0.readProperty_mRoutineName (), temp_1.readProperty_mFormalArgumentList () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1074))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPrototypeDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_functionPrototypeDeclarationForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1085)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPrototypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_string & outArgument_outHeader,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionPrototypeDeclarationForGeneration temp_0 = this ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_1 = this ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), temp_1.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1096)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1093))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_onceFunctionDeclarationForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1103)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_onceFunctionDeclarationForGeneration temp_0 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1113)), extensionGetter_identifierRepresentation (temp_1.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1114)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1111))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration appendTypeGenericImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_semanticTypeForGeneration::getter_appendTypeGenericImplementation (C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_semanticTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_45955 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1123)) ;
  const GALGAS_semanticTypeForGeneration temp_1 = this ;
  result_result = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, var_selfTypeDefinition_45955.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1126)), var_selfTypeDefinition_45955.readProperty_mSuperType (), var_selfTypeDefinition_45955.readProperty_mHandledOperatorFlags () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1124))) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@routineImplementationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_routineImplementationForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasHeader ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_routineImplementationForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_2.readProperty_mRoutineName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1142)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1142))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1142)) ;
    }
  }
  GALGAS_string var_code_47246 ;
  {
  const GALGAS_routineImplementationForGeneration temp_3 = this ;
  const GALGAS_routineImplementationForGeneration temp_4 = this ;
  const GALGAS_routineImplementationForGeneration temp_5 = this ;
  const GALGAS_routineImplementationForGeneration temp_6 = this ;
  routine_generateProcedure (temp_3.readProperty_mGenerateStatic (), GALGAS_string ("routine_").add_operation (temp_4.readProperty_mRoutineName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1146)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1146)), ioArgument_ioInclusionSet, temp_5.readProperty_mFormalArgumentList (), temp_6.readProperty_mRoutineInstructionList (), GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_47246, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1144)) ;
  }
  const GALGAS_routineImplementationForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, temp_7.readProperty_mRoutineName (), var_code_47246 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1157))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionImplementationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionImplementationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1169)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1169))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1169)) ;
  GALGAS_string var_code_48084 ;
  {
  const GALGAS_functionImplementationForGeneration temp_1 = this ;
  const GALGAS_functionImplementationForGeneration temp_2 = this ;
  const GALGAS_functionImplementationForGeneration temp_3 = this ;
  const GALGAS_functionImplementationForGeneration temp_4 = this ;
  const GALGAS_functionImplementationForGeneration temp_5 = this ;
  routine_generateFunction (GALGAS_string ("function_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1171)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1171)), ioArgument_ioInclusionSet, temp_2.readProperty_mFormalArgumentList (), temp_3.readProperty_mFunctionInstructionList (), GALGAS_string ("C_Compiler"), temp_4.readProperty_mReturnType (), temp_5.readProperty_mResultVariableCppName (), GALGAS_bool (false), GALGAS_bool (false), var_code_48084, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1170)) ;
  }
  const GALGAS_functionImplementationForGeneration temp_6 = this ;
  const GALGAS_functionImplementationForGeneration temp_7 = this ;
  const GALGAS_functionImplementationForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, temp_6.readProperty_mFunctionName (), var_code_48084, temp_7.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_8.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1186)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1182))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_onceFunctionDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1197)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1197))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1197)) ;
  GALGAS_string var_code_49020 ;
  {
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_2 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_3 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_4 = this ;
  routine_generateFunction (GALGAS_string ("onceFunction_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1199)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1199)), ioArgument_ioInclusionSet, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1201)), temp_2.readProperty_mFunctionInstructionList (), GALGAS_string ("C_Compiler"), temp_3.readProperty_mReturnType (), temp_4.readProperty_mResultVariableCppName (), GALGAS_bool (true), GALGAS_bool (false), var_code_49020, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1198)) ;
  }
  const GALGAS_onceFunctionDeclarationForGeneration temp_5 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, temp_5.readProperty_mFunctionName (), var_code_49020, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1213)), extensionGetter_identifierRepresentation (temp_6.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1214)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1210))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_lexiqueDeclarationForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1223)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  outArgument_outHeader = temp_0.readProperty_mHeaderContents () ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1240)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1240))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1240)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = temp_1.readProperty_mCppContents () ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificFiles (const GALGAS_string constinArgument_inProductDirectory,
                                                                       GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                       GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1252)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1252)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1252))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1252)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_2 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_1.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1255)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1255)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1255)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), temp_2.readProperty_mCocoaHeader (), GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1253)) ;
  }
  const GALGAS_lexiqueDeclarationForGeneration temp_3 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_3.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1265)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1265)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1265))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1265)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_4 = this ;
  ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_4.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1266)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1266)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1266))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1266)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_5 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_6 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_5.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1269)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1269)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1269)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), temp_6.readProperty_mCocoaImplementation (), GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"
    "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1267)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@programComponentForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_programComponentForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1285)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@programComponentForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_programComponentForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusAssign_operation(temp_0.readProperty_mInclusionSet (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1294)) ;
  const GALGAS_programComponentForGeneration temp_1 = this ;
  outArgument_outImplementation = temp_1.readProperty_mImplementationString () ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_filewrapperDeclarationForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1305)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile (const GALGAS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                             const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                             GALGAS_stringlist & ioArgument_ioRegularFileIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioDirectoryIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioRegularTextContentIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioRegularBinaryContentIndexStringList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.addAssign_operation (ioArgument_ioDirectoryIndexStringList.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1317)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1317))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1317)) ;
  cEnumerator_wrapperFileMap enumerator_53483 (constinArgument_inFilewrapperFileMap, kENUMERATION_UP) ;
  while (enumerator_53483.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.addAssign_operation (ioArgument_ioRegularFileIndexStringList.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1319)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1319))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1319)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_53483.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.addAssign_operation (enumerator_53483.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1321))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1321)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.addAssign_operation (enumerator_53483.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1323))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1323)) ;
    }
    enumerator_53483.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_53831 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_53831.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile (enumerator_53831.current_mRegularFileMap (HERE), enumerator_53831.current_mDirectoryMap (HERE), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1327)) ;
    }
    enumerator_53831.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_regularFileIndexStringList_54409 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1343)) ;
  GALGAS_stringlist var_regularBinaryContentIndexStringList_54468 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1344)) ;
  GALGAS_stringlist var_regularTextContentIndexStringList_54525 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1345)) ;
  GALGAS_stringlist var_directoryIndexStringList_54573 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1346)) ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = this ;
  routine_recursivlyEnumerateRegularFile (temp_0.readProperty_mFilewrapperFileMap (), temp_1.readProperty_mFilewrapperDirectoryMap (), var_regularFileIndexStringList_54409, var_directoryIndexStringList_54573, var_regularTextContentIndexStringList_54525, var_regularBinaryContentIndexStringList_54468, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1347)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_54409, var_directoryIndexStringList_54573, var_regularTextContentIndexStringList_54525, var_regularBinaryContentIndexStringList_54468, temp_2.readProperty_mFilewrapperName () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1355))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = this ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_55201 (temp_3.readProperty_mFilewrapperTemplateListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_55201.hasCurrentObject ()) {
    const GALGAS_filewrapperDeclarationForGeneration temp_4 = this ;
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, temp_4.readProperty_mFilewrapperName (), enumerator_55201.current_mFilewrapperTemplateName (HERE), enumerator_55201.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1364))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1364)) ;
    enumerator_55201.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateWrapperContents (const GALGAS_string constinArgument_inFilewrapperName,
                                      const GALGAS_string constinArgument_inFilewrapperDirectory,
                                      const GALGAS_uint constinArgument_inFilewrapperDirectoryIndex,
                                      const GALGAS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                      const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                      GALGAS_string & ioArgument_ioImplementation,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_wrapperFileMap enumerator_55962 (constinArgument_inFilewrapperRegularFileMap, kENUMERATION_UP) ;
  while (enumerator_55962.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_55962.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_contents_56048 = GALGAS_string::constructor_stringWithContentsOfFile (enumerator_55962.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1384)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1385)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1385)).add_operation (enumerator_55962.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1385)).add_operation (GALGAS_string ("'\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1385)).add_operation (GALGAS_string ("const char * gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1385)).add_operation (enumerator_55962.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1387)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1386)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1387)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1388)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1387)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1388)).add_operation (var_contents_56048.getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1389)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1388)).add_operation (GALGAS_string (" ;\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1389)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1389)).add_operation (enumerator_55962.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1390)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1390)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1390)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1391)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1390)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1391)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1391)).add_operation (enumerator_55962.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1392)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1392)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1392)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1392)).add_operation (enumerator_55962.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1393)).getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1393)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1393)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1393)).add_operation (GALGAS_string ("  true, // Text file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1393)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1394)).add_operation (var_contents_56048.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1395)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1395)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1395)).add_operation (GALGAS_string (", // Text length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1395)).add_operation (GALGAS_string ("  gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1395)).add_operation (enumerator_55962.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1396)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1396)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1396)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1396)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1396)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1396)).add_operation (GALGAS_string (") ;\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1396)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1385)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_data var_contents_56912 = GALGAS_data::constructor_dataWithContentsOfFile (enumerator_55962.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1399)) ;
      ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1400)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1400)).add_operation (enumerator_55962.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1400)).add_operation (GALGAS_string ("'\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1400)).add_operation (GALGAS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1400)).add_operation (enumerator_55962.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1402)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1401)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1402)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1403)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1402)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1403)).add_operation (var_contents_56912.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1403)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1403)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1403)).add_operation (GALGAS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1403)).add_operation (var_contents_56912.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1404)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1403)).add_operation (GALGAS_string ("} ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1404)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1404)).add_operation (enumerator_55962.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1405)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1405)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1405)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1406)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1405)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1406)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1406)).add_operation (enumerator_55962.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1407)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1407)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1407)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1407)).add_operation (enumerator_55962.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1408)).getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1408)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (GALGAS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1409)).add_operation (var_contents_56912.getter_length (SOURCE_FILE ("semanticGeneration.galgas", 1410)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1410)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (GALGAS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (GALGAS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (enumerator_55962.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1411)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1411)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (GALGAS_string (") ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1400)) ;
    }
    enumerator_55962.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_57894 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_57894.hasCurrentObject ()) {
    {
    routine_generateWrapperContents (constinArgument_inFilewrapperName, enumerator_57894.current_lkey (HERE).readProperty_string (), enumerator_57894.current_mWrapperDirectoryIndex (HERE), enumerator_57894.current_mRegularFileMap (HERE), enumerator_57894.current_mDirectoryMap (HERE), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)) ;
    }
    enumerator_57894.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1427)).add_operation (GALGAS_string ("' directory\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1427)).add_operation (GALGAS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1427)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1429)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1428)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1429)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1429)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1429)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1429)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1430)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1430)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1430)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1430)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1430)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1427)) ;
  cEnumerator_wrapperFileMap enumerator_58495 (constinArgument_inFilewrapperRegularFileMap, kENUMERATION_UP) ;
  while (enumerator_58495.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperFile_").add_operation (enumerator_58495.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1432)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1432)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1432)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1432)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1432)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1432)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1432)) ;
    enumerator_58495.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  NULL\n").add_operation (GALGAS_string ("} ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1434)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1434)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1437)).add_operation (GALGAS_string ("' directory\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1437)).add_operation (GALGAS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1437)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1439)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1438)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1439)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1439)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1439)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1439)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1440)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1440)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1440)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1440)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1440)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1437)) ;
  cEnumerator_wrapperDirectoryMap enumerator_59122 (constinArgument_inFilewrapperDirectoryMap, kENUMERATION_UP) ;
  while (enumerator_59122.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperDirectory_").add_operation (enumerator_59122.current_mWrapperDirectoryIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1442)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1442)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1442)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1442)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1442)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1442)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1442)) ;
    enumerator_59122.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  NULL\n").add_operation (GALGAS_string ("} ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1444)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1444)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1447)).add_operation (GALGAS_string ("'\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1447)).add_operation (GALGAS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1447)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1448)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1448)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1448)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1449)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1448)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1449)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1449)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 1450)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1451)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1451)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1451)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1451)).add_operation (GALGAS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1451)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1452)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1452)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1453)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1453)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1453)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1453)).add_operation (GALGAS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1453)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1454)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1454)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1454)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1454)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1454)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1454)).add_operation (GALGAS_string (") ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1454)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1447)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464)) ;
  GALGAS_string var_filewrapperImplementation_60483 = GALGAS_string::makeEmptyString () ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = this ;
  routine_generateWrapperContents (temp_1.readProperty_mFilewrapperName (), GALGAS_string::makeEmptyString (), GALGAS_uint (uint32_t (0U)), temp_2.readProperty_mFilewrapperFileMap (), temp_3.readProperty_mFilewrapperDirectoryMap (), var_filewrapperImplementation_60483, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1466)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, temp_4.readProperty_mFilewrapperName (), var_filewrapperImplementation_60483 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_5 = this ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_60955 (temp_5.readProperty_mFilewrapperTemplateListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_60955.hasCurrentObject ()) {
    GALGAS_string var_generatedCodeForInstructionList_61102 = GALGAS_string::makeEmptyString () ;
    GALGAS_uint var_temporaryVariableIndex_61144 = GALGAS_uint (uint32_t (0U)) ;
    GALGAS_stringset var_unusedVariableCppNameSet_61192 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1483)) ;
    var_unusedVariableCppNameSet_61192.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1484))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1484)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_61289 (enumerator_60955.current_mFilewrapperTemplateFormalInputParameters (HERE), kENUMERATION_UP) ;
    while (enumerator_61289.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_61192.addAssign_operation (enumerator_61289.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1486)) ;
      enumerator_61289.gotoNextObject () ;
    }
    GALGAS_bool var_useColumnMarker_61434 = GALGAS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction (enumerator_60955.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList_61102, ioArgument_ioInclusionSet, var_temporaryVariableIndex_61144, var_unusedVariableCppNameSet_61192, var_useColumnMarker_61434, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1489)) ;
    }
    const GALGAS_filewrapperDeclarationForGeneration temp_6 = this ;
    outArgument_outImplementation.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, temp_6.readProperty_mFilewrapperName (), enumerator_60955.current_mFilewrapperTemplateName (HERE), enumerator_60955.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet_61192, var_useColumnMarker_61434, var_generatedCodeForInstructionList_61102 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1498))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1498)) ;
    enumerator_60955.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedTypeGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedTypeGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedTypeGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_predefinedTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_predefinedTypeGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypesImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"all-predefined-types.h\"\n"
    "#include \"galgas2/cCollectionElement.h\"\n"
    "#include \"galgas2/cSortedListElement.h\"\n"
    "#include \"galgas2/capSortedListElement.h\"\n"
    "#include \"galgas2/C_Compiler.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement::cMapElement (const GALGAS_lstring & inLKey\n"
    "                          COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mProperty_lkey (inLKey) {\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#pragma once\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"strings/C_String.h\"\n"
    "#include \"time/C_Timer.h\"\n"
    "#include \"galgas2/AC_GALGAS_root.h\"\n"
    "#include \"galgas2/C_galgas_type_descriptor.h\"\n"
    "#include \"galgas2/typeComparisonResult.h\"\n"
    "#include \"galgas2/cGenericAbstractEnumerator.h\"\n"
    "#include \"galgas2/cEnumerator_range.h\"\n"
    "#include \"galgas2/AC_GALGAS_list.h\"\n"
    "#include \"galgas2/AC_GALGAS_sortedlist.h\"\n"
    "#include \"galgas2/AC_GALGAS_map.h\"\n"
    "#include \"galgas2/AC_GALGAS_reference_class.h\"\n"
    "#include \"galgas2/AC_GALGAS_value_class.h\"\n"
    "#include \"galgas2/AC_GALGAS_enumAssociatedValues.h\"\n"
    "#include \"galgas2/AC_GALGAS_graph.h\"\n"
    "#include \"galgas2/acStrongPtr_class.h\"\n"
    "#include \"galgas2/cPtr_weakReference_proxy.h\"\n"
    "#include \"galgas2/AC_GALGAS_weak_reference.h\"\n"
    "#include \"command_line_interface/C_BoolCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_UIntCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_StringCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_StringListCommandLineOption.h\"\n"
    "#include \"utilities/C_PrologueEpilogue.h\"\n"
    "#include \"utilities/C_BigInt.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class C_Compiler ;\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"galgas2/cCollectionElement.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cMapElement : public cCollectionElement {\n"
    "//--- Attribut\n"
    "  public: GALGAS_lstring mProperty_lkey ;\n"
    "\n"
    "//--- Default constructor\n"
    "  public: cMapElement (const GALGAS_lstring & inLKey\n"
    "                        COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- No copy\n"
    "  private: cMapElement (const cMapElement &) ;\n"
    "  private: cMapElement & operator = (const cMapElement &) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"galgas2/cSortedListElement.h\"\n"
    "#include \"galgas2/capSortedListElement.h\"\n"
    "#include \"galgas2/C_galgas_function_descriptor.h\"\n"
    "#include \"galgas2/cObjectArray.h\"\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @sint type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_sint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: int32_t mSIntValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline int32_t intValue (void) const { return mSIntValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_sint (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_sint constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_sint (const int32_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @sint64 type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_sint_36__34_ : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: int64_t mSInt64Value ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline int64_t int64Value (void) const { return mSInt64Value ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_sint_36__34_ (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_sint_36__34_ constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_sint_36__34_ (const int64_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate object_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @object type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cPtr_object ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_object : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data member\n"
    "  private: cPtr_object * mSharedObject ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedObject != NULL ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_object (void) ;\n"
    "\n"
    "//--------------------------------- Constructor from pointer\n"
    "  public: GALGAS_object (AC_GALGAS_root * inObjectPointer\n"
    "                          COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_object (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_object (const GALGAS_object & inSource) ;\n"
    "  public: GALGAS_object & operator = (const GALGAS_object & inSource) ;\n"
    "\n"
    "//--------------------------------- Embedded Object\n"
    "  public: const AC_GALGAS_root * embeddedObject (void) const ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @uint type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_uint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: uint32_t mUIntValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline uint32_t uintValue (void) const { return mUIntValue ; }\n"
    "  public: inline void increment (void) { mUIntValue ++ ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_uint (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_uint constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public: GALGAS_uint (const uint32_t inValue) ;\n"
    "  public: GALGAS_uint (const bool inValid, const uint32_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//  @uint64 type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_uint_36__34_ : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: uint64_t mUInt64Value ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline uint64_t uint64Value (void) const { return mUInt64Value ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_uint_36__34_ (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_uint_36__34_ constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_uint_36__34_ (const uint64_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bool_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("@bool type").stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typedef enum {kBoolNotValid, kBoolFalse, kBoolTrue} enumGalgasBool ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_bool : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: bool mBoolValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }\n"
    "  public: inline bool boolValue (void) const { return mBoolValue ; }\n"
    "  public: enumGalgasBool boolEnum (void) const ;\n"
    "\n"
    "//--------------------------------- Drop\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_bool (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_bool constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public: GALGAS_bool (const bool inValue) ; // Is built\n"
    "  public: GALGAS_bool (const bool inBuilt, const bool inValue) ;\n"
    "\n"
    "//--------------------------------- Constructor for comparison result\n"
    "  public: GALGAS_bool (const typeComparisonKind inComparisonKind,\n"
    "                        const typeComparisonResult inComparisonResult) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "// @binaryset type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"bdd/C_BDD.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_binaryset : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: C_BDD mBDD ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline C_BDD bddValue (void) const { return mBDD ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_binaryset (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_binaryset (const C_BDD & inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate function_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @function type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class C_galgas_function_descriptor ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_function : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data member\n"
    "  private: const C_galgas_function_descriptor * mFunctionDescriptor ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return NULL != mFunctionDescriptor ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mFunctionDescriptor = NULL ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline const C_galgas_function_descriptor * functionValue (void) const { return mFunctionDescriptor ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_function (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_function (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_function (const GALGAS_function & inSource) ;\n"
    "  public: GALGAS_function & operator = (const GALGAS_function & inSource) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_function (const C_galgas_function_descriptor * inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate type_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @type type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_type : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: const C_galgas_type_descriptor * mTypeDescriptor ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: inline bool isValid (void) const { return NULL != mTypeDescriptor ; }\n"
    "  public: inline void drop (void) { mTypeDescriptor = NULL ; }\n"
    "  public: inline const C_galgas_type_descriptor * typeValue (void) const { return mTypeDescriptor ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_type (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_type (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_type (const GALGAS_type & inSource) ;\n"
    "  public: GALGAS_type & operator = (const GALGAS_type & inSource) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_type (const C_galgas_type_descriptor * inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate location_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @location type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"galgas2/C_LocationInSource.h\"\n"
    "#include \"galgas2/C_SourceTextInString.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_location : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: C_LocationInSource mStartLocationInSource ;\n"
    "  private: C_LocationInSource mEndLocationInSource ;\n"
    "  private: C_SourceTextInString mSourceText ;\n"
    "  private: bool mIsValid ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "  public: C_LocationInSource startLocation (void) const { return mStartLocationInSource ; }\n"
    "  public: C_LocationInSource endLocation (void) const { return mEndLocationInSource ; }\n"
    "  public: C_SourceTextInString sourceText (void) const { return mSourceText ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_location (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_location (const C_LocationInSource & inStartLocationInSource,\n"
    "                            const C_LocationInSource & inEndLocationInSource,\n"
    "                            const C_SourceTextInString & inSourceText) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate data_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @data type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_data : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: C_Data mData ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline C_Data dataValue (void) const { return mData ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_data (void) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public: GALGAS_data (const C_Data & inData) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate char_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @char type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_char : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: utf32 mCharValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline utf32 charValue (void) const { return mCharValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_char (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_char constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_char (const utf32 inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate double_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//  @double type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_double : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: double mDoubleValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public: inline double doubleValue (void) const { return mDoubleValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_double (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_double constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_double (const double inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate string_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @string type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "AC_OutputStream & operator << (AC_OutputStream & inStream,\n"
    "                               const GALGAS_string & inString) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "AC_OutputStream & operator << (AC_OutputStream & inStream,\n"
    "                               const GALGAS_lstring & inString) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_string : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: bool mIsValid ;\n"
    "  private: C_String mString ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "  public: inline C_String stringValue (void) const { return mString ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_string (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public: static GALGAS_string constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Constructor for making an empty string\n"
    "  public: static GALGAS_string makeEmptyString (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_string (const C_String & inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @stringset type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_stringset : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: class cSharedStringsetRoot * mSharedRoot ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedRoot != NULL ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_stringset (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_stringset (void) ;\n"
    "\n"
    "//--------------------------------- In debug mode : check method\n"
    "  protected: void checkStringset (LOCATION_ARGS) const ;\n"
    "\n"
    "//--------------------------------- Insulate\n"
    "  protected: void insulate (LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @filewrapper type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cRegularFileWrapper {\n"
    "  public: const char * mName ;\n"
    "  public: const char * mExtension ;\n"
    "  public: const bool mIsTextFile ; // True: text file, false: binary file\n"
    "  public: const uint32_t mFileLength ;\n"
    "  public: const char * mContents ;\n"
    "\n"
    "//--- Constructor\n"
    "  public: cRegularFileWrapper (const char * inName,\n"
    "                                const char * inExtension,\n"
    "                                const bool inIsTextFile,\n"
    "                                const uint32_t inFileLength,\n"
    "                                const char * inContents) ;\n"
    "\n"
    "//--- No copy\n"
    "  private: cRegularFileWrapper (const cRegularFileWrapper &) ;\n"
    "  private: cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cDirectoryWrapper {\n"
    "  public: const char * mDirectoryName ;\n"
    "  public: const uint32_t mFileCount ;\n"
    "  public: const cRegularFileWrapper * * const mFiles ;\n"
    "  public: const uint32_t mDirectoryCount ;\n"
    "  public: const cDirectoryWrapper * * mDirectories ;\n"
    "\n"
    "//--- Constructor\n"
    "  public: cDirectoryWrapper (const char * inDirectoryName,\n"
    "                              const uint32_t inFileCount,\n"
    "                              const cRegularFileWrapper * * const inFiles,\n"
    "                              const uint32_t inDirectoryCount,\n"
    "                              const cDirectoryWrapper * * inDirectories) ;\n"
    "\n"
    "//--- No copy\n"
    "  private: cDirectoryWrapper (const cDirectoryWrapper &) ;\n"
    "  private: cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_filewrapper : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private: const cDirectoryWrapper * mRootDirectoryPtr ;\n"
    "  private: C_String mCurrentDirectory ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return NULL != mRootDirectoryPtr ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mRootDirectoryPtr = NULL ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_filewrapper (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public: GALGAS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_filewrapper (const GALGAS_filewrapper & inSource) ;\n"
    "  public: GALGAS_filewrapper & operator = (const GALGAS_filewrapper & inSource) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate application_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("@application type").stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_application : public AC_GALGAS_root {\n"
    "//--------------------------------- Accessors\n"
    "  public: inline bool isValid (void) const { return false ; }\n"
    "  public: inline void drop (void) { }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_application (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public: virtual ~ GALGAS_application (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_application (const GALGAS_application & inSource) ;\n"
    "  public: GALGAS_application & operator = (const GALGAS_application & inSource) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @bigint type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_bigint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private properties\n"
    "  private: bool mIsValid ;\n"
    "  private: C_BigInt mValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: inline C_BigInt bigintValue (void) const { return mValue ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_bigint (void) ;\n"
    "\n"
    "//--------------------------------- Constructor\n"
    "  public: GALGAS_bigint (const C_BigInt & inValue) ;\n"
    "  public: GALGAS_bigint (const char * inDecimalString, C_Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Destructor\n"
    "  public: virtual ~ GALGAS_bigint (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate timer_type'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   @timer type\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_timer : public AC_GALGAS_root {\n"
    "//--------------------------------- Private properties\n"
    "  private: bool mIsValid ;\n"
    "  private: C_Timer mTimer ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: inline bool isValid (void) const { return mIsValid ; }\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) { mIsValid = false ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_timer (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_primitiveTypeForGeneration::getter_appendPrimitiveTypeDeclaration (C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outHeader ; // Returned variable
  const GALGAS_primitiveTypeForGeneration temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_predefinedTypeKindEnum::kNotBuilt:
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_object:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1568))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1570))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1572))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1574))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1576))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_char:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1578))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_double:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1580))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_string:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1582))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_stringset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1584))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bool:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1586))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_binaryset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1588))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_function:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1590))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_location:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1592))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_type:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1594))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_data:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1596))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_filewrapper:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1598))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_application:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1600))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bigint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1602))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_timer:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1604))) ;
    }
    break ;
  }
  const GALGAS_primitiveTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_66131 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1606)) ;
  const GALGAS_primitiveTypeForGeneration temp_2 = this ;
  result_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_66131.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1609)), var_selfTypeDefinition_66131.readProperty_mIsConcrete (), var_selfTypeDefinition_66131.readProperty_mConstructorMap (), var_selfTypeDefinition_66131.readProperty_mGetterMap (), var_selfTypeDefinition_66131.readProperty_mSetterMap (), var_selfTypeDefinition_66131.readProperty_mInstanceMethodMap (), var_selfTypeDefinition_66131.readProperty_mClassMethodMap (), var_selfTypeDefinition_66131.readProperty_mOptionalMethodMap (), var_selfTypeDefinition_66131.readProperty_mEnumerationDescriptor (), var_selfTypeDefinition_66131.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_66131.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_66131.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1607))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1607)) ;
//---
  return result_outHeader ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primitiveTypeForGeneration appendPrimitiveTypePreDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_primitiveTypeForGeneration::method_appendPrimitiveTypePreDeclaration (GALGAS_string & ioArgument_ioHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_primitiveTypeForGeneration temp_0 = this ;
  ioArgument_ioHeader.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1628)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1628)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1628)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles (const GALGAS_string constinArgument_inDirectory,
                                          const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationListForGeneration,
                                          GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                          GALGAS_stringlist & ioArgument_ioToolCppFileList,
                                          GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_generatedCode_67786 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1643))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_67886 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_67886.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_67886.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1645)).boolEnum () ;
      if (kBoolTrue == test_0) {
        callExtensionMethod_appendPrimitiveTypePreDeclaration ((cPtr_semanticDeclarationForGeneration *) enumerator_67886.current_mDeclaration (HERE).ptr (), var_generatedCode_67786, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1646)) ;
      }
    }
    enumerator_67886.gotoNextObject () ;
  }
  var_generatedCode_67786.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1649)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_68103 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_68103.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_68103.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1651)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generatedCode_67786.plusAssign_operation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_68103.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1652)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1652)) ;
      }
    }
    enumerator_68103.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_68294 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_68294.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_68294.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1656)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_stringset joker_68422 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1657)) ;
        GALGAS_string var_code_68441 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_68294.current_mDeclaration (HERE).ptr (), joker_68422, var_code_68441, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1657)) ;
        var_generatedCode_67786.plusAssign_operation(var_code_68441, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1658)) ;
      }
    }
    enumerator_68294.gotoNextObject () ;
  }
  var_generatedCode_67786.plusAssign_operation(GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1661))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1661)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_68597 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_68597.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_68597.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1663)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_stringset joker_68738 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1664)) ;
        GALGAS_string var_headerString_32__68766 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_68597.current_mDeclaration (HERE).ptr (), constinArgument_inDirectory, joker_68738, var_headerString_32__68766, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1664)) ;
        var_generatedCode_67786.plusAssign_operation(var_headerString_32__68766, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1665)) ;
      }
    }
    enumerator_68597.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1668)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1669)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1670)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.h"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_generatedCode_67786, GALGAS_string ("\n"
        "\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1671)) ;
      }
    }
  }
  var_generatedCode_67786 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1684))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_69531 (constinArgument_inSemanticDeclarationListForGeneration, kENUMERATION_UP) ;
  while (enumerator_69531.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_69531.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1686)).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_generatedCode_67786.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_69531.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1687)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1687)) ;
        GALGAS_stringset joker_69750 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1688)) ;
        GALGAS_string var_code_69769 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_69531.current_mDeclaration (HERE).ptr (), GALGAS_unifiedTypeMap::constructor_emptyMap (SOURCE_FILE ("semanticGeneration.galgas", 1688)), joker_69750, var_code_69769, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1688)) ;
        var_generatedCode_67786.plusAssign_operation(var_code_69769, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1689)) ;
      }
    }
    enumerator_69531.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1692)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioToolCppFileList.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1693)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1694)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.cpp"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_generatedCode_67786, GALGAS_string ("\n"
        "\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1695)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticFileGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticFileGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileHeader'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (C_Compiler * /* inCompiler */,
                                                                                     const GALGAS_string & /* in_COMPONENT_5F_NAME */,
                                                                                     const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#pragma once\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"all-predefined-types.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_336_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_336 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_336.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_336.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_336_.increment () ;
      enumerator_336.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (C_Compiler * /* inCompiler */,
                                                                                             const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#include \"galgas2/C_Compiler.h\"\n"
    "#include \"galgas2/C_galgas_io.h\"\n"
    "#include \"galgas2/C_galgas_CLI_Options.h\"\n"
    "#include \"utilities/C_PrologueEpilogue.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_315_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_315 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_315.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_315.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_315_.increment () ;
      enumerator_315.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedListTypeAST'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPredefinedListTypeAST (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                          const GALGAS_string constinArgument_inElementTypeName,
                                          GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_1318 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 23)) ;
  var_attributeList_1318.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 26))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 26)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 27))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 27)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 29))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 24)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 32)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 32))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 32)), var_attributeList_1318  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 30))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 30)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 35)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefined2StringListTypeAST'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPredefined_32_StringListTypeAST (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                    GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_2030 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 44)) ;
  var_attributeList_2030.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 47))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 47)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue0"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 48))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 48)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 50))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 45)) ;
  var_attributeList_2030.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 53))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 53)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue1"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 54))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 54)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 56))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 51)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("2stringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 60))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 60)), var_attributeList_2030  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 58))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 58)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("2stringlist"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 63)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefined2LStringListTypeAST'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPredefined_32_LStringListTypeAST (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                     GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_2922 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 72)) ;
  var_attributeList_2922.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 75))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 75)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue0"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 76))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 76)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 78))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 73)) ;
  var_attributeList_2922.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 81))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 81)), GALGAS_lstring::constructor_new (GALGAS_string ("mValue1"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 82))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 82)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 84))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 79)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("2lstringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 88))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 88)), var_attributeList_2922  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 86))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 86)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("2lstringlist"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 91)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForTypeWithLocation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendStructASTForTypeWithLocation (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                 const GALGAS_string constinArgument_inElementTypeName,
                                                 GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_3792 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 101)) ;
  var_attributeList_3792.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 104))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 104)), GALGAS_lstring::constructor_new (constinArgument_inElementTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 105))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 105)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 107))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 102)) ;
  var_attributeList_3792.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 110))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 110)), GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 111))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 111)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 113))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 108)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 116)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 116))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 116)), var_attributeList_3792, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 114))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 114)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 120)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForRangeType'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendStructASTForRangeType (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                          GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_4724 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 129)) ;
  var_attributeList_4724.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 132))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 132)), GALGAS_lstring::constructor_new (GALGAS_string ("start"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 133))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 133)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 135))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 130)) ;
  var_attributeList_4724.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 138))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 138)), GALGAS_lstring::constructor_new (GALGAS_string ("length"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 139))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 139)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 141))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 136)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (GALGAS_bool (true), GALGAS_lstring::constructor_new (GALGAS_string ("range"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 144))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 144)), var_attributeList_4724, GALGAS_string ("uint")  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 142))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 142)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("range"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 148)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'insertInUsefulnessEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_insertInUsefulnessEntities (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                         const GALGAS_string constinArgument_inTypeName,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_typeUsefulnessName_5513 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (constinArgument_inTypeName, GALGAS_location::constructor_nowhere (SOURCE_FILE ("predefinedTypes.galgas", 154))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 154)) ;
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_typeUsefulnessName_5513  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 155)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                        GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_applicationPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("application"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_application (SOURCE_FILE ("predefinedTypes.galgas", 164))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 164))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 164)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("application"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 165)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_bigintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("bigint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bigint (SOURCE_FILE ("predefinedTypes.galgas", 166))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 166))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 166)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("bigint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 167)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_binarysetPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("binaryset"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_binaryset (SOURCE_FILE ("predefinedTypes.galgas", 168))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 168))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 168)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("binaryset"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 169)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_boolPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("bool"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_bool (SOURCE_FILE ("predefinedTypes.galgas", 170))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 170))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 170)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("bool"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 171)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_charPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("char"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_char (SOURCE_FILE ("predefinedTypes.galgas", 172))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 172))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 172)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("char"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 173)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_dataPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("data"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_data (SOURCE_FILE ("predefinedTypes.galgas", 174))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 174))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 174)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("data"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 175)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_doublePredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("double"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_double (SOURCE_FILE ("predefinedTypes.galgas", 176))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 176))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 176)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("double"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 177)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_filewrapperPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_filewrapper (SOURCE_FILE ("predefinedTypes.galgas", 178))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 178))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 178)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("filewrapper"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 179)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_functionPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("function"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_function (SOURCE_FILE ("predefinedTypes.galgas", 180))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 180))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 180)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("function"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 181)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_locationPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("location"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_location (SOURCE_FILE ("predefinedTypes.galgas", 182))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 182))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 182)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("location"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 183)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_objectPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("object"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_object (SOURCE_FILE ("predefinedTypes.galgas", 184))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 184))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 184)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("object"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 185)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("sint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint (SOURCE_FILE ("predefinedTypes.galgas", 186))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 186))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 186)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("sint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 187)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sint_36__34_PredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("sint64"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_sint_36__34_ (SOURCE_FILE ("predefinedTypes.galgas", 188))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 188))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 188)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("sint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 189)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("string"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_string (SOURCE_FILE ("predefinedTypes.galgas", 190))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 190))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 190)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("string"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 191)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringsetPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("stringset"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_stringset (SOURCE_FILE ("predefinedTypes.galgas", 192))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 192))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 192)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("stringset"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 193)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_timerPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("timer"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_timer (SOURCE_FILE ("predefinedTypes.galgas", 194))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 194))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 194)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("timer"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 195)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_typePredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("type"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_type (SOURCE_FILE ("predefinedTypes.galgas", 196))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 196))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 196)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("type"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 197)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uintPredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("uint"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint (SOURCE_FILE ("predefinedTypes.galgas", 198))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 198))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 198)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("uint"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 199)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uint_36__34_PredefinedTypeAST::constructor_new (GALGAS_bool (true), GALGAS_string ("uint64"), GALGAS_predefinedTypeKindEnum::constructor_predefined_5F_uint_36__34_ (SOURCE_FILE ("predefinedTypes.galgas", 200))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 200))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 200)) ;
  {
  routine_insertInUsefulnessEntities (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("uint64"), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 201)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("function"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 203)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("luint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 204)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("lstring"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 205)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("object"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 206)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 207)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("type"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 208)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 209)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 210)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 211)) ;
  }
  {
  routine_appendPredefinedListTypeAST (ioArgument_ioDeclarationListASTs, GALGAS_string ("lbigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 212)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("bool"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 214)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 215)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("char"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 216)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("double"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 217)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 218)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 219)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 220)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 221)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 222)) ;
  }
  {
  routine_appendPredefined_32_StringListTypeAST (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 224)) ;
  }
  {
  routine_appendPredefined_32_LStringListTypeAST (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 225)) ;
  }
  {
  routine_appendStructASTForRangeType (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 227)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                             GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_predefinedTypeAST temp_0 = this ;
  GALGAS_lstring var_key_11858 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 241)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 241))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 241)) ;
  {
  const GALGAS_predefinedTypeAST temp_1 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11858, temp_1, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 242)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optionalMethodMap var_optionalMethodMap_12490 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("predefinedTypes.galgas", 253)) ;
  GALGAS_constructorMap var_constructorMap_12605 ;
  const GALGAS_predefinedTypeAST temp_0 = this ;
  callExtensionMethod_getConstructorMap ((cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioSemanticContext.mProperty_mTypeMap, var_constructorMap_12605, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 254)) ;
  GALGAS_getterMap var_getterMap_12682 ;
  const GALGAS_predefinedTypeAST temp_1 = this ;
  callExtensionMethod_getGetterMap ((cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_12682, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 255)) ;
  GALGAS_setterMap var_setterMap_12759 ;
  const GALGAS_predefinedTypeAST temp_2 = this ;
  callExtensionMethod_getSetterMap ((cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioSemanticContext.mProperty_mTypeMap, var_setterMap_12759, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 256)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_12860 ;
  const GALGAS_predefinedTypeAST temp_3 = this ;
  callExtensionMethod_getInstanceMethodMap ((cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioSemanticContext.mProperty_mTypeMap, var_instanceMethodMap_12860, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 257)) ;
  GALGAS_classMethodMap var_classMethodMap_12952 ;
  const GALGAS_predefinedTypeAST temp_4 = this ;
  callExtensionMethod_getClassMethodMap ((cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioSemanticContext.mProperty_mTypeMap, var_classMethodMap_12952, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 258)) ;
  GALGAS_functionSignature var_addAssignArgumentList_13061 ;
  const GALGAS_predefinedTypeAST temp_5 = this ;
  callExtensionMethod_getAddAssignArgumentList ((cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioSemanticContext.mProperty_mTypeMap, var_addAssignArgumentList_13061, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 259)) ;
  GALGAS_enumerationDescriptorList var_enumerationList_13174 ;
  GALGAS_string var_enumeratedTypeName_13210 ;
  const GALGAS_predefinedTypeAST temp_6 = this ;
  callExtensionMethod_getEnumerationList ((cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioSemanticContext.mProperty_mTypeMap, var_enumerationList_13174, var_enumeratedTypeName_13210, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 260)) ;
  {
  const GALGAS_predefinedTypeAST temp_7 = this ;
  GALGAS_unifiedTypeMapEntry joker_13302 ; // Joker input parameter
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_7.readProperty_mPredefinedTypeName (), joker_13302, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 265)) ;
  }
  GALGAS_unifiedTypeMapEntry var_enumeratedTypeEntry_13411 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, var_enumeratedTypeName_13210.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_enumeratedTypeEntry_13411 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("predefinedTypes.galgas", 272)) ;
    }
  }
  if (kBoolFalse == test_8) {
    {
    extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_enumeratedTypeName_13210, var_enumeratedTypeEntry_13411, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 274)) ;
    }
  }
  {
  const GALGAS_predefinedTypeAST temp_9 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, GALGAS_lstring::constructor_new (temp_9.readProperty_mPredefinedTypeName (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 282))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 282)), GALGAS_bool (false), var_getterMap_12682, var_setterMap_12759, var_instanceMethodMap_12860, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 277)) ;
  }
  const GALGAS_predefinedTypeAST temp_10 = this ;
  const GALGAS_predefinedTypeAST temp_11 = this ;
  const GALGAS_predefinedTypeAST temp_12 = this ;
  const GALGAS_predefinedTypeAST temp_13 = this ;
  const GALGAS_predefinedTypeAST temp_14 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_13993 = GALGAS_unifiedTypeDefinition::constructor_new (GALGAS_lstring::constructor_new (temp_10.readProperty_mPredefinedTypeName (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 291))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 291)), temp_11.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("predefinedTypes.galgas", 294)), GALGAS_typeKindEnum::constructor_predefinedType (SOURCE_FILE ("predefinedTypes.galgas", 295)), GALGAS_bool (kIsEqual, temp_12.readProperty_mPredefinedTypeName ().objectCompare (GALGAS_string ("stringset"))), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 297)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("predefinedTypes.galgas", 298)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 299)), var_constructorMap_12605, var_getterMap_12682, var_setterMap_12759, var_instanceMethodMap_12860, var_classMethodMap_12952, var_optionalMethodMap_12490, var_enumerationList_13174, callExtensionGetter_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_13.ptr (), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 307)), var_addAssignArgumentList_13061, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("predefinedTypes.galgas", 309)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 310)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 311)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("predefinedTypes.galgas", 312)), GALGAS_bool (false), var_enumeratedTypeEntry_13411, extensionGetter_defaultConstructorName (temp_14.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 315)), GALGAS_string ("galgas2/predefined-types"), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("predefinedTypes.galgas", 317))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 290)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_13993, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 319)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      const GALGAS_string /* constinArgument_inProductDirectory */,
                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                      GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_predefinedTypeAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_15418 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_0.readProperty_mPredefinedTypeName (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 333))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 333)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15418, var_nameForUsefulness_15418, inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 334)) ;
  }
  const GALGAS_predefinedTypeAST temp_1 = this ;
  const GALGAS_predefinedTypeAST temp_2 = this ;
  const GALGAS_predefinedTypeAST temp_3 = this ;
  const GALGAS_predefinedTypeAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("Predefined type ").add_operation (temp_1.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 337)), GALGAS_primitiveTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_2.readProperty_mPredefinedTypeName (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 339))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 339)), temp_3.readProperty_mPredefinedTypeName (), temp_4.readProperty_mKind ()  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 338))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 336)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkUsefulEntities'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkUsefulEntities (const GALGAS_usefulEntitiesGraph constinArgument_inUsefulEntitiesGraph,
                                  const GALGAS_lstringlist constinArgument_inRootEntities,
                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_value ()) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("useful-entities-computation.galgas", 36)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringlist var_undefinedNodeList_1885 = constinArgument_inUsefulEntitiesGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("useful-entities-computation.galgas", 38)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsStrictSup, var_undefinedNodeList_1885.getter_length (SOURCE_FILE ("useful-entities-computation.galgas", 39)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_string var_s_1987 = GALGAS_string ("usefulness computation, undefined nodes:") ;
          cEnumerator_stringlist enumerator_2048 (var_undefinedNodeList_1885, kENUMERATION_UP) ;
          while (enumerator_2048.hasCurrentObject ()) {
            var_s_1987.plusAssign_operation(GALGAS_string ("\n"
              "  - ").add_operation (enumerator_2048.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 42)) ;
            enumerator_2048.gotoNextObject () ;
          }
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 44)), var_s_1987, fixItArray3  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 44)) ;
        }
      }
      if (kBoolFalse == test_2) {
        GALGAS_lstringlist var_usefullEntityList_2227 = constinArgument_inUsefulEntitiesGraph.getter_accessibleNodesFrom (constinArgument_inRootEntities, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("useful-entities-computation.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 47)) ;
        GALGAS_stringset var_usefullEntitySet_2320 = GALGAS_stringset::constructor_setWithLStringList (var_usefullEntityList_2227  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 48)) ;
        GALGAS_stringset var_allEntitySet_2396 = GALGAS_stringset::constructor_setWithStringList (constinArgument_inUsefulEntitiesGraph.getter_keyList (SOURCE_FILE ("useful-entities-computation.galgas", 49))  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 49)) ;
        GALGAS_stringset var_unusedEntities_2487 = var_allEntitySet_2396.substract_operation (var_usefullEntitySet_2320, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 50)) ;
        GALGAS_uselessEntityLocationMap var_uselessEntityLocationMap_2582 = GALGAS_uselessEntityLocationMap::constructor_emptyMap (SOURCE_FILE ("useful-entities-computation.galgas", 51)) ;
        cEnumerator_stringset enumerator_2611 (var_unusedEntities_2487, kENUMERATION_UP) ;
        while (enumerator_2611.hasCurrentObject ()) {
          GALGAS_location var_l_2647 = constinArgument_inUsefulEntitiesGraph.getter_locationForKey (enumerator_2611.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 53)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsEqual, var_l_2647.objectCompare (GALGAS_location::constructor_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 54)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 55)), GALGAS_string ("unused entity, '").add_operation (enumerator_2611.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)).add_operation (GALGAS_string ("' (due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)).add_operation (GALGAS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 56)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 56)), fixItArray5  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)) ;
            }
          }
          if (kBoolFalse == test_4) {
            enumGalgasBool test_6 = kBoolTrue ;
            if (kBoolTrue == test_6) {
              test_6 = var_uselessEntityLocationMap_2582.getter_hasKey (var_l_2647.getter_locationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 57)) COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 57)).operator_not (SOURCE_FILE ("useful-entities-computation.galgas", 57)).boolEnum () ;
              if (kBoolTrue == test_6) {
                {
                var_uselessEntityLocationMap_2582.setter_insertKey (var_l_2647.getter_locationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 58)).getter_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 58)), var_l_2647, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 58)) ;
                }
              }
            }
          }
          enumerator_2611.gotoNextObject () ;
        }
        cEnumerator_uselessEntityLocationMap enumerator_3094 (var_uselessEntityLocationMap_2582, kENUMERATION_UP) ;
        while (enumerator_3094.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (enumerator_3094.current_mLocation (HERE), GALGAS_string ("unused entity, due to option --").add_operation (GALGAS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)), fixItArray7  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)) ;
          enumerator_3094.gotoNextObject () ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Function 'getterNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_getterNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inGetterName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("getter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)).add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)), constinArgument_inGetterName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 71)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_getterNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_getterNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_getterNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_getterNameForUsefulEntitiesGraph ("getterNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_getterNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_getterNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'setterNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_setterNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inSetterName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("setter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)).add_operation (constinArgument_inSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)), constinArgument_inSetterName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 77)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_setterNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_setterNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_setterNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_setterNameForUsefulEntitiesGraph ("setterNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_setterNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_setterNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'methodNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_methodNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inMethodName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("method @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)), constinArgument_inMethodName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 83)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_methodNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_methodNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_methodNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_methodNameForUsefulEntitiesGraph ("methodNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_methodNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_methodNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'lexiqueNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_lexiqueNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inLexiqueName,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (constinArgument_inLexiqueName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 89)), constinArgument_inLexiqueName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 89)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_lexiqueNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_lexiqueNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_lexiqueNameForUsefulEntitiesGraph (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_lexiqueNameForUsefulEntitiesGraph ("lexiqueNameForUsefulEntitiesGraph",
                                                                                   functionWithGenericHeader_lexiqueNameForUsefulEntitiesGraph,
                                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                                   1,
                                                                                   functionArgs_lexiqueNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'grammarNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_grammarNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inGrammarName,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("grammar ").add_operation (constinArgument_inGrammarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 95)), constinArgument_inGrammarName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 95)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_grammarNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_grammarNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_grammarNameForUsefulEntitiesGraph (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_grammarNameForUsefulEntitiesGraph ("grammarNameForUsefulEntitiesGraph",
                                                                                   functionWithGenericHeader_grammarNameForUsefulEntitiesGraph,
                                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                                   1,
                                                                                   functionArgs_grammarNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'syntaxNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_syntaxNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inSyntaxName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (constinArgument_inSyntaxName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 101)), constinArgument_inSyntaxName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 101)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_syntaxNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_syntaxNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_syntaxNameForUsefulEntitiesGraph (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxNameForUsefulEntitiesGraph ("syntaxNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_syntaxNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_syntaxNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'optionNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_optionNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inOptionName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("option ").add_operation (constinArgument_inOptionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 107)), constinArgument_inOptionName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 107)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_optionNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_optionNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_optionNameForUsefulEntitiesGraph (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_optionNameForUsefulEntitiesGraph ("optionNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_optionNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_optionNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'filewrapperNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_filewrapperNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFilewrapperName,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 113)), constinArgument_inFilewrapperName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 113)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_filewrapperNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_filewrapperNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                                      const GALGAS_location & /* inErrorLocation */
                                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_filewrapperNameForUsefulEntitiesGraph (operand0,
                                                         inCompiler
                                                         COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_filewrapperNameForUsefulEntitiesGraph ("filewrapperNameForUsefulEntitiesGraph",
                                                                                       functionWithGenericHeader_filewrapperNameForUsefulEntitiesGraph,
                                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                                       1,
                                                                                       functionArgs_filewrapperNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'filewrapperTemplateNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_filewrapperTemplateNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFilewrapperName,
                                                                       const GALGAS_lstring & constinArgument_inTemplateName,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper template ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)).add_operation (constinArgument_inTemplateName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)), constinArgument_inTemplateName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_filewrapperTemplateNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_filewrapperTemplateNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                                              const GALGAS_location & /* inErrorLocation */
                                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_filewrapperTemplateNameForUsefulEntitiesGraph (operand0,
                                                                 operand1,
                                                                 inCompiler
                                                                 COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_filewrapperTemplateNameForUsefulEntitiesGraph ("filewrapperTemplateNameForUsefulEntitiesGraph",
                                                                                               functionWithGenericHeader_filewrapperTemplateNameForUsefulEntitiesGraph,
                                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                                               2,
                                                                                               functionArgs_filewrapperTemplateNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'functionNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_functionNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFunctionName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("function ").add_operation (constinArgument_inFunctionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 126)), constinArgument_inFunctionName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 126)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_functionNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_functionNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_functionNameForUsefulEntitiesGraph (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_functionNameForUsefulEntitiesGraph ("functionNameForUsefulEntitiesGraph",
                                                                                    functionWithGenericHeader_functionNameForUsefulEntitiesGraph,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_functionNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'procedureNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_procedureNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inProcName,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("procedure ").add_operation (constinArgument_inProcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 132)), constinArgument_inProcName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 132)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_procedureNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_procedureNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_procedureNameForUsefulEntitiesGraph (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_procedureNameForUsefulEntitiesGraph ("procedureNameForUsefulEntitiesGraph",
                                                                                     functionWithGenericHeader_procedureNameForUsefulEntitiesGraph,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_procedureNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'typeNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_typeNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inTypeName,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("type @").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 138)), constinArgument_inTypeName.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 138)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_typeNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_typeNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_typeNameForUsefulEntitiesGraph (operand0,
                                                  inCompiler
                                                  COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_typeNameForUsefulEntitiesGraph ("typeNameForUsefulEntitiesGraph",
                                                                                functionWithGenericHeader_typeNameForUsefulEntitiesGraph,
                                                                                & kTypeDescriptor_GALGAS_lstring,
                                                                                1,
                                                                                functionArgs_typeNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'afterNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_afterNameForUsefulEntitiesGraph (const GALGAS_location & constinArgument_inLocation,
                                                         C_Compiler *
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("after"), constinArgument_inLocation  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 144)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_afterNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_afterNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_location operand0 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_afterNameForUsefulEntitiesGraph (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_afterNameForUsefulEntitiesGraph ("afterNameForUsefulEntitiesGraph",
                                                                                 functionWithGenericHeader_afterNameForUsefulEntitiesGraph,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_afterNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'beforeNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_beforeNameForUsefulEntitiesGraph (const GALGAS_location & constinArgument_inLocation,
                                                          C_Compiler *
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("before"), constinArgument_inLocation  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 150)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_beforeNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_beforeNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_location operand0 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_beforeNameForUsefulEntitiesGraph (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_beforeNameForUsefulEntitiesGraph ("beforeNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_beforeNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_beforeNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'rootRuleNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_rootRuleNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFileExtension,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("rule .").add_operation (constinArgument_inFileExtension.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 156)), constinArgument_inFileExtension.readProperty_location ()  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 156)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_rootRuleNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_rootRuleNameForUsefulEntitiesGraph (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_rootRuleNameForUsefulEntitiesGraph (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_rootRuleNameForUsefulEntitiesGraph ("rootRuleNameForUsefulEntitiesGraph",
                                                                                    functionWithGenericHeader_rootRuleNameForUsefulEntitiesGraph,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_rootRuleNameForUsefulEntitiesGraph) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 96)) ;
  const GALGAS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 97)) ;
  const GALGAS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 98)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_if_5F_expression_4103 ;
  const GALGAS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_if_5F_expression_4103, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 112)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression_4346 ;
  const GALGAS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_then_5F_expression_4346, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 121)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression_4589 ;
  const GALGAS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_else_5F_expression_4589, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 130)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_if_5F_expression_4103.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 139)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_ifExpressionAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mOperatorLocation (), GALGAS_string ("the test expression type is '@").add_operation (extensionGetter_definition (var_if_5F_expression_4103.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 141)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 141)).add_operation (GALGAS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 141)), fixItArray5  COMMA_SOURCE_FILE ("expression-if.galgas", 140)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, var_then_5F_expression_4346.readProperty_mResultType ().objectCompare (var_else_5F_expression_4589.readProperty_mResultType ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_ifExpressionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GALGAS_string ("operand expression types are '@").add_operation (extensionGetter_definition (var_then_5F_expression_4346.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)).add_operation (GALGAS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)).add_operation (extensionGetter_definition (var_else_5F_expression_4589.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)).add_operation (GALGAS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 145)), fixItArray8  COMMA_SOURCE_FILE ("expression-if.galgas", 144)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      const GALGAS_ifExpressionAST temp_9 = this ;
      outArgument_outExpression = GALGAS_ifExpressionForGeneration::constructor_new (var_then_5F_expression_4346.readProperty_mResultType (), temp_9.readProperty_mOperatorLocation (), var_if_5F_expression_4103, var_then_5F_expression_4346, var_else_5F_expression_4589  COMMA_SOURCE_FILE ("expression-if.galgas", 149)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                GALGAS_string & outArgument_outCppExpression,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_ifExpression_6505 ;
  const GALGAS_ifExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression_6505, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 179)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-if.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 187)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 188)) ;
  const GALGAS_ifExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mThenExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 189)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 189)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 189)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 189)) ;
  GALGAS_string var_testVar_6768 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-if.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 190)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 191)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_6768, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 192)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 192)).add_operation (var_ifExpression_6505, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 192)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 192)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_6768, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 193)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 193)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 195)) ;
  }
  GALGAS_string var_thenExpression_7243 ;
  const GALGAS_ifExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mThenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression_7243, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 196)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 203)).add_operation (var_thenExpression_7243, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 203)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 203)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 204)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_6768, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 206)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 206)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 207)) ;
  }
  GALGAS_string var_elseExpression_7664 ;
  const GALGAS_ifExpressionForGeneration temp_3 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_3.readProperty_mElseExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression_7664, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 208)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 215)).add_operation (var_elseExpression_7664, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 215)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 215)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 216)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 217)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryPlusExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 53)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryPlusExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-unary-plus.galgas", 69)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 66)) ;
  GALGAS_unifiedTypeMapEntry var_type_2993 = outArgument_outExpression.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_2993, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 76)).readProperty_mHandledOperatorFlags ().getter_prefixPlusOperator (SOURCE_FILE ("expression-unary-plus.galgas", 76)).operator_not (SOURCE_FILE ("expression-unary-plus.galgas", 76)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_unaryPlusExpressionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_2993, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 78)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 78)).add_operation (GALGAS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 78)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 77)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 53)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_2983 ;
  const GALGAS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-unary-minus.galgas", 70)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2983, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 67)) ;
  GALGAS_unifiedTypeMapEntry var_type_3052 = var_expression_2983.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_3090 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_2983.ptr ())) ;
    if (NULL == var_exp_3090.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (var_exp_3090.readProperty_mResultType (), var_exp_3090.readProperty_mLocation (), var_exp_3090.readProperty_mValue ().operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 81))  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 78)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3052, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 83)).readProperty_mHandledOperatorFlags ().getter_prefixMinusOperator (SOURCE_FILE ("expression-unary-minus.galgas", 83)).operator_not (SOURCE_FILE ("expression-unary-minus.galgas", 83)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_unaryMinusExpressionAST temp_3 = this ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3052, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 85)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 85)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 85)), fixItArray4  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 84)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_unaryMinusExpressionAST temp_5 = this ;
      outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_3052, temp_5.readProperty_mOperatorLocation (), var_expression_2983  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 89)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 112)) ;
  GALGAS_string var_operand_4977 ;
  const GALGAS_unaryMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4977, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 114)) ;
  const GALGAS_unaryMinusExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_4977.add_operation (GALGAS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 122)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 122)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 122)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 122)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 123)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 123)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_type_2548 ;
  GALGAS_string var_sourceVariableCppName_2587 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_2640 ;
  {
  const GALGAS_varInExpressionAST temp_0 = this ;
  extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, temp_0.readProperty_mVarName (), var_type_2548, var_sourceVariableCppName_2587, var_nameForCheckingFormalParameterUsing_2640, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 60)) ;
  }
  const GALGAS_varInExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_2548, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_2587, var_nameForCheckingFormalParameterUsing_2640  COMMA_SOURCE_FILE ("expression-var.galgas", 66)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_varInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 92)) ;
  const GALGAS_varInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = temp_1.readProperty_mCppVarName () ;
  {
  const GALGAS_varInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("expression-var.galgas", 94)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_trueExpressionAST temp_0 = this ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-true-false.galgas", 80)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_falseExpressionAST temp_0 = this ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-true-false.galgas", 100)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_trueExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (true)") ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_falseExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (false)") ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@trueExpressionForGeneration isTrueExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_trueExpressionForGeneration::getter_isTrueExpression (C_Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_2850 = GALGAS_string::makeEmptyString () ;
  const GALGAS_literalStringExpressionAST temp_0 = this ;
  cEnumerator_stringlist enumerator_2869 (temp_0.readProperty_mStringSequence (), kENUMERATION_UP) ;
  while (enumerator_2869.hasCurrentObject ()) {
    var_s_2850.plusAssign_operation(enumerator_2869.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 73)) ;
    enumerator_2869.gotoNextObject () ;
  }
  const GALGAS_literalStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_2850  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 75)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_literalStringExpressionForGeneration temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mString ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_string::makeEmptyString ()") ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_literalStringExpressionForGeneration temp_2 = this ;
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string (").add_operation (temp_2.readProperty_mString ().getter_utf_38_Representation (SOURCE_FILE ("expression-literal-string.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 97)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 97)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                      const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalCharExpressionAST temp_0 = this ;
  const GALGAS_literalCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mCharacter ().readProperty_location (), temp_1.readProperty_mCharacter ().readProperty_char ()  COMMA_SOURCE_FILE ("expression-literal-char.galgas", 60)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalCharExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (TO_UNICODE (").add_operation (temp_0.readProperty_mCharacter ().getter_uint (SOURCE_FILE ("expression-literal-char.galgas", 83)).getter_string (SOURCE_FILE ("expression-literal-char.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("expression-literal-char.galgas", 83)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-char.galgas", 83)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalDoubleExpressionAST temp_0 = this ;
  const GALGAS_literalDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_double ()  COMMA_SOURCE_FILE ("expression-literal-double.galgas", 60)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalDoubleExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_double (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-double.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-literal-double.galgas", 84)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-double.galgas", 84)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUInt64ExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUInt64ExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                              GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                              const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalUInt_36__34_ExpressionAST temp_0 = this ;
  const GALGAS_literalUInt_36__34_ExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUInt_36__34_Type (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_uint_36__34_ ()  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 179)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSIntExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSIntExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                      const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalSIntExpressionAST temp_0 = this ;
  const GALGAS_literalSIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mSIntType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_sint ()  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 203)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSInt64ExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSInt64ExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                              GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                              const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalSInt_36__34_ExpressionAST temp_0 = this ;
  const GALGAS_literalSInt_36__34_ExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mSInt_36__34_Type (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_sint_36__34_ ()  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 223)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalBigIntExpressionAST temp_0 = this ;
  const GALGAS_literalBigIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_bigint ()  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 247)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUIntExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalUIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint (uint32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 270)).add_operation (GALGAS_string ("U))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 270)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUInt64ExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalUInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint_36__34_ (uint64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 287)).add_operation (GALGAS_string ("ULL))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 287)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSIntExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalSIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint (int32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 304)).add_operation (GALGAS_string ("L))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 304)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSInt64ExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalSInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint_36__34_ (int64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 321)).add_operation (GALGAS_string ("LL))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 321)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalBigIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bigint (\"").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 338)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 338)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 339)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 339)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 340)) ;
  const GALGAS_literalBigIntExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 341)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 341)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 162)) ;
  const GALGAS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 163)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_7436 ;
  const GALGAS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_7436, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 177)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_7476 = var_leftExpression_7436.readProperty_mResultType () ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_7776 ;
  const GALGAS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_7476, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_7776, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 187)) ;
  GALGAS_bool var_isComparable_7818 = extensionGetter_definition (var_leftType_7476, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 196)).readProperty_mHandledOperatorFlags ().getter_isComparable (SOURCE_FILE ("expression-comparison.galgas", 196)) ;
  GALGAS_bool var_isReferenceEquatable_7906 = extensionGetter_definition (var_leftType_7476, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 197)).readProperty_mHandledOperatorFlags ().getter_isReferenceEquatable (SOURCE_FILE ("expression-comparison.galgas", 197)) ;
  GALGAS_bool var_operatorIsAvailable_8007 ;
  GALGAS_string var_operatorName_8034 ;
  const GALGAS_comparisonExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mComparison ().enumValue ()) {
  case GALGAS_comparison::kNotBuilt:
    break ;
  case GALGAS_comparison::kEnum_equal:
    {
      var_operatorName_8034 = GALGAS_string ("==") ;
      var_operatorIsAvailable_8007 = var_isComparable_7818 ;
    }
    break ;
  case GALGAS_comparison::kEnum_notEqual:
    {
      var_operatorName_8034 = GALGAS_string ("!=") ;
      var_operatorIsAvailable_8007 = var_isComparable_7818 ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerOrEqual:
    {
      var_operatorName_8034 = GALGAS_string ("<=") ;
      var_operatorIsAvailable_8007 = var_isComparable_7818 ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerThan:
    {
      var_operatorName_8034 = GALGAS_string ("<") ;
      var_operatorIsAvailable_8007 = var_isComparable_7818 ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterOrEqual:
    {
      var_operatorName_8034 = GALGAS_string (">=") ;
      var_operatorIsAvailable_8007 = var_isComparable_7818 ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterThan:
    {
      var_operatorName_8034 = GALGAS_string (">") ;
      var_operatorIsAvailable_8007 = var_isComparable_7818 ;
    }
    break ;
  case GALGAS_comparison::kEnum_sameInstance:
    {
      var_operatorName_8034 = GALGAS_string ("===") ;
      var_operatorIsAvailable_8007 = var_isReferenceEquatable_7906 ;
    }
    break ;
  case GALGAS_comparison::kEnum_differentInstances:
    {
      var_operatorName_8034 = GALGAS_string ("!==") ;
      var_operatorIsAvailable_8007 = var_isReferenceEquatable_7906 ;
    }
    break ;
  }
  {
  const GALGAS_comparisonExpressionAST temp_3 = this ;
  routine_checkDiadicOperator (var_leftType_7476, var_rightExpression_7776.readProperty_mResultType (), var_operatorIsAvailable_8007, var_operatorName_8034, temp_3.readProperty_mOperatorLocation (), var_rightExpression_7776, inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 227)) ;
  }
  const GALGAS_comparisonExpressionAST temp_4 = this ;
  const GALGAS_comparisonExpressionAST temp_5 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), var_leftExpression_7436, temp_5.readProperty_mComparison (), var_rightExpression_7776  COMMA_SOURCE_FILE ("expression-comparison.galgas", 236)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_comparisonExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 264)) ;
  GALGAS_string var_leftTemporaryOperand_10329 ;
  const GALGAS_comparisonExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_10329, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 266)) ;
  GALGAS_string var_rightTemporaryOperand_10536 ;
  const GALGAS_comparisonExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_10536, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 274)) ;
  GALGAS_string var_operatorName_10586 ;
  const GALGAS_comparisonExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mComparison ().enumValue ()) {
  case GALGAS_comparison::kNotBuilt:
    break ;
  case GALGAS_comparison::kEnum_equal:
  case GALGAS_comparison::kEnum_sameInstance:
    {
      var_operatorName_10586 = GALGAS_string ("kIsEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_notEqual:
  case GALGAS_comparison::kEnum_differentInstances:
    {
      var_operatorName_10586 = GALGAS_string ("kIsNotEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerOrEqual:
    {
      var_operatorName_10586 = GALGAS_string ("kIsInfOrEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerThan:
    {
      var_operatorName_10586 = GALGAS_string ("kIsStrictInf") ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterOrEqual:
    {
      var_operatorName_10586 = GALGAS_string ("kIsSupOrEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterThan:
    {
      var_operatorName_10586 = GALGAS_string ("kIsStrictSup") ;
    }
    break ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_operatorName_10586, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 292)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 292)).add_operation (var_leftTemporaryOperand_10329, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 292)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 292)).add_operation (var_rightTemporaryOperand_10536, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 292)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 292)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 164)) ;
  const GALGAS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 165)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_7339 ;
  const GALGAS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_7339, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 179)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_7655 ;
  const GALGAS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_7655, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 188)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_7728 = var_leftExpression_7339.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_literalBigIntExpressionForGeneration var_left_7771 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_7339.ptr ())) ;
    if (NULL == var_left_7771.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GALGAS_literalUIntExpressionForGeneration var_right_7845 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_7655.ptr ())) ;
      if (NULL == var_right_7845.ptr ()) {
        test_2 = kBoolFalse ;
      }
      if (kBoolTrue == test_2) {
        const GALGAS_rightShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_7771.readProperty_mValue ().right_shift_operation (var_right_7845.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 203))  COMMA_SOURCE_FILE ("expression-additive.galgas", 200)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_literalBigIntExpressionForGeneration var_left_8118 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_7339.ptr ())) ;
      if (NULL == var_left_8118.ptr ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_literalBigIntExpressionForGeneration var_right_8192 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_7655.ptr ())) ;
        if (NULL == var_right_8192.ptr ()) {
          test_4 = kBoolFalse ;
        }
        if (kBoolTrue == test_4) {
          const GALGAS_rightShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_8118.readProperty_mValue ().right_shift_operation (var_right_8192.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 210))  COMMA_SOURCE_FILE ("expression-additive.galgas", 207)) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_7728, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 212)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 212)).operator_not (SOURCE_FILE ("expression-additive.galgas", 212)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_rightShiftExpressionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_7728, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 214)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 214)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 214)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 213)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_rightShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_7728, temp_9.readProperty_mOperatorLocation (), var_leftExpression_7339, GALGAS_binaryOperator::constructor_rightShift (SOURCE_FILE ("expression-additive.galgas", 222)), var_rightExpression_7655  COMMA_SOURCE_FILE ("expression-additive.galgas", 218)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 233)) ;
  const GALGAS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 234)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_10047 ;
  const GALGAS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_10047, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 248)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_10363 ;
  const GALGAS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_10363, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 257)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_10436 = var_leftExpression_10047.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_literalBigIntExpressionForGeneration var_left_10479 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_10047.ptr ())) ;
    if (NULL == var_left_10479.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GALGAS_literalUIntExpressionForGeneration var_right_10553 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_10363.ptr ())) ;
      if (NULL == var_right_10553.ptr ()) {
        test_2 = kBoolFalse ;
      }
      if (kBoolTrue == test_2) {
        const GALGAS_leftShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_10479.readProperty_mValue ().left_shift_operation (var_right_10553.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 272))  COMMA_SOURCE_FILE ("expression-additive.galgas", 269)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_literalBigIntExpressionForGeneration var_left_10826 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_10047.ptr ())) ;
      if (NULL == var_left_10826.ptr ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_literalBigIntExpressionForGeneration var_right_10900 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_10363.ptr ())) ;
        if (NULL == var_right_10900.ptr ()) {
          test_4 = kBoolFalse ;
        }
        if (kBoolTrue == test_4) {
          const GALGAS_leftShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_10826.readProperty_mValue ().left_shift_operation (var_right_10900.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 279))  COMMA_SOURCE_FILE ("expression-additive.galgas", 276)) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_10436, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 281)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 281)).operator_not (SOURCE_FILE ("expression-additive.galgas", 281)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_leftShiftExpressionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_10436, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 283)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 283)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 283)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 282)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_leftShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_10436, temp_9.readProperty_mOperatorLocation (), var_leftExpression_10047, GALGAS_binaryOperator::constructor_leftShift (SOURCE_FILE ("expression-additive.galgas", 291)), var_rightExpression_10363  COMMA_SOURCE_FILE ("expression-additive.galgas", 287)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 302)) ;
  const GALGAS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 303)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_12762 ;
  const GALGAS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_12762, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 317)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_13054 ;
  const GALGAS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_12762.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_13054, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 326)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_13127 = var_leftExpression_12762.readProperty_mResultType () ;
  {
  const GALGAS_addExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator (var_leftType_13127, var_rightExpression_13054.readProperty_mResultType (), extensionGetter_definition (var_leftType_13127, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 339)).readProperty_mHandledOperatorFlags ().getter_infixAddOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 339)), GALGAS_string ("&+"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_13054, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 336)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_13411 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_12762.ptr ())) ;
    if (NULL == var_leftBigint_13411.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_13492 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_13054.ptr ())) ;
      if (NULL == var_rightBigint_13492.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_addExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_13411.readProperty_mValue ().add_operation (var_rightBigint_13492.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 350))  COMMA_SOURCE_FILE ("expression-additive.galgas", 347)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_addExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_13127, temp_5.readProperty_mOperatorLocation (), var_leftExpression_12762, GALGAS_binaryOperator::constructor_addNoOverflow (SOURCE_FILE ("expression-additive.galgas", 357)), var_rightExpression_13054  COMMA_SOURCE_FILE ("expression-additive.galgas", 353)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_addExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 368)) ;
  const GALGAS_addExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 369)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_15059 ;
  const GALGAS_addExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_15059, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 382)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_15351 ;
  const GALGAS_addExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_15059.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_15351, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 391)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_15424 = var_leftExpression_15059.readProperty_mResultType () ;
  {
  const GALGAS_addExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (var_leftType_15424, var_rightExpression_15351.readProperty_mResultType (), extensionGetter_definition (var_leftType_15424, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 404)).readProperty_mHandledOperatorFlags ().getter_infixAddOperator (SOURCE_FILE ("expression-additive.galgas", 404)), GALGAS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_15351, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 401)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_15702 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_15059.ptr ())) ;
    if (NULL == var_leftBigint_15702.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_15783 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_15351.ptr ())) ;
      if (NULL == var_rightBigint_15783.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_addExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_15702.readProperty_mValue ().add_operation (var_rightBigint_15783.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 415))  COMMA_SOURCE_FILE ("expression-additive.galgas", 412)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_addExpressionAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_15424, temp_5.readProperty_mOperatorLocation (), var_leftExpression_15059, GALGAS_binaryOperator::constructor_add (SOURCE_FILE ("expression-additive.galgas", 422)), var_rightExpression_15351  COMMA_SOURCE_FILE ("expression-additive.galgas", 418)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 433)) ;
  const GALGAS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 434)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_17360 ;
  const GALGAS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_17360, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 448)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_17652 ;
  const GALGAS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_17360.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_17652, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 457)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_17725 = var_leftExpression_17360.readProperty_mResultType () ;
  {
  const GALGAS_subExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator (var_leftType_17725, var_rightExpression_17652.readProperty_mResultType (), extensionGetter_definition (var_leftType_17725, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 470)).readProperty_mHandledOperatorFlags ().getter_infixSubOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 470)), GALGAS_string ("&-"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_17652, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 467)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_18009 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_17360.ptr ())) ;
    if (NULL == var_leftBigint_18009.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_18090 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_17652.ptr ())) ;
      if (NULL == var_rightBigint_18090.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_subExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_18009.readProperty_mValue ().substract_operation (var_rightBigint_18090.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 481))  COMMA_SOURCE_FILE ("expression-additive.galgas", 478)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_subExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_17725, temp_5.readProperty_mOperatorLocation (), var_leftExpression_17360, GALGAS_binaryOperator::constructor_subNoOverflow (SOURCE_FILE ("expression-additive.galgas", 488)), var_rightExpression_17652  COMMA_SOURCE_FILE ("expression-additive.galgas", 484)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_subExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 499)) ;
  const GALGAS_subExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 500)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_19657 ;
  const GALGAS_subExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_19657, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 513)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_19949 ;
  const GALGAS_subExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_19657.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_19949, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 522)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_20022 = var_leftExpression_19657.readProperty_mResultType () ;
  {
  const GALGAS_subExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (var_leftType_20022, var_rightExpression_19949.readProperty_mResultType (), extensionGetter_definition (var_leftType_20022, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 535)).readProperty_mHandledOperatorFlags ().getter_infixSubOperator (SOURCE_FILE ("expression-additive.galgas", 535)), GALGAS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_19949, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 532)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_20300 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_19657.ptr ())) ;
    if (NULL == var_leftBigint_20300.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_20381 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_19949.ptr ())) ;
      if (NULL == var_rightBigint_20381.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_subExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_20300.readProperty_mValue ().substract_operation (var_rightBigint_20381.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 546))  COMMA_SOURCE_FILE ("expression-additive.galgas", 543)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_subExpressionAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_20022, temp_5.readProperty_mOperatorLocation (), var_leftExpression_19657, GALGAS_binaryOperator::constructor_sub (SOURCE_FILE ("expression-additive.galgas", 553)), var_rightExpression_19949  COMMA_SOURCE_FILE ("expression-additive.galgas", 549)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binaryOperatorExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_binaryOperatorExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_binaryOperatorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 596)) ;
  GALGAS_string var_leftTemporaryOperand_22400 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_22400, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 598)) ;
  GALGAS_string var_rightTemporaryOperand_22582 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_22582, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 600)) ;
  GALGAS_string var_operatorString_22637 ;
  GALGAS_bool var_hasCompilerOption_22667 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mOperator ().enumValue ()) {
  case GALGAS_binaryOperator::kNotBuilt:
    break ;
  case GALGAS_binaryOperator::kEnum_rightShift:
    {
      var_operatorString_22637 = GALGAS_string ("right_shift_operation") ;
      var_hasCompilerOption_22667 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_leftShift:
    {
      var_operatorString_22637 = GALGAS_string ("left_shift_operation") ;
      var_hasCompilerOption_22667 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_add:
    {
      var_operatorString_22637 = GALGAS_string ("add_operation") ;
      var_hasCompilerOption_22667 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_addNoOverflow:
    {
      var_operatorString_22637 = GALGAS_string ("add_operation_no_ovf") ;
      var_hasCompilerOption_22667 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_sub:
    {
      var_operatorString_22637 = GALGAS_string ("substract_operation") ;
      var_hasCompilerOption_22667 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_subNoOverflow:
    {
      var_operatorString_22637 = GALGAS_string ("substract_operation_no_ovf") ;
      var_hasCompilerOption_22667 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_and:
    {
      var_operatorString_22637 = GALGAS_string ("operator_and") ;
      var_hasCompilerOption_22667 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_or:
    {
      var_operatorString_22637 = GALGAS_string ("operator_or") ;
      var_hasCompilerOption_22667 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_xor:
    {
      var_operatorString_22637 = GALGAS_string ("operator_xor") ;
      var_hasCompilerOption_22667 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_multiply_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_22637 = GALGAS_string ("multiply_operation_no_ovf") ;
      var_hasCompilerOption_22667 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_multiply_5F_operation:
    {
      var_operatorString_22637 = GALGAS_string ("multiply_operation") ;
      var_hasCompilerOption_22667 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_divide_5F_operation:
    {
      var_operatorString_22637 = GALGAS_string ("divide_operation") ;
      var_hasCompilerOption_22667 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_divide_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_22637 = GALGAS_string ("divide_operation_no_ovf") ;
      var_hasCompilerOption_22667 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_modulo_5F_operation:
    {
      var_operatorString_22637 = GALGAS_string ("modulo_operation") ;
      var_hasCompilerOption_22667 = GALGAS_bool (true) ;
    }
    break ;
  }
  outArgument_outCppExpression = var_leftTemporaryOperand_22400.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 648)).add_operation (var_operatorString_22637, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 648)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 648)) ;
  outArgument_outCppExpression.plusAssign_operation(var_rightTemporaryOperand_22582, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 649)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_hasCompilerOption_22667.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 651)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 651)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 652)) COMMA_SOURCE_FILE ("expression-additive.galgas", 652)) ;
      }
    }
  }
  const GALGAS_binaryOperatorExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_5.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 654)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 654)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 654)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 144)) ;
  const GALGAS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 145)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_6732 ;
  const GALGAS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_6732, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 158)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_7024 ;
  const GALGAS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_6732.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_7024, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 167)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_7097 = var_leftExpression_6732.readProperty_mResultType () ;
  {
  const GALGAS_multiplicationExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator (var_leftType_7097, var_rightExpression_7024.readProperty_mResultType (), extensionGetter_definition (var_leftType_7097, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 180)).readProperty_mHandledOperatorFlags ().getter_infixMulOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas", 180)), GALGAS_string ("&*"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_7024, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 177)) ;
  }
  const GALGAS_multiplicationExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_7097, temp_3.readProperty_mOperatorLocation (), var_leftExpression_6732, GALGAS_binaryOperator::constructor_multiply_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas", 190)), var_rightExpression_7024  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 186)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 201)) ;
  const GALGAS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 202)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_8672 ;
  const GALGAS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_8672, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 215)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_8964 ;
  const GALGAS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8672.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_8964, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 224)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_9037 = var_leftExpression_8672.readProperty_mResultType () ;
  {
  const GALGAS_multiplicationExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (var_leftType_9037, var_rightExpression_8964.readProperty_mResultType (), extensionGetter_definition (var_leftType_9037, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 237)).readProperty_mHandledOperatorFlags ().getter_infixMulOperator (SOURCE_FILE ("expression-multiplicative.galgas", 237)), GALGAS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_8964, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 234)) ;
  }
  const GALGAS_multiplicationExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_9037, temp_3.readProperty_mOperatorLocation (), var_leftExpression_8672, GALGAS_binaryOperator::constructor_multiply_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 247)), var_rightExpression_8964  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 243)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 257)) ;
  const GALGAS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 258)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionNoOverflowAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_10606 ;
  const GALGAS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_10606, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 271)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_10898 ;
  const GALGAS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_10606.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_10898, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 280)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_10971 = var_leftExpression_10606.readProperty_mResultType () ;
  {
  const GALGAS_divisionExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator (var_leftType_10971, var_rightExpression_10898.readProperty_mResultType (), extensionGetter_definition (var_leftType_10971, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 293)).readProperty_mHandledOperatorFlags ().getter_infixDivOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas", 293)), GALGAS_string ("&/"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_10898, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 290)) ;
  }
  const GALGAS_divisionExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_10971, temp_3.readProperty_mOperatorLocation (), var_leftExpression_10606, GALGAS_binaryOperator::constructor_divide_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas", 303)), var_rightExpression_10898  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 299)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 313)) ;
  const GALGAS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 314)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_12531 ;
  const GALGAS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_12531, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 327)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_12823 ;
  const GALGAS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_12531.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_12823, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 336)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_12896 = var_leftExpression_12531.readProperty_mResultType () ;
  {
  const GALGAS_divisionExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (var_leftType_12896, var_rightExpression_12823.readProperty_mResultType (), extensionGetter_definition (var_leftType_12896, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 349)).readProperty_mHandledOperatorFlags ().getter_infixDivOperator (SOURCE_FILE ("expression-multiplicative.galgas", 349)), GALGAS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_12823, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 346)) ;
  }
  const GALGAS_divisionExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_12896, temp_3.readProperty_mOperatorLocation (), var_leftExpression_12531, GALGAS_binaryOperator::constructor_divide_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 359)), var_rightExpression_12823  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 355)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 369)) ;
  const GALGAS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 370)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_14439 ;
  const GALGAS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_14439, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 383)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_14731 ;
  const GALGAS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14439.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_14731, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 392)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_14804 = var_leftExpression_14439.readProperty_mResultType () ;
  {
  const GALGAS_moduloExpressionAST temp_2 = this ;
  routine_checkDiadicOperator (var_leftType_14804, var_rightExpression_14731.readProperty_mResultType (), extensionGetter_definition (var_leftType_14804, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 405)).readProperty_mHandledOperatorFlags ().getter_infixModOperator (SOURCE_FILE ("expression-multiplicative.galgas", 405)), GALGAS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_14731, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 402)) ;
  }
  const GALGAS_moduloExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_14804, temp_3.readProperty_mOperatorLocation (), var_leftExpression_14439, GALGAS_binaryOperator::constructor_modulo_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 415)), var_rightExpression_14731  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 411)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 134)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4888 ;
  const GALGAS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-is-as.galgas", 151)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_4888, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 148)) ;
  const GALGAS_testDynamicClassInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_castType_4934 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 157)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_4888.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 159)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 159)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMapEntry var_t_5205 = var_castType_4934 ;
      GALGAS_bool var_found_5236 = GALGAS_bool (kIsEqual, var_t_5205.objectCompare (var_expression_4888.readProperty_mResultType ())) ;
      if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("expression-is-as.galgas", 163)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 163)).isValid ()) {
        uint32_t variant_5275 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("expression-is-as.galgas", 163)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 163)).uintValue () ;
        bool loop_5275 = true ;
        while (loop_5275) {
          loop_5275 = var_found_5236.operator_not (SOURCE_FILE ("expression-is-as.galgas", 164)).operator_and (extensionGetter_definition (var_t_5205, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 164)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 164)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 164)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 164)).isValid () ;
          if (loop_5275) {
            loop_5275 = var_found_5236.operator_not (SOURCE_FILE ("expression-is-as.galgas", 164)).operator_and (extensionGetter_definition (var_t_5205, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 164)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 164)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 164)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 164)).boolValue () ;
          }
          if (loop_5275 && (0 == variant_5275)) {
            loop_5275 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 163)) ;
          }
          if (loop_5275) {
            variant_5275 -- ;
            var_t_5205 = extensionGetter_definition (var_t_5205, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 165)).readProperty_mSuperType () ;
            var_found_5236 = GALGAS_bool (kIsEqual, var_t_5205.objectCompare (var_expression_4888.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_5236.operator_not (SOURCE_FILE ("expression-is-as.galgas", 168)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_testDynamicClassInExpressionAST temp_4 = this ;
          const GALGAS_testDynamicClassInExpressionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 170)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 170)).add_operation (extensionGetter_definition (var_expression_4888.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 170)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 170)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 170)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 169)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_4888.readProperty_mLocation (), GALGAS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_4888.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 174)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 173)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 174)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas", 173)) ;
  }
  const GALGAS_testDynamicClassInExpressionAST temp_8 = this ;
  const GALGAS_testDynamicClassInExpressionAST temp_9 = this ;
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_4888, temp_9.readProperty_mTypeComparisonKind (), var_castType_4934  COMMA_SOURCE_FILE ("expression-is-as.galgas", 177)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 190)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_7162 ;
  const GALGAS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-is-as.galgas", 207)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7162, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 204)) ;
  const GALGAS_castInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_type_7205 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 213)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_7162.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 215)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 215)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMapEntry var_t_7476 = var_type_7205 ;
      GALGAS_bool var_found_7503 = GALGAS_bool (kIsEqual, var_t_7476.objectCompare (var_expression_7162.readProperty_mResultType ())) ;
      if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("expression-is-as.galgas", 219)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 219)).isValid ()) {
        uint32_t variant_7542 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("expression-is-as.galgas", 219)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 219)).uintValue () ;
        bool loop_7542 = true ;
        while (loop_7542) {
          loop_7542 = var_found_7503.operator_not (SOURCE_FILE ("expression-is-as.galgas", 220)).operator_and (extensionGetter_definition (var_t_7476, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 220)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 220)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 220)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 220)).isValid () ;
          if (loop_7542) {
            loop_7542 = var_found_7503.operator_not (SOURCE_FILE ("expression-is-as.galgas", 220)).operator_and (extensionGetter_definition (var_t_7476, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 220)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 220)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 220)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 220)).boolValue () ;
          }
          if (loop_7542 && (0 == variant_7542)) {
            loop_7542 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 219)) ;
          }
          if (loop_7542) {
            variant_7542 -- ;
            var_t_7476 = extensionGetter_definition (var_t_7476, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 221)).readProperty_mSuperType () ;
            var_found_7503 = GALGAS_bool (kIsEqual, var_t_7476.objectCompare (var_expression_7162.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_7503.operator_not (SOURCE_FILE ("expression-is-as.galgas", 224)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_castInExpressionAST temp_4 = this ;
          const GALGAS_castInExpressionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 226)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 226)).add_operation (extensionGetter_definition (var_expression_7162.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 227)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 226)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 227)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 225)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_expression_7162.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 229)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("object"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_expression_7162.readProperty_mLocation (), GALGAS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (extensionGetter_definition (var_expression_7162.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 232)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 231)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 232)), fixItArray8  COMMA_SOURCE_FILE ("expression-is-as.galgas", 230)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_expression_7162.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 235)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("object"))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_castInExpressionAST temp_10 = this ;
      const GALGAS_castInExpressionAST temp_11 = this ;
      outArgument_outExpression = GALGAS_extractObjectInExpressionForGeneration::constructor_new (var_type_7205, temp_10.readProperty_mEndOfReceiverExpression (), var_expression_7162, temp_11.readProperty_mTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-is-as.galgas", 236)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_castInExpressionAST temp_12 = this ;
    const GALGAS_castInExpressionAST temp_13 = this ;
    outArgument_outExpression = GALGAS_castInExpressionForGeneration::constructor_new (var_type_7205, temp_12.readProperty_mTypeName ().readProperty_location (), var_expression_7162, temp_13.readProperty_mTypeName ().readProperty_string (), var_type_7205  COMMA_SOURCE_FILE ("expression-is-as.galgas", 242)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_testDynamicClassInExpressionForGeneration temp_0 = this ;
  GALGAS_string var_typeNameRepresentation_9613 = extensionGetter_definition (temp_0.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 270)).readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 270)) ;
  GALGAS_string var_receiverExpression_9902 ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_9902, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 272)) ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 280)) ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mTypeComparisonKind ().enumValue ()) {
  case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_receiverExpression_9902, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 283)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 283)).add_operation (var_typeNameRepresentation_9613, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 284)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 285)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (NULL != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_9613, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 287)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 288)).add_operation (var_receiverExpression_9902, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 289)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 289)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool ((").add_operation (var_receiverExpression_9902, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 291)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 291)).add_operation (var_typeNameRepresentation_9613, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 292)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 293)).add_operation (var_typeNameRepresentation_9613, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 293)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 294)).add_operation (var_receiverExpression_9902, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 295)).add_operation (GALGAS_string (".ptr ())))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 295)) ;
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_castInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 308)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 309)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 310)) ;
  GALGAS_string var_receiverExpression_11396 ;
  const GALGAS_castInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_11396, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 312)) ;
  const GALGAS_castInExpressionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_2.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 320)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 320)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 321)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 321)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 321)).add_operation (var_receiverExpression_11396, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 322)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 320)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 323)) ;
  }
  const GALGAS_castInExpressionForGeneration temp_3 = this ;
  const GALGAS_castInExpressionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (temp_3.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 326)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 327)).add_operation (var_receiverExpression_11396, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 328)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 328)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 328)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 329)).add_operation (GALGAS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 329)).add_operation (temp_4.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 329)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 329)).add_operation (var_receiverExpression_11396, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 329)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 330)).add_operation (GALGAS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 325)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 332)) ;
  }
  const GALGAS_castInExpressionForGeneration temp_5 = this ;
  const GALGAS_castInExpressionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)).add_operation (GALGAS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)).add_operation (temp_5.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (var_receiverExpression_11396, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 336)).add_operation (GALGAS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 336)).add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 336)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 333)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 338)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 339)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 339)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 340)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 341)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extractObjectInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_extractObjectInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 360)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 361)) ;
  GALGAS_string var_receiverExpression_13370 ;
  const GALGAS_extractObjectInExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_13370, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 363)) ;
  const GALGAS_extractObjectInExpressionForGeneration temp_1 = this ;
  const GALGAS_extractObjectInExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 371)).add_operation (GALGAS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 371)).add_operation (var_receiverExpression_13370, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 372)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 372)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 373)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 373)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 374)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 375)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 375)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_3723 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 98)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3723 COMMA_SOURCE_FILE ("expression-option.galgas", 99)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_4035 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_4080 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_4125 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_4172 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_4223 ;
  const GALGAS_optionExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_4035, var_boolOptionMap_4080, var_uintOptionMap_4125, var_stringOptionMap_4172, var_stringListOptionMap_4223, inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 101)) ;
  const GALGAS_optionExpressionAST temp_2 = this ;
  GALGAS_bool var_found_4245 = var_boolOptionMap_4080.getter_hasKey (temp_2.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 109)) ;
  GALGAS_unifiedTypeMapEntry var_returnedType_4340 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_4245.operator_not (SOURCE_FILE ("expression-option.galgas", 111)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_optionExpressionAST temp_4 = this ;
      var_found_4245 = var_uintOptionMap_4125.getter_hasKey (temp_4.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 112)) ;
      var_returnedType_4340 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_4245.operator_not (SOURCE_FILE ("expression-option.galgas", 115)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_optionExpressionAST temp_6 = this ;
      var_found_4245 = var_stringOptionMap_4172.getter_hasKey (temp_6.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 116)) ;
      var_returnedType_4340 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_4245.operator_not (SOURCE_FILE ("expression-option.galgas", 119)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_optionExpressionAST temp_8 = this ;
      var_found_4245 = var_stringListOptionMap_4223.getter_hasKey (temp_8.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 120)) ;
      var_returnedType_4340 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_4245.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_optionExpressionAST temp_11 = this ;
        test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_optionExpressionAST temp_12 = this ;
          const GALGAS_optionExpressionAST temp_13 = this ;
          const GALGAS_optionExpressionAST temp_14 = this ;
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_4340, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_4035, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 125)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          const GALGAS_optionExpressionAST temp_16 = this ;
          test_15 = GALGAS_bool (kIsEqual, temp_16.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("char"))).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_optionExpressionAST temp_17 = this ;
            const GALGAS_optionExpressionAST temp_18 = this ;
            const GALGAS_optionExpressionAST temp_19 = this ;
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_4035, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 132)) ;
          }
        }
        if (kBoolFalse == test_15) {
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            const GALGAS_optionExpressionAST temp_21 = this ;
            test_20 = GALGAS_bool (kIsEqual, temp_21.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_20) {
              const GALGAS_optionExpressionAST temp_22 = this ;
              const GALGAS_optionExpressionAST temp_23 = this ;
              const GALGAS_optionExpressionAST temp_24 = this ;
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_4035, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 139)) ;
            }
          }
          if (kBoolFalse == test_20) {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              const GALGAS_optionExpressionAST temp_26 = this ;
              test_25 = GALGAS_bool (kIsEqual, temp_26.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("comment"))).boolEnum () ;
              if (kBoolTrue == test_25) {
                const GALGAS_optionExpressionAST temp_27 = this ;
                const GALGAS_optionExpressionAST temp_28 = this ;
                const GALGAS_optionExpressionAST temp_29 = this ;
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_4035, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 146)) ;
              }
            }
            if (kBoolFalse == test_25) {
              const GALGAS_optionExpressionAST temp_30 = this ;
              TC_Array <C_FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mOptionGetterName ().readProperty_location (), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("expression-option.galgas", 153)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_stringlist var_s_6382 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-option.galgas", 156)) ;
    cEnumerator_commandLineOptionMap enumerator_6409 (var_boolOptionMap_4080, kENUMERATION_UP) ;
    while (enumerator_6409.hasCurrentObject ()) {
      var_s_6382.addAssign_operation (enumerator_6409.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 158)) ;
      enumerator_6409.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_6477 (var_uintOptionMap_4125, kENUMERATION_UP) ;
    while (enumerator_6477.hasCurrentObject ()) {
      var_s_6382.addAssign_operation (enumerator_6477.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 161)) ;
      enumerator_6477.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_6545 (var_stringOptionMap_4172, kENUMERATION_UP) ;
    while (enumerator_6545.hasCurrentObject ()) {
      var_s_6382.addAssign_operation (enumerator_6545.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 164)) ;
      enumerator_6545.gotoNextObject () ;
    }
    const GALGAS_optionExpressionAST temp_32 = this ;
    const GALGAS_optionExpressionAST temp_33 = this ;
    const GALGAS_optionExpressionAST temp_34 = this ;
    TC_Array <C_FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_6382) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionEntryName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 167)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 167)).add_operation (temp_34.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 167)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 167)), fixItArray35  COMMA_SOURCE_FILE ("expression-option.galgas", 166)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionValueExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionValueExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionValueExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 191)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionValueExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 192))  COMMA_SOURCE_FILE ("expression-option.galgas", 192)) ;
    }
  }
  const GALGAS_optionValueExpressionForGeneration temp_3 = this ;
  const GALGAS_optionValueExpressionForGeneration temp_4 = this ;
  const GALGAS_optionValueExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 194)).add_operation (GALGAS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 194)).add_operation (temp_4.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 194)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 194)).add_operation (temp_5.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 195)).add_operation (GALGAS_string (".readProperty_value ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 195)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCharExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionCharExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionCharExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 214)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionCharExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 215))  COMMA_SOURCE_FILE ("expression-option.galgas", 215)) ;
    }
  }
  const GALGAS_optionCharExpressionForGeneration temp_3 = this ;
  const GALGAS_optionCharExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 217)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 217)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 218)).add_operation (GALGAS_string (".readProperty_char ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 218)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionStringExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionStringExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 237)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionStringExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 238))  COMMA_SOURCE_FILE ("expression-option.galgas", 238)) ;
    }
  }
  const GALGAS_optionStringExpressionForGeneration temp_3 = this ;
  const GALGAS_optionStringExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 240)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 240)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 241)).add_operation (GALGAS_string (".readProperty_string ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 241)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCommentExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionCommentExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 252)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionCommentExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 253))  COMMA_SOURCE_FILE ("expression-option.galgas", 253)) ;
    }
  }
  const GALGAS_optionCommentExpressionForGeneration temp_3 = this ;
  const GALGAS_optionCommentExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 255)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 255)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 256)).add_operation (GALGAS_string (".readProperty_comment ()"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 256)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueIntrospectionExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_2762 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 71)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2762 COMMA_SOURCE_FILE ("expression-lexique.galgas", 72)) ;
  }
  const GALGAS_lexiqueIntrospectionExpressionAST temp_1 = this ;
  GALGAS_terminalMap joker_3068_3 ; // Joker input parameter
  GALGAS_indexingListAST joker_3068_2 ; // Joker input parameter
  GALGAS_lstring joker_3068_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueComponentName (), joker_3068_3, joker_3068_2, joker_3068_1, inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 74)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_lexiqueIntrospectionExpressionAST temp_3 = this ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.readProperty_mLexiqueGetterName ().readProperty_string ().objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_lexiqueIntrospectionExpressionAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mLexiqueGetterName ().readProperty_location (), GALGAS_string ("unknown getter"), fixItArray5  COMMA_SOURCE_FILE ("expression-lexique.galgas", 80)) ;
    }
  }
  const GALGAS_lexiqueIntrospectionExpressionAST temp_6 = this ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_7 = this ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_8 = this ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_string ("stringlist").getter_nowhere (SOURCE_FILE ("expression-lexique.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 84)), temp_6.readProperty_mLexiqueComponentName ().readProperty_location (), temp_7.readProperty_mLexiqueComponentName ().readProperty_string (), temp_8.readProperty_mLexiqueGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-lexique.galgas", 83)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueIntrospectionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-lexique.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 108))  COMMA_SOURCE_FILE ("expression-lexique.galgas", 108)) ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_1 = this ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_2 = this ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("C_Lexique_").add_operation (temp_1.readProperty_mLexiqueComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 109)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 109)).add_operation (temp_2.readProperty_mLexiqueGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 109)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 110)).add_operation (extensionGetter_sourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 111)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 111)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_4455 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 123)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4455 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 124)) ;
  }
  GALGAS_lstring var_filewrapperPath_4779 ;
  GALGAS_bool var_isInternal_4813 ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_1 = this ;
  GALGAS_lstringlist joker_4785_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_4785_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_4785_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_4785_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), var_filewrapperPath_4779, joker_4785_4, joker_4785_3, joker_4785_2, joker_4785_1, var_isInternal_4813, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 126)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_4813.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_3 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_4897 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_3.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 134)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 135)).objectCompare (var_filewrapperDeclarationLocation_4897.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 135)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_4897.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 136)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 136)), fixItArray7  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 136)) ;
        }
      }
    }
  }
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_8 = this ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_9 = this ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_10 = this ;
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper"), temp_8.readProperty_mFilewrapperName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 141)), temp_9.readProperty_mFilewrapperName ().readProperty_location (), temp_10.readProperty_mFilewrapperName ().readProperty_string (), var_filewrapperPath_4779.readProperty_string ()  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 140)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = this ;
  cEnumerator_actualOutputExpressionList enumerator_5780 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_5780.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_5780.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 153)) ;
    enumerator_5780.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_1 = this ;
  GALGAS_lstring var_usefulnessName_6374 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), temp_1.readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 167)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_6374 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 168)) ;
  }
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_6723 ;
  GALGAS_bool var_isInternal_6750 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_2 = this ;
  GALGAS_lstring joker_6664_4 ; // Joker input parameter
  GALGAS_lstringlist joker_6664_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_6664_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_6664_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_2.readProperty_mFilewrapperName (), joker_6664_4, joker_6664_3, joker_6664_2, joker_6664_1, var_filewrapperTemplateMap_6723, var_isInternal_6750, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 170)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_isInternal_6750.boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_4 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_6835 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_4.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 178)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperTemplateInExpressionAST temp_6 = this ;
        test_5 = GALGAS_bool (kIsNotEqual, temp_6.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 179)).objectCompare (var_filewrapperDeclarationLocation_6835.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 179)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_filewrapperTemplateInExpressionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_6835.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 180)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 180)), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 180)) ;
        }
      }
    }
  }
  GALGAS_functionSignature var_templateSignature_7277 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_9 = this ;
  GALGAS_lstring joker_7279 ; // Joker input parameter
  var_filewrapperTemplateMap_6723.method_searchKey (temp_9.readProperty_mFilewrapperTemplateName (), var_templateSignature_7277, joker_7279, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 184)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_7371 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_filewrapperTemplateInExpressionAST temp_11 = this ;
    test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 187)).objectCompare (var_templateSignature_7277.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 187)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_12 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_13 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_14 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_15 = this ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mFilewrapperTemplateName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mFilewrapperTemplateName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 189)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 189)).add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 189)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 189)).add_operation (var_templateSignature_7277.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 190)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 189)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 190)).add_operation (temp_15.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 191)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 190)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 191)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 188)) ;
      var_effectiveParameterList_7371.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_effectiveParameterList_7371 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 194)) ;
    const GALGAS_filewrapperTemplateInExpressionAST temp_17 = this ;
    cEnumerator_actualOutputExpressionList enumerator_7877 (temp_17.readProperty_mExpressions (), kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_7939 (var_templateSignature_7277, kENUMERATION_UP) ;
    while (enumerator_7877.hasCurrentObject () && enumerator_7939.hasCurrentObject ()) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GALGAS_bool (kIsNotEqual, enumerator_7939.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_7877.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_18) {
          GALGAS_string temp_19 ;
          const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, enumerator_7939.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_20) {
            temp_19 = enumerator_7939.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 197)) ;
          }else if (kBoolFalse == test_20) {
            temp_19 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_8049 = GALGAS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 197)) ;
          TC_Array <C_FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, kFixItReplace, var_s_8049) ;
          inCompiler->emitSemanticError (enumerator_7877.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_8049, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)), fixItArray21  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_8631 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_7877.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_7939.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_8631, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 201)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_7939.current_mFormalArgumentType (HERE), var_exp_8631.readProperty_mResultType (), enumerator_7877.current_mEndOfExpressionLocation (HERE), var_exp_8631, inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)) ;
      }
      var_effectiveParameterList_7371.addAssign_operation (var_exp_8631  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 210)) ;
      enumerator_7877.gotoNextObject () ;
      enumerator_7939.gotoNextObject () ;
    }
  }
  const GALGAS_filewrapperTemplateInExpressionAST temp_22 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_23 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_24 = this ;
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mFilewrapperName ().readProperty_location (), temp_23.readProperty_mFilewrapperName ().readProperty_string (), temp_24.readProperty_mFilewrapperTemplateName ().readProperty_string (), var_effectiveParameterList_7371  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 214)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_9818 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 239)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_9818 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 240)) ;
  }
  GALGAS_stringlist var_directoryList_10025 ;
  GALGAS_string var_fileName_10048 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_filewrapperInExpressionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mFilewrapperPath ().readProperty_string ().getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 244)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_filewrapperInExpressionAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("path is empty"), fixItArray4  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 245)) ;
      var_directoryList_10025.drop () ; // Release error dropped variable
      var_fileName_10048.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_6 = this ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("expression-filewrapper.galgas", 246)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperInExpressionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the path should not begin with '/'"), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 247)) ;
        var_directoryList_10025.drop () ; // Release error dropped variable
        var_fileName_10048.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_9 = this ;
      var_directoryList_10025 = temp_9.readProperty_mFilewrapperPath ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 249)) ;
      {
      var_directoryList_10025.setter_popLast (var_fileName_10048, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 250)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap_10640 ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap_10694 ;
  GALGAS_bool var_isInternal_10727 ;
  const GALGAS_filewrapperInExpressionAST temp_10 = this ;
  GALGAS_lstring joker_10588 ; // Joker input parameter
  GALGAS_lstringlist joker_10595 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_10700 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_10.readProperty_mFilewrapperName (), joker_10588, joker_10595, var_filewrapperFileMap_10640, var_filewrapperDirectoryMap_10694, joker_10700, var_isInternal_10727, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 253)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_isInternal_10727.boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_filewrapperInExpressionAST temp_12 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_10811 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_12.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 264)) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GALGAS_filewrapperInExpressionAST temp_14 = this ;
        test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 265)).objectCompare (var_filewrapperDeclarationLocation_10811.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 265)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_filewrapperInExpressionAST temp_15 = this ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_10811.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 266)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 266)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 266)) ;
        }
      }
    }
  }
  GALGAS_string var_builtPath_11184 = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_10694.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 271)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 271)).isValid ()) {
    uint32_t variant_11196 = var_filewrapperDirectoryMap_10694.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 271)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 271)).uintValue () ;
    bool loop_11196 = true ;
    while (loop_11196) {
      loop_11196 = GALGAS_bool (kIsStrictSup, var_directoryList_10025.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 272)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_11196) {
        loop_11196 = GALGAS_bool (kIsStrictSup, var_directoryList_10025.getter_length (SOURCE_FILE ("expression-filewrapper.galgas", 272)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_11196 && (0 == variant_11196)) {
        loop_11196 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-filewrapper.galgas", 271)) ;
      }
      if (loop_11196) {
        variant_11196 -- ;
        GALGAS_string var_directoryName_11321 ;
        {
        var_directoryList_10025.setter_popFirst (var_directoryName_11321, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 273)) ;
        }
        var_builtPath_11184.plusAssign_operation(var_directoryName_11321.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 274)) ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = var_filewrapperDirectoryMap_10694.getter_hasKey (var_directoryName_11321 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 275)).boolEnum () ;
          if (kBoolTrue == test_17) {
            GALGAS_uint joker_11586 ; // Joker input parameter
            var_filewrapperDirectoryMap_10694.method_searchKey (GALGAS_lstring::constructor_new (var_directoryName_11321, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 277))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 277)), var_filewrapperFileMap_10640, var_filewrapperDirectoryMap_10694, joker_11586, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 276)) ;
          }
        }
        if (kBoolFalse == test_17) {
          const GALGAS_filewrapperInExpressionAST temp_18 = this ;
          const GALGAS_filewrapperInExpressionAST temp_19 = this ;
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the '").add_operation (var_builtPath_11184, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 283)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 283)).add_operation (temp_19.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 283)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 283)), fixItArray20  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 283)) ;
          var_filewrapperFileMap_10640.drop () ; // Release error dropped variable
          var_directoryList_10025 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 284)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex_11853 ;
  GALGAS_bool var_isTextFile_11876 ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = var_filewrapperFileMap_10640.getter_hasKey (var_fileName_10048 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 289)).boolEnum () ;
    if (kBoolTrue == test_21) {
      GALGAS_string joker_12002 ; // Joker input parameter
      GALGAS_uint joker_12017 ; // Joker input parameter
      var_filewrapperFileMap_10640.method_searchKey (GALGAS_lstring::constructor_new (var_fileName_10048, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 290))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 290)), joker_12002, var_isTextFile_11876, joker_12017, var_fileIndex_11853, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 290)) ;
    }
  }
  if (kBoolFalse == test_21) {
    const GALGAS_filewrapperInExpressionAST temp_22 = this ;
    const GALGAS_filewrapperInExpressionAST temp_23 = this ;
    TC_Array <C_FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the '").add_operation (var_fileName_10048, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 293)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 293)).add_operation (var_builtPath_11184, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 293)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 293)).add_operation (temp_23.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 293)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 293)), fixItArray24  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 292)) ;
    var_fileIndex_11853.drop () ; // Release error dropped variable
    var_isTextFile_11876.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMapEntry temp_25 ;
  const enumGalgasBool test_26 = var_isTextFile_11876.boolEnum () ;
  if (kBoolTrue == test_26) {
    temp_25 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  }else if (kBoolFalse == test_26) {
    temp_25 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("data"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 300))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 300)) ;
  }
  const GALGAS_filewrapperInExpressionAST temp_27 = this ;
  const GALGAS_filewrapperInExpressionAST temp_28 = this ;
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (temp_25, temp_27.readProperty_mFilewrapperName ().readProperty_location (), temp_28.readProperty_mFilewrapperName ().readProperty_string (), var_fileIndex_11853, var_isTextFile_11876  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 297)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 325))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 325)) ;
  const GALGAS_filewrapperInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_filewrapper (gWrapperDirectory_0_").add_operation (temp_1.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 326)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 326)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 346))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 346)) ;
  GALGAS_stringlist var_parameterList_14430 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 347)) ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_14466 (temp_1.readProperty_mActualOutputParameterList (), kENUMERATION_UP) ;
  while (enumerator_14466.hasCurrentObject ()) {
    GALGAS_string var_parameter_14677 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14466.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_14677, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 349)) ;
    var_parameterList_14430.addAssign_operation (var_parameter_14677  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 356)) ;
    enumerator_14466.gotoNextObject () ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_2 = this ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (filewrapperTemplate_").add_operation (temp_2.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 358)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 358)).add_operation (temp_3.readProperty_mFilewrapperTemplateName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 358)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 358)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 359)) ;
  cEnumerator_stringlist enumerator_14958 (var_parameterList_14430, kENUMERATION_UP) ;
  while (enumerator_14958.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_14958.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 361)) ;
    enumerator_14958.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 363)) COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 363)) ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 364)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 364)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 384))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 384)) ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_1 = this ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = temp_1.readProperty_mIsTextFile ().boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("GALGAS_string") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string ("GALGAS_data") ;
  }
  outArgument_outCppExpression = temp_2 ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_4 = this ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (gWrapperFileContent_").add_operation (temp_4.readProperty_mFilewrapperFileIndex ().getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 386)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 386)).add_operation (temp_5.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 386)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 386)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 82)) ;
  const GALGAS_getterCallExpressionAST temp_1 = this ;
  extensionMethod_enterInSemanticContext (temp_1.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 83)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_4132 ;
  const GALGAS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-getter-call.galgas", 100)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_4132, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 97)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_4176 = var_receiverExpression_4132.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_getterCallExpressionAST temp_2 = this ;
    GALGAS_methodKind var_kind_4368 ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_4408 ;
    GALGAS_location var_unused_0_4417 ;
    GALGAS_bool var_hasCompilerArgument_4454 ;
    GALGAS_unifiedTypeMapEntry var_returnedType_4499 ;
    GALGAS_methodQualifier var_unused_0_4508 ;
    GALGAS_string var_getterErrorMessage_4546 ;
    const bool optionalResult4321 = extensionGetter_definition (var_receiverType_4176, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).readProperty_mGetterMap ().optional_searchKey (temp_2.readProperty_mGetterName ().readProperty_string (), var_kind_4368, var_getterFormalArgumentTypeList_4408, var_unused_0_4417, var_hasCompilerArgument_4454, var_returnedType_4499, var_unused_0_4508, var_getterErrorMessage_4546) ;
    if (!optionalResult4321) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_getterErrorMessage_4546.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_getterCallExpressionAST temp_4 = this ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mGetterName ().readProperty_location (), var_getterErrorMessage_4546, fixItArray5  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 117)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_getterCallExpressionAST temp_7 = this ;
        GALGAS_bool test_8 = temp_7.readProperty_errorOnGetterCallInsteadOfPropertyRead () ;
        if (kBoolTrue == test_8.boolEnum ()) {
          const GALGAS_getterCallExpressionAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_receiverType_4176, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 120)).readProperty_mPropertyMap ().getter_hasKey (temp_9.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 120)) ;
        }
        GALGAS_bool test_10 = test_8 ;
        if (kBoolTrue == test_10.boolEnum ()) {
          const GALGAS_getterCallExpressionAST temp_11 = this ;
          test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 121)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
        }
        test_6 = test_10.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_getterCallExpressionAST temp_12 = this ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray13  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 122)) ;
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_getterCallExpressionAST temp_15 = this ;
        test_14 = GALGAS_bool (kIsNotEqual, temp_15.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 125)).objectCompare (var_getterFormalArgumentTypeList_4408.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 125)))).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_getterCallExpressionAST temp_16 = this ;
          const GALGAS_getterCallExpressionAST temp_17 = this ;
          const GALGAS_getterCallExpressionAST temp_18 = this ;
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_17.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).add_operation (extensionGetter_definition (var_receiverType_4176, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).add_operation (var_getterFormalArgumentTypeList_4408.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 127)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 127)).add_operation (temp_18.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 128)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 127)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 128)), fixItArray19  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 126)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_14) {
        GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_5519 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 130)) ;
        const GALGAS_getterCallExpressionAST temp_20 = this ;
        cEnumerator_actualOutputExpressionList enumerator_5588 (temp_20.readProperty_mExpressions (), kENUMERATION_UP) ;
        cEnumerator_functionSignature enumerator_5660 (var_getterFormalArgumentTypeList_4408, kENUMERATION_UP) ;
        while (enumerator_5588.hasCurrentObject () && enumerator_5660.hasCurrentObject ()) {
          GALGAS_semanticExpressionForGeneration var_exp_5966 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5588.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5660.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_5966, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 133)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            test_21 = GALGAS_bool (kIsNotEqual, enumerator_5660.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5588.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_22 ;
              const enumGalgasBool test_23 = GALGAS_bool (kIsNotEqual, enumerator_5660.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_23) {
                temp_22 = enumerator_5660.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 142)) ;
              }else if (kBoolFalse == test_23) {
                temp_22 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_6065 = GALGAS_string ("!").add_operation (temp_22, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 142)) ;
              TC_Array <C_FixItDescription> fixItArray24 ;
              appendFixItActions (fixItArray24, kFixItReplace, var_s_6065) ;
              inCompiler->emitSemanticError (enumerator_5588.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_6065, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)), fixItArray24  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_5660.current_mFormalArgumentType (HERE), var_exp_5966.readProperty_mResultType (), enumerator_5588.current_mEndOfExpressionLocation (HERE), var_exp_5966, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 145)) ;
          }
          var_constructorEffectiveParameterList_5519.addAssign_operation (var_exp_5966  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 146)) ;
          enumerator_5588.gotoNextObject () ;
          enumerator_5660.gotoNextObject () ;
        }
        const GALGAS_getterCallExpressionAST temp_25 = this ;
        const GALGAS_getterCallExpressionAST temp_26 = this ;
        outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_4499, temp_25.readProperty_mGetterName ().readProperty_location (), var_kind_4368, var_receiverExpression_4132, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 153)), temp_26.readProperty_mGetterName ().readProperty_string (), var_constructorEffectiveParameterList_5519, var_hasCompilerArgument_4454  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 148)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_getterCallExpressionAST temp_28 = this ;
      test_27 = GALGAS_bool (kIsEqual, temp_28.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 160)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_getterCallExpressionAST temp_29 = this ;
        GALGAS_bool var_isPublic_6952 ;
        GALGAS_bool var_unused_0_6955 ;
        GALGAS_unifiedTypeMapEntry var_propertyType_6973 ;
        const bool optionalResult6913 = extensionGetter_definition (var_receiverType_4176, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 160)).readProperty_mPropertyMap ().optional_searchKey (temp_29.readProperty_mGetterName ().readProperty_string (), var_isPublic_6952, var_unused_0_6955, var_propertyType_6973) ;
        if (!optionalResult6913) {
          test_27 = kBoolFalse ;
        }
        if (kBoolTrue == test_27) {
          enumGalgasBool test_30 = kBoolTrue ;
          if (kBoolTrue == test_30) {
            test_30 = var_isPublic_6952.operator_not (SOURCE_FILE ("expression-getter-call.galgas", 161)).boolEnum () ;
            if (kBoolTrue == test_30) {
              const GALGAS_getterCallExpressionAST temp_31 = this ;
              TC_Array <C_FixItDescription> fixItArray32 ;
              inCompiler->emitSemanticError (temp_31.readProperty_mGetterName ().readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray32  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 162)) ;
            }
          }
          const GALGAS_getterCallExpressionAST temp_33 = this ;
          const GALGAS_getterCallExpressionAST temp_34 = this ;
          outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_6973, temp_33.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4132, temp_34.readProperty_mGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 164)) ;
          enumGalgasBool test_35 = kBoolTrue ;
          if (kBoolTrue == test_35) {
            const GALGAS_getterCallExpressionAST temp_36 = this ;
            test_35 = temp_36.readProperty_errorOnGetterCallInsteadOfPropertyRead ().boolEnum () ;
            if (kBoolTrue == test_35) {
              const GALGAS_getterCallExpressionAST temp_37 = this ;
              TC_Array <C_FixItDescription> fixItArray38 ;
              inCompiler->emitSemanticError (temp_37.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray38  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 171)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_27) {
      GALGAS_uint var_matchingReaderCount_7636 = GALGAS_uint (uint32_t (0U)) ;
      enumGalgasBool test_39 = kBoolTrue ;
      if (kBoolTrue == test_39) {
        test_39 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_receiverType_4176, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 176)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("expression-getter-call.galgas", 176)))).boolEnum () ;
        if (kBoolTrue == test_39) {
          GALGAS_functionSignature var_getterFormalArgumentTypeList_7765 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 177)) ;
          GALGAS_bool var_hasCompilerArgument_7800 = GALGAS_bool (true) ;
          GALGAS_unifiedTypeMapEntry var_returnedType_7830 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("expression-getter-call.galgas", 179)) ;
          GALGAS_methodKind var_kind_7873 = GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas", 180)) ;
          GALGAS_stringlist var_fieldList_7938 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 181)) ;
          cEnumerator_typedPropertyList enumerator_7989 (extensionGetter_definition (var_receiverType_4176, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 182)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
          while (enumerator_7989.hasCurrentObject ()) {
            GALGAS_unifiedTypeMapEntry var_propertyType_8073 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (extensionGetter_definition (enumerator_7989.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 183)).readProperty_mTypeName ().readProperty_string (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 183))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 183)) ;
            GALGAS_getterMap var_aMap_8212 = extensionGetter_definition (var_propertyType_8073, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 184)).readProperty_mGetterMap () ;
            const GALGAS_getterCallExpressionAST temp_40 = this ;
            const cMapElement_getterMap * objectArray_8264 = (const cMapElement_getterMap *) var_aMap_8212.readAccessForWithInstruction (temp_40.readProperty_mGetterName ().readProperty_string ()) ;
            if (NULL != objectArray_8264) {
                macroValidSharedObject (objectArray_8264, cMapElement_getterMap) ;
              enumGalgasBool test_41 = kBoolTrue ;
              if (kBoolTrue == test_41) {
                test_41 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_propertyType_8073, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 186)).readProperty_mTypeName ().readProperty_string ().objectCompare (enumerator_7989.current_mPropertyName (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_41) {
                  var_matchingReaderCount_7636.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 187)) ;
                  var_getterFormalArgumentTypeList_7765 = objectArray_8264->mProperty_mArgumentTypeList ;
                  var_hasCompilerArgument_7800 = objectArray_8264->mProperty_mHasCompilerArgument ;
                  var_returnedType_7830 = objectArray_8264->mProperty_mReturnedType ;
                  const GALGAS_getterCallExpressionAST temp_42 = this ;
                  var_receiverExpression_4132 = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_returnedType_7830, temp_42.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4132, enumerator_7989.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 191)) ;
                  var_kind_7873 = objectArray_8264->mProperty_mKind ;
                  enumGalgasBool test_43 = kBoolTrue ;
                  if (kBoolTrue == test_43) {
                    test_43 = GALGAS_bool (kIsNotEqual, objectArray_8264->mProperty_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_43) {
                      const GALGAS_getterCallExpressionAST temp_44 = this ;
                      TC_Array <C_FixItDescription> fixItArray45 ;
                      inCompiler->emitSemanticError (temp_44.readProperty_mGetterName ().readProperty_location (), objectArray_8264->mProperty_mErrorMessage, fixItArray45  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 199)) ;
                    }
                  }
                }
              }
            }
            enumerator_7989.gotoNextObject () ;
          }
          enumGalgasBool test_46 = kBoolTrue ;
          if (kBoolTrue == test_46) {
            test_46 = GALGAS_bool (kIsEqual, var_matchingReaderCount_7636.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_46) {
              const GALGAS_getterCallExpressionAST temp_47 = this ;
              const GALGAS_getterCallExpressionAST temp_48 = this ;
              TC_Array <C_FixItDescription> fixItArray49 ;
              inCompiler->emitSemanticError (temp_47.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4176, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 206)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 206)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 206)).add_operation (temp_48.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 206)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 206)), fixItArray49  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)) ;
              var_getterFormalArgumentTypeList_7765.drop () ; // Release error dropped variable
              var_hasCompilerArgument_7800.drop () ; // Release error dropped variable
              var_returnedType_7830.drop () ; // Release error dropped variable
              var_kind_7873.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_46) {
            enumGalgasBool test_50 = kBoolTrue ;
            if (kBoolTrue == test_50) {
              test_50 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_7636.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_50) {
                GALGAS_string var_s_9382 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_9407 (var_fieldList_7938, kENUMERATION_UP) ;
                while (enumerator_9407.hasCurrentObject ()) {
                  var_s_9382.plusAssign_operation(enumerator_9407.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 212)) ;
                  if (enumerator_9407.hasNextObject ()) {
                    var_s_9382.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 213)) ;
                  }
                  enumerator_9407.gotoNextObject () ;
                }
                const GALGAS_getterCallExpressionAST temp_51 = this ;
                const GALGAS_getterCallExpressionAST temp_52 = this ;
                TC_Array <C_FixItDescription> fixItArray53 ;
                inCompiler->emitSemanticError (temp_51.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4176, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 216)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 216)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 216)).add_operation (temp_52.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 216)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 216)).add_operation (var_s_9382, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 217)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 217)), fixItArray53  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 215)) ;
                var_getterFormalArgumentTypeList_7765.drop () ; // Release error dropped variable
                var_hasCompilerArgument_7800.drop () ; // Release error dropped variable
                var_returnedType_7830.drop () ; // Release error dropped variable
                var_kind_7873.drop () ; // Release error dropped variable
              }
            }
          }
          enumGalgasBool test_54 = kBoolTrue ;
          if (kBoolTrue == test_54) {
            const GALGAS_getterCallExpressionAST temp_55 = this ;
            test_54 = GALGAS_bool (kIsNotEqual, temp_55.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 221)).objectCompare (var_getterFormalArgumentTypeList_7765.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 221)))).boolEnum () ;
            if (kBoolTrue == test_54) {
              const GALGAS_getterCallExpressionAST temp_56 = this ;
              const GALGAS_getterCallExpressionAST temp_57 = this ;
              const GALGAS_getterCallExpressionAST temp_58 = this ;
              TC_Array <C_FixItDescription> fixItArray59 ;
              inCompiler->emitSemanticError (temp_56.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_57.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 222)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 222)).add_operation (extensionGetter_definition (var_receiverType_4176, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 222)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 222)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 222)).add_operation (var_getterFormalArgumentTypeList_7765.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 223)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 222)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 223)).add_operation (temp_58.readProperty_mExpressions ().getter_length (SOURCE_FILE ("expression-getter-call.galgas", 224)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 223)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 224)), fixItArray59  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 222)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_54) {
            GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_10370 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 226)) ;
            const GALGAS_getterCallExpressionAST temp_60 = this ;
            cEnumerator_actualOutputExpressionList enumerator_10441 (temp_60.readProperty_mExpressions (), kENUMERATION_UP) ;
            cEnumerator_functionSignature enumerator_10515 (var_getterFormalArgumentTypeList_7765, kENUMERATION_UP) ;
            while (enumerator_10441.hasCurrentObject () && enumerator_10515.hasCurrentObject ()) {
              GALGAS_semanticExpressionForGeneration var_exp_10835 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10441.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10515.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_10835, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 229)) ;
              enumGalgasBool test_61 = kBoolTrue ;
              if (kBoolTrue == test_61) {
                test_61 = GALGAS_bool (kIsNotEqual, enumerator_10515.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_10441.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_61) {
                  GALGAS_string temp_62 ;
                  const enumGalgasBool test_63 = GALGAS_bool (kIsNotEqual, enumerator_10515.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_63) {
                    temp_62 = enumerator_10515.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 238)) ;
                  }else if (kBoolFalse == test_63) {
                    temp_62 = GALGAS_string::makeEmptyString () ;
                  }
                  GALGAS_string var_s_10940 = GALGAS_string ("!").add_operation (temp_62, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 238)) ;
                  TC_Array <C_FixItDescription> fixItArray64 ;
                  appendFixItActions (fixItArray64, kFixItReplace, var_s_10940) ;
                  inCompiler->emitSemanticError (enumerator_10441.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_10940, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 239)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 239)), fixItArray64  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 239)) ;
                }
              }
              {
              routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_10515.current_mFormalArgumentType (HERE), var_exp_10835.readProperty_mResultType (), enumerator_10441.current_mEndOfExpressionLocation (HERE), var_exp_10835, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 241)) ;
              }
              var_constructorEffectiveParameterList_10370.addAssign_operation (var_exp_10835  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 242)) ;
              enumerator_10441.gotoNextObject () ;
              enumerator_10515.gotoNextObject () ;
            }
            const GALGAS_getterCallExpressionAST temp_65 = this ;
            const GALGAS_getterCallExpressionAST temp_66 = this ;
            outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_7830, temp_65.readProperty_mGetterName ().readProperty_location (), var_kind_7873, var_receiverExpression_4132, var_fieldList_7938, temp_66.readProperty_mGetterName ().readProperty_string (), var_constructorEffectiveParameterList_10370, var_hasCompilerArgument_7800  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 244)) ;
          }
        }
      }
      if (kBoolFalse == test_39) {
        enumGalgasBool test_67 = kBoolTrue ;
        if (kBoolTrue == test_67) {
          test_67 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_receiverType_4176, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 255)).readProperty_mGetterMap ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 255)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_67) {
            const GALGAS_getterCallExpressionAST temp_68 = this ;
            TC_Array <C_FixItDescription> fixItArray69 ;
            inCompiler->emitSemanticError (temp_68.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4176, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 257)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 257)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 257)), fixItArray69  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 256)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_67) {
          const GALGAS_getterCallExpressionAST temp_70 = this ;
          const GALGAS_getterCallExpressionAST temp_71 = this ;
          TC_Array <C_FixItDescription> fixItArray72 ;
          appendFixItActions (fixItArray72, kFixItReplace, extensionGetter_definition (var_receiverType_4176, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 263)).readProperty_mGetterMap ().getter_keyList (SOURCE_FILE ("expression-getter-call.galgas", 263))) ;
          inCompiler->emitSemanticError (temp_70.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4176, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 261)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 261)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 261)).add_operation (temp_71.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 261)).add_operation (GALGAS_string ("' getter "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 261)), fixItArray72  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 260)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_getterCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 291)) ;
  GALGAS_string var_receiverCppName_13401 ;
  const GALGAS_getterCallExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_13401, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 293)) ;
  GALGAS_stringlist var_getterArgumentCppNameList_13470 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 301)) ;
  const GALGAS_getterCallExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_13494 (temp_2.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_13494.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName_13697 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_13494.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_13697, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 303)) ;
    var_getterArgumentCppNameList_13470.addAssign_operation (var_argumentCppName_13697  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 310)) ;
    enumerator_13494.gotoNextObject () ;
  }
  const GALGAS_getterCallExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_getterCallExpressionForGeneration temp_4 = this ;
      GALGAS_unifiedTypeMapEntry var_baseType_13871 = temp_4.readProperty_mReceiverExpression ().readProperty_mResultType () ;
      extensionMethod_addHeaderFileName (var_baseType_13871, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 316)) ;
      GALGAS_bool var_searching_13983 = GALGAS_bool (true) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("expression-getter-call.galgas", 318)).isValid ()) {
        uint32_t variant_13999 = GALGAS_uint::constructor_max (SOURCE_FILE ("expression-getter-call.galgas", 318)).uintValue () ;
        bool loop_13999 = true ;
        while (loop_13999) {
          loop_13999 = var_searching_13983.isValid () ;
          if (loop_13999) {
            loop_13999 = var_searching_13983.boolValue () ;
          }
          if (loop_13999 && (0 == variant_13999)) {
            loop_13999 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-getter-call.galgas", 318)) ;
          }
          if (loop_13999) {
            variant_13999 -- ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = extensionGetter_definition (var_baseType_13871, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 319)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("expression-getter-call.galgas", 319)).operator_not (SOURCE_FILE ("expression-getter-call.galgas", 319)).boolEnum () ;
              if (kBoolTrue == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  const GALGAS_getterCallExpressionForGeneration temp_7 = this ;
                  test_6 = extensionGetter_definition (extensionGetter_definition (var_baseType_13871, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 320)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 320)).readProperty_mGetterMap ().getter_hasKey (temp_7.readProperty_mGetterName () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 320)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    var_baseType_13871 = extensionGetter_definition (var_baseType_13871, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 321)).readProperty_mSuperType () ;
                  }
                }
                if (kBoolFalse == test_6) {
                  var_searching_13983 = GALGAS_bool (false) ;
                }
              }
            }
            if (kBoolFalse == test_5) {
              var_searching_13983 = GALGAS_bool (false) ;
            }
          }
        }
      }
      const GALGAS_getterCallExpressionForGeneration temp_8 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_13871, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329)).add_operation (temp_8.readProperty_mGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_13401 COMMA_SOURCE_FILE ("expression-getter-call.galgas", 330)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_getterCallExpressionForGeneration temp_10 = this ;
        test_9 = extensionGetter_definition (temp_10.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 331)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("expression-getter-call.galgas", 331)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_getterCallExpressionForGeneration temp_11 = this ;
          const GALGAS_getterCallExpressionForGeneration temp_12 = this ;
          outArgument_outCppExpression = GALGAS_string ("callExtensionGetter_").add_operation (temp_11.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 332)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 332)).add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 333)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 333)).add_operation (var_receiverCppName_13401, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 333)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 333)) ;
        }
      }
      if (kBoolFalse == test_9) {
        const GALGAS_getterCallExpressionForGeneration temp_13 = this ;
        extensionMethod_addHeaderFileName (temp_13.readProperty_mReceiverExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 335)) ;
        const GALGAS_getterCallExpressionForGeneration temp_14 = this ;
        outArgument_outCppExpression = GALGAS_string ("extensionGetter_").add_operation (temp_14.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)).add_operation (var_receiverCppName_13401, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_13401 ;
      const GALGAS_getterCallExpressionForGeneration temp_15 = this ;
      cEnumerator_stringlist enumerator_15183 (temp_15.readProperty_mFieldList (), kENUMERATION_UP) ;
      while (enumerator_15183.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".readProperty_").add_operation (enumerator_15183.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 341)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 341)) ;
        enumerator_15183.gotoNextObject () ;
      }
      const GALGAS_getterCallExpressionForGeneration temp_16 = this ;
      extensionMethod_addHeaderFileName (temp_16.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 343)) ;
      const GALGAS_getterCallExpressionForGeneration temp_17 = this ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".getter_").add_operation (temp_17.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 344)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 344)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_15468 (var_getterArgumentCppNameList_13470, kENUMERATION_UP) ;
  while (enumerator_15468.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_15468.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 347)) ;
    if (enumerator_15468.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 348)) ;
    }
    enumerator_15468.gotoNextObject () ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (kIsEqual, var_getterArgumentCppNameList_13470.getter_length (SOURCE_FILE ("expression-getter-call.galgas", 350)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_18) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        const GALGAS_getterCallExpressionForGeneration temp_20 = this ;
        test_19 = temp_20.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (kBoolTrue == test_19) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 352)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 352)) ;
          }
          outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 353)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 353)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_18) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      const GALGAS_getterCallExpressionForGeneration temp_22 = this ;
      test_21 = temp_22.readProperty_mHasCompilerArgument ().boolEnum () ;
      if (kBoolTrue == test_21) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 356)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 356)) ;
        }
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 357)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 357)) ;
      }
    }
    if (kBoolFalse == test_21) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 359)) ;
    }
  }
  const GALGAS_getterCallExpressionForGeneration temp_23 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_23.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 361)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 361)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_constructorExpressionAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_constructorExpressionAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_5595 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_5595, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 166)) ;
      }
    }
  }
  const GALGAS_constructorExpressionAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 168)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                           const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                           const GALGAS_lstring constinArgument_inTypeName,
                                           const GALGAS_lstring constinArgument_inConstructorName,
                                           const GALGAS_actualOutputExpressionList constinArgument_inInitializerEffectiveParameterExpressions,
                                           const GALGAS_location constinArgument_inLocationForOldStyleCollectionInitializerError,
                                           GALGAS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                           GALGAS_unifiedTypeMapEntry & outArgument_outConstructorType,
                                           GALGAS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                           GALGAS_bool & outArgument_outHasCompilerArgument,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outConstructorType.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outHasCompilerArgument.drop () ; // Release 'out' argument
  outArgument_outConstructorType = constinArgument_inType ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outConstructorType = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 190)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-constructor.galgas", 192)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-constructor.galgas", 193)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_constructorMap var_constructorMap_6866 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 198)).readProperty_mConstructorMap () ;
    GALGAS_functionSignature var_constructorFormalArgumentTypeList_7002 ;
    const cMapElement_constructorMap * objectArray_7011 = (const cMapElement_constructorMap *) var_constructorMap_6866.readAccessForWithInstruction (constinArgument_inConstructorName.readProperty_string ()) ;
    if (NULL != objectArray_7011) {
        macroValidSharedObject (objectArray_7011, cMapElement_constructorMap) ;
      var_constructorFormalArgumentTypeList_7002 = objectArray_7011->mProperty_mArgumentTypeList ;
      outArgument_outHasCompilerArgument = objectArray_7011->mProperty_mHasCompilerArgument ;
      outArgument_outReturnedType = objectArray_7011->mProperty_mReturnedType ;
    }else{
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, var_constructorMap_6866.getter_count (SOURCE_FILE ("expression-constructor.galgas", 206)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 208)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 208)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 208)), fixItArray4  COMMA_SOURCE_FILE ("expression-constructor.galgas", 207)) ;
          var_constructorFormalArgumentTypeList_7002.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        appendFixItActions (fixItArray5, kFixItReplace, var_constructorMap_6866.getter_keyList (SOURCE_FILE ("expression-constructor.galgas", 214))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 212)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 212)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 212)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 212)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 212)), fixItArray5  COMMA_SOURCE_FILE ("expression-constructor.galgas", 211)) ;
        var_constructorFormalArgumentTypeList_7002.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_length (SOURCE_FILE ("expression-constructor.galgas", 218)).objectCompare (var_constructorFormalArgumentTypeList_7002.getter_length (SOURCE_FILE ("expression-constructor.galgas", 218)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 220)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 220)).add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 220)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 220)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 220)).add_operation (var_constructorFormalArgumentTypeList_7002.getter_length (SOURCE_FILE ("expression-constructor.galgas", 221)).getter_string (SOURCE_FILE ("expression-constructor.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 220)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_length (SOURCE_FILE ("expression-constructor.galgas", 222)).getter_string (SOURCE_FILE ("expression-constructor.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 222)), fixItArray7  COMMA_SOURCE_FILE ("expression-constructor.galgas", 219)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 224)) ;
    cEnumerator_actualOutputExpressionList enumerator_8429 (constinArgument_inInitializerEffectiveParameterExpressions, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_8524 (var_constructorFormalArgumentTypeList_7002, kENUMERATION_UP) ;
    while (enumerator_8429.hasCurrentObject () && enumerator_8524.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_8821 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_8429.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8524.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_8821, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 227)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_8524.current_mFormalArgumentType (HERE), var_exp_8821.readProperty_mResultType (), enumerator_8429.current_mEndOfExpressionLocation (HERE), var_exp_8821, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 235)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_8821  COMMA_SOURCE_FILE ("expression-constructor.galgas", 236)) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, enumerator_8524.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8429.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_string temp_9 ;
          const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_8524.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            temp_9 = enumerator_8524.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 238)) ;
          }else if (kBoolFalse == test_10) {
            temp_9 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_9085 = GALGAS_string ("!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 238)) ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          appendFixItActions (fixItArray11, kFixItReplace, var_s_9085) ;
          inCompiler->emitSemanticError (enumerator_8429.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_9085, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 239)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 239)), fixItArray11  COMMA_SOURCE_FILE ("expression-constructor.galgas", 239)) ;
        }
      }
      enumerator_8429.gotoNextObject () ;
      enumerator_8524.gotoNextObject () ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    GALGAS_bool test_13 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer.readProperty_value ()) ;
    if (kBoolTrue == test_13.boolEnum ()) {
      test_13 = GALGAS_bool (kIsEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_length (SOURCE_FILE ("expression-constructor.galgas", 244)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    }
    test_12 = test_13.boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_stringset temp_14 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("expression-constructor.galgas", 245)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyList")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 245)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyMap")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 245)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptySortedList")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 245)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyDict")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 245)) ;
      GALGAS_stringset var_oldInitializers_9454 = temp_14 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_oldInitializers_9454.getter_hasKey (constinArgument_inConstructorName.readProperty_string () COMMA_SOURCE_FILE ("expression-constructor.galgas", 246)).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string (" {}")) ;
          inCompiler->emitSemanticError (constinArgument_inLocationForOldStyleCollectionInitializerError, GALGAS_string ("old style collection initializer call (due to '--error-old-syle-collection-initializer' option)"), fixItArray16  COMMA_SOURCE_FILE ("expression-constructor.galgas", 247)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedType_10583 ;
  GALGAS_unifiedTypeMapEntry var_constructorType_10629 ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_10709 ;
  GALGAS_bool var_hasCompilerArgument_10744 ;
  {
  const GALGAS_constructorExpressionAST temp_0 = this ;
  const GALGAS_constructorExpressionAST temp_1 = this ;
  const GALGAS_constructorExpressionAST temp_2 = this ;
  const GALGAS_constructorExpressionAST temp_3 = this ;
  routine_analyzeConstructorInvocation (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, temp_0.readProperty_mTypeName (), temp_1.readProperty_mConstructorName (), temp_2.readProperty_mExpressions (), temp_3.readProperty_locationForOldStyleCollectionInitializerError (), var_returnedType_10583, var_constructorType_10629, var_constructorEffectiveParameterList_10709, var_hasCompilerArgument_10744, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 264)) ;
  }
  const GALGAS_constructorExpressionAST temp_4 = this ;
  GALGAS_lstring var_constructorTypeUsefulnessName_10784 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (extensionGetter_definition (var_constructorType_10629, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 279)).readProperty_mTypeName ().readProperty_string (), temp_4.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-constructor.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 279)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_10784 COMMA_SOURCE_FILE ("expression-constructor.galgas", 280)) ;
  }
  const GALGAS_constructorExpressionAST temp_5 = this ;
  GALGAS_lstring var_returnedTypeUsefulnessName_11019 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (extensionGetter_definition (var_returnedType_10583, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 281)).readProperty_mTypeName ().readProperty_string (), temp_5.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-constructor.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 281)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_11019 COMMA_SOURCE_FILE ("expression-constructor.galgas", 282)) ;
  }
  const GALGAS_constructorExpressionAST temp_6 = this ;
  const GALGAS_constructorExpressionAST temp_7 = this ;
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_10583, temp_6.readProperty_mConstructorName ().readProperty_location (), var_constructorType_10629, temp_7.readProperty_mConstructorName ().readProperty_string (), var_constructorEffectiveParameterList_10709, var_hasCompilerArgument_10744  COMMA_SOURCE_FILE ("expression-constructor.galgas", 284)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@defaultConstructorExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_defaultConstructorExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_defaultConstructorExpressionAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_defaultConstructorExpressionAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_11779 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_11779, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 300)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@defaultConstructorExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_defaultConstructorExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_type_12274 = constinArgument_inType ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_defaultConstructorExpressionAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_defaultConstructorExpressionAST temp_2 = this ;
      var_type_12274 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 316)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_type_12274.getter_isNull (SOURCE_FILE ("expression-constructor.galgas", 318)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_defaultConstructorExpressionAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-constructor.galgas", 319)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = extensionGetter_definition (var_type_12274, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 322)).readProperty_mIsConcrete ().operator_not (SOURCE_FILE ("expression-constructor.galgas", 322)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_defaultConstructorExpressionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an abstract class does not support the default constructor"), fixItArray8  COMMA_SOURCE_FILE ("expression-constructor.galgas", 323)) ;
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_type_12274, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 324)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_defaultConstructorExpressionAST temp_10 = this ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this class does not support the default constructor"), fixItArray11  COMMA_SOURCE_FILE ("expression-constructor.galgas", 325)) ;
        }
      }
    }
    const GALGAS_defaultConstructorExpressionAST temp_12 = this ;
    GALGAS_lstring var_usefulnessName_12868 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (extensionGetter_definition (var_type_12274, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 328)).readProperty_mTypeName ().readProperty_string (), temp_12.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-constructor.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 328)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_12868 COMMA_SOURCE_FILE ("expression-constructor.galgas", 329)) ;
    }
    const GALGAS_defaultConstructorExpressionAST temp_13 = this ;
    outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_type_12274, temp_13.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-constructor.galgas", 331)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_constructorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 358)) ;
  GALGAS_stringlist var_parameterList_14179 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 359)) ;
  const GALGAS_constructorExpressionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_14203 (temp_1.readProperty_mEffectiveParameterList (), kENUMERATION_UP) ;
  while (enumerator_14203.hasCurrentObject ()) {
    GALGAS_string var_parameter_14420 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14203.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_14420, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 361)) ;
    var_parameterList_14179.addAssign_operation (var_parameter_14420  COMMA_SOURCE_FILE ("expression-constructor.galgas", 368)) ;
    enumerator_14203.gotoNextObject () ;
  }
  const GALGAS_constructorExpressionForGeneration temp_2 = this ;
  const GALGAS_constructorExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mConstructorType (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 370)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 370)).add_operation (temp_3.readProperty_mConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("expression-constructor.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 371)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 371)) ;
  cEnumerator_stringlist enumerator_14678 (var_parameterList_14179, kENUMERATION_UP) ;
  while (enumerator_14678.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_14678.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 374)) ;
    if (enumerator_14678.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 375)) ;
    }
    enumerator_14678.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma_14796 = GALGAS_bool (kIsStrictSup, var_parameterList_14179.getter_length (SOURCE_FILE ("expression-constructor.galgas", 377)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_constructorExpressionForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needsComma_14796.boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 380)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 382)) COMMA_SOURCE_FILE ("expression-constructor.galgas", 382)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 383)) ;
      var_needsComma_14796 = GALGAS_bool (true) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_needsComma_14796.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_constructorExpressionForGeneration temp_8 = this ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 387)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 387)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_constructorExpressionForGeneration temp_9 = this ;
    outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_9.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 389)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 389)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@defaultConstructorExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_defaultConstructorExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_defaultConstructorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 407)) ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_1 = this ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_2 = this ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 409)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 409)).add_operation (extensionGetter_definition (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 411)).readProperty_mDefaultConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("expression-constructor.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 410)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 411)).add_operation (extensionGetter_sourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 412)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 412)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionAST temp_0 = this ;
  cEnumerator_actualOutputExpressionList enumerator_2403 (temp_0.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_2403.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_2403.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 62)) ;
    enumerator_2403.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_2991 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 76)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2991 COMMA_SOURCE_FILE ("expression-function-call.galgas", 77)) ;
  }
  GALGAS_functionSignature var_functionSignature_3295 ;
  GALGAS_unifiedTypeMapEntry var_resultType_3336 ;
  GALGAS_bool var_isInternal_3362 ;
  const GALGAS_functionCallExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_3295, var_resultType_3336, var_isInternal_3362, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 79)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_3362.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_functionCallExpressionAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_3439 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 87)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_functionCallExpressionAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 88)).objectCompare (var_procDeclarationLocation_3439.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 88)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_functionCallExpressionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_3439.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 89)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 89)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas", 89)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_functionCallExpressionAST temp_9 = this ;
    test_8 = GALGAS_bool (kIsNotEqual, var_functionSignature_3295.getter_length (SOURCE_FILE ("expression-function-call.galgas", 93)).objectCompare (temp_9.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("expression-function-call.galgas", 93)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_functionCallExpressionAST temp_10 = this ;
      const GALGAS_functionCallExpressionAST temp_11 = this ;
      const GALGAS_functionCallExpressionAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 95)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 95)).add_operation (var_functionSignature_3295.getter_length (SOURCE_FILE ("expression-function-call.galgas", 95)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 95)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 95)).add_operation (temp_12.readProperty_mExpressionList ().getter_length (SOURCE_FILE ("expression-function-call.galgas", 96)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 96)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 96)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas", 94)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_4178 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("expression-function-call.galgas", 100)) ;
    const GALGAS_functionCallExpressionAST temp_14 = this ;
    cEnumerator_functionSignature enumerator_4267 (var_functionSignature_3295, kENUMERATION_UP) ;
    cEnumerator_actualOutputExpressionList enumerator_4344 (temp_14.readProperty_mExpressionList (), kENUMERATION_UP) ;
    while (enumerator_4267.hasCurrentObject () && enumerator_4344.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_4635 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_4344.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_4267.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_4635, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 102)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_4267.current_mFormalArgumentType (HERE), var_expression_4635.readProperty_mResultType (), enumerator_4344.current_mEndOfExpressionLocation (HERE), var_expression_4635, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 110)) ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, enumerator_4267.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_4344.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_4267.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_4267.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 117)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_4902 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 117)) ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_4902) ;
          inCompiler->emitSemanticError (enumerator_4344.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_4902, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 118)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 118)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas", 118)) ;
        }
      }
      var_semanticExpressionListForGeneration_4178.addAssign_operation (var_expression_4635  COMMA_SOURCE_FILE ("expression-function-call.galgas", 121)) ;
      enumerator_4267.gotoNextObject () ;
      enumerator_4344.gotoNextObject () ;
    }
    const GALGAS_functionCallExpressionAST temp_19 = this ;
    const GALGAS_functionCallExpressionAST temp_20 = this ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_3336, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_4178  COMMA_SOURCE_FILE ("expression-function-call.galgas", 123)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 149)) ;
  const GALGAS_functionCallExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_1.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 151))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 151)) ;
  GALGAS_stringlist var_parameterList_6376 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-function-call.galgas", 153)) ;
  const GALGAS_functionCallExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_6412 (temp_2.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_6412.hasCurrentObject ()) {
    GALGAS_string var_parameter_6579 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_6412.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_6579, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 155)) ;
    var_parameterList_6376.addAssign_operation (var_parameter_6579  COMMA_SOURCE_FILE ("expression-function-call.galgas", 156)) ;
    enumerator_6412.gotoNextObject () ;
  }
  const GALGAS_functionCallExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("function_").add_operation (temp_3.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 158)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 158)) ;
  cEnumerator_stringlist enumerator_6722 (var_parameterList_6376, kENUMERATION_UP) ;
  while (enumerator_6722.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_6722.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 160)) ;
    enumerator_6722.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 162)) COMMA_SOURCE_FILE ("expression-function-call.galgas", 162)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 163)) ;
  const GALGAS_functionCallExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 164)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 164)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_literalTypeInExpressionAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry joker_2067 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mLiteralTypeName (), joker_2067, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 50)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalTypeInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_2568 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 63)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2568 COMMA_SOURCE_FILE ("expression-literal-type.galgas", 64)) ;
  }
  const GALGAS_literalTypeInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_type_2724 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_1.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 66)) ;
  const GALGAS_literalTypeInExpressionAST temp_2 = this ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 68))  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 68)), temp_2.readProperty_mLiteralTypeName ().readProperty_location (), var_type_2724  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 67)) ;
}
