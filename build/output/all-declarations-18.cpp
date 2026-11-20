#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-18.h"

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticComponentGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticComponentGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticComponentGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticComponentGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticComponentGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticComponentGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate initializerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_initializerImplementation (Compiler * inCompiler,
                                                                                              const GGS_string & in_CLASS_5F_NAME,
                                                                                              const GGS_string & in_INITIALIZER_5F_NAME,
                                                                                              const GGS__5B_formalInputParameterForGeneration_5D_ & /* in_FORMAL_5F_ARGUMENT_5F_LIST */,
                                                                                              const GGS_string & in_INITIALIZER_5F_IMPLEMENTATION
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   ") ;
  result.appendString (GGS_string ("INITIALIZER @").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).add_operation (in_INITIALIZER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("initializer.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_INITIALIZER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (Compiler * inCompiler,
                                                                                                       const GGS_string & in_CLASS_5F_NAME,
                                                                                                       const GGS_string & in_GETTER_5F_NAME,
                                                                                                       const GGS__5B_formalInputParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                       const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension func '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_513_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_513 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_513.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_513.current_entry (HERE).readProperty_mIsConstant ().boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_513.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_513.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_513.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_513.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_513.gotoNextObject () ;
      index_513_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (Compiler * inCompiler,
                                                                                                          const GGS_string & in_CLASS_5F_NAME,
                                                                                                          const GGS_string & in_GETTER_5F_NAME,
                                                                                                          const GGS__5B_formalInputParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                          const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension func '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_501_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_501 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_501.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_501.current_entry (HERE).readProperty_mIsConstant ().boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_501.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_501.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_501.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_501.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_501.gotoNextObject () ;
      index_501_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 20)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_1113_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_1113 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1113.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1113.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (", ") ;
      enumerator_1113.gotoNextObject () ;
      index_1113_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (Compiler * inCompiler,
                                                                                               const GGS_string & in_CLASS_5F_NAME,
                                                                                               const GGS_string & in_GETTER_5F_NAME,
                                                                                               const GGS__5B_formalInputParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                               const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension func '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-func.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-func.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_498_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_498 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_498.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_498.current_entry (HERE).readProperty_mIsConstant ().boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_498.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_498.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_498.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_498.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_498.gotoNextObject () ;
      index_498_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & in_CLASS_5F_NAME,
                                                                                                  const GGS_string & in_GETTER_5F_NAME,
                                                                                                  const GGS__5B_formalInputParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GGS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                  const GGS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension func '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_GETTER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_620_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_620 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_620.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_620.current_entry (HERE).readProperty_mIsConstant ().boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_620.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 15)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_620.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 15)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_620.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 17)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_620.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 17)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_620.gotoNextObject () ;
      index_620_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.appendString (" result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_1232_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_1232 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1232.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1232.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (", ") ;
      enumerator_1232.gotoNextObject () ;
      index_1232_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_CLASS_5F_NAME,
                                                                                                            const GGS_string & in_GETTER_5F_NAME,
                                                                                                            const GGS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                            const GGS_unifiedTypeMapEntry & /* in_RETURN_5F_TYPE */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Overriding extension func '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-func.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-func.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-func.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-func.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_GETTER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (Compiler * inCompiler,
                                                                                                       const GGS_string & in_CLASS_5F_NAME,
                                                                                                       const GGS_string & in_METHOD_5F_NAME,
                                                                                                       const GGS__5B_formalParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension proc '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_460_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_460 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_460.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_460.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_460.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_460.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_460.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_460.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_460.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_460.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_460.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_460.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_460.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_460.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_460.gotoNextObject () ;
      index_460_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (Compiler * inCompiler,
                                                                                                          const GGS_unifiedTypeMapEntry & in_RECEIVER_5F_TYPE,
                                                                                                          const GGS_string & in_METHOD_5F_NAME,
                                                                                                          const GGS__5B_formalParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Abstract extension proc '@").add_operation (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 3)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 7)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_518_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_518 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_518.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_518.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_518.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_518.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_518.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_518.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_518.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_518.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_518.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_518.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_518.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_518.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_518.gotoNextObject () ;
      index_518_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GGS_uint index_1558_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_1558 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1558.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1558.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 25)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_1558.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 26)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1558.gotoNextObject () ;
      index_1558_.increment () ;
    }
  }
  result.appendString ("//--- Find proc\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 31)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (") ;\n    inObject->method_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 32)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_2032_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_2032 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2032.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2032.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 34)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_2032.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2032.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 36)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_2032.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_2032.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 38)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_2032.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_2032.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", ") ;
      enumerator_2032.gotoNextObject () ;
      index_2032_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (Compiler * inCompiler,
                                                                                               const GGS_string & in_CLASS_5F_NAME,
                                                                                               const GGS_string & in_METHOD_5F_NAME,
                                                                                               const GGS__5B_formalParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension proc '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_451_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_451 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_451.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_451.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-proc.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_451.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_451.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_451.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-proc.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_451.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_451.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_451.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_451.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_451.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_451.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_451.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_451.gotoNextObject () ;
      index_451_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & in_CLASS_5F_NAME,
                                                                                                  const GGS_string & in_METHOD_5F_NAME,
                                                                                                  const GGS__5B_formalParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Extension proc '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 2)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 2)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_567_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_567 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_567.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_567.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 12)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_567.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_567.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_567.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 14)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_567.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 15)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_567.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 15)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_567.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 16)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_567.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_567.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_567.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_567.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 19)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_567.gotoNextObject () ;
      index_567_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
  GGS_uint index_1579_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_1579 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1579.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1579.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 26)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_1579.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 27)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1579.gotoNextObject () ;
      index_1579_.increment () ;
    }
  }
  result.appendString ("  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (") ;\n    inObject->method_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 32)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_2005_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_2005 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2005.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2005.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 34)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_2005.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2005.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 36)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_2005.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_2005.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 38)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_2005.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_2005.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", ") ;
      enumerator_2005.gotoNextObject () ;
      index_2005_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_CLASS_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Overriding extension proc '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-proc.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-proc.cpp.galgasTemplate", 2)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-proc.cpp.galgasTemplate", 2)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-proc.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (Compiler * inCompiler,
                                                                                           const GGS__5B_string_5D_ & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS__5B_string_5D_ & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS__5B_string_5D_ & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS__5B_string_5D_ & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_string & in_FILEWRAPPER_5F_NAME
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_307_idx (0) ;
  if (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_307 (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_307.hasCurrentObject ()) {
      result.appendString ("extern const char * gWrapperFileContent_") ;
      result.appendString (enumerator_307.current_entry (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 8)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_307.gotoNextObject () ;
      index_307_idx.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_577_idx (0) ;
  if (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_577 (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_577.hasCurrentObject ()) {
      result.appendString ("extern const uint8_t gWrapperFileContent_") ;
      result.appendString (enumerator_577.current_entry (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" [] ;\n") ;
      enumerator_577.gotoNextObject () ;
      index_577_idx.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_841_idx (0) ;
  if (in_FILE_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_841 (in_FILE_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_841.hasCurrentObject ()) {
      result.appendString ("extern const cRegularFileWrapper gWrapperFile_") ;
      result.appendString (enumerator_841.current_entry (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_841.gotoNextObject () ;
      index_841_idx.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_1108_ (0) ;
  if (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_1108 (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_1108.hasCurrentObject ()) {
      result.appendString ("extern const cDirectoryWrapper gWrapperDirectory_") ;
      result.appendString (enumerator_1108.current_entry (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_1108.gotoNextObject () ;
      index_1108_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (Compiler * inCompiler,
                                                                                              const GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                              const GGS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FILEWRAPPER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                         const GGS_string & in_TYPE_5F_NAME,
                                                                                                         const GGS_string & in_GETTER_5F_NAME,
                                                                                                         const GGS__5B_formalInputParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension func '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("' (as function)"), inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" extensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class GGS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" & inObject") ;
  GGS_uint index_499_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_499 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_499.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_499.current_entry (HERE).readProperty_mIsConstant ().boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_499.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" & constinArgument") ;
        result.appendString (index_499_IDX.getter_string (SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_499.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_499_IDX.getter_string (SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_499.gotoNextObject () ;
      index_499_IDX.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_TYPE_5F_NAME,
                                                                                                            const GGS_string & in_GETTER_5F_NAME,
                                                                                                            const GGS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("  Extension Getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-implementation.cpp.galgasTemplate", 2)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-implementation.cpp.galgasTemplate", 2)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-implementation.cpp.galgasTemplate", 2)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-implementation.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                         const GGS_string & in_TYPE_5F_NAME,
                                                                                                         const GGS_string & in_METHOD_5F_NAME,
                                                                                                         const GGS__5B_formalParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension proc '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class GGS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" inObject") ;
  GGS_uint index_448_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_448 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_448.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_448.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_448.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_448.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_448.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_448.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_448.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_448.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_448.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_448.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_448.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_448.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_448.gotoNextObject () ;
      index_448_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_TYPE_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_NAME,
                                                                                                            const GGS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension proc '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                         const GGS_string & in_TYPE_5F_NAME,
                                                                                                         const GGS_string & in_MODIFIER_5F_NAME,
                                                                                                         const GGS__5B_formalParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension mutating proc '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class GGS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" & ioObject") ;
  GGS_uint index_457_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_457 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_457.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_457.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_457.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_457.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_457.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_457.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_457.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_457.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_457.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_457.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_457.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_457.current_entry (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_457.gotoNextObject () ;
      index_457_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (Compiler * inCompiler,
                                                                                        const GGS_string & in_FUNCTION_5F_NAME,
                                                                                        const GGS__5B_formalInputParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                        const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" function_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_389_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_389 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_389.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_389.current_entry (HERE).readProperty_mIsConstant ().boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_389.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (" & constinArgument") ;
        result.appendString (index_389_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_389.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_389_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_389.gotoNextObject () ;
      index_389_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (Compiler * inCompiler,
                                                                                           const GGS_string & in_FUNCTION_5F_NAME,
                                                                                           const GGS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (Compiler * inCompiler,
                                                                                       const GGS_string & in_ROUTINE_5F_NAME,
                                                                                       const GGS__5B_formalParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid routine_") ;
  result.appendString (in_ROUTINE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_354_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_354 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_354.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_354.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 9)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_354.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_354_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_354.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 11)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_354.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_354_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_354.current_entry (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 13)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_354.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_354_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_354.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_354_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_354.gotoNextObject () ;
      index_354_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (Compiler * inCompiler,
                                                                                          const GGS_string & in_ROUTINE_5F_NAME,
                                                                                          const GGS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_ROUTINE_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (Compiler * inCompiler,
                                                                                               const GGS_string & in_FUNCTION_5F_NAME,
                                                                                               const GGS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                               const GGS__5B_formalInputParameterForGeneration_5D_ & /* in_FORMAL_5F_ARGUMENT_5F_LIST */,
                                                                                               const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Once function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//  Function implementation                                                                      \n//--------------------------------------------------------------------------------------------------\n\nstatic bool gOnceFunctionResultAvailable_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (" = false ;\nstatic GGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 14)).stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" function_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" (") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n              ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (! gOnceFunctionResultAvailable_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 20)).stringValue ()) ;
  result.appendString (") {\n    gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue ()) ;
  result.appendString (" = onceFunction_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue ()) ;
  result.appendString (" (inCompiler COMMA_THERE) ;\n    gOnceFunctionResultAvailable_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.appendString (" = true ;\n  }\n  return gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void releaseOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 29)).stringValue ()) ;
  result.appendString (" (void) {\n  gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 30)).stringValue ()) ;
  result.appendString (".drop () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nPrologueEpilogue gEpilogueForOnceFunction_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 35)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("nullptr,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("releaseOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
  result.appendString (") ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (Compiler * inCompiler,
                                                                                                   const GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                   const GGS_string & in_TEMPLATE_5F_NAME,
                                                                                                   const GGS__5B_formalInputParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGGS_string filewrapperTemplate_") ;
  result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler") ;
  GGS_uint index_478_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_478 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_478.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_478.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" & ") ;
      result.appendString (enumerator_478.current_entry (HERE).readProperty_mFormalArgumentCppName ().stringValue ()) ;
      enumerator_478.gotoNextObject () ;
      index_478_.increment () ;
    }
  }
  result.appendString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (Compiler * inCompiler,
                                                                                                      const GGS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const GGS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const GGS__5B_formalInputParameterForGeneration_5D_ & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                      const GGS_stringset & in_UNUSED_5F_VAR_5F_SET,
                                                                                                      const GGS_bool & in_USES_5F_COLUMN_5F_MARKER,
                                                                                                      const GGS_string & in_GENERATED_5F_INSTRUCTION_5F_STRING
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGGS_string filewrapperTemplate_") ;
  result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * ") ;
  const GalgasBool test_0 = in_UNUSED_5F_VAR_5F_SET.getter_contains (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ") ;
    result.appendString (function_gCompilerCppName (inCompiler COMMA_HERE).stringValue ()) ;
    result.appendString (" */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString (function_gCompilerCppName (inCompiler COMMA_HERE).stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_589_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_589 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_589.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_589.current_entry (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" & ") ;
      const GalgasBool test_1 = in_UNUSED_5F_VAR_5F_SET.getter_contains (enumerator_589.current_entry (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 15)).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("/* ") ;
        result.appendString (enumerator_589.current_entry (HERE).readProperty_mFormalArgumentCppName ().stringValue ()) ;
        result.appendString (" */") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (enumerator_589.current_entry (HERE).readProperty_mFormalArgumentCppName ().stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_589.gotoNextObject () ;
      index_589_.increment () ;
    }
  }
  result.appendString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  String result ;\n") ;
  const GalgasBool test_2 = in_USES_5F_COLUMN_5F_MARKER.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  uint32_t columnMarker = 0 ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  if (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (int32_t (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result.appendString (in_GENERATED_5F_INSTRUCTION_5F_STRING.stringValue ()) ;
  if (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (- int32_t (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result.appendString ("  return GGS_string (result) ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@functionPrototypeDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_functionPrototypeDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 943)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionPrototypeDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                   GGS_string & outArgument_outHeader,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionPrototypeDeclarationForGeneration temp_0 = this ;
  const GGS_functionPrototypeDeclarationForGeneration temp_1 = this ;
  const GGS_functionPrototypeDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), temp_1.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 954)) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 951))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@onceFunctionDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_onceFunctionDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 961)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                              GGS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationForGeneration temp_0 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE), extensionGetter_identifierRepresentation (temp_1.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 972)) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 969))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticTypeForGeneration::getter_appendTypeGenericImplementation (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_38580 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 981)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_selfTypeDefinition_38580.readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("semanticGeneration.galgas4", 982)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_semanticTypeForGeneration temp_2 = this ;
    result = GGS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, var_selfTypeDefinition_38580.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 987)), var_selfTypeDefinition_38580.readProperty_superType () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 985))) ;
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionImplementationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                                    GGS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionImplementationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1001)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1001))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1001)) ;
  GGS_string var_code_39700 ;
  {
  const GGS_functionImplementationForGeneration temp_1 = this ;
  const GGS_functionImplementationForGeneration temp_2 = this ;
  const GGS_functionImplementationForGeneration temp_3 = this ;
  const GGS_functionImplementationForGeneration temp_4 = this ;
  const GGS_functionImplementationForGeneration temp_5 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("function_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1003)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1003)), ioArgument_ioInclusionSet, temp_2.readProperty_mFormalArgumentList (), temp_3.readProperty_mFunctionInstructionList (), GGS_string ("Compiler"), temp_4.readProperty_mReturnType (), temp_5.readProperty_mResultVariableCppName (), GGS_bool (false), GGS_bool (false), var_code_39700, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1002)) ;
  }
  const GGS_functionImplementationForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, temp_6.readProperty_mFunctionName (), var_code_39700 COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1014))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@onceFunctionDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1029)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1029))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1029)) ;
  GGS_string var_code_40596 ;
  {
  const GGS_onceFunctionDeclarationForGeneration temp_1 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_2 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_3 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_4 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("onceFunction_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1031)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1031)), ioArgument_ioInclusionSet, GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE), temp_2.readProperty_mFunctionInstructionList (), GGS_string ("Compiler"), temp_3.readProperty_mReturnType (), temp_4.readProperty_mResultVariableCppName (), GGS_bool (true), GGS_bool (false), var_code_40596, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1030)) ;
  }
  const GGS_onceFunctionDeclarationForGeneration temp_5 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, temp_5.readProperty_mFunctionName (), var_code_40596, GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE), extensionGetter_identifierRepresentation (temp_6.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1046)) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1042))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexiqueDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_lexiqueDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 1064)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_string & outArgument_outHeader,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  outArgument_outHeader = temp_0.readProperty_mHeaderContents () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexiqueDeclarationForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperLexiqueName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexiqueDeclarationForGeneration temp_3 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_3.readProperty_mSuperLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1074)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1074))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1074)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_string & outArgument_outHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1084)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1084))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1084)) ;
  const GGS_lexiqueDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = temp_1.readProperty_mCppContents () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueDeclarationForGeneration appendSpecificFiles'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificFiles (const GGS_string constinArgument_inProductDirectory,
                                                                       GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                       GGS__5B_string_5D_ & ioArgument_ioSwiftAppProductFileList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1095)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1095)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1095))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1095)) ;
  const GGS_lexiqueDeclarationForGeneration temp_1 = this ;
  ioArgument_ioSwiftAppProductFileList.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_1.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1096)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1096)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1096))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1096)) ;
  {
  const GGS_lexiqueDeclarationForGeneration temp_2 = this ;
  const GGS_lexiqueDeclarationForGeneration temp_3 = this ;
  GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("lexique-").add_operation (temp_2.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1099)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1099)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1099)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), temp_3.readProperty_mSwiftUIImplementation (), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1097)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@programComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_programComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("semanticGeneration.galgas4", 1119)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@programComponentForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                              GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_programComponentForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusAssignOperation(temp_0.readProperty_mInclusionSet (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1128)) ;
  const GGS_programComponentForGeneration temp_1 = this ;
  outArgument_outImplementation = temp_1.readProperty_mImplementationString () ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@filewrapperDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_filewrapperDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 1139)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile??&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (const GGS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                                                     const GGS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                                     GGS__5B_string_5D_ & ioArgument_ioRegularFileIndexStringList,
                                                                     GGS__5B_string_5D_ & ioArgument_ioDirectoryIndexStringList,
                                                                     GGS__5B_string_5D_ & ioArgument_ioRegularTextContentIndexStringList,
                                                                     GGS__5B_string_5D_ & ioArgument_ioRegularBinaryContentIndexStringList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.plusPlusAssignOperation (ioArgument_ioDirectoryIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1151)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1151))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1151)) ;
  UpEnumerator_wrapperFileMap enumerator_44860 (constinArgument_inFilewrapperFileMap) ;
  while (enumerator_44860.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.plusPlusAssignOperation (ioArgument_ioRegularFileIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1153)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1153))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1153)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_44860.current (HERE).readProperty_mIsTextFile ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.plusPlusAssignOperation (enumerator_44860.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1155))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1155)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.plusPlusAssignOperation (enumerator_44860.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1157))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1157)) ;
    }
    enumerator_44860.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_45232 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_45232.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (enumerator_45232.current (HERE).readProperty_mRegularFileMap (), enumerator_45232.current (HERE).readProperty_mDirectoryMap (), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1161)) ;
    }
    enumerator_45232.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                             GGS_string & outArgument_outHeader,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_string_5D_ var_regularFileIndexStringList_45799 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_regularBinaryContentIndexStringList_45847 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_regularTextContentIndexStringList_45904 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_directoryIndexStringList_45959 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperDeclarationForGeneration temp_0 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_1 = this ;
  routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (temp_0.readProperty_mFilewrapperFileMap (), temp_1.readProperty_mFilewrapperDirectoryMap (), var_regularFileIndexStringList_45799, var_directoryIndexStringList_45959, var_regularTextContentIndexStringList_45904, var_regularBinaryContentIndexStringList_45847, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1181)) ;
  }
  const GGS_filewrapperDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_45799, var_directoryIndexStringList_45959, var_regularTextContentIndexStringList_45904, var_regularBinaryContentIndexStringList_45847, temp_2.readProperty_mFilewrapperName () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1189))) ;
  const GGS_filewrapperDeclarationForGeneration temp_3 = this ;
  UpEnumerator__5B_filewrapperTemplateForGeneration_5D_ enumerator_46572 (temp_3.readProperty_mFilewrapperTemplateListForGeneration ()) ;
  while (enumerator_46572.hasCurrentObject ()) {
    const GGS_filewrapperDeclarationForGeneration temp_4 = this ;
    outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, temp_4.readProperty_mFilewrapperName (), enumerator_46572.current (HERE).readProperty_mFilewrapperTemplateName (), enumerator_46572.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1198))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1198)) ;
    enumerator_46572.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (const GGS_string constinArgument_inFilewrapperName,
                                                              const GGS_string constinArgument_inFilewrapperDirectory,
                                                              const GGS_uint constinArgument_inFilewrapperDirectoryIndex,
                                                              const GGS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                                              const GGS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                              GGS_string & ioArgument_ioImplementation,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_wrapperFileMap enumerator_47319 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_47319.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_47319.current (HERE).readProperty_mIsTextFile ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_contents_47407 = GGS_string::class_func_stringWithContentsOfFile (enumerator_47319.current (HERE).readProperty_mAbsoluteFilePath (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1218)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1219)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1219)).add_operation (enumerator_47319.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1219)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1219)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1219)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("const char * gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1220)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_47319.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1221)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1221)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1222)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1223)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1223)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" = "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1224)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, var_contents_47407.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1225)).objectCompare (GGS_uint (uint32_t (100U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS__5B_string_5D_ var_components_47921 = var_contents_47407.getter_componentsSeparatedByString (GGS_string ("\n") COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1226)) ;
            GGS_string var_lastLine_48016 ;
            {
            var_components_47921.setter_removeLast (var_lastLine_48016, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1227)) ;
            }
            UpEnumerator__5B_string_5D_ enumerator_48047 (var_components_47921) ;
            const bool bool_2 = true ;
            if (enumerator_48047.hasCurrentObject () && bool_2) {
              ioArgument_ioImplementation.plusAssignOperation(GGS_string ("\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1230)) ;
              while (enumerator_48047.hasCurrentObject () && bool_2) {
                GGS_string var_s_48135 = enumerator_48047.current (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1232)) ;
                ioArgument_ioImplementation.plusAssignOperation(var_s_48135.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1233)).add_operation (GGS_string ("\n  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1233)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1233)) ;
                enumerator_48047.gotoNextObject () ;
              }
            }
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::greaterThan, var_lastLine_48016.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1235)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                ioArgument_ioImplementation.plusAssignOperation(var_lastLine_48016.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1236)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1236)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          ioArgument_ioImplementation.plusAssignOperation(var_contents_47407.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1239)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1239)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" ;\n\nconst cRegularFileWrapper gWrapperFile_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1241)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_47319.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1242)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1242)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1243)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1244)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1244)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" (\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1245)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_47319.current (HERE).readProperty_lkey ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1246)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1246)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (",\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1247)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_47319.current (HERE).readProperty_lkey ().readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas4", 1248)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1248)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1248)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (",\n  true, // Text file\n "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1249)) ;
        ioArgument_ioImplementation.plusAssignOperation(var_contents_47407.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1250)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1250)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1250)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (", // Text length\n  gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1251)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_47319.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1252)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1252)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1253)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1254)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1254)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("\n) ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1255)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_data var_contents_49397 = GGS_data::class_func_dataWithContentsOfFile (enumerator_47319.current (HERE).readProperty_mAbsoluteFilePath (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1257)) ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1258)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1258)).add_operation (enumerator_47319.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1258)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1258)).add_operation (GGS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1258)).add_operation (enumerator_47319.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1260)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1259)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1260)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1261)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1260)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1261)).add_operation (var_contents_49397.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1261)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1261)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1261)).add_operation (GGS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1261)).add_operation (var_contents_49397.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1262)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1261)).add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1262)).add_operation (GGS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1262)).add_operation (enumerator_47319.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1263)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1263)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1263)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1264)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1263)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1264)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1264)).add_operation (enumerator_47319.current (HERE).readProperty_lkey ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1265)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1265)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1265)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1265)).add_operation (enumerator_47319.current (HERE).readProperty_lkey ().readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas4", 1266)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1266)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1266)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1266)).add_operation (GGS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1266)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1267)).add_operation (var_contents_49397.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1268)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1268)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1268)).add_operation (GGS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1268)).add_operation (GGS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1268)).add_operation (enumerator_47319.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1269)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1269)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1269)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1269)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1269)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1269)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1269)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1258)) ;
    }
    enumerator_47319.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_50541 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_50541.hasCurrentObject ()) {
    {
    routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (constinArgument_inFilewrapperName, enumerator_50541.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_50541.current (HERE).readProperty_mWrapperDirectoryIndex (), enumerator_50541.current (HERE).readProperty_mRegularFileMap (), enumerator_50541.current (HERE).readProperty_mDirectoryMap (), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1275)) ;
    }
    enumerator_50541.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1285)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1285)).add_operation (GGS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1285)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1287)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1286)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1287)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1287)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1287)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1287)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1288)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1288)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1288)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1288)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1288)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1285)) ;
  UpEnumerator_wrapperFileMap enumerator_51216 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_51216.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  & gWrapperFile_").add_operation (enumerator_51216.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1290)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1290)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1290)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1290)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1290)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1290)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1290)) ;
    enumerator_51216.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1292)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1292)) ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1295)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1295)).add_operation (GGS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1295)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1297)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1296)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1297)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1297)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1297)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1297)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1298)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1298)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1298)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1298)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1298)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1295)) ;
  UpEnumerator_wrapperDirectoryMap enumerator_51833 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_51833.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  & gWrapperDirectory_").add_operation (enumerator_51833.current (HERE).readProperty_mWrapperDirectoryIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1300)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1300)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1300)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1300)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1300)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1300)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1300)) ;
    enumerator_51833.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1302)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1302)) ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1305)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1305)).add_operation (GGS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1305)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1306)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1306)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1306)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1307)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1306)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1307)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1307)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1308)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1308)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1308)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1308)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1309)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1309)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1309)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1309)).add_operation (GGS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1309)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1310)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1310)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1310)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1310)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1310)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1310)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1310)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1311)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1311)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1311)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1311)).add_operation (GGS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1311)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1312)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1312)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1312)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1312)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1312)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1312)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1312)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1305)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                                    GGS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1322))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1322)) ;
  GGS_string var_filewrapperImplementation_53142 = GGS_string::makeEmptyString () ;
  {
  const GGS_filewrapperDeclarationForGeneration temp_1 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_2 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_3 = this ;
  routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (temp_1.readProperty_mFilewrapperName (), GGS_string::makeEmptyString (), GGS_uint (uint32_t (0U)), temp_2.readProperty_mFilewrapperFileMap (), temp_3.readProperty_mFilewrapperDirectoryMap (), var_filewrapperImplementation_53142, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1324)) ;
  }
  const GGS_filewrapperDeclarationForGeneration temp_4 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, temp_4.readProperty_mFilewrapperName (), var_filewrapperImplementation_53142 COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1332))) ;
  const GGS_filewrapperDeclarationForGeneration temp_5 = this ;
  UpEnumerator__5B_filewrapperTemplateForGeneration_5D_ enumerator_53564 (temp_5.readProperty_mFilewrapperTemplateListForGeneration ()) ;
  while (enumerator_53564.hasCurrentObject ()) {
    GGS_string var_generatedCodeForInstructionList_53671 = GGS_string::makeEmptyString () ;
    GGS_uint var_temporaryVariableIndex_53722 = GGS_uint (uint32_t (0U)) ;
    GGS_stringset var_unusedVariableCppNameSet_53768 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    var_unusedVariableCppNameSet_53768.plusPlusAssignOperation (function_gCompilerCppName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1342)) ;
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_53886 (enumerator_53564.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_53886.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_53768.plusPlusAssignOperation (enumerator_53886.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1344)) ;
      enumerator_53886.gotoNextObject () ;
    }
    GGS_bool var_useColumnMarker_54017 = GGS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_53564.current (HERE).readProperty_mTemplateInstructionListForGeneration (), var_generatedCodeForInstructionList_53671, ioArgument_ioInclusionSet, var_temporaryVariableIndex_53722, var_unusedVariableCppNameSet_53768, var_useColumnMarker_54017, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1347)) ;
    }
    const GGS_filewrapperDeclarationForGeneration temp_6 = this ;
    outArgument_outImplementation.plusAssignOperation(GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, temp_6.readProperty_mFilewrapperName (), enumerator_53564.current (HERE).readProperty_mFilewrapperTemplateName (), enumerator_53564.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters (), var_unusedVariableCppNameSet_53768, var_useColumnMarker_54017, var_generatedCodeForInstructionList_53671 COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1356))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1356)) ;
    enumerator_53564.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_primitiveTypeForGeneration::getter_appendPrimitiveTypeDeclaration (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_primitiveTypeForGeneration temp_0 = this ;
  result = temp_0.readProperty_mCppDeclarationString () ;
  const GGS_primitiveTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_55338 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1380)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_primitiveTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_isPackage ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_primitiveTypeForGeneration temp_4 = this ;
      result.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (inCompiler, var_selfTypeDefinition_55338.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1384)), var_selfTypeDefinition_55338.readProperty_classFunctionMap (), var_selfTypeDefinition_55338.readProperty_classMethodMap () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1382))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1382)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_primitiveTypeForGeneration temp_5 = this ;
    result.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_55338.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1391)), var_selfTypeDefinition_55338.readProperty_isConcrete (), var_selfTypeDefinition_55338.readProperty_initializerMap (), var_selfTypeDefinition_55338.readProperty_classFunctionMap (), var_selfTypeDefinition_55338.readProperty_getterMap (), var_selfTypeDefinition_55338.readProperty_setterMap (), var_selfTypeDefinition_55338.readProperty_instanceMethodMap (), var_selfTypeDefinition_55338.readProperty_classMethodMap (), var_selfTypeDefinition_55338.readProperty_readSubscriptMap (), var_selfTypeDefinition_55338.readProperty_writeSubscriptMap (), var_selfTypeDefinition_55338.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_55338.readProperty_features (), var_selfTypeDefinition_55338.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_55338.readProperty_supportArrayLiteral () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1389))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1389)) ;
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles_3F__3F__3F__26__26__26_ (const GGS_string constinArgument_inDirectory,
                                                                  const GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument_inSemanticDeclarationListForGeneration,
                                                                  const GGS_sortedLexicalStyleArray constinArgument_inLexicalStyleNameSortedArray,
                                                                  GGS__5B_string_5D_ & ioArgument_ioToolHeaderFileList,
                                                                  GGS__5B_string_5D_ & ioArgument_ioToolCppFileList,
                                                                  GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_generatedCode_57372 = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1424))) ;
  var_generatedCode_57372.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1425)) ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_57512 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_57512.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_57512.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1427)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_generatedCode_57372.plusAssignOperation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_57512.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1428)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1428)) ;
      }
    }
    enumerator_57512.gotoNextObject () ;
  }
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_57692 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_57692.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_57692.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1432)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_stringset joker_57809 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_code_57836 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_57692.current (HERE).ptr (), joker_57809, var_code_57836, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1433)) ;
        var_generatedCode_57372.plusAssignOperation(var_code_57836, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1434)) ;
      }
    }
    enumerator_57692.gotoNextObject () ;
  }
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_57905 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_57905.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_57905.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1438)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_stringset joker_58035 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__58062 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_57905.current (HERE).ptr (), constinArgument_inDirectory, joker_58035, var_headerString_32__58062, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1439)) ;
        var_generatedCode_57372.plusAssignOperation(var_headerString_32__58062, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1440)) ;
      }
    }
    enumerator_57905.gotoNextObject () ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas4", 1443)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioToolHeaderFileList.plusPlusAssignOperation (GGS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1444)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1445)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GGS_string ("all-predefined-types.h"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_generatedCode_57372, GGS_string ("\n\n"), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1446)) ;
      }
    }
  }
  var_generatedCode_57372 = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler, constinArgument_inLexicalStyleNameSortedArray COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1459))) ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_58840 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_58840.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_58840.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1461)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_generatedCode_57372.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_58840.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1462)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1462)) ;
        GGS_stringset joker_59040 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_code_59067 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_58840.current (HERE).ptr (), GGS_unifiedTypeMap::init (inCompiler COMMA_HERE), joker_59040, var_code_59067, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1463)) ;
        var_generatedCode_57372.plusAssignOperation(var_code_59067, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1464)) ;
      }
    }
    enumerator_58840.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas4", 1467)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioToolCppFileList.plusPlusAssignOperation (GGS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1468)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1469)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GGS_string ("all-predefined-types.cpp"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_generatedCode_57372, GGS_string ("\n\n"), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1470)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'semanticFileGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticFileGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileHeader'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (Compiler * /* inCompiler */,
                                                                                  const GGS_string & /* in_COMPONENT_5F_NAME */,
                                                                                  const GGS__5B_string_5D_ & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_295_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_295 (in_IMPORTED_5F_COMPONENT_5F_LIST) ;
    while (enumerator_295.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_295.current_entry (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      enumerator_295.gotoNextObject () ;
      index_295_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (Compiler * /* inCompiler */,
                                                                                          const GGS__5B_string_5D_ & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#include \"Compiler.h\"\n#include \"galgas-input-output.h\"\n#include \"C_galgas_CLI_Options.h\"\n#include \"PrologueEpilogue.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_264_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_264 (in_IMPORTED_5F_COMPONENT_5F_LIST) ;
    while (enumerator_264.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_264.current_entry (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      enumerator_264.gotoNextObject () ;
      index_264_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionList?&?&?localConstantList??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F__3F__26__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                  const GGS__5B_localConstant_5D_ constinArgument_inLocalConstantList,
                                                                                                  const GGS__5B_semanticInstructionAST_5D_ constinArgument_inSemanticInstructionListAST,
                                                                                                  const GGS_location constinArgument_inEndOfBranchLocation,
                                                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                  GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outInstructionListForGeneration,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 46)) ;
  }
  {
  routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inLocalConstantList, constinArgument_inSemanticInstructionListAST, ioArgument_ioVariableMap, outArgument_outInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 48)) ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 59)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionListWithoutBranch?&?&?localConstantList?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F__26__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                           const GGS__5B_localConstant_5D_ constinArgument_inLocalConstantList,
                                                                                                           const GGS__5B_semanticInstructionAST_5D_ constinArgument_inSemanticInstructionListAST,
                                                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                           GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outInstructionListForGeneration,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_localConstant_5D_ enumerator_3560 (constinArgument_inLocalConstantList) ;
  while (enumerator_3560.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_3560.current (HERE).readProperty_mNoWarningIfUnused ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_3560.current (HERE).readProperty_mName (), enumerator_3560.current (HERE).readProperty_mType (), enumerator_3560.current (HERE).readProperty_mCppName (), enumerator_3560.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 76)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_3560.current (HERE).readProperty_mName (), enumerator_3560.current (HERE).readProperty_mType (), enumerator_3560.current (HERE).readProperty_mCppName (), enumerator_3560.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 78)) ;
      }
    }
    enumerator_3560.gotoNextObject () ;
  }
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_4012 (constinArgument_inSemanticInstructionListAST) ;
  while (enumerator_4012.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_4012.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 83)) ;
    enumerator_4012.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExpressionIsBoolean???!'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExpressionIsBoolean_3F__3F__3F__21_ (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                       const GGS_location constinArgument_inErrorLocation,
                                                       const GGS_semanticExpressionForGeneration constinArgument_inExpression,
                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_unifiedTypeMapEntry var_expressionType_4969 = constinArgument_inExpression.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_boolType_5036 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_expressionType_4969.objectCompare (var_boolType_5036)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outExpression = constinArgument_inExpression ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 117)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 117)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 118)).readProperty_propertyMap ().getter_contains (GGS_string ("bool") COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 118)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GGS_AccessControl var_accessControl_5404 ;
            GGS_unifiedTypeMapEntry var_attributeType_5465 ;
            GGS_bool joker_5427 ; // Joker input parameter
            extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 119)).readProperty_propertyMap ().method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("bool"), constinArgument_inErrorLocation, inCompiler COMMA_HERE), var_accessControl_5404, joker_5427, var_attributeType_5465, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 119)) ;
            extensionMethod_checkSetAccess (var_accessControl_5404, constinArgument_inAnalysisContext.readProperty_selfAvailability (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 125)) ;
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::equal, var_attributeType_5465.objectCompare (var_boolType_5036)).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_boolType_5036, constinArgument_inErrorLocation, constinArgument_inExpression, GGS_string ("bool"), inCompiler COMMA_HERE) ;
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              GenericArray <FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 135)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 135)).add_operation (GGS_string ("' struct type defines an attribute named 'bool', but its type is not '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 135)), fixItArray4  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 134)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 140)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 140)).add_operation (GGS_string ("' struct type does not define an attribute named 'bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 140)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 139)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_getterMap_2E_element var_entry_6210 = extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 144)).readProperty_getterMap ().readSubcript__3F_ (GGS_string ("bool"), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 144)).readProperty_getterMap ().readSubcript__3F_ (GGS_string ("bool"), inCompiler COMMA_HERE).isValuated ()) {
          test_6 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_6) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::notEqual, var_entry_6210.readProperty_mReturnedType ().objectCompare (var_boolType_5036)).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not @bool, it handles a 'bool' func, but it does not return a '@bool' value"), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 146)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::greaterThan, var_entry_6210.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 148)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                GenericArray <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not @bool, it handles a 'bool' func that requires argument(s)"), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 149)) ;
                outArgument_outExpression.drop () ; // Release error dropped variable
              }
            }
            if (GalgasBool::boolFalse == test_9) {
              outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_boolType_5036, constinArgument_inErrorLocation, var_entry_6210.readProperty_mKind (), constinArgument_inExpression, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), GGS_string ("bool"), GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), var_entry_6210.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 163)).readProperty_getterMap ().getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 163)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            GenericArray <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 165)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 165)).add_operation (GGS_string ("', and this type does not define the 'bool' func"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 165)), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 164)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_11) {
          GenericArray <FixItDescription> fixItArray13 ;
          appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 171)).readProperty_getterMap ().getter_keyList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 171))) ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_4969, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 169)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 169)).add_operation (GGS_string ("', and this type does not define the 'bool' func "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 169)), fixItArray13  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 168)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_analyzeGrammarInstructionSDT (const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                                      GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                                      const GGS_bool /* constinArgument__5F_inHasTranslateFeature */,
                                                                                                      const GGS_string /* constinArgument__5F_inSyntaxDirectedTranslationResultVarName */,
                                                                                                      GGS__5B_string_5D_ & /* ioArgument__5F_ioAssignementList */,
                                                                                                      GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_analyzeGrammarInstructionSDT (const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                                      GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                                      const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                      const GGS_string /* constinArgument__5F_inSyntaxDirectedTranslationResultVarName */,
                                                                                                      GGS__5B_string_5D_ & /* ioArgument__5F_ioAssignementList */,
                                                                                                      GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 197)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 198)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_analyzeGrammarInstructionSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                                       const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                       const GGS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                       GGS__5B_string_5D_ & ioArgument_ioAssignementList,
                                                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 211)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 212)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_type_9357 ;
  GGS_string var_cppName_9376 ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GGS_string joker_9385 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_9357, var_cppName_9376, joker_9385, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 214)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_9395 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expectedType_9395.objectCompare (var_type_9357)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 218)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 218)).add_operation (extensionGetter_identifierRepresentation (var_type_9357, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 218)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 218)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 218)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_9395, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 219)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 219)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 219)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 217)) ;
    }
  }
  ioArgument_ioAssignementList.plusPlusAssignOperation (var_cppName_9376.add_operation (GGS_string (" = GGS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 221)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 221)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 221))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 221)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_analyzeGrammarInstructionSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                               const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                               const GGS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                               GGS__5B_string_5D_ & ioArgument_ioAssignementList,
                                                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 233)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 234)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GGS_string var_cppName_10443 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 236)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 236)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 236)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 236)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 236)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 236)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_10588 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 237)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GGS_bool (true), var_type_10588, var_cppName_10443, var_cppName_10443, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 238)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_10790 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_10790.objectCompare (var_type_10588)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 242)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 242)).add_operation (extensionGetter_identifierRepresentation (var_type_10588, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 242)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 242)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 242)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_10790, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 243)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 243)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 243)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 241)) ;
    }
  }
  ioArgument_ioAssignementList.plusPlusAssignOperation (GGS_string ("GGS_string ").add_operation (var_cppName_10443, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 245)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 245)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 245)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 245))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 245)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_analyzeGrammarInstructionSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                 const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                                 const GGS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                 GGS__5B_string_5D_ & ioArgument_ioAssignementList,
                                                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 257)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 258)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GGS_string var_cppName_11873 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 260)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 260)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 260)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 260)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 260)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 260)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_12018 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 261)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_12018, var_cppName_11873, var_cppName_11873, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 262)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_12194 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_12194.objectCompare (var_type_12018)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 266)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 266)).add_operation (extensionGetter_identifierRepresentation (var_type_12018, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 266)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 266)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 266)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_12194, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 267)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 267)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 267)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 265)) ;
    }
  }
  ioArgument_ioAssignementList.plusPlusAssignOperation (GGS_string ("const GGS_string ").add_operation (var_cppName_11873, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 269)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 269)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 269)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 269))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 269)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionGetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 110)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_contains (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 112)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas4", 112)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 113)) ;
      }
    }
  }
  const GGS_overridingExtensionGetterAST temp_4 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_5194 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubcript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingExtensionGetterAST temp_5 = this ;
  const GGS_overridingExtensionGetterAST temp_6 = this ;
  const GGS_overridingExtensionGetterAST temp_7 = this ;
  var_entry_5194.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionGetterName (), temp_6.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_7.readProperty_mOverridingExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-getter.galgas4", 123)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 119)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_5194, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 125)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overridingExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  result = GGS_string ("overriding extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 133)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 133)).add_operation (temp_1.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 133)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionGetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                  GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionGetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_7472 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 163)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7472, var_nameForUsefulness_7472, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 164)) ;
  }
  const GGS_overridingExtensionGetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7658 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 165)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7658, var_nameForUsefulness_7472 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 166)) ;
  }
  const GGS_overridingExtensionGetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7862 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 168)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_7862, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 170)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas4", 170)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas4", 170)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_overridingExtensionGetterAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare a extension func: '@").add_operation (extensionGetter_definition (var_selfType_7862, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 171)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 171)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 171)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 171)) ;
    }
  }
  GGS_string var_baseTypeName_8198 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_8243 = extensionGetter_definition (var_selfType_7862, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 175)).readProperty_superType () ;
  GGS__5B_functionSignatureElement_5D_ var_inheritedSignature_8319 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_inheritedReturnType_8350 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-getter.galgas4", 177)) ;
  GGS_location var_inheritedDeclarationLocation_8414 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 178)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas4", 179)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 179)).isValid ()) {
    uint32_t variant_8462 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas4", 179)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 179)).uintValue () ;
    bool loop_8462 = true ;
    while (loop_8462) {
      loop_8462 = var_superType_8243.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas4", 180)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas4", 180)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_8198.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 180)).isValid () ;
      if (loop_8462) {
        loop_8462 = var_superType_8243.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas4", 180)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas4", 180)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_8198.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 180)).boolValue () ;
      }
      if (loop_8462 && (0 == variant_8462)) {
        loop_8462 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas4", 179)) ;
      }
      if (loop_8462) {
        variant_8462 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingExtensionGetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_8243, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 181)).readProperty_getterMap ().getter_contains (temp_8.readProperty_mOverridingExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 181)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_8889 ;
            const GGS_overridingExtensionGetterAST temp_9 = this ;
            GGS_methodKind joker_8745 ; // Joker input parameter
            GGS_bool joker_8825 ; // Joker input parameter
            GGS_string joker_8908 ; // Joker input parameter
            extensionGetter_definition (var_superType_8243, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 182)).readProperty_getterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionGetterName (), joker_8745, var_inheritedSignature_8319, var_inheritedDeclarationLocation_8414, joker_8825, var_inheritedReturnType_8350, var_qualifier_8889, joker_8908, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 182)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8889.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas4", 192)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_8198 = extensionGetter_definition (var_superType_8243, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 193)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_8243 = extensionGetter_definition (var_superType_8243, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 196)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_8198.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingExtensionGetterAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GGS_string ("this func is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 199)) ;
    }
  }
  GGS_analysisContext var_analysisContext_9271 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string ("this"), GGS_selfAvailability::class_func_available (var_selfType_7862, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-getter.galgas4", 206))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 206)), GGS_string ("object."), inCompiler COMMA_HERE) ;
  GGS__5B_formalInputParameterForGeneration_5D_ var_formalParameterListForGeneration_9919 ;
  GGS_unifiedTypeMapEntry var_returnType_9983 ;
  GGS_string var_returnVariableCppName_10012 ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_10080 ;
  {
  const GGS_overridingExtensionGetterAST temp_14 = this ;
  const GGS_overridingExtensionGetterAST temp_15 = this ;
  const GGS_overridingExtensionGetterAST temp_16 = this ;
  const GGS_overridingExtensionGetterAST temp_17 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__21_signatureIR_21__21__21_ (var_nameForUsefulness_7472, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_9271, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionGetterFormalInputParameterList (), temp_15.readProperty_mOverridingExtensionGetterInstructionList (), temp_16.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_17.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_9919, var_returnType_9983, var_returnVariableCppName_10012, var_semanticInstructionListForGeneration_10080, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 209)) ;
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_8198.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      {
      const GGS_overridingExtensionGetterAST temp_19 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_9919, var_returnType_9983, temp_19.readProperty_mOverridingExtensionGetterName ().readProperty_location (), var_inheritedSignature_8319, var_inheritedReturnType_8350, var_inheritedDeclarationLocation_8414, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 225)) ;
      }
    }
  }
  const GGS_overridingExtensionGetterAST temp_20 = this ;
  const GGS_overridingExtensionGetterAST temp_21 = this ;
  const GGS_overridingExtensionGetterAST temp_22 = this ;
  const GGS_overridingExtensionGetterAST temp_23 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_overrideExtensionGetterForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_string ("override extension func ").add_operation (temp_20.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 236)), GGS_bool (false), GGS_string ("func-").add_operation (temp_21.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 238)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 238)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 238)).add_operation (temp_22.readProperty_mOverridingExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 238)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 238)), var_selfType_7862, var_baseTypeName_8198, temp_23.readProperty_mOverridingExtensionGetterName ().readProperty_string (), var_returnType_9983, var_returnVariableCppName_10012, var_formalParameterListForGeneration_9919, extensionGetter_definition (var_selfType_7862, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 245)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_10080, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 235)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionGetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionGetterListMap,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 267)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overrideExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_overrideExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas4", 291)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overrideExtensionGetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overrideExtensionGetterForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("class-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 300)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 300))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 300)) ;
  GGS_string var_extensionGetterCode_14270 ;
  {
  const GGS_overrideExtensionGetterForGeneration temp_1 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_2 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_3 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_4 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_5 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_6 = this ;
  routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_1.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 302)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 302)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 302)).add_operation (GGS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 302)).add_operation (temp_2.readProperty_mOverridingExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 302)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 302)), ioArgument_ioInclusionSet, temp_3.readProperty_mOverridingExtensionGetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_5.readProperty_mResultType (), temp_6.readProperty_mResultVarCppName (), var_extensionGetterCode_14270, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 301)) ;
  }
  const GGS_overrideExtensionGetterForGeneration temp_7 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_8 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_9 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 312)).readProperty_typeName ().readProperty_string (), temp_8.readProperty_mOverridingExtensionGetterName (), var_extensionGetterCode_14270, temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 311))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionMethodAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                      GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  const GGS_abstractExtensionMethodAST temp_1 = this ;
  const GGS_abstractExtensionMethodAST temp_2 = this ;
  GGS_lstring var_key_3188 = GGS_lstring::init_21__21_ (GGS_string ("extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 64)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 64)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 64)), temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3188, temp_3, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 67)) ;
  }
  {
  const GGS_abstractExtensionMethodAST temp_4 = this ;
  const GGS_abstractExtensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3188, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 68)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("abstract-method.galgas4", 68)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_abstractExtensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_contains (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("abstract-method.galgas4", 70)).operator_not (SOURCE_FILE ("abstract-method.galgas4", 70)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_abstractExtensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 71)) ;
      }
    }
  }
  const GGS_abstractExtensionMethodAST temp_9 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_3727 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubcript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionMethodAST temp_10 = this ;
  const GGS_abstractExtensionMethodAST temp_11 = this ;
  var_entry_3727.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionMethodName (), temp_11.readProperty_mAbstractExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("abstract-method.galgas4", 80)), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 77)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_3727, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 82)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@abstractExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_abstractExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  const GGS_abstractExtensionMethodAST temp_1 = this ;
  result = GGS_string ("abstract extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 95)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 95)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 95)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionMethodAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionMethodAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                               const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                               GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_5808 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 121)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_5808, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 123)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("abstract-method.galgas4", 123)).operator_not (SOURCE_FILE ("abstract-method.galgas4", 123)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_abstractExtensionMethodAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension proc: '@").add_operation (extensionGetter_definition (var_selfType_5808, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 124)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 124)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 124)), fixItArray3  COMMA_SOURCE_FILE ("abstract-method.galgas4", 124)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_5808, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 125)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_abstractExtensionMethodAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare an abstract extension proc: '@").add_operation (extensionGetter_definition (var_selfType_5808, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 126)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 126)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 126)), fixItArray6  COMMA_SOURCE_FILE ("abstract-method.galgas4", 126)) ;
      }
    }
  }
  GGS__5B_formalParameterForGeneration_5D_ var_formalParameterListForGeneration_6369 = GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_abstractExtensionMethodAST temp_7 = this ;
  UpEnumerator__5B_formalParameterAST_5D_ enumerator_6471 (temp_7.readProperty_mAbstractExtensionMethodFormalParameterList ()) ;
  while (enumerator_6471.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6369.plusPlusAssignOperation (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (enumerator_6471.current (HERE).readProperty_mFormalSelector (), enumerator_6471.current (HERE).readProperty_mFormalArgumentPassingMode (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_6471.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 134)), enumerator_6471.current (HERE).readProperty_mFormalArgumentName (), enumerator_6471.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("abstract-method.galgas4", 131)) ;
    enumerator_6471.gotoNextObject () ;
  }
  const GGS_abstractExtensionMethodAST temp_8 = this ;
  const GGS_abstractExtensionMethodAST temp_9 = this ;
  const GGS_abstractExtensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_abstractExtensionMethodForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21_ (GGS_string ("abstract extension proc ").add_operation (temp_8.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 141)), GGS_bool (true), GGS_string ("proc-").add_operation (extensionGetter_definition (var_selfType_5808, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 143)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-method.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 143)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 143)).add_operation (temp_9.readProperty_mAbstractExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-method.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 143)), var_selfType_5808, temp_10.readProperty_mAbstractExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_6369, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("abstract-method.galgas4", 140)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionMethodAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionMethodListMapAST,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  const GGS_abstractExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionMethodListMapAST, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 165)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionMethodForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                              GGS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodForGeneration temp_0 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_1 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 189)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), temp_2.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("abstract-method.galgas4", 188))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@abstractExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_abstractExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("abstract-method.galgas4", 198)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionMethodForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodForGeneration temp_0 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 207)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-method.galgas4", 207)), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 206)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 207)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-method.galgas4", 208)), inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 208))  COMMA_SOURCE_FILE ("abstract-method.galgas4", 206)) ;
  const GGS_abstractExtensionMethodForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 209)) ;
  const GGS_abstractExtensionMethodForGeneration temp_3 = this ;
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_10400 (temp_3.readProperty_mAbstractExtensionMethodFormalParameterList ()) ;
  while (enumerator_10400.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10400.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("abstract-method.galgas4", 211)) ;
    enumerator_10400.gotoNextObject () ;
  }
  const GGS_abstractExtensionMethodForGeneration temp_4 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_5 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, temp_4.readProperty_mReceiverType (), temp_5.readProperty_mAbstractExtensionMethodName (), temp_6.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("abstract-method.galgas4", 213))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overridingAbstractExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingAbstractExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_1 = this ;
  result = GGS_string ("overriding extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 91)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 91)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 91)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionMethodAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                                GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                                GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                                GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                                GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 106)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingAbstractExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_contains (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 108)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 108)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingAbstractExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 109)) ;
      }
    }
  }
  const GGS_overridingAbstractExtensionMethodAST temp_4 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_5042 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubcript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingAbstractExtensionMethodAST temp_5 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_6 = this ;
  var_entry_5042.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 118)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 115)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_5042, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 120)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionMethodAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                          const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                          const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                          const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                          const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                          GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                          GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionMethodAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                         const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                         const GGS_semanticContext constinArgument_inSemanticContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                         GGS__5B_semanticDeclarationForGeneration_5D_ & /* ioArgument__5F_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_6859 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 150)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_6859, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 152)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 152)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 152)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_overridingAbstractExtensionMethodAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension proc: '@").add_operation (extensionGetter_definition (var_selfType_6859, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 153)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 153)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 153)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 153)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_6859, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 154)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_overridingAbstractExtensionMethodAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare an abstract extension proc: '@").add_operation (extensionGetter_definition (var_selfType_6859, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 155)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 155)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 155)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 155)) ;
      }
    }
  }
  GGS_string var_baseTypeName_7408 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_7453 = extensionGetter_definition (var_selfType_6859, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 159)).readProperty_superType () ;
  GGS__5B_formalParameterSignatureElement_5D_ var_inheritedSignature_7501 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_7576 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 161)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 162)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 162)).isValid ()) {
    uint32_t variant_7624 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 162)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 162)).uintValue () ;
    bool loop_7624 = true ;
    while (loop_7624) {
      loop_7624 = var_superType_7453.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 163)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 163)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7408.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 163)).isValid () ;
      if (loop_7624) {
        loop_7624 = var_superType_7453.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 163)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 163)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7408.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 163)).boolValue () ;
      }
      if (loop_7624 && (0 == variant_7624)) {
        loop_7624 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 162)) ;
      }
      if (loop_7624) {
        variant_7624 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingAbstractExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_7453, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 164)).readProperty_instanceMethodMap ().getter_contains (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 164)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_8020 ;
            const GGS_overridingAbstractExtensionMethodAST temp_9 = this ;
            GGS_methodKind joker_7923 ; // Joker input parameter
            GGS_bool joker_8003 ; // Joker input parameter
            GGS_string joker_8039 ; // Joker input parameter
            extensionGetter_definition (var_superType_7453, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 165)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_7923, var_inheritedSignature_7501, var_inheritedDeclarationLocation_7576, joker_8003, var_qualifier_8020, joker_8039, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 165)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8020.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 174)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_7408 = extensionGetter_definition (var_superType_7453, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 175)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_7453 = extensionGetter_definition (var_superType_7453, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 178)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_7408.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingAbstractExtensionMethodAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("this func is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 181)) ;
    }
  }
  GGS_localVarManager var_variableMap_8405 = GGS_localVarManager::init_21_ (constinArgument_inSemanticContext.readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
  GGS__5B_formalParameterForGeneration_5D_ var_formalParameterListForGeneration_8637 ;
  {
  const GGS_overridingAbstractExtensionMethodAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), var_variableMap_8405, var_formalParameterListForGeneration_8637, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 185)) ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_7408.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      {
      const GGS_overridingAbstractExtensionMethodAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_8637, temp_16.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_7501, var_inheritedDeclarationLocation_7576, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 194)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionMethodAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionMethodListMap,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 220)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  result = GGS_string ("extension mutating proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 96)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 96)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 96)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionSetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                              GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  const GGS_extensionSetterAST temp_2 = this ;
  GGS_lstring var_key_5038 = GGS_lstring::init_21__21_ (GGS_string ("extension mutating proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 112)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 112)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 112)), temp_2.readProperty_mExtensionSetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5038, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 115)) ;
  }
  {
  const GGS_extensionSetterAST temp_4 = this ;
  const GGS_extensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5038, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 116)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-setter.galgas4", 116)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_extensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_contains (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-setter.galgas4", 118)).operator_not (SOURCE_FILE ("extension-setter.galgas4", 118)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_extensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionSetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 119)) ;
      }
    }
  }
  const GGS_extensionSetterAST temp_9 = this ;
  GGS_extensionSetterMapForBuildingContext_2E_element var_entry_5544 = ioArgument_ioExtensionSetterMapForBuildingContext.readSubcript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionSetterAST temp_10 = this ;
  const GGS_extensionSetterAST temp_11 = this ;
  var_entry_5544.mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionSetterName (), temp_11.readProperty_mExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 125)) ;
  }
  {
  ioArgument_ioExtensionSetterMapForBuildingContext.setter_replaceKey (var_entry_5544, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 129)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionSetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionSetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_7493 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 165)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7493, var_nameForUsefulness_7493, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 166)) ;
  }
  const GGS_extensionSetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7669 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 167)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7669, var_nameForUsefulness_7493 COMMA_SOURCE_FILE ("extension-setter.galgas4", 168)) ;
  }
  const GGS_extensionSetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7873 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 170)) ;
  GGS_string var_selfObjectName_7945 ;
  GGS_string var_selfObjectAccessor_7974 ;
  var_selfObjectName_7945 = GGS_string ("ioObject") ;
  var_selfObjectAccessor_7974 = GGS_string ("ioObject.") ;
  GGS_analysisContext var_analysisContext_8343 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_7945, GGS_selfAvailability::class_func_available (var_selfType_7873, GGS_selfMutability::class_func_selfAndPropertiesAreMutable (SOURCE_FILE ("extension-setter.galgas4", 188))  COMMA_SOURCE_FILE ("extension-setter.galgas4", 188)), var_selfObjectAccessor_7974, inCompiler COMMA_HERE) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_8887 ;
  GGS__5B_formalParameterForGeneration_5D_ var_formalParameterListForGeneration_8934 ;
  {
  const GGS_extensionSetterAST temp_4 = this ;
  const GGS_extensionSetterAST temp_5 = this ;
  const GGS_extensionSetterAST temp_6 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_7493, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8343, ioArgument_ioTypeMap, temp_4.readProperty_mExtensionSetterFormalParameterList (), temp_5.readProperty_mExtensionSetterInstructionList (), temp_6.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_8887, var_formalParameterListForGeneration_8934, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas4", 191)) ;
  }
  const GGS_extensionSetterAST temp_7 = this ;
  const GGS_extensionSetterAST temp_8 = this ;
  const GGS_extensionSetterAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_extensionSetterForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string ("extension mutating proc ").add_operation (temp_7.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 204)), GGS_bool (true), GGS_string ("mutating proc-").add_operation (extensionGetter_definition (var_selfType_7873, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 206)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas4", 206)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 206)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 206)).add_operation (temp_8.readProperty_mExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas4", 206)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 206)), var_selfType_7873, temp_9.readProperty_mExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_8934, extensionGetter_definition (var_selfType_7873, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 210)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_8887, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas4", 203)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionSetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & ioArgument_ioExtensionSetterListMap,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 232)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-setter.galgas4", 250)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionSetterForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionSetterForGeneration temp_0 = this ;
  const GGS_extensionSetterForGeneration temp_1 = this ;
  const GGS_extensionSetterForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 258)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), temp_2.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas4", 257))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionSetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionSetterForGeneration temp_0 = this ;
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_12522 (temp_0.readProperty_mExtensionSetterFormalParameterList ()) ;
  while (enumerator_12522.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12522.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 271)) ;
    enumerator_12522.gotoNextObject () ;
  }
  const GGS_extensionSetterForGeneration temp_1 = this ;
  GGS__5B_formalParameterForGeneration_5D_ var_extensionSetterFormalParameterList_12640 = temp_1.readProperty_mExtensionSetterFormalParameterList () ;
  {
  const GGS_extensionSetterForGeneration temp_2 = this ;
  var_extensionSetterFormalParameterList_12640.setter_insert (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas4", 275)), GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.galgas4", 275)), temp_2.readProperty_mReceiverType (), GGS_string ("self").getter_here (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 275)), GGS_string ("ioObject"), inCompiler COMMA_HERE), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 274)) ;
  }
  const GGS_extensionSetterForGeneration temp_3 = this ;
  const GGS_extensionSetterForGeneration temp_4 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("mutating proc-").add_operation (extensionGetter_definition (temp_3.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 278)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas4", 278)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 278)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 278)).add_operation (temp_4.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas4", 278)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 278))  COMMA_SOURCE_FILE ("extension-setter.galgas4", 278)) ;
  GGS_string var_code_13478 ;
  {
  const GGS_extensionSetterForGeneration temp_5 = this ;
  const GGS_extensionSetterForGeneration temp_6 = this ;
  routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), GGS_string ("extensionSetter_").add_operation (temp_5.readProperty_mExtensionSetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas4", 281)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 281)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_12640, temp_6.readProperty_mSemanticInstructionListForGeneration (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_13478, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas4", 279)) ;
  }
  const GGS_extensionSetterForGeneration temp_7 = this ;
  const GGS_extensionSetterForGeneration temp_8 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 293)).readProperty_typeName ().readProperty_string (), temp_8.readProperty_mExtensionSetterName (), var_code_13478 COMMA_SOURCE_FILE ("extension-setter.galgas4", 292))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@initializerAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_initializerAST::getter_keyRepresentation (Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_initializerAST temp_0 = this ;
  const GGS_initializerAST temp_1 = this ;
  result = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), extensionGetter_initializerSignature (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 61)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 59)).readProperty_string () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                          GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                          GGS_extensionInitializerForBuildingContext & ioArgument_ioExtensionInitializerForBuildingContext,
                                                          GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                          GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                          GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                          GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_initializerAST temp_0 = this ;
  const GGS_initializerAST temp_1 = this ;
  GGS_lstring var_key_3549 = GGS_lstring::init_21__21_ (callExtensionGetter_keyRepresentation ((const cPtr_initializerAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 75)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_initializerAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3549, temp_2, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 76)) ;
  }
  {
  const GGS_initializerAST temp_3 = this ;
  const GGS_initializerAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3549, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 77)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("initializer.galgas4", 77)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_initializerAST temp_6 = this ;
    test_5 = ioArgument_ioExtensionInitializerForBuildingContext.getter_contains (temp_6.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("initializer.galgas4", 79)).operator_not (SOURCE_FILE ("initializer.galgas4", 79)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      {
      const GGS_initializerAST temp_7 = this ;
      ioArgument_ioExtensionInitializerForBuildingContext.setter_insertKey (temp_7.readProperty_mTypeName (), GGS_extensionInitializerMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 80)) ;
      }
    }
  }
  const GGS_initializerAST temp_8 = this ;
  GGS_extensionInitializerForBuildingContext_2E_element var_entry_3991 = ioArgument_ioExtensionInitializerForBuildingContext.readSubcript__3F_searchKey (temp_8.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_initializerAST temp_9 = this ;
  const GGS_initializerAST temp_10 = this ;
  const GGS_initializerAST temp_11 = this ;
  var_entry_3991.mProperty_mExtensionInitializerMapForType.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (temp_9.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 87)), temp_10.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE), temp_11.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 86)) ;
  }
  {
  ioArgument_ioExtensionInitializerForBuildingContext.setter_replaceKey (var_entry_3991, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 90)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                    const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                    const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                    const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                    const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                    GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                    GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                   const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                   const GGS_semanticContext constinArgument_inSemanticContext,
                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                   const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                   GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_initializerAST temp_0 = this ;
  const GGS_initializerAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_5573 = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), extensionGetter_initializerSignature (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 118)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 116)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_5573, var_nameForUsefulness_5573, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 120)) ;
  }
  const GGS_initializerAST temp_2 = this ;
  GGS_unifiedTypeMapEntry var_selfType_5836 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 122)) ;
  GGS_string var_selfObjectNameString_5910 ;
  GGS_string var_selfObjectAccessorString_5947 ;
  GGS_bool var_isClass_6015 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_5836, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 126)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("initializer.galgas4", 126)))) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_isClass_6015.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_selfObjectNameString_5910 = GGS_string ("this") ;
      var_selfObjectAccessorString_5947 = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    var_selfObjectNameString_5910 = GGS_string ("result") ;
    var_selfObjectAccessorString_5947 = GGS_string ("result.") ;
  }
  GGS_analysisContext var_analysisContextNew_6299 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_5910, GGS_selfAvailability::class_func_available (var_selfType_5836, GGS_selfMutability::class_func_initializer (SOURCE_FILE ("initializer.galgas4", 139))  COMMA_SOURCE_FILE ("initializer.galgas4", 139)), var_selfObjectAccessorString_5947, inCompiler COMMA_HERE) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_6843 ;
  GGS__5B_formalInputParameterForGeneration_5D_ var_formalParameterListForGeneration_6892 ;
  {
  const GGS_initializerAST temp_4 = this ;
  const GGS_initializerAST temp_5 = this ;
  const GGS_initializerAST temp_6 = this ;
  routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_5573, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_6299, ioArgument_ioTypeMap, temp_4.readProperty_mFormalParameterList (), temp_5.readProperty_mInstructionList (), temp_6.readProperty_mEndOfInitializerLocation (), var_semanticInstructionListForGeneration_6843, var_formalParameterListForGeneration_6892, inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 142)) ;
  }
  const GGS_initializerAST temp_7 = this ;
  GGS_string var_initializerName_6947 = extensionGetter_initializerSignature (temp_7.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 154)) ;
  const GGS_initializerAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_extensionInitializerForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string ("initializer @").add_operation (temp_8.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 156)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 156)).add_operation (var_initializerName_6947, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 156)), GGS_bool (false), GGS_string ("initializer-").add_operation (extensionGetter_definition (var_selfType_5836, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 158)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("initializer.galgas4", 158)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 158)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 158)).add_operation (var_initializerName_6947.getter_fileNameRepresentation (SOURCE_FILE ("initializer.galgas4", 158)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 158)), var_selfType_5836, var_initializerName_6947, var_formalParameterListForGeneration_6892, extensionGetter_definition (var_selfType_5836, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 162)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_6843, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("initializer.galgas4", 155)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerBody?&?&???!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS__5B_formalInputParameterAST_5D_ constinArgument_inFormalArgumentListAST,
                                                                         const GGS__5B_semanticInstructionAST_5D_ constinArgument_inInstructionList,
                                                                         const GGS_location constinArgument_inEndOfMethodLocation,
                                                                         GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outSemanticInstructionListForGeneration,
                                                                         GGS__5B_formalInputParameterForGeneration_5D_ & outArgument_outSignatureForGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_8430 = GGS_localVarManager::init_21_ (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_8586 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("initializer.galgas4", 184)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("initializer.galgas4", 184)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_8705 (extensionGetter_definition (var_selfAvailable_8586.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 185)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_8705.hasCurrentObject ()) {
        GGS_bool temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_selfAvailable_8586.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("initializer.galgas4", 186)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_bool (ComparisonKind::notEqual, enumerator_8705.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("initializer.galgas4", 187)))) ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_bool (true) ;
        }
        GGS_bool var_initialized_8739 = temp_1 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_8430, enumerator_8705.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_8705.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_8705.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 195)), var_initialized_8739, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 190)) ;
        }
        enumerator_8705.gotoNextObject () ;
      }
    }
  }
  outArgument_outSignatureForGeneration = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_9247 (constinArgument_inFormalArgumentListAST) ;
  while (enumerator_9247.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_9282 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9247.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 203)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = enumerator_9247.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_cppName_9416 = GGS_string ("constinArgument_").add_operation (enumerator_9247.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 205)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 205)) ;
        outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_9247.current (HERE).readProperty_mFormalSelector (), var_parameterType_9282, var_cppName_9416, enumerator_9247.current (HERE).readProperty_mFormalArgumentName (), enumerator_9247.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("initializer.galgas4", 206)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = enumerator_9247.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_8430, enumerator_9247.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_9282, var_cppName_9416, var_cppName_9416, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 213)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_8430, enumerator_9247.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_9282, var_cppName_9416, var_cppName_9416, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 215)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_cppName_10033 = GGS_string ("inArgument_").add_operation (enumerator_9247.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 218)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 218)) ;
      outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_9247.current (HERE).readProperty_mFormalSelector (), var_parameterType_9282, var_cppName_10033, enumerator_9247.current (HERE).readProperty_mFormalArgumentName (), enumerator_9247.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("initializer.galgas4", 219)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = enumerator_9247.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_8430, enumerator_9247.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_9282, var_cppName_10033, var_cppName_10033, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 226)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_8430, enumerator_9247.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_9282, var_cppName_10033, var_cppName_10033, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 228)) ;
        }
      }
    }
    enumerator_9247.gotoNextObject () ;
  }
  outArgument_outSemanticInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_10752 (constinArgument_inInstructionList) ;
  while (enumerator_10752.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_10752.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_8430, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 235)) ;
    enumerator_10752.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_8430, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 245)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionInitializerForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionInitializerForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("initializer.galgas4", 262)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionInitializerForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionInitializerForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_string & outArgument_outImplementation,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionInitializerForGeneration temp_0 = this ;
  UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_12233 (temp_0.readProperty_formalParameterList ()) ;
  while (enumerator_12233.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12233.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 271)) ;
    enumerator_12233.gotoNextObject () ;
  }
  GGS_string var_methodImplementation_12541 ;
  {
  const GGS_extensionInitializerForGeneration temp_1 = this ;
  const GGS_extensionInitializerForGeneration temp_2 = this ;
  const GGS_extensionInitializerForGeneration temp_3 = this ;
  const GGS_extensionInitializerForGeneration temp_4 = this ;
  routine_generateInitializer_3F__3F__26__3F__3F__21_ (temp_1.readProperty_mReceiverType (), temp_2.readProperty_initializerName (), ioArgument_ioInclusionSet, temp_3.readProperty_formalParameterList (), temp_4.readProperty_semanticInstructionListForGeneration (), var_methodImplementation_12541, inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 273)) ;
  }
  const GGS_extensionInitializerForGeneration temp_5 = this ;
  const GGS_extensionInitializerForGeneration temp_6 = this ;
  const GGS_extensionInitializerForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_initializerImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 282)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_initializerName (), temp_7.readProperty_formalParameterList (), var_methodImplementation_12541 COMMA_SOURCE_FILE ("initializer.galgas4", 281))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInitializer??&??!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInitializer_3F__3F__26__3F__3F__21_ (const GGS_unifiedTypeMapEntry constinArgument_inReceiverType,
                                                          const GGS_string constinArgument_inInitializerName,
                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                          const GGS__5B_formalInputParameterForGeneration_5D_ constinArgument_inFormalArgumentList,
                                                          const GGS__5B_semanticInstructionForGeneration_5D_ constinArgument_inInstructionList,
                                                          GGS_string & outArgument_outGeneratedCode,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_string var_className_13575 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 303)).readProperty_typeName ().readProperty_string () ;
  GGS_stringset var_unusedVariableCppNameSet_13678 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_13678.plusPlusAssignOperation (function_gCompilerCppName (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("initializer.galgas4", 306)) ;
  UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_13776 (constinArgument_inFormalArgumentList) ;
  while (enumerator_13776.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_13678.plusPlusAssignOperation (enumerator_13776.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("initializer.galgas4", 308)) ;
    enumerator_13776.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_13904 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_13945 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_13945.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 313)) ;
  }
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_14012 (constinArgument_inInstructionList) ;
  while (enumerator_14012.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_14012.current (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_13904, var_unusedVariableCppNameSet_13678, GGS_bool (false), var_routineBody_13945, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 315)) ;
    enumerator_14012.gotoNextObject () ;
  }
  {
  var_routineBody_13945.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 323)) ;
  }
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 325)) ;
  UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_14379 (constinArgument_inFormalArgumentList) ;
  while (enumerator_14379.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14379.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 327)) ;
    enumerator_14379.gotoNextObject () ;
  }
  GGS_bool var_isStruct_14508 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 330)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("initializer.galgas4", 330)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_isStruct_14508.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outGeneratedCode = GGS_string ("GGS_").add_operation (var_className_13575.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 333)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 333)).add_operation (GGS_string (" GGS_"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 333)).add_operation (var_className_13575.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 334)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 334)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 334)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 335)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 335)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 335)) ;
      GGS_uint var_colRef_14817 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("initializer.galgas4", 336)) ;
      UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_14886 (constinArgument_inFormalArgumentList) ;
      while (enumerator_14886.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_14886.current (HERE).readProperty_mIsConstant ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_14886.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 340)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 340)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 340)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 340)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_14886.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 342)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 342)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 342)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 342)) ;
        }
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_unusedVariableCppNameSet_13678.getter_contains (enumerator_14886.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("initializer.galgas4", 344)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_14886.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 345)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 345)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 345)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          outArgument_outGeneratedCode.plusAssignOperation(enumerator_14886.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 347)) ;
        }
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 349)) ;
        {
        outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_14817, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 350)) ;
        }
        enumerator_14886.gotoNextObject () ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 353)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 353)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 353)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_14817, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 354)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 355)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 356)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (var_className_13575.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 357)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 357)).add_operation (GGS_string (" result ;\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 357)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 357)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  result.setInitializedProperties (").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 358)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 358)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 358)) ;
      outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_13945, inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 359)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 360)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 361)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outGeneratedCode = GGS_string ("GGS_").add_operation (var_className_13575.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 363)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 363)).add_operation (GGS_string (" GGS_"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 363)).add_operation (var_className_13575.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 364)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 364)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 364)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 365)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 365)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 365)) ;
    GGS_uint var_colRef_16247 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("initializer.galgas4", 366)) ;
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_16316 (constinArgument_inFormalArgumentList) ;
    while (enumerator_16316.hasCurrentObject ()) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = enumerator_16316.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16316.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 370)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 370)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 370)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 370)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16316.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 372)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 372)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 372)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 372)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_16316.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 374)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 375)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16247, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 376)) ;
      }
      enumerator_16316.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 379)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 379)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 379)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16247, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 380)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_LOCATION_ARGS) {\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 381)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  cPtr_").add_operation (var_className_13575.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 382)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 382)).add_operation (GGS_string (" * object = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 382)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 382)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  macroMyNew (object, cPtr_").add_operation (var_className_13575.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 383)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 383)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 383)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" (").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 384)).add_operation (GGS_string (" COMMA_THERE)) ;\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 384)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 384)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  object->").add_operation (var_className_13575.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 385)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 385)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 385)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 386)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 386)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 386)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 385)) ;
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_17379 (constinArgument_inFormalArgumentList) ;
    while (enumerator_17379.hasCurrentObject ()) {
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_17379.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 388)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 389)) ;
      enumerator_17379.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 391)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 391)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  const GGS_").add_operation (var_className_13575.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 392)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 392)).add_operation (GGS_string (" result (object) ;\n"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 392)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 392)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  macroDetachSharedObject (object) ;\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 393)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 394)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 395)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("void cPtr_").add_operation (var_className_13575.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 396)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 396)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 396)).add_operation (var_className_13575.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 397)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 397)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 397)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("initializer.galgas4", 398)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 398)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 398)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 396)) ;
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_18008 (constinArgument_inFormalArgumentList) ;
    while (enumerator_18008.hasCurrentObject ()) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = enumerator_18008.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const "), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 401)) ;
        }
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_18008.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 403)), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 403)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 403)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 403)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_unusedVariableCppNameSet_13678.getter_contains (enumerator_18008.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("initializer.galgas4", 404)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_18008.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 405)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 405)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 405)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssignOperation(enumerator_18008.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 407)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 409)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16247, inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 410)) ;
      }
      enumerator_18008.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 413)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_unusedVariableCppNameSet_13678.getter_contains (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("initializer.galgas4", 414)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 415)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("initializer.galgas4", 415)), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 415)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      outArgument_outGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 417)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 419)) ;
    outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_13945, inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 420)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("initializer.galgas4", 421)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  result = GGS_string ("extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 105)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 105)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 105)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionGetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                              GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  const GGS_extensionGetterAST temp_2 = this ;
  GGS_lstring var_key_5185 = GGS_lstring::init_21__21_ (GGS_string ("extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 118)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 118)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 118)), temp_2.readProperty_mExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5185, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 119)) ;
  }
  {
  const GGS_extensionGetterAST temp_4 = this ;
  const GGS_extensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5185, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 120)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-getter.galgas4", 120)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_extensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_contains (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-getter.galgas4", 122)).operator_not (SOURCE_FILE ("extension-getter.galgas4", 122)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_extensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 123)) ;
      }
    }
  }
  const GGS_extensionGetterAST temp_9 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_5690 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubcript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionGetterAST temp_10 = this ;
  const GGS_extensionGetterAST temp_11 = this ;
  const GGS_extensionGetterAST temp_12 = this ;
  var_entry_5690.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionGetterName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-getter.galgas4", 133)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 129)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_5690, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 135)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionGetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionGetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_7783 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 175)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7783, var_nameForUsefulness_7783, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 176)) ;
  }
  const GGS_extensionGetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7959 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 177)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7959, var_nameForUsefulness_7783 COMMA_SOURCE_FILE ("extension-getter.galgas4", 178)) ;
  }
  const GGS_extensionGetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8163 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 180)) ;
  GGS_string var_selfObjectNameNew_8274 ;
  GGS_string var_selfObjectAccessorNew_8306 ;
  GGS_bool var_implementedAsFunctionNew_8340 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_8163, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 185)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas4", 185)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_selfObjectNameNew_8274 = GGS_string ("this") ;
      var_selfObjectAccessorNew_8306 = GGS_string ("this->") ;
      var_implementedAsFunctionNew_8340 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    var_selfObjectNameNew_8274 = GGS_string ("inObject") ;
    var_selfObjectAccessorNew_8306 = GGS_string ("inObject.") ;
    var_implementedAsFunctionNew_8340 = GGS_bool (true) ;
  }
  GGS_analysisContext var_analysisContextNew_8682 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_8274, GGS_selfAvailability::class_func_available (var_selfType_8163, GGS_selfMutability::class_func_none (SOURCE_FILE ("extension-getter.galgas4", 199))  COMMA_SOURCE_FILE ("extension-getter.galgas4", 199)), var_selfObjectAccessorNew_8306, inCompiler COMMA_HERE) ;
  GGS__5B_formalInputParameterForGeneration_5D_ var_formalParameterListForGeneration_9266 ;
  GGS_unifiedTypeMapEntry var_returnType_9309 ;
  GGS_string var_returnVariableCppName_9330 ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_9362 ;
  {
  const GGS_extensionGetterAST temp_5 = this ;
  const GGS_extensionGetterAST temp_6 = this ;
  const GGS_extensionGetterAST temp_7 = this ;
  const GGS_extensionGetterAST temp_8 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__21_signatureIR_21__21__21_ (var_nameForUsefulness_7783, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_8682, ioArgument_ioTypeMap, temp_5.readProperty_mExtensionGetterFormalInputParameterList (), temp_6.readProperty_mExtensionGetterInstructionList (), temp_7.readProperty_mExtensionGetterReturnedTypeName (), temp_8.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_9266, var_returnType_9309, var_returnVariableCppName_9330, var_semanticInstructionListForGeneration_9362, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 202)) ;
  }
  const GGS_extensionGetterAST temp_9 = this ;
  const GGS_extensionGetterAST temp_10 = this ;
  const GGS_extensionGetterAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_extensionGetterForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_string ("extension func ").add_operation (temp_9.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 218)), GGS_bool (true), GGS_string ("func-").add_operation (extensionGetter_definition (var_selfType_8163, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 220)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 220)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 220)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 220)).add_operation (temp_10.readProperty_mExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 220)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 220)), var_selfType_8163, temp_11.readProperty_mExtensionGetterName ().readProperty_string (), var_implementedAsFunctionNew_8340, var_returnType_9309, var_returnVariableCppName_9330, var_formalParameterListForGeneration_9266, extensionGetter_definition (var_selfType_8163, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 227)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9362, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas4", 217)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionGetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & ioArgument_ioExtensionGetterListMap,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 249)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-getter.galgas4", 269)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionGetterForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_extensionGetterForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_extensionGetterForGeneration temp_2 = this ;
      const GGS_extensionGetterForGeneration temp_3 = this ;
      const GGS_extensionGetterForGeneration temp_4 = this ;
      const GGS_extensionGetterForGeneration temp_5 = this ;
      outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 278)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionGetterName (), temp_4.readProperty_mExtensionGetterFormalParameterList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 281)) COMMA_SOURCE_FILE ("extension-getter.galgas4", 277))) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionGetterForGeneration temp_6 = this ;
    const GGS_extensionGetterForGeneration temp_7 = this ;
    const GGS_extensionGetterForGeneration temp_8 = this ;
    const GGS_extensionGetterForGeneration temp_9 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 285)).readProperty_typeName ().readProperty_string (), temp_7.readProperty_mExtensionGetterName (), temp_8.readProperty_mExtensionGetterFormalParameterList (), temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas4", 284))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionGetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionGetterForGeneration temp_0 = this ;
  UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_13395 (temp_0.readProperty_mExtensionGetterFormalParameterList ()) ;
  while (enumerator_13395.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13395.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 299)) ;
    enumerator_13395.gotoNextObject () ;
  }
  const GGS_extensionGetterForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 301)) ;
  const GGS_extensionGetterForGeneration temp_2 = this ;
  GGS__5B_formalInputParameterForGeneration_5D_ var_extensionReaderFormalParameterList_13577 = temp_2.readProperty_mExtensionGetterFormalParameterList () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_extensionGetterForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      const GGS_extensionGetterForGeneration temp_5 = this ;
      var_extensionReaderFormalParameterList_13577.setter_insert (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas4", 305)), temp_5.readProperty_mReceiverType (), GGS_string ("inObject"), GGS_string ("self").getter_here (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 305)), GGS_bool (true), inCompiler COMMA_HERE), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 304)) ;
      }
      const GGS_extensionGetterForGeneration temp_6 = this ;
      const GGS_extensionGetterForGeneration temp_7 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 309)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 309)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 308)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 309)).add_operation (temp_7.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 310)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 310))  COMMA_SOURCE_FILE ("extension-getter.galgas4", 308)) ;
      GGS_string var_code_14395 ;
      {
      const GGS_extensionGetterForGeneration temp_8 = this ;
      const GGS_extensionGetterForGeneration temp_9 = this ;
      const GGS_extensionGetterForGeneration temp_10 = this ;
      const GGS_extensionGetterForGeneration temp_11 = this ;
      routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("extensionGetter_").add_operation (temp_8.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas4", 312)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 312)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_13577, temp_9.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_10.readProperty_mResultType (), temp_11.readProperty_mResultVarCppName (), GGS_bool (false), GGS_bool (false), var_code_14395, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 311)) ;
      }
      const GGS_extensionGetterForGeneration temp_12 = this ;
      const GGS_extensionGetterForGeneration temp_13 = this ;
      outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 324)).readProperty_typeName ().readProperty_string (), temp_13.readProperty_mExtensionGetterName (), var_code_14395 COMMA_SOURCE_FILE ("extension-getter.galgas4", 323))) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_extensionGetterForGeneration temp_14 = this ;
    extensionMethod_addHeaderFileName (temp_14.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 329)) ;
    const GGS_extensionGetterForGeneration temp_15 = this ;
    GGS_unifiedTypeMapEntry var_baseType_14738 = temp_15.readProperty_mReceiverType () ;
    GGS_bool var_searching_14784 = GGS_bool (true) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("extension-getter.galgas4", 332)).isValid ()) {
      uint32_t variant_14807 = GGS_uint::class_func_max (SOURCE_FILE ("extension-getter.galgas4", 332)).uintValue () ;
      bool loop_14807 = true ;
      while (loop_14807) {
        loop_14807 = var_searching_14784.isValid () ;
        if (loop_14807) {
          loop_14807 = var_searching_14784.boolValue () ;
        }
        if (loop_14807 && (0 == variant_14807)) {
          loop_14807 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas4", 332)) ;
        }
        if (loop_14807) {
          variant_14807 -= 1 ;
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            test_16 = extensionGetter_definition (var_baseType_14738, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 333)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-getter.galgas4", 333)).operator_not (SOURCE_FILE ("extension-getter.galgas4", 333)).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              GalgasBool test_17 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_17) {
                const GGS_extensionGetterForGeneration temp_18 = this ;
                test_17 = extensionGetter_definition (extensionGetter_definition (var_baseType_14738, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 334)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 334)).readProperty_getterMap ().getter_contains (temp_18.readProperty_mExtensionGetterName () COMMA_SOURCE_FILE ("extension-getter.galgas4", 334)).boolEnum () ;
                if (GalgasBool::boolTrue == test_17) {
                  var_baseType_14738 = extensionGetter_definition (var_baseType_14738, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 335)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_17) {
                var_searching_14784 = GGS_bool (false) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            var_searching_14784 = GGS_bool (false) ;
          }
        }
      }
    }
    const GGS_extensionGetterForGeneration temp_19 = this ;
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (extensionGetter_definition (var_baseType_14738, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 344)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 344)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 343)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 344)).add_operation (temp_19.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 345)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 345))  COMMA_SOURCE_FILE ("extension-getter.galgas4", 343)) ;
    GGS_string var_extensionGetterCode_15758 ;
    {
    const GGS_extensionGetterForGeneration temp_20 = this ;
    const GGS_extensionGetterForGeneration temp_21 = this ;
    const GGS_extensionGetterForGeneration temp_22 = this ;
    const GGS_extensionGetterForGeneration temp_23 = this ;
    const GGS_extensionGetterForGeneration temp_24 = this ;
    routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 347)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas4", 347)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 347)).add_operation (GGS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 347)).add_operation (temp_21.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas4", 347)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 347)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_13577, temp_22.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_23.readProperty_mResultType (), temp_24.readProperty_mResultVarCppName (), var_extensionGetterCode_15758, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 346)) ;
    }
    const GGS_extensionGetterForGeneration temp_25 = this ;
    const GGS_extensionGetterForGeneration temp_26 = this ;
    const GGS_extensionGetterForGeneration temp_27 = this ;
    const GGS_extensionGetterForGeneration temp_28 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, extensionGetter_definition (temp_25.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 357)).readProperty_typeName ().readProperty_string (), temp_26.readProperty_mExtensionGetterName (), temp_27.readProperty_mExtensionGetterFormalParameterList (), var_extensionGetterCode_15758, temp_28.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas4", 356))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overridingExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  const GGS_overridingExtensionMethodAST temp_1 = this ;
  result = GGS_string ("overriding extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 96)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 96)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 96)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionMethodAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 111)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_contains (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 113)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas4", 113)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 114)) ;
      }
    }
  }
  const GGS_overridingExtensionMethodAST temp_4 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_5361 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubcript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingExtensionMethodAST temp_5 = this ;
  const GGS_overridingExtensionMethodAST temp_6 = this ;
  var_entry_5361.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-method.galgas4", 123)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 120)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_5361, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 125)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionMethodAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                  GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionMethodAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  const GGS_overridingExtensionMethodAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_7142 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 155)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7142, var_nameForUsefulness_7142, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 156)) ;
  }
  const GGS_overridingExtensionMethodAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7328 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 157)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7328, var_nameForUsefulness_7142 COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 158)) ;
  }
  const GGS_overridingExtensionMethodAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7532 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 160)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_7532, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 162)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-method.galgas4", 162)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas4", 162)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_overridingExtensionMethodAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension proc: '@").add_operation (extensionGetter_definition (var_selfType_7532, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 163)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 163)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 163)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 163)) ;
    }
  }
  GGS_string var_baseTypeName_7868 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_7913 = extensionGetter_definition (var_selfType_7532, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 167)).readProperty_superType () ;
  GGS__5B_formalParameterSignatureElement_5D_ var_inheritedSignature_7961 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_8036 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 169)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas4", 170)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 170)).isValid ()) {
    uint32_t variant_8084 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas4", 170)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 170)).uintValue () ;
    bool loop_8084 = true ;
    while (loop_8084) {
      loop_8084 = var_superType_7913.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas4", 171)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas4", 171)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7868.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 171)).isValid () ;
      if (loop_8084) {
        loop_8084 = var_superType_7913.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas4", 171)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas4", 171)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7868.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 171)).boolValue () ;
      }
      if (loop_8084 && (0 == variant_8084)) {
        loop_8084 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-method.galgas4", 170)) ;
      }
      if (loop_8084) {
        variant_8084 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_7913, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 172)).readProperty_instanceMethodMap ().getter_contains (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 172)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_8479 ;
            const GGS_overridingExtensionMethodAST temp_9 = this ;
            GGS_methodKind joker_8382 ; // Joker input parameter
            GGS_bool joker_8462 ; // Joker input parameter
            GGS_string joker_8498 ; // Joker input parameter
            extensionGetter_definition (var_superType_7913, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 173)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_8382, var_inheritedSignature_7961, var_inheritedDeclarationLocation_8036, joker_8462, var_qualifier_8479, joker_8498, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 173)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8479.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-method.galgas4", 182)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_7868 = extensionGetter_definition (var_superType_7913, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 183)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_7913 = extensionGetter_definition (var_superType_7913, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 186)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_7868.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingExtensionMethodAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("this proc is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 189)) ;
    }
  }
  GGS_analysisContext var_analysisContext_8860 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string ("this"), GGS_selfAvailability::class_func_available (var_selfType_7532, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-method.galgas4", 196))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 196)), GGS_string ("this->"), inCompiler COMMA_HERE) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_9574 ;
  GGS__5B_formalParameterForGeneration_5D_ var_formalParameterListForGeneration_9621 ;
  {
  const GGS_overridingExtensionMethodAST temp_14 = this ;
  const GGS_overridingExtensionMethodAST temp_15 = this ;
  const GGS_overridingExtensionMethodAST temp_16 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_7142, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8860, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), temp_15.readProperty_mOverridingExtensionMethodInstructionList (), temp_16.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_9574, var_formalParameterListForGeneration_9621, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 203)) ;
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_7868.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      {
      const GGS_overridingExtensionMethodAST temp_18 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_9621, temp_18.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_7961, var_inheritedDeclarationLocation_8036, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 216)) ;
      }
    }
  }
  const GGS_overridingExtensionMethodAST temp_19 = this ;
  const GGS_overridingExtensionMethodAST temp_20 = this ;
  const GGS_overridingExtensionMethodAST temp_21 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_overridingExtensionMethodForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_string ("override extension proc ").add_operation (temp_19.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 225)), GGS_bool (false), GGS_string ("proc-").add_operation (extensionGetter_definition (var_selfType_7532, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 227)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 227)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 227)).add_operation (temp_20.readProperty_mOverridingExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 227)), var_selfType_7532, var_baseTypeName_7868, temp_21.readProperty_mOverridingExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_9621, extensionGetter_definition (var_selfType_7532, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 232)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9574, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 224)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionMethodAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionMethodListMap,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                                       GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  const GGS_overridingExtensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 257)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overridingExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_overridingExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-method.galgas4", 279)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionMethodForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                                       GGS_string & outArgument_outImplementation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_methodImplementation_13455 ;
  {
  const GGS_overridingExtensionMethodForGeneration temp_0 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_1 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_2 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_3 = this ;
  routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_0.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_1.readProperty_mExtensionMethodName (), temp_2.readProperty_mExtensionMethodFormalParameterList (), temp_3.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_13455, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 288)) ;
  }
  const GGS_overridingExtensionMethodForGeneration temp_4 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 297)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mExtensionMethodName (), var_methodImplementation_13455 COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 296))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@abstractExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_abstractExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  const GGS_abstractExtensionGetterAST temp_1 = this ;
  result = GGS_string ("abstract extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 58)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 58)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 58)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionGetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                      GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  const GGS_abstractExtensionGetterAST temp_1 = this ;
  const GGS_abstractExtensionGetterAST temp_2 = this ;
  GGS_lstring var_key_3603 = GGS_lstring::init_21__21_ (GGS_string ("extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 73)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 73)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 73)), temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3603, temp_3, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 76)) ;
  }
  {
  const GGS_abstractExtensionGetterAST temp_4 = this ;
  const GGS_abstractExtensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3603, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 77)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("abstract-getter.galgas4", 77)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_abstractExtensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_contains (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("abstract-getter.galgas4", 79)).operator_not (SOURCE_FILE ("abstract-getter.galgas4", 79)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_abstractExtensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 80)) ;
      }
    }
  }
  const GGS_abstractExtensionGetterAST temp_9 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_4142 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubcript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionGetterAST temp_10 = this ;
  const GGS_abstractExtensionGetterAST temp_11 = this ;
  const GGS_abstractExtensionGetterAST temp_12 = this ;
  var_entry_4142.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionGetterName (), temp_11.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_12.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("abstract-getter.galgas4", 90)), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 86)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_4142, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 92)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionGetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionGetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                               const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                               GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_6080 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 125)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_6080, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 127)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("abstract-getter.galgas4", 127)).operator_not (SOURCE_FILE ("abstract-getter.galgas4", 127)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_abstractExtensionGetterAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an extension func: '@").add_operation (extensionGetter_definition (var_selfType_6080, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 129)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 129)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 129)), fixItArray3  COMMA_SOURCE_FILE ("abstract-getter.galgas4", 128)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_6080, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 131)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_abstractExtensionGetterAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension func: '@").add_operation (extensionGetter_definition (var_selfType_6080, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 133)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 133)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 133)), fixItArray6  COMMA_SOURCE_FILE ("abstract-getter.galgas4", 132)) ;
      }
    }
  }
  GGS__5B_formalInputParameterForGeneration_5D_ var_formalParameterListForGeneration_6711 = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_abstractExtensionGetterAST temp_7 = this ;
  UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_6782 (temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList ()) ;
  while (enumerator_6782.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6711.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_6782.current (HERE).readProperty_mFormalSelector (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_6782.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 141)), enumerator_6782.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_6782.current (HERE).readProperty_mFormalArgumentName (), enumerator_6782.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("abstract-getter.galgas4", 139)) ;
    enumerator_6782.gotoNextObject () ;
  }
  const GGS_abstractExtensionGetterAST temp_8 = this ;
  const GGS_abstractExtensionGetterAST temp_9 = this ;
  const GGS_abstractExtensionGetterAST temp_10 = this ;
  const GGS_abstractExtensionGetterAST temp_11 = this ;
  const GGS_abstractExtensionGetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_abstractExtensionGetterForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GGS_string ("abstract extension func ").add_operation (temp_8.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 149)), GGS_bool (true), GGS_string ("func-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-getter.galgas4", 151)), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 151)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 151)).add_operation (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-getter.galgas4", 151)), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 151)), var_selfType_6080, temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 154)), var_formalParameterListForGeneration_6711, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("abstract-getter.galgas4", 148)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionGetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                                     GGS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionGetterListMap,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                                     GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  const GGS_abstractExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 174)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@abstractExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_abstractExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("abstract-getter.galgas4", 194)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionGetterForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                              GGS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterForGeneration temp_0 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_1 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_2 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 202)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), temp_2.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_3.readProperty_mResultType () COMMA_SOURCE_FILE ("abstract-getter.galgas4", 201))) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@abstractExtensionGetterForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterForGeneration temp_0 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 215)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-getter.galgas4", 215)), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 214)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 215)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("abstract-getter.galgas4", 216)), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 216))  COMMA_SOURCE_FILE ("abstract-getter.galgas4", 214)) ;
  const GGS_abstractExtensionGetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 217)) ;
  const GGS_abstractExtensionGetterForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 218)) ;
  const GGS_abstractExtensionGetterForGeneration temp_4 = this ;
  UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_10882 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList ()) ;
  while (enumerator_10882.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10882.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 220)) ;
    enumerator_10882.gotoNextObject () ;
  }
  const GGS_abstractExtensionGetterForGeneration temp_5 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_6 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_7 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_8 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("abstract-getter.galgas4", 223)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mAbstractExtensionGetterName (), temp_7.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_8.readProperty_mResultType () COMMA_SOURCE_FILE ("abstract-getter.galgas4", 222))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overridingAbstractExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingAbstractExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_1 = this ;
  result = GGS_string ("overriding extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 89)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 89)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 89)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionGetterAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument__5F_ioSemanticTypePrecedenceGraph */,
                                                                                GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                                GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                                GGS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                                GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 104)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingAbstractExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_contains (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 106)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 106)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingAbstractExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 107)) ;
      }
    }
  }
  const GGS_overridingAbstractExtensionGetterAST temp_4 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_5053 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubcript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingAbstractExtensionGetterAST temp_5 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_6 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_7 = this ;
  var_entry_5053.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mAbstractExtensionGetterName (), temp_6.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 117)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 113)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_5053, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 119)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionGetterAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                          const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                          const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                          const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                          const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                          GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                          GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionGetterAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                         const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                         const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                         GGS__5B_semanticDeclarationForGeneration_5D_ & /* ioArgument__5F_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_6922 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 149)) ;
  const GGS_overridingAbstractExtensionGetterAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_returnType_7004 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 151)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_selfType_6922, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 153)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 153)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 153)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_overridingAbstractExtensionGetterAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare a extension func: '@").add_operation (extensionGetter_definition (var_selfType_6922, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 154)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 154)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 154)), fixItArray4  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 154)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = extensionGetter_definition (var_selfType_6922, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 155)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_overridingAbstractExtensionGetterAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension func: '@").add_operation (extensionGetter_definition (var_selfType_6922, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 156)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 156)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 156)), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 156)) ;
      }
    }
  }
  GGS_string var_baseTypeName_7582 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_7627 = extensionGetter_definition (var_selfType_6922, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 160)).readProperty_superType () ;
  GGS__5B_functionSignatureElement_5D_ var_inheritedSignature_7703 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_inheritedReturnType_7755 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 162)) ;
  GGS_location var_inheritedDeclarationLocation_7799 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 163)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 164)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 164)).isValid ()) {
    uint32_t variant_7847 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 164)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 164)).uintValue () ;
    bool loop_7847 = true ;
    while (loop_7847) {
      loop_7847 = var_superType_7627.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 165)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 165)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7582.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 165)).isValid () ;
      if (loop_7847) {
        loop_7847 = var_superType_7627.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 165)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 165)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7582.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 165)).boolValue () ;
      }
      if (loop_7847 && (0 == variant_7847)) {
        loop_7847 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 164)) ;
      }
      if (loop_7847) {
        variant_7847 -= 1 ;
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_overridingAbstractExtensionGetterAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_superType_7627, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 166)).readProperty_getterMap ().getter_contains (temp_9.readProperty_mAbstractExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 166)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_methodQualifier var_qualifier_8253 ;
            const GGS_overridingAbstractExtensionGetterAST temp_10 = this ;
            GGS_methodKind joker_8126 ; // Joker input parameter
            GGS_bool joker_8206 ; // Joker input parameter
            GGS_string joker_8272 ; // Joker input parameter
            extensionGetter_definition (var_superType_7627, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 167)).readProperty_getterMap ().method_searchKey (temp_10.readProperty_mAbstractExtensionGetterName (), joker_8126, var_inheritedSignature_7703, var_inheritedDeclarationLocation_7799, joker_8206, var_inheritedReturnType_7755, var_qualifier_8253, joker_8272, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 167)) ;
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8253.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 177)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                var_baseTypeName_7582 = extensionGetter_definition (var_superType_7627, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 178)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_7627 = extensionGetter_definition (var_superType_7627, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 181)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, var_baseTypeName_7582.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_overridingAbstractExtensionGetterAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("this func is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 184)) ;
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_7582.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS__5B_formalInputParameterForGeneration_5D_ var_formalParameterListForGeneration_8655 = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_overridingAbstractExtensionGetterAST temp_16 = this ;
      UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_8756 (temp_16.readProperty_mAbstractExtensionGetterFormalInputParameterList ()) ;
      while (enumerator_8756.hasCurrentObject ()) {
        var_formalParameterListForGeneration_8655.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_8756.current (HERE).readProperty_mFormalSelector (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_8756.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 192)), enumerator_8756.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_8756.current (HERE).readProperty_mFormalArgumentName (), enumerator_8756.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 190)) ;
        enumerator_8756.gotoNextObject () ;
      }
      {
      const GGS_overridingAbstractExtensionGetterAST temp_17 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_8655, var_returnType_7004, temp_17.readProperty_mAbstractExtensionGetterName ().readProperty_location (), var_inheritedSignature_7703, var_inheritedReturnType_7755, var_inheritedDeclarationLocation_7799, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 198)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingAbstractExtensionGetterAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionGetterAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                                               GGS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionGetterListMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 226)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleEquatableComparableExtension&?&?acceptEquatable?acceptComparable'
//
//--------------------------------------------------------------------------------------------------

void routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                                                    const GGS_lstring constinArgument_inTypeName,
                                                                                                    GGS_typeFeatures & ioArgument_ioFeatures,
                                                                                                    const GGS_bool constinArgument_inAcceptEquatable,
                                                                                                    const GGS_bool constinArgument_inAcceptComparable,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_equatableExtensionMap_2E_element var_node_2622 = ioArgument_ioEquatableExtensionMap.readSubcript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioEquatableExtensionMap.readSubcript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_location var_location_2679 = ioArgument_ioEquatableExtensionMap.getter_locationForKey (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 66)) ;
      {
      GGS_equatableComparableExtension joker_2795 ; // Joker input parameter
      ioArgument_ioEquatableExtensionMap.setter_removeKey (constinArgument_inTypeName, joker_2795, inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 67)) ;
      }
      GGS_bool var_currentlyEquatable_2807 = ioArgument_ioFeatures.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 68)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 68)) ;
      GGS_bool var_currentlyComparable_2869 = ioArgument_ioFeatures.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 69)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 69)) ;
      switch (var_node_2622.readProperty_mExtension ().enumValue ()) {
      case GGS_equatableComparableExtension::Enumeration::invalid:
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_equatable:
        {
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_currentlyComparable_2869.boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (var_location_2679, GGS_string ("useless extension, the type is already declared comparable"), fixItArray2  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 73)) ;
            }
          }
          if (GalgasBool::boolFalse == test_1) {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = var_currentlyEquatable_2807.boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GenericArray <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (var_location_2679, GGS_string ("useless extension, the type is already declared equatable"), fixItArray4  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 75)) ;
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = constinArgument_inAcceptEquatable.boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  ioArgument_ioFeatures.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 77)), inCompiler  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 77)) ;
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (var_location_2679, GGS_string ("useless extension, the type does not support %equatable"), fixItArray6  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 79)) ;
                GenericArray <FixItDescription> fixItArray7 ;
                inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type declaration is here"), fixItArray7  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 80)) ;
              }
            }
          }
        }
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_comparable:
        {
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_currentlyComparable_2869.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_location_2679, GGS_string ("useless extension, the type is already declared comparable"), fixItArray9  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 84)) ;
            }
          }
          if (GalgasBool::boolFalse == test_8) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = constinArgument_inAcceptComparable.boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                ioArgument_ioFeatures.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 86)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 86)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 86)), inCompiler  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 86)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GenericArray <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (var_location_2679, GGS_string ("useless extension, the type does not support %comparable"), fixItArray11  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 88)) ;
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type declaration is here"), fixItArray12  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 89)) ;
            }
          }
        }
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@equatableExtensionAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_equatableExtensionAST::getter_keyRepresentation (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_equatableExtensionAST temp_0 = this ;
  result = function_equatableNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 119)).readProperty_string () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@equatableExtensionAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_equatableExtensionAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                 GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                 GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                 GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                 GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                 GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_equatableExtensionAST temp_0 = this ;
  const GGS_equatableExtensionAST temp_1 = this ;
  GGS_lstring var_key_5586 = GGS_lstring::init_21__21_ (callExtensionGetter_keyRepresentation ((const cPtr_equatableExtensionAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 132)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_equatableExtensionAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5586, temp_2, inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 133)) ;
  }
  {
  const GGS_equatableExtensionAST temp_3 = this ;
  const GGS_equatableExtensionAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5586, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 134)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 134)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_equatableExtensionAST temp_6 = this ;
    const GGS_equatableExtensionMap_2E_element var_node_5829 = ioArgument_ioEquatableExtensionMap.readSubcript__3F_ (temp_6.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioEquatableExtensionMap.readSubcript__3F_ (temp_6.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_5 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_5) {
      const GGS_equatableExtensionAST temp_7 = this ;
      switch (temp_7.readProperty_mExtension ().enumValue ()) {
      case GGS_equatableComparableExtension::Enumeration::invalid:
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_equatable:
        {
          switch (var_node_5829.readProperty_mExtension ().enumValue ()) {
          case GGS_equatableComparableExtension::Enumeration::invalid:
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_equatable:
            {
              const GGS_equatableExtensionAST temp_8 = this ;
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (temp_8.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is already equatable"), fixItArray9  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 141)) ;
              const GGS_equatableExtensionAST temp_10 = this ;
              GenericArray <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_10.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 142)), GGS_string ("equatable extension declaration is here"), fixItArray11  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 142)) ;
            }
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_comparable:
            {
              const GGS_equatableExtensionAST temp_12 = this ;
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mTypeName ().readProperty_location (), GGS_string ("useless declaration, this type is already comparable"), fixItArray13  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 144)) ;
              const GGS_equatableExtensionAST temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_14.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 145)), GGS_string ("comparable extension declaration is here"), fixItArray15  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 145)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_comparable:
        {
          switch (var_node_5829.readProperty_mExtension ().enumValue ()) {
          case GGS_equatableComparableExtension::Enumeration::invalid:
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_equatable:
            {
              const GGS_equatableExtensionAST temp_16 = this ;
              GenericArray <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_16.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 150)), GGS_string ("useless declaration, this type is already comparable"), fixItArray17  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 150)) ;
              const GGS_equatableExtensionAST temp_18 = this ;
              GenericArray <FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (temp_18.readProperty_mTypeName ().readProperty_location (), GGS_string ("comparable extension declaration is here"), fixItArray19  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 151)) ;
            }
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_comparable:
            {
              const GGS_equatableExtensionAST temp_20 = this ;
              GenericArray <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_20.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is already comparable"), fixItArray21  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 153)) ;
              const GGS_equatableExtensionAST temp_22 = this ;
              GenericArray <FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_22.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 154)), GGS_string ("comparable extension declaration is here"), fixItArray23  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 154)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    {
    const GGS_equatableExtensionAST temp_24 = this ;
    const GGS_equatableExtensionAST temp_25 = this ;
    ioArgument_ioEquatableExtensionMap.setter_insertKey (temp_24.readProperty_mTypeName (), temp_25.readProperty_mExtension (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 158)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@equatableExtensionAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_equatableExtensionAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                           const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                           const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                           const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                           const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                           GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                           GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@equatableExtensionAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_equatableExtensionAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                          GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                          const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                          const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                          GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                          const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                          GGS__5B_semanticDeclarationForGeneration_5D_ & /* ioArgument__5F_ioSemanticDeclarationListForGeneration */,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  result = GGS_string ("extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 87)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 87)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 87)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionMethodAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                              GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  const GGS_extensionMethodAST temp_2 = this ;
  GGS_lstring var_key_4485 = GGS_lstring::init_21__21_ (GGS_string ("extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 101)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 101)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 101)), temp_2.readProperty_mExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4485, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 104)) ;
  }
  {
  const GGS_extensionMethodAST temp_4 = this ;
  const GGS_extensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4485, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 105)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-method.galgas4", 105)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_extensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_contains (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-method.galgas4", 107)).operator_not (SOURCE_FILE ("extension-method.galgas4", 107)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_extensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 108)) ;
      }
    }
  }
  const GGS_extensionMethodAST temp_9 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_5009 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubcript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionMethodAST temp_10 = this ;
  const GGS_extensionMethodAST temp_11 = this ;
  var_entry_5009.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mExtensionMethodName (), temp_11.readProperty_mExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-method.galgas4", 117)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 114)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_5009, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 119)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionMethodAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_semanticContext & /* ioArgument__5F_ioSemanticContext */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionMethodAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_6909 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 151)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6909, var_nameForUsefulness_6909, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 152)) ;
  }
  const GGS_extensionMethodAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7089 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 153)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7089, var_nameForUsefulness_6909 COMMA_SOURCE_FILE ("extension-method.galgas4", 154)) ;
  }
  const GGS_extensionMethodAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7300 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 156)) ;
  GGS_string var_selfObjectNameString_7375 ;
  GGS_string var_selfObjectPropertyAccessorString_7412 ;
  GGS_bool var_implementedAsFunction_7459 ;
  GGS_bool var_isClass_7524 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_7300, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 161)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("extension-method.galgas4", 161)))) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_isClass_7524.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_selfObjectNameString_7375 = GGS_string ("this") ;
      var_selfObjectPropertyAccessorString_7412 = GGS_string ("this->") ;
      var_implementedAsFunction_7459 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    var_selfObjectNameString_7375 = GGS_string ("inObject") ;
    var_selfObjectPropertyAccessorString_7412 = GGS_string ("inObject.") ;
    var_implementedAsFunction_7459 = GGS_bool (true) ;
  }
  GGS_analysisContext var_analysisContextNew_7905 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_7375, GGS_selfAvailability::class_func_available (var_selfType_7300, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-method.galgas4", 176))  COMMA_SOURCE_FILE ("extension-method.galgas4", 176)), var_selfObjectPropertyAccessorString_7412, inCompiler COMMA_HERE) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_8496 ;
  GGS__5B_formalParameterForGeneration_5D_ var_formalParameterListForGeneration_8545 ;
  {
  const GGS_extensionMethodAST temp_5 = this ;
  const GGS_extensionMethodAST temp_6 = this ;
  const GGS_extensionMethodAST temp_7 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_6909, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_7905, ioArgument_ioTypeMap, temp_5.readProperty_mExtensionMethodFormalParameterList (), temp_6.readProperty_mExtensionMethodInstructionList (), temp_7.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_8496, var_formalParameterListForGeneration_8545, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 179)) ;
  }
  const GGS_extensionMethodAST temp_8 = this ;
  const GGS_extensionMethodAST temp_9 = this ;
  const GGS_extensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_extensionMethodForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_string ("extension proc ").add_operation (temp_8.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 192)), GGS_bool (true), GGS_string ("proc-").add_operation (extensionGetter_definition (var_selfType_7300, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 194)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 194)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 194)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 194)).add_operation (temp_9.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 194)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 194)), var_selfType_7300, temp_10.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_7459, var_formalParameterListForGeneration_8545, extensionGetter_definition (var_selfType_7300, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 199)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_8496, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas4", 191)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionMethodAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                             GGS_genericExtensionMethodListMap & ioArgument_ioExtensionMethodListMap,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                             GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  extensionSetter_insertKey (ioArgument_ioExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 226)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-method.galgas4", 245)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionMethodForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_extensionMethodForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_extensionMethodForGeneration temp_2 = this ;
      const GGS_extensionMethodForGeneration temp_3 = this ;
      const GGS_extensionMethodForGeneration temp_4 = this ;
      outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 254)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionMethodName (), temp_4.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas4", 253))) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionMethodForGeneration temp_5 = this ;
    const GGS_extensionMethodForGeneration temp_6 = this ;
    const GGS_extensionMethodForGeneration temp_7 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 260)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionMethodName (), temp_7.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas4", 259))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionMethodForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionMethodForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_extensionMethodForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_extensionMethodForGeneration temp_2 = this ;
      GGS__5B_formalParameterForGeneration_5D_ var_extensionMethodFormalParameterList_12725 = temp_2.readProperty_mExtensionMethodFormalParameterList () ;
      {
      const GGS_extensionMethodForGeneration temp_3 = this ;
      var_extensionMethodFormalParameterList_12725.setter_insert (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas4", 279)), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.galgas4", 279)), temp_3.readProperty_mReceiverType (), GGS_string ("self").getter_here (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 279)), GGS_string ("inObject"), inCompiler COMMA_HERE), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 278)) ;
      }
      const GGS_extensionMethodForGeneration temp_4 = this ;
      const GGS_extensionMethodForGeneration temp_5 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 282)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 282)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 282)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 282)).add_operation (temp_5.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 282)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 282))  COMMA_SOURCE_FILE ("extension-method.galgas4", 282)) ;
      GGS_string var_code_13759 ;
      {
      const GGS_extensionMethodForGeneration temp_6 = this ;
      const GGS_extensionMethodForGeneration temp_7 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), GGS_string ("extensionMethod_").add_operation (temp_6.readProperty_mExtensionMethodName ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas4", 285)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 285)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_12725, temp_7.readProperty_mSemanticInstructionListForGeneration (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_13759, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 283)) ;
      }
      const GGS_extensionMethodForGeneration temp_8 = this ;
      const GGS_extensionMethodForGeneration temp_9 = this ;
      outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 297)).readProperty_typeName ().readProperty_string (), temp_9.readProperty_mExtensionMethodName (), var_code_13759 COMMA_SOURCE_FILE ("extension-method.galgas4", 296))) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionMethodForGeneration temp_10 = this ;
    extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 302)) ;
    const GGS_extensionMethodForGeneration temp_11 = this ;
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_14077 (temp_11.readProperty_mExtensionMethodFormalParameterList ()) ;
    while (enumerator_14077.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_14077.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 304)) ;
      enumerator_14077.gotoNextObject () ;
    }
    const GGS_extensionMethodForGeneration temp_12 = this ;
    GGS_unifiedTypeMapEntry var_baseType_14222 = temp_12.readProperty_mReceiverType () ;
    GGS_bool var_searching_14266 = GGS_bool (true) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas4", 308)).isValid ()) {
      uint32_t variant_14287 = GGS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas4", 308)).uintValue () ;
      bool loop_14287 = true ;
      while (loop_14287) {
        loop_14287 = var_searching_14266.isValid () ;
        if (loop_14287) {
          loop_14287 = var_searching_14266.boolValue () ;
        }
        if (loop_14287 && (0 == variant_14287)) {
          loop_14287 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas4", 308)) ;
        }
        if (loop_14287) {
          variant_14287 -= 1 ;
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            test_13 = extensionGetter_definition (var_baseType_14222, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 309)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-method.galgas4", 309)).operator_not (SOURCE_FILE ("extension-method.galgas4", 309)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                const GGS_extensionMethodForGeneration temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_14222, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 310)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 310)).readProperty_instanceMethodMap ().getter_contains (temp_15.readProperty_mExtensionMethodName () COMMA_SOURCE_FILE ("extension-method.galgas4", 310)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  var_baseType_14222 = extensionGetter_definition (var_baseType_14222, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 311)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_14) {
                var_searching_14266 = GGS_bool (false) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_13) {
            var_searching_14266 = GGS_bool (false) ;
          }
        }
      }
    }
    const GGS_extensionMethodForGeneration temp_16 = this ;
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (extensionGetter_definition (var_baseType_14222, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 320)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 320)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 320)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 320)).add_operation (temp_16.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 321)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 321))  COMMA_SOURCE_FILE ("extension-method.galgas4", 319)) ;
    GGS_string var_methodImplementation_15043 ;
    {
    const GGS_extensionMethodForGeneration temp_17 = this ;
    const GGS_extensionMethodForGeneration temp_18 = this ;
    const GGS_extensionMethodForGeneration temp_19 = this ;
    const GGS_extensionMethodForGeneration temp_20 = this ;
    routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_17.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionMethodName (), temp_19.readProperty_mExtensionMethodFormalParameterList (), temp_20.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_15043, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 322)) ;
    }
    const GGS_extensionMethodForGeneration temp_21 = this ;
    const GGS_extensionMethodForGeneration temp_22 = this ;
    const GGS_extensionMethodForGeneration temp_23 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, extensionGetter_definition (temp_21.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 331)).readProperty_typeName ().readProperty_string (), temp_22.readProperty_mExtensionMethodName (), temp_23.readProperty_mExtensionMethodFormalParameterList (), var_methodImplementation_15043 COMMA_SOURCE_FILE ("extension-method.galgas4", 330))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'grammarRulesInTexDocumentTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_grammarRulesInTexDocumentTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_grammarRulesInTexDocumentTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_grammarRulesInTexDocumentTemplate (
  "",
  0,
  gWrapperAllFiles_grammarRulesInTexDocumentTemplate_0,
  0,
  gWrapperAllDirectories_grammarRulesInTexDocumentTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'grammarRulesInTexDocumentTemplate document'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (Compiler * /* inCompiler */,
                                                                           const GGS_string & in_DOCUMENT_5F_NAME,
                                                                           const GGS_string & in_TEX_5F_ESCAPED_5F_DOCUMENT_5F_NAME
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("%!TEX encoding = UTF-8 Unicode\n\n\\documentclass[landscape]{book}\n\\usepackage[a3paper]{geometry}\n\n\\usepackage{verbatim}\n\n\\usepackage{hyperref}\n\n\\usepackage{tikz}\n\n\\usetikzlibrary{\n  arrows,\n  shapes.misc,% wg. rounded rectangle\n  shapes.arrows,%\n  matrix,%\n  scopes,%\n  shadows%\n}\n\n\\tikzset{\n  nonterminal/.style={\n    % The shape:\n    rectangle,\n    % The size:\n    minimum size=6mm,\n    % The border:\n    very thick,\n    draw=red!50!black!50,         % 50% red and 50% black,\n                                  % and that mixed with 50% white\n    % The filling:\n    top color=white,              % a shading that is white at the top...\n    bottom color=red!50!black!20, % and something else at the bottom\n    % Font\n    font=\\itshape\\small\n  },\n  terminal/.style={\n    % The shape:\n    rounded rectangle,\n    minimum size=6mm,\n    % The rest\n    very thick,draw=black!50,\n    top color=white,bottom color=black!20,\n    font=\\ttfamily\\small\n  },\n  firstPoint/.style={circle,>=stealth',thick,draw=black!50},\n  point/.style={coordinate,>=stealth',thick,draw=black!50},\n  tip/.style={->,shorten >=0.007pt},\n  lastPoint/.style={rectangle,>=stealth',thick,draw=black!50},\n  every join/.style={rounded corners}\n}\n\n\\newcommand\\nonTerminalSection[2]{\\section{Nonterminal \\texttt{#1}}\\label{nt:#2}}\n\\newcommand\\ruleSubsection[3]{\\subsection{Component \\texttt{#1}, in file \\texttt{#2}, line #3}}\n\\newcommand\\ruleMatrixColumnSeparation{3mm}\n\\newcommand\\ruleMatrixRowSeparation{3mm}\n\\newcommand\\nonTerminalSymbol[2]{\\hyperref[nt:#2]{#1}}\n\\newcommand\\startSymbol[2]{The start symbol is \\hyperref[nt:#2]{#1}.}\n\n\\newcommand\\nonTerminalSummaryStart{This is the alphabetical list of non terminal : }\n\\newcommand\\nonTerminalSummary[2]{\\hyperref[nt:#2]{#1}}\n\\newcommand\\nonTerminalSummarySeparator{, }\n\\newcommand\\nonTerminalSummaryEnd{.\\\\}\n\n\\begin{document}\n\n\\title{\\Huge{Grammar \\texttt{") ;
  result.appendString (in_TEX_5F_ESCAPED_5F_DOCUMENT_5F_NAME.stringValue ()) ;
  result.appendString ("}}}\n\\date \\today \n\n\\maketitle\n\n\\input{") ;
  result.appendString (in_DOCUMENT_5F_NAME.stringValue ()) ;
  result.appendString (".tex}\n\n\\end{document}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'escapeForTex'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_escapeForTex (const GGS_string & constinArgument_inString,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string::makeEmptyString () ;
  UpEnumerator_range enumerator_1973 (GGS_range (GGS_uint (uint32_t (0U)), constinArgument_inString.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 40)).subtract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 40)))) ;
  while (enumerator_1973.hasCurrentObject ()) {
    GGS_char var_c_1990 = constinArgument_inString.getter_characterAtIndex (enumerator_1973.current (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 41)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (95)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        result.plusAssignOperation(GGS_string ("\\_"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 43)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (123)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          result.plusAssignOperation(GGS_string ("\\{"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 45)) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (125)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            result.plusAssignOperation(GGS_string ("\\}"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 47)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (38)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              result.plusAssignOperation(GGS_string ("\\&"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 49)) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (35)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                result.plusAssignOperation(GGS_string ("\\#"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 51)) ;
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (36)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  result.plusAssignOperation(GGS_string ("\\$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 53)) ;
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                GalgasBool test_6 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_6) {
                  test_6 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (94)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_6) {
                    result.plusAssignOperation(GGS_string ("\\verb=^="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 55)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_6) {
                  GalgasBool test_7 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_7) {
                    test_7 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (37)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_7) {
                      result.plusAssignOperation(GGS_string ("\\verb=%="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 57)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_7) {
                    GalgasBool test_8 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_8) {
                      test_8 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (126)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_8) {
                        result.plusAssignOperation(GGS_string ("$\\sim$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 59)) ;
                      }
                    }
                    if (GalgasBool::boolFalse == test_8) {
                      GalgasBool test_9 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_9) {
                        test_9 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (94)))).boolEnum () ;
                        if (GalgasBool::boolTrue == test_9) {
                          result.plusAssignOperation(GGS_string ("$\\wedge$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 61)) ;
                        }
                      }
                      if (GalgasBool::boolFalse == test_9) {
                        result.plusAssignOperation(var_c_1990.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 63)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 63)) ;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_1973.gotoNextObject () ;
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitProductionRulesInTexFile?????'
//
//--------------------------------------------------------------------------------------------------

void routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inProductDirectory,
                                                               const GGS_string constinArgument_inGrammarComponentName,
                                                               const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                                               const GGS__5B_syntaxComponentForGrammarAnalysis_5D_ constinArgument_inSyntaxComponentListForGrammarAnalysis,
                                                               const GGS_lstring constinArgument_inStartSymbol,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_texDocumentFilePath_3064 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 78)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 78)).add_operation (GGS_string (".document.tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 78)) ;
  var_texDocumentFilePath_3064.getter_deletingLastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas4", 79)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 79)) ;
  GGS_string var_document_3232 = GGS_string (filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (inCompiler, constinArgument_inGrammarComponentName, function_escapeForTex (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 82)) COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 80))) ;
  GGS_bool joker_3441 ; // Joker input parameter
  var_document_3232.method_writeToFileWhenDifferentContents (var_texDocumentFilePath_3064, joker_3441, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 84)) ;
  GGS_string var_texFilePath_3451 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 85)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 85)).add_operation (GGS_string (".tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 85)) ;
  GGS_string var_s_3537 = GGS_string::makeEmptyString () ;
  GGS_uint var_startSymbolIndex_3612 ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_3630 ; // Joker input parameter
  constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (constinArgument_inStartSymbol, var_startSymbolIndex_3612, joker_3630, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 87)) ;
  var_s_3537.plusAssignOperation(GGS_string ("\\startSymbol{").add_operation (function_escapeForTex (constinArgument_inStartSymbol.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 88)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 88)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 88)).add_operation (var_startSymbolIndex_3612.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 88)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 88)).add_operation (GGS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 88)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 88)) ;
  var_s_3537.plusAssignOperation(GGS_string ("\\nonTerminalSummaryStart "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 89)) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3782 (constinArgument_inNonTerminalMapForGrammarAnalysis) ;
  while (enumerator_3782.hasCurrentObject ()) {
    var_s_3537.plusAssignOperation(GGS_string ("\\nonTerminalSummary{").add_operation (function_escapeForTex (enumerator_3782.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 91)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 91)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 91)).add_operation (enumerator_3782.current (HERE).readProperty_mNonTerminalIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 91)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 91)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 91)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 91)) ;
    enumerator_3782.gotoNextObject () ;
    if (enumerator_3782.hasCurrentObject ()) {
      var_s_3537.plusAssignOperation(GGS_string ("\\nonTerminalSummarySeparator "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 92)) ;
    }
  }
  var_s_3537.plusAssignOperation(GGS_string ("\\nonTerminalSummaryEnd "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 94)) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_4043 (constinArgument_inNonTerminalMapForGrammarAnalysis) ;
  while (enumerator_4043.hasCurrentObject ()) {
    var_s_3537.plusAssignOperation(GGS_string ("\\nonTerminalSection{").add_operation (function_escapeForTex (enumerator_4043.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 96)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 96)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 96)).add_operation (enumerator_4043.current (HERE).readProperty_mNonTerminalIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 96)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 96)).add_operation (GGS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 96)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 96)) ;
    UpEnumerator__5B_syntaxComponentForGrammarAnalysis_5D_ enumerator_4224 (constinArgument_inSyntaxComponentListForGrammarAnalysis) ;
    while (enumerator_4224.hasCurrentObject ()) {
      UpEnumerator__5B_productionRuleForGrammarAnalysis_5D_ enumerator_4311 (enumerator_4224.current (HERE).readProperty_mProductionRulesList ()) ;
      while (enumerator_4311.hasCurrentObject ()) {
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = GGS_bool (ComparisonKind::equal, enumerator_4311.current (HERE).readProperty_mLeftNonterminalSymbol ().readProperty_string ().objectCompare (enumerator_4043.current (HERE).readProperty_lkey ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GalgasBool test_1 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_1) {
              test_1 = extensionGetter_displayVertically (enumerator_4311.current (HERE).readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 100)).boolEnum () ;
              if (GalgasBool::boolTrue == test_1) {
                extensionMethod_displayRuleVertically (enumerator_4311.current (HERE), enumerator_4224.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), var_s_3537, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 101)) ;
              }
            }
            if (GalgasBool::boolFalse == test_1) {
              extensionMethod_displayRule (enumerator_4311.current (HERE), enumerator_4224.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), var_s_3537, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 103)) ;
            }
          }
        }
        enumerator_4311.gotoNextObject () ;
      }
      enumerator_4224.gotoNextObject () ;
    }
    enumerator_4043.gotoNextObject () ;
  }
  GGS_bool joker_4790 ; // Joker input parameter
  var_s_3537.method_writeToFileWhenDifferentContents (var_texFilePath_3451, joker_4790, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 109)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nonTerminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_nonTerminalInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS__5B_row_5D_ & ioArgument_ioRowList,
                                                                                         const GGS_uint constinArgument_inRow,
                                                                                         GGS_uint & ioArgument_ioColumn,
                                                                                         GGS_string & ioArgument_ioCurrentNode,
                                                                                         GGS_string & ioArgument_ioArrowShape,
                                                                                         GGS_string & ioArgument_ioArrows,
                                                                                         GGS_uint & /* ioArgument__5F_ioMaxUsedRowIndex */,
                                                                                         const GGS_bool /* constinArgument__5F_inDebug */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_nonTerminalInstructionForGrammarAnalysis temp_0 = this ;
  const GGS_nonTerminalInstructionForGrammarAnalysis temp_1 = this ;
  GGS_string var_nodeDefinition_11289 = GGS_string ("[nonterminal] {\\nonTerminalSymbol{").add_operation (function_escapeForTex (temp_0.readProperty_mNonterminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 311)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 311)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 311)).add_operation (temp_1.readProperty_mNonterminalSymbolIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 312)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 312)).add_operation (GGS_string ("}}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 312)) ;
  GGS_string var_nodeName_11555 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, var_nodeDefinition_11289, constinArgument_inRow, ioArgument_ioColumn, var_nodeName_11555, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 313)) ;
  }
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 319)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 319)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 319)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 319)).add_operation (var_nodeName_11555, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 319)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 319)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 319)) ;
  ioArgument_ioCurrentNode = var_nodeName_11555 ;
  ioArgument_ioArrowShape = GGS_string ("--") ;
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 322)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selectInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS__5B_row_5D_ & ioArgument_ioRowList,
                                                                                    const GGS_uint constinArgument_inRow,
                                                                                    GGS_uint & ioArgument_ioColumn,
                                                                                    GGS_string & ioArgument_ioCurrentNode,
                                                                                    GGS_string & ioArgument_ioArrowShape,
                                                                                    GGS_string & ioArgument_ioArrows,
                                                                                    GGS_uint & ioArgument_ioMaxUsedRowIndex,
                                                                                    const GGS_bool constinArgument_inDebug,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inDebug.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_markerStartNodeName_12354 ;
      {
      const GGS_selectInstructionForGrammarAnalysis temp_1 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {SS").add_operation (temp_1.readProperty_mSelectBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 340)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 340)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 340)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 340)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_12354, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 339)) ;
      }
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 345)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 345)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 345)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 345)).add_operation (var_markerStartNodeName_12354, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 345)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 345)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 345)) ;
      ioArgument_ioCurrentNode = var_markerStartNodeName_12354 ;
      ioArgument_ioArrowShape = GGS_string ("--") ;
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 348)) ;
    }
  }
  GGS_string var_startNodeName_12701 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_12701, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 351)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 352)) ;
  const GGS_selectInstructionForGrammarAnalysis temp_2 = this ;
  GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ var_branches_12762 = temp_2.readProperty_mSelectBranchList () ;
  GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_brancheZero_12874 ;
  {
  var_branches_12762.setter_removeFirst (var_brancheZero_12874, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 355)) ;
  }
  GGS_uint var_branchZeroColumn_12893 = ioArgument_ioColumn ;
  GGS_uint var_maxUsedRowIndex_12927 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_12874, ioArgument_ioRowList, constinArgument_inRow, var_branchZeroColumn_12893, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_12927, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 358)) ;
  GGS_uint var_endColumn_13195 = var_branchZeroColumn_12893 ;
  GGS__5B_string_5D_ var_endingNodes_13271 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ enumerator_13305 (var_branches_12762) ;
  while (enumerator_13305.hasCurrentObject ()) {
    var_maxUsedRowIndex_12927.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 372)) ;
    GGS_uint var_branchColumn_13350 = ioArgument_ioColumn ;
    GGS_string var_currentNode_13382 = var_startNodeName_12701 ;
    GGS_string var_arrowStyle_13418 = GGS_string ("|-") ;
    extensionMethod_tikzNodeForSyntaxInstruction (enumerator_13305.current (HERE), ioArgument_ioRowList, var_maxUsedRowIndex_12927, var_branchColumn_13350, var_currentNode_13382, var_arrowStyle_13418, ioArgument_ioArrows, var_maxUsedRowIndex_12927, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 376)) ;
    var_endingNodes_13271.plusPlusAssignOperation (var_currentNode_13382  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 386)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::lowerThan, var_endColumn_13195.objectCompare (var_branchColumn_13350)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_endColumn_13195 = var_branchColumn_13350 ;
      }
    }
    enumerator_13305.gotoNextObject () ;
  }
  ioArgument_ioColumn = var_endColumn_13195 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::lowerThan, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_12927)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_12927 ;
    }
  }
  GGS_string var_endNodeName_14042 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_endNodeName_14042, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 396)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 397)) ;
  ioArgument_ioArrowShape = GGS_string ("--") ;
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 399)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 399)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 399)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 399)).add_operation (var_endNodeName_14042, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 399)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 399)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 399)) ;
  ioArgument_ioCurrentNode = var_endNodeName_14042 ;
  UpEnumerator__5B_string_5D_ enumerator_14257 (var_endingNodes_13271) ;
  while (enumerator_14257.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (enumerator_14257.current (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 403)).add_operation (GGS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 403)).add_operation (var_endNodeName_14042, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 403)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 403)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 403)) ;
    enumerator_14257.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = constinArgument_inDebug.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_string var_markerEndNodeName_14555 ;
      {
      const GGS_selectInstructionForGrammarAnalysis temp_6 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {SE").add_operation (temp_6.readProperty_mSelectBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 408)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 408)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 408)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 408)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_14555, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 407)) ;
      }
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 413)) ;
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 414)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 414)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 414)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 414)).add_operation (var_markerEndNodeName_14555, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 414)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 414)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 414)) ;
      ioArgument_ioCurrentNode = var_markerEndNodeName_14555 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@repeatInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS__5B_row_5D_ & ioArgument_ioRowList,
                                                                                    const GGS_uint constinArgument_inRow,
                                                                                    GGS_uint & ioArgument_ioColumn,
                                                                                    GGS_string & ioArgument_ioCurrentNode,
                                                                                    GGS_string & ioArgument_ioArrowShape,
                                                                                    GGS_string & ioArgument_ioArrows,
                                                                                    GGS_uint & ioArgument_ioMaxUsedRowIndex,
                                                                                    const GGS_bool constinArgument_inDebug,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inDebug.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_markerStartNodeName_15373 ;
      {
      const GGS_repeatInstructionForGrammarAnalysis temp_1 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {RS").add_operation (temp_1.readProperty_mRepeatBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 434)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 434)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 434)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 434)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_15373, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 433)) ;
      }
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 439)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 439)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 439)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 439)).add_operation (var_markerStartNodeName_15373, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 439)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 439)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 439)) ;
      ioArgument_ioCurrentNode = var_markerStartNodeName_15373 ;
      ioArgument_ioArrowShape = GGS_string ("--") ;
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 442)) ;
    }
  }
  GGS_string var_returnNodeName_15721 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_returnNodeName_15721, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 445)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 446)) ;
  const GGS_repeatInstructionForGrammarAnalysis temp_2 = this ;
  GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ var_branches_15783 = temp_2.readProperty_mRepeatBranchList () ;
  GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_brancheZero_15895 ;
  {
  var_branches_15783.setter_removeFirst (var_brancheZero_15895, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 449)) ;
  }
  GGS_uint var_maxUsedRowIndex_15914 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_15895, ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_15914, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 451)) ;
  GGS_uint var_endColumn_16174 = ioArgument_ioColumn ;
  GGS_string var_startNodeName_16318 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_16318, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 463)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 464)) ;
  GGS_bool var_oneEmptyBranch_16421 = GGS_bool (ComparisonKind::equal, var_branches_15783.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 466)).objectCompare (GGS_uint (uint32_t (1U)))) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_oneEmptyBranch_16421.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_firstBranch_16491 = var_branches_15783.getter_first (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 468)) ;
      var_oneEmptyBranch_16421 = GGS_bool (ComparisonKind::equal, var_firstBranch_16491.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 469)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    }
  }
  GGS__5B_string_5D_ var_endingNodes_16607 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_oneEmptyBranch_16421.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_endingNodes_16607.plusPlusAssignOperation (var_startNodeName_16318  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 474)) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    GGS_uint var_nextBranchUsedRowIndex_16699 = constinArgument_inRow ;
    UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ enumerator_16748 (var_branches_15783) ;
    while (enumerator_16748.hasCurrentObject ()) {
      var_nextBranchUsedRowIndex_16699.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 478)) ;
      GGS_uint var_branchColumn_16804 = ioArgument_ioColumn ;
      GGS_string var_currentNode_16838 = var_startNodeName_16318 ;
      GGS_string var_arrowStyle_16876 = GGS_string ("|-") ;
      extensionMethod_tikzNodeForSyntaxInstruction (enumerator_16748.current (HERE), ioArgument_ioRowList, var_nextBranchUsedRowIndex_16699, var_branchColumn_16804, var_currentNode_16838, var_arrowStyle_16876, ioArgument_ioArrows, var_nextBranchUsedRowIndex_16699, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 482)) ;
      var_endingNodes_16607.plusPlusAssignOperation (var_currentNode_16838  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 492)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::lowerThan, var_endColumn_16174.objectCompare (var_branchColumn_16804)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          var_endColumn_16174 = var_branchColumn_16804 ;
        }
      }
      enumerator_16748.gotoNextObject () ;
    }
    ioArgument_ioColumn = var_endColumn_16174 ;
    ioArgument_ioMaxUsedRowIndex = var_nextBranchUsedRowIndex_16699 ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::lowerThan, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_15914)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_15914 ;
    }
  }
  ioArgument_ioMaxUsedRowIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 504)) ;
  GGS_string var_returnUpperNodeName_17700 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), ioArgument_ioMaxUsedRowIndex, ioArgument_ioColumn, var_returnUpperNodeName_17700, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 506)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 507)) ;
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (var_returnUpperNodeName_17700, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 508)).add_operation (GGS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 508)).add_operation (var_returnNodeName_15721, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 508)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 508)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 508)) ;
  UpEnumerator__5B_string_5D_ enumerator_17867 (var_endingNodes_16607) ;
  while (enumerator_17867.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (enumerator_17867.current (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 511)).add_operation (GGS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 511)).add_operation (var_returnUpperNodeName_17700, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 511)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 511)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 511)) ;
    enumerator_17867.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = constinArgument_inDebug.boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_string var_markerEndNodeName_18173 ;
      {
      const GGS_repeatInstructionForGrammarAnalysis temp_8 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {RE").add_operation (temp_8.readProperty_mRepeatBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 516)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 516)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 516)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 516)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_18173, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 515)) ;
      }
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 521)) ;
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 522)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 522)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 522)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 522)).add_operation (var_markerEndNodeName_18173, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 522)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 522)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 522)) ;
      ioArgument_ioCurrentNode = var_markerEndNodeName_18173 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@nonTerminalInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_nonTerminalInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@selectInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_selectInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@repeatInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_repeatInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalStructuredSendInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GGS_lexicalTagMap & /* ioArgument__5F_ioTagMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator__5B_lexicalSendSearchAST_5D_ enumerator_3356 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_3356.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GGS_bool (true), enumerator_3356.current (HERE).readProperty_mSearchListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 75)) ;
    }
    GGS_lexicalTypeEnum joker_3606 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_3356.current (HERE).readProperty_mAttributeName (), joker_3606, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 76)) ;
    enumerator_3356.gotoNextObject () ;
  }
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  callExtensionMethod_checkLexicalDefaultAction ((cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 78)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStructuredSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                               const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string::makeEmptyString () ;
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator__5B_lexicalSendSearchAST_5D_ enumerator_4050 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_4050.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("if (tokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 89)) ;
    result.plusAssignOperation(GGS_string ("  tokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 90)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 90)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 90)) ;
    result.plusAssignOperation(GGS_string ("_").add_operation (enumerator_4050.current (HERE).readProperty_mSearchListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 91)).add_operation (GGS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 91)).add_operation (enumerator_4050.current (HERE).readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 91)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 91)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 91)) ;
    result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 92)) ;
    enumerator_4050.gotoNextObject () ;
  }
  result.plusAssignOperation(GGS_string ("if tokenCode == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 94)) ;
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result.plusAssignOperation(GGS_string ("  ").add_operation (callExtensionGetter_generateSwiftCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 95)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 95)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 95)) ;
  result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 96)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStructuredSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalStructuredSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStructuredSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                            const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string::makeEmptyString () ;
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator__5B_lexicalSendSearchAST_5D_ enumerator_5203 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_5203.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 115)) ;
    result.plusAssignOperation(GGS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_5203.current (HERE).readProperty_mSearchListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 116)).add_operation (GGS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 116)).add_operation (enumerator_5203.current (HERE).readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 116)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 116)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 116)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 116)) ;
    result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 117)) ;
    enumerator_5203.gotoNextObject () ;
  }
  result.plusAssignOperation(GGS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 119)) ;
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result.plusAssignOperation(GGS_string ("  ").add_operation (callExtensionGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 120)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 120)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 120)) ;
  result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 121)) ;
  result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 122)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalAttributeInputOutputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result = GGS_string ("&self.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 113)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalFormalInputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFormalInputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalFormalInputArgumentAST temp_0 = this ;
  result = callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 121)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputOutputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                          const GGS_lexicalArgumentModeAST constinArgument_inLexicalRoutineFormalArgumentMode,
                                                                                          const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_5727 ;
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_5727, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 131)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_5727.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputOutputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_5727, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 138)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 137)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 138)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 140)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 139)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 140)), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 137)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 145)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalAttributeInputOutputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualPassingModeLocation (), GGS_string ("the output mode (!) is required here, not an output/input mode"), fixItArray6  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 146)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFormalInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 const GGS_lexicalArgumentModeAST constinArgument_inLexicalRoutineFormalArgumentMode,
                                                                                 const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalFormalInputArgumentAST temp_0 = this ;
  callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), ioArgument_ioLexiqueAnalysisContext, constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 157)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 162)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFormalInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualPassingModeLocation (), GGS_string ("the output/input mode (!\?) is required here, not an input mode"), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 163)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalRoutineCallInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRoutineCallInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                            GGS_lexicalTagMap & /* ioArgument__5F_ioTagMap */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_lexicalRoutineFormalArgumentAST_5D_ var_lexicalRoutineFormalArgumentList_7501 ;
  GGS__5B_string_5D_ var_routineErrorMessageList_7544 ;
  const GGS_lexicalRoutineCallInstructionAST temp_0 = this ;
  GGS_bool joker_7573 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalRoutineMessageMap ().method_searchKey (temp_0.readProperty_mRoutineName (), var_lexicalRoutineFormalArgumentList_7501, var_routineErrorMessageList_7544, joker_7573, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 172)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexicalRoutineCallInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, var_lexicalRoutineFormalArgumentList_7501.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 179)).objectCompare (temp_2.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 179)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalRoutineCallInstructionAST temp_3 = this ;
      const GGS_lexicalRoutineCallInstructionAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRoutineName ().readProperty_location (), GGS_string ("this lexical routine call names ").add_operation (temp_4.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 181)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 181)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 180)).add_operation (GGS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 181)).add_operation (var_lexicalRoutineFormalArgumentList_7501.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 183)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 182)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 182)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 183)), fixItArray5  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 180)) ;
    }
  }
  const GGS_lexicalRoutineCallInstructionAST temp_6 = this ;
  UpEnumerator__5B_lexicalRoutineFormalArgumentAST_5D_ enumerator_8029 (var_lexicalRoutineFormalArgumentList_7501) ;
  UpEnumerator__5B_abstractLexicalRoutineActualArgumentAST_5D_ enumerator_8078 (temp_6.readProperty_mActualArgumentList ()) ;
  while (enumerator_8029.hasCurrentObject () && enumerator_8078.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_8078.current (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_8029.current (HERE).readProperty_mLexicalFormalArgumentMode (), enumerator_8029.current (HERE).readProperty_mLexicalFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 188)) ;
    enumerator_8029.gotoNextObject () ;
    enumerator_8078.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalRoutineCallInstructionAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_routineErrorMessageList_7544.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 195)).objectCompare (temp_8.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 195)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalRoutineCallInstructionAST temp_9 = this ;
      const GGS_lexicalRoutineCallInstructionAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mRoutineName ().readProperty_location (), GGS_string ("this lexical routine call names ").add_operation (temp_10.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 197)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 197)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 196)).add_operation (GGS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 197)).add_operation (var_routineErrorMessageList_7544.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 199)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 199)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 198)).add_operation (GGS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 199)), fixItArray11  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 196)) ;
    }
  }
  const GGS_lexicalRoutineCallInstructionAST temp_12 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_8697 (temp_12.readProperty_mErrorMessageList ()) ;
  while (enumerator_8697.hasCurrentObject ()) {
    GGS_lexicalMessageMap_2E_element var_entry_8726 = ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalMessageMap ().readSubcript__3F_searchKey (enumerator_8697.current (HERE), inCompiler COMMA_HERE) ;
    var_entry_8726.mProperty_mMessageIsUsed = GGS_bool (true) ;
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_replaceKey (var_entry_8726, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 206)) ;
    }
    enumerator_8697.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalRoutineCallInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                            const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result = GGS_string ("scanner_cocoa_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 218)).add_operation (GGS_string (" (&scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 218)) ;
  const GGS_lexicalRoutineCallInstructionAST temp_1 = this ;
  UpEnumerator__5B_abstractLexicalRoutineActualArgumentAST_5D_ enumerator_9426 (temp_1.readProperty_mActualArgumentList ()) ;
  while (enumerator_9426.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_generateSwiftCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_9426.current (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 220)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 220)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 220)) ;
    enumerator_9426.gotoNextObject () ;
  }
  result.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 222)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result = GGS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 237)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 237)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalFormalInputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFormalInputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalFormalInputArgumentAST temp_0 = this ;
  result = callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 244)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalRoutineCallInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalRoutineCallInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalRoutineCallInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                         const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result = GGS_string ("::scanner_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 259)).add_operation (GGS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 259)) ;
  const GGS_lexicalRoutineCallInstructionAST temp_1 = this ;
  UpEnumerator__5B_abstractLexicalRoutineActualArgumentAST_5D_ enumerator_11093 (temp_1.readProperty_mActualArgumentList ()) ;
  while (enumerator_11093.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_11093.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 261)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 261)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 261)) ;
    enumerator_11093.gotoNextObject () ;
  }
  const GGS_lexicalRoutineCallInstructionAST temp_2 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_11216 (temp_2.readProperty_mErrorMessageList ()) ;
  while (enumerator_11216.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string (", gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 264)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 264)).add_operation (enumerator_11216.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 264)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 264)) ;
    enumerator_11216.gotoNextObject () ;
  }
  result.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 266)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalTagInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalTagInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                    GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_lexicalTagInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.setter_insertKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 50)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalTagInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalTagInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                    const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalTagInstructionAST temp_0 = this ;
  result = GGS_string ("let locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 59)).add_operation (GGS_string (" = self.savedScanningPoint ()\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 59)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalTagInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalTagInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalTagInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalTagInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                 const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalTagInstructionAST temp_0 = this ;
  const GGS_lexicalTagInstructionAST temp_1 = this ;
  const GGS_lexicalTagInstructionAST temp_2 = this ;
  result = GGS_string ("const LocationInSource currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 76)).add_operation (GGS_string (" = mCurrentLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 76)).add_operation (GGS_string ("const LocationInSource endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 76)).add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 77)).add_operation (GGS_string (" = mTokenEndLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 77)).add_operation (GGS_string ("const utf32 currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 77)).add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 78)).add_operation (GGS_string (" = mCurrentChar ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 78)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalSelectInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator__5B_lexicalSelectBranchAST_5D_ enumerator_3131 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  while (enumerator_3131.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_3131.current (HERE).readProperty_mSelectExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 74)) ;
    GGS_lexicalTagMap var_tagMap_3261 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 75)) ;
    UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_3353 (enumerator_3131.current (HERE).readProperty_mSelectInstructionList ()) ;
    while (enumerator_3353.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_3353.current (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_3261, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 77)) ;
      enumerator_3353.gotoNextObject () ;
    }
    enumerator_3131.gotoNextObject () ;
  }
  GGS_lexicalTagMap var_tagMap_3474 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 80)) ;
  const GGS_lexicalSelectInstructionAST temp_1 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_3549 (temp_1.readProperty_mDefaultInstructionList ()) ;
  while (enumerator_3549.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_3549.current (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_3474, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 82)) ;
    enumerator_3549.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalSelectInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSelectInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string::makeEmptyString () ;
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator__5B_lexicalSelectBranchAST_5D_ enumerator_4000 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  while (enumerator_4000.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 96)) ;
    result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_4000.current (HERE).readProperty_mSelectExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 97)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 97)) ;
    result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 98)) ;
    {
    result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 99)) ;
    }
    UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_4267 (enumerator_4000.current (HERE).readProperty_mSelectInstructionList ()) ;
    while (enumerator_4267.hasCurrentObject ()) {
      result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_4267.current (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 101)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 101)) ;
      enumerator_4267.gotoNextObject () ;
    }
    {
    result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 103)) ;
    }
    enumerator_4000.gotoNextObject () ;
    if (enumerator_4000.hasCurrentObject ()) {
      result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 105)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas4", 108)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 109)) ;
      {
      result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 110)) ;
      }
      const GGS_lexicalSelectInstructionAST temp_3 = this ;
      UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_4624 (temp_3.readProperty_mDefaultInstructionList ()) ;
      while (enumerator_4624.hasCurrentObject ()) {
        result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_4624.current (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 112)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 112)) ;
        enumerator_4624.gotoNextObject () ;
      }
      {
      result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 114)) ;
      }
    }
  }
  result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 116)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalSelectInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalSelectInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator__5B_lexicalSelectBranchAST_5D_ enumerator_5182 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  bool bool_1 = result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas4", 125)).isValidAndTrue () ;
  if (enumerator_5182.hasCurrentObject () && bool_1) {
    while (enumerator_5182.hasCurrentObject () && bool_1) {
      UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_5249 (enumerator_5182.current (HERE).readProperty_mSelectInstructionList ()) ;
      bool bool_2 = result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas4", 126)).isValidAndTrue () ;
      if (enumerator_5249.hasCurrentObject () && bool_2) {
        while (enumerator_5249.hasCurrentObject () && bool_2) {
          result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_5249.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 127)) ;
          enumerator_5249.gotoNextObject () ;
          if (enumerator_5249.hasCurrentObject ()) {
            bool_2 = result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas4", 126)).isValidAndTrue () ;
          }
        }
      }
      enumerator_5182.gotoNextObject () ;
      if (enumerator_5182.hasCurrentObject ()) {
        bool_1 = result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas4", 125)).isValidAndTrue () ;
      }
    }
  }
  const GGS_lexicalSelectInstructionAST temp_3 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_5386 (temp_3.readProperty_mDefaultInstructionList ()) ;
  bool bool_4 = result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas4", 130)).isValidAndTrue () ;
  if (enumerator_5386.hasCurrentObject () && bool_4) {
    while (enumerator_5386.hasCurrentObject () && bool_4) {
      result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_5386.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 131)) ;
      enumerator_5386.gotoNextObject () ;
      if (enumerator_5386.hasCurrentObject ()) {
        bool_4 = result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas4", 130)).isValidAndTrue () ;
      }
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalSelectInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSelectInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                    const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string::makeEmptyString () ;
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator__5B_lexicalSelectBranchAST_5D_ enumerator_5836 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  while (enumerator_5836.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 145)) ;
    result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_5836.current (HERE).readProperty_mSelectExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 146)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 146)) ;
    result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 147)) ;
    {
    result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 148)) ;
    }
    UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_6088 (enumerator_5836.current (HERE).readProperty_mSelectInstructionList ()) ;
    while (enumerator_6088.hasCurrentObject ()) {
      result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6088.current (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 150)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 150)) ;
      enumerator_6088.gotoNextObject () ;
    }
    {
    result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 152)) ;
    }
    enumerator_5836.gotoNextObject () ;
    if (enumerator_5836.hasCurrentObject ()) {
      result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 154)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas4", 157)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 158)) ;
      {
      result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 159)) ;
      }
      const GGS_lexicalSelectInstructionAST temp_3 = this ;
      UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_6442 (temp_3.readProperty_mDefaultInstructionList ()) ;
      while (enumerator_6442.hasCurrentObject ()) {
        result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6442.current (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 161)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 161)) ;
        enumerator_6442.gotoNextObject () ;
      }
      {
      result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 163)) ;
      }
    }
  }
  result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 165)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalSimpleSendInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSimpleSendInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                           GGS_lexicalTagMap & /* ioArgument__5F_ioTagMap */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  GGS__5B_lexicalSentValue_5D_ joker_3174 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mSentTerminal (), joker_3174, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 66)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalSimpleSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                           const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 75)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 75)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 75)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 75)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 75)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalSimpleSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalSimpleSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalSimpleSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                        const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result = GGS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 93)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 93)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 93)) ;
  result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 94)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalRewindInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRewindInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.method_searchKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 55)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  GGS__5B_lexicalSentValue_5D_ joker_2676 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_1.readProperty_mTerminalName (), joker_2676, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 56)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalRewindInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRewindInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                       const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  result = GGS_string ("self.restoreScanningPoint (locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 65)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 65)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  result.plusAssignOperation(GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 66)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 66)).add_operation (temp_1.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas4", 66)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 66)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 66)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 66)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalRewindInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalRewindInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalRewindInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRewindInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                    const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  result = GGS_string ("mCurrentLocation = currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 82)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 82)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  result.plusAssignOperation(GGS_string ("mTokenEndLocation = endLocationForTag_").add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 83)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 83)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 83)) ;
  const GGS_lexicalRewindInstructionAST temp_2 = this ;
  result.plusAssignOperation(GGS_string ("mCurrentChar = currentCharForTag_").add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 84)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 84)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 84)) ;
  const GGS_lexicalRewindInstructionAST temp_3 = this ;
  result.plusAssignOperation(GGS_string ("token.mTokenCode = kToken_").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas4", 85)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 85)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 85)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 85)) ;
  result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 86)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalRepeatInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator__5B_lexicalWhileBranchAST_5D_ enumerator_3042 (temp_0.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_3042.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_3042.current (HERE).readProperty_mWhileExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 70)) ;
    GGS_lexicalTagMap var_tagMap_3169 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 71)) ;
    UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_3260 (enumerator_3042.current (HERE).readProperty_mWhileInstructionList ()) ;
    while (enumerator_3260.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_3260.current (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_3169, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 73)) ;
      enumerator_3260.gotoNextObject () ;
    }
    enumerator_3042.gotoNextObject () ;
  }
  GGS_lexicalTagMap var_tagMap_3380 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 76)) ;
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_3455 (temp_1.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_3455.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_3455.current (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_3380, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 78)) ;
    enumerator_3455.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalRepeatInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRepeatInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("while (loop && scanningOk) {\n") ;
  {
  result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 127)) ;
  }
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_5665 (temp_0.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_5665.hasCurrentObject ()) {
    result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_5665.current (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 130)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 130)) ;
    enumerator_5665.gotoNextObject () ;
  }
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator__5B_lexicalWhileBranchAST_5D_ enumerator_5839 (temp_1.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_5839.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 135)) ;
    result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_5839.current (HERE).readProperty_mWhileExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 136)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 136)) ;
    result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 137)) ;
    {
    result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 138)) ;
    }
    UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_6102 (enumerator_5839.current (HERE).readProperty_mWhileInstructionList ()) ;
    while (enumerator_6102.hasCurrentObject ()) {
      result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6102.current (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 140)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 140)) ;
      enumerator_6102.gotoNextObject () ;
    }
    {
    result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 142)) ;
    }
    enumerator_5839.gotoNextObject () ;
    if (enumerator_5839.hasCurrentObject ()) {
      result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 144)) ;
    }
  }
  result.plusAssignOperation(GGS_string ("}else{\n  loop = false\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 146)) ;
  {
  result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 149)) ;
  }
  result.plusAssignOperation(GGS_string ("}\nloop = true\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 150)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalRepeatInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalRepeatInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalRepeatInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRepeatInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                    const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("do {\n") ;
  {
  result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 169)) ;
  }
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_7214 (temp_0.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_7214.hasCurrentObject ()) {
    result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7214.current (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 172)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 172)) ;
    enumerator_7214.gotoNextObject () ;
  }
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator__5B_lexicalWhileBranchAST_5D_ enumerator_7385 (temp_1.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_7385.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 177)) ;
    result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_7385.current (HERE).readProperty_mWhileExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 178)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 178)) ;
    result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 179)) ;
    {
    result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 180)) ;
    }
    UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_7633 (enumerator_7385.current (HERE).readProperty_mWhileInstructionList ()) ;
    while (enumerator_7633.hasCurrentObject ()) {
      result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7633.current (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 182)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 182)) ;
      enumerator_7633.gotoNextObject () ;
    }
    {
    result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 184)) ;
    }
    enumerator_7385.gotoNextObject () ;
    if (enumerator_7385.hasCurrentObject ()) {
      result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 186)) ;
    }
  }
  result.plusAssignOperation(GGS_string ("}else{\n  loop = false ;\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 188)) ;
  {
  result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 191)) ;
  }
  result.plusAssignOperation(GGS_string ("}while (loop) ;\nloop = true ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 192)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalWarningInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalWarningInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                        GGS_lexicalTagMap & /* ioArgument__5F_ioTagMap */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_lexicalWarningInstructionAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 50)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalWarningInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalWarningInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                        const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                        Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string::makeEmptyString () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalWarningInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalWarningInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalWarningInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalWarningInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                     const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalWarningInstructionAST temp_0 = this ;
  result = GGS_string ("lexicalWarning (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 78)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 78)).add_operation (temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 78)).add_operation (GGS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 78)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalDropInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalDropInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     GGS_lexicalTagMap & /* ioArgument__5F_ioTagMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalDropInstructionAST temp_0 = this ;
  GGS__5B_lexicalSentValue_5D_ joker_2468 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mTerminalName (), joker_2468, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 50)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalDropInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalDropInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                     const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalDropInstructionAST temp_0 = this ;
  result = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 59)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 59)).add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas4", 59)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 59)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 59)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalDropInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalDropInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalDropInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalDropInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                  const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalDropInstructionAST temp_0 = this ;
  result = GGS_string ("enterDroppedTerminal (kToken_").add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas4", 77)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 77)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 77)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalErrorInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      GGS_lexicalTagMap & /* ioArgument__5F_ioTagMap */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_lexicalErrorInstructionAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 50)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalErrorInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                      const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                      Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("scanningOk = false\n") ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalErrorInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalErrorInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalErrorInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                   const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalErrorInstructionAST temp_0 = this ;
  result = GGS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 87)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 87)).add_operation (temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 87)).add_operation (GGS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 87)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkUsefulEntities???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkUsefulEntities_3F__3F__3F_ (const GGS_usefulEntitiesGraph constinArgument_inUsefulEntitiesGraph,
                                              const GGS__5B_lstring_5D_ constinArgument_inRootEntities,
                                              const GGS_string /* constinArgument__5F_inProductDirectory */,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_buildOptionValue::class_func_checkEntityUsefulness (SOURCE_FILE ("useful-entities-computation.galgas4", 42)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("useful-entities-computation.galgas4", 42)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS__5B_string_5D_ var_undefinedNodeList_2188 = constinArgument_inUsefulEntitiesGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("useful-entities-computation.galgas4", 44)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_2188.getter_count (SOURCE_FILE ("useful-entities-computation.galgas4", 45)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_string var_s_2301 = GGS_string ("usefulness computation, ").add_operation (var_undefinedNodeList_2188.getter_count (SOURCE_FILE ("useful-entities-computation.galgas4", 46)).getter_string (SOURCE_FILE ("useful-entities-computation.galgas4", 46)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 46)).add_operation (GGS_string (" undefined nodes:"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 46)) ;
            UpEnumerator__5B_string_5D_ enumerator_2399 (var_undefinedNodeList_2188) ;
            while (enumerator_2399.hasCurrentObject ()) {
              var_s_2301.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_2399.current (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 48)), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 48)) ;
              enumerator_2399.gotoNextObject () ;
            }
            GenericArray <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas4", 50)), var_s_2301, fixItArray2  COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 50)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GGS__5B_lstring_5D_ var_usefullEntityList_2558 = constinArgument_inUsefulEntitiesGraph.getter_accessibleNodesFrom (constinArgument_inRootEntities, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 53)) ;
          GGS_stringset var_usefullEntitySet_2652 = GGS_stringset::init_21_lstringArray (var_usefullEntityList_2558, inCompiler COMMA_HERE) ;
          GGS_stringset var_allEntitySet_2727 = GGS_stringset::init_21_stringArray (constinArgument_inUsefulEntitiesGraph.getter_keyList (SOURCE_FILE ("useful-entities-computation.galgas4", 55)), inCompiler COMMA_HERE) ;
          GGS_stringset var_unusedEntities_2809 = var_allEntitySet_2727.subtract_operation (var_usefullEntitySet_2652, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 56)) ;
          GGS_uselessEntityLocationMap var_uselessEntityLocationMap_2894 = GGS_uselessEntityLocationMap::init (inCompiler COMMA_HERE) ;
          UpEnumerator_stringset enumerator_2942 (var_unusedEntities_2809) ;
          while (enumerator_2942.hasCurrentObject ()) {
            GGS_location var_loc_2972 = constinArgument_inUsefulEntitiesGraph.getter_locationForKey (enumerator_2942.current (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 59)) ;
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::equal, var_loc_2972.objectCompare (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas4", 60)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GenericArray <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas4", 61)), GGS_string ("unused entity, '").add_operation (enumerator_2942.current (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 61)).add_operation (GGS_string ("' (due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 61)).add_operation (GGS_buildOptionString::class_func_checkEntityUsefulness (SOURCE_FILE ("useful-entities-computation.galgas4", 62)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 62)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 62)), fixItArray4  COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 61)) ;
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = var_uselessEntityLocationMap_2894.getter_contains (var_loc_2972.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 63)) COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 63)).operator_not (SOURCE_FILE ("useful-entities-computation.galgas4", 63)).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  {
                  var_uselessEntityLocationMap_2894.setter_insertKey (var_loc_2972.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 64)).getter_nowhere (SOURCE_FILE ("useful-entities-computation.galgas4", 64)), enumerator_2942.current (HERE), var_loc_2972, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 64)) ;
                  }
                }
              }
            }
            enumerator_2942.gotoNextObject () ;
          }
          UpEnumerator_uselessEntityLocationMap enumerator_3415 (var_uselessEntityLocationMap_2894) ;
          while (enumerator_3415.hasCurrentObject ()) {
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (enumerator_3415.current (HERE).readProperty_mLocation (), GGS_string ("unused '").add_operation (enumerator_3415.current (HERE).readProperty_mUnusedEntityName (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 68)).add_operation (GGS_string ("' entity, due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 68)).add_operation (GGS_buildOptionString::class_func_checkEntityUsefulness (SOURCE_FILE ("useful-entities-computation.galgas4", 69)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 68)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 69)), fixItArray6  COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 68)) ;
            enumerator_3415.gotoNextObject () ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'getterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_getterNameForUsefulEntitiesGraph (const GGS_string & constinArgument_inTypeName,
                                                       const GGS_lstring & constinArgument_inGetterName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("func @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 78)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 78)).add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 78)), constinArgument_inGetterName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'setterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_setterNameForUsefulEntitiesGraph (const GGS_string & constinArgument_inTypeName,
                                                       const GGS_lstring & constinArgument_inSetterName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("mutatingproc  @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 84)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 84)).add_operation (constinArgument_inSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 84)), constinArgument_inSetterName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'methodNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_methodNameForUsefulEntitiesGraph (const GGS_string & constinArgument_inTypeName,
                                                       const GGS_lstring & constinArgument_inMethodName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("proc @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 90)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 90)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 90)), constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'initializerNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_initializerNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inTypeName,
                                                            const GGS_string & constinArgument_inParameterSignature,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 97)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 97)).add_operation (constinArgument_inParameterSignature, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 97)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'equatableNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_equatableNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inTypeName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 103)).add_operation (GGS_string (" equatable"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 103)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'lexiqueNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_lexiqueNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inLexiqueName,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (constinArgument_inLexiqueName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 109)), constinArgument_inLexiqueName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'grammarNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_grammarNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inGrammarName,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("grammar ").add_operation (constinArgument_inGrammarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 115)), constinArgument_inGrammarName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_syntaxNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inSyntaxName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (constinArgument_inSyntaxName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 121)), constinArgument_inSyntaxName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'optionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_optionNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inOptionName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("option ").add_operation (constinArgument_inOptionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 127)), constinArgument_inOptionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'filewrapperNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_filewrapperNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFilewrapperName,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("filewrapper ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 133)), constinArgument_inFilewrapperName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'filewrapperTemplateNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_filewrapperTemplateNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFilewrapperName,
                                                                    const GGS_lstring & constinArgument_inTemplateName,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("filewrapper template ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 140)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 140)).add_operation (constinArgument_inTemplateName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 140)), constinArgument_inTemplateName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'functionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_functionNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFunctionName,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("function ").add_operation (constinArgument_inFunctionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 146)), constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'procedureNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_procedureNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inProcName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("procedure ").add_operation (constinArgument_inProcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 152)), constinArgument_inProcName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'typeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_typeNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inTypeName,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("type @").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 158)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'afterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_afterNameForUsefulEntitiesGraph (const GGS_location & constinArgument_inLocation,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("after"), constinArgument_inLocation, inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'beforeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_beforeNameForUsefulEntitiesGraph (const GGS_location & constinArgument_inLocation,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("before"), constinArgument_inLocation, inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'rootRuleNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_rootRuleNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFileExtension,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (GGS_string ("rule .").add_operation (constinArgument_inFileExtension.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 176)), constinArgument_inFileExtension.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileSemanticDeclarationsGalgas&&???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileSemanticDeclarationsGalgas_26__26__3F__3F__3F__21__21__21_ (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_string constinArgument_inProductDirectory,
                                                                                const GGS_galgasDeclarationAST constinArgument_inSemanticDeclarations,
                                                                                const GGS_projectSettings constinArgument_inProjectSettings,
                                                                                GGS_semanticContext & outArgument_outSemanticContext,
                                                                                GGS_unifiedTypeMap & outArgument_outTypeMap,
                                                                                GGS__5B_semanticDeclarationForGeneration_5D_ & outArgument_outSemanticDeclarationSortedListForGeneration,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outTypeMap.drop () ; // Release 'out' argument
  outArgument_outSemanticDeclarationSortedListForGeneration.drop () ; // Release 'out' argument
  {
  routine_println_3F_ (GGS_string ("*** Building semantic context"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 31)) ;
  }
  GGS_galgasDeclarationAST var_semanticDeclarations_2043 = constinArgument_inSemanticDeclarations ;
  GGS__5B_commandLineOptionAST_5D_ temp_0 = GGS__5B_commandLineOptionAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 35)) ;
  GGS__5B_commandLineOptionAST_5D_ var_options_2157 = temp_0 ;
  UpEnumerator__5B_stringString_5D_ enumerator_2201 (GGS_application::class_func_boolOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 36))) ;
  while (enumerator_2201.hasCurrentObject ()) {
    var_options_2157.plusPlusAssignOperation (GGS_commandLineOptionAST::init_21__21__21__21__21__21__21_ (GGS_string ("bool").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 38)), enumerator_2201.current (HERE).readProperty_right ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 39)), GGS_lchar::init_21__21_ (GGS_application::class_func_boolOptionInvocationCharacter (enumerator_2201.current (HERE).readProperty_left (), enumerator_2201.current (HERE).readProperty_right ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 40)), GGS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 40)), inCompiler COMMA_HERE), GGS_application::class_func_boolOptionInvocationString (enumerator_2201.current (HERE).readProperty_left (), enumerator_2201.current (HERE).readProperty_right ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 41)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 41)), GGS_application::class_func_boolOptionCommentString (enumerator_2201.current (HERE).readProperty_left (), enumerator_2201.current (HERE).readProperty_right ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 42)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 42)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 43)), GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 44)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 37)) ;
    enumerator_2201.gotoNextObject () ;
  }
  UpEnumerator__5B_stringString_5D_ enumerator_2640 (GGS_application::class_func_uintOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 47))) ;
  while (enumerator_2640.hasCurrentObject ()) {
    var_options_2157.plusPlusAssignOperation (GGS_commandLineOptionAST::init_21__21__21__21__21__21__21_ (GGS_string ("uint").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 49)), enumerator_2640.current (HERE).readProperty_right ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 50)), GGS_lchar::init_21__21_ (GGS_application::class_func_uintOptionInvocationCharacter (enumerator_2640.current (HERE).readProperty_left (), enumerator_2640.current (HERE).readProperty_right ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 51)), GGS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 51)), inCompiler COMMA_HERE), GGS_application::class_func_uintOptionInvocationString (enumerator_2640.current (HERE).readProperty_left (), enumerator_2640.current (HERE).readProperty_right ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 52)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 52)), GGS_application::class_func_uintOptionCommentString (enumerator_2640.current (HERE).readProperty_left (), enumerator_2640.current (HERE).readProperty_right ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 53)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 53)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 54)), GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 55)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 48)) ;
    enumerator_2640.gotoNextObject () ;
  }
  UpEnumerator__5B_stringString_5D_ enumerator_3085 (GGS_application::class_func_stringOptionNameList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 58))) ;
  while (enumerator_3085.hasCurrentObject ()) {
    var_options_2157.plusPlusAssignOperation (GGS_commandLineOptionAST::init_21__21__21__21__21__21__21_ (GGS_string ("string").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 60)), enumerator_3085.current (HERE).readProperty_right ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 61)), GGS_lchar::init_21__21_ (GGS_application::class_func_stringOptionInvocationCharacter (enumerator_3085.current (HERE).readProperty_left (), enumerator_3085.current (HERE).readProperty_right ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 62)), GGS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 62)), inCompiler COMMA_HERE), GGS_application::class_func_stringOptionInvocationString (enumerator_3085.current (HERE).readProperty_left (), enumerator_3085.current (HERE).readProperty_right ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 63)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 63)), GGS_application::class_func_stringOptionCommentString (enumerator_3085.current (HERE).readProperty_left (), enumerator_3085.current (HERE).readProperty_right ()  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 64)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 64)), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 65)), GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 66)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 59)) ;
    enumerator_3085.gotoNextObject () ;
  }
  var_semanticDeclarations_2043.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_optionComponentDeclarationAST::init_21_isPredefined_21__21_ (GGS_bool (true), GGS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 71)), var_options_2157, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 69)) ;
  GGS_lstring var_galgas_5F_builtin_5F_optionsUsefulnessName_3671 = function_optionNameForUsefulEntitiesGraph (GGS_string ("galgas_builtin_options").getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 74)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 74)) ;
  ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_galgas_5F_builtin_5F_optionsUsefulnessName_3671  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 75)) ;
  GGS__5B_semanticDeclarationAST_5D_ var_sortedSemanticDeclarationListAST_4034 ;
  {
  routine_buildGalgasSemanticContext_3F__3F__21__21__21_ (var_semanticDeclarations_2043, constinArgument_inProjectSettings, outArgument_outSemanticContext, outArgument_outTypeMap, var_sortedSemanticDeclarationListAST_4034, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 77)) ;
  }
  {
  routine_println_3F_ (GGS_string ("*** Semantic analysis"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 85)) ;
  }
  UpEnumerator__5B_lstring_5D_ enumerator_4181 (extensionGetter_unsolvedEntryList (outArgument_outTypeMap, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 87))) ;
  while (enumerator_4181.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (enumerator_4181.current (HERE).readProperty_location (), GGS_string ("the '@").add_operation (enumerator_4181.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 88)).add_operation (GGS_string ("' type is undefined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 88)), fixItArray1  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 88)) ;
    enumerator_4181.gotoNextObject () ;
  }
  GGS__5B_semanticDeclarationForGeneration_5D_ temp_2 = GGS__5B_semanticDeclarationForGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 91)) ;
  outArgument_outSemanticDeclarationSortedListForGeneration = temp_2 ;
  outArgument_outSemanticDeclarationSortedListForGeneration.plusPlusAssignOperation (GGS_buildOptionForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_boolBuildOptionArray_21_u_33__32_BuildOptionArray_21_stringBuildOptionArray (GGS_string ("build option value"), GGS_bool (true), GGS_string ("build-option-value"), constinArgument_inProjectSettings.readProperty_boolBuildOptionArray (), constinArgument_inProjectSettings.readProperty_u_33__32_BuildOptionArray (), constinArgument_inProjectSettings.readProperty_stringBuildOptionArray (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 92)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 101)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_predefinedTypes var_predefinedTypes_4849 = function_buildPredefinedTypes (outArgument_outTypeMap, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 102)) ;
      UpEnumerator__5B_semanticDeclarationAST_5D_ enumerator_4924 (var_sortedSemanticDeclarationListAST_4034) ;
      while (enumerator_4924.hasCurrentObject ()) {
        callExtensionMethod_semanticAnalysis ((cPtr_semanticDeclarationAST *) enumerator_4924.current (HERE).ptr (), ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, constinArgument_inProductDirectory, outArgument_outSemanticContext, outArgument_outTypeMap, var_predefinedTypes_4849, outArgument_outSemanticDeclarationSortedListForGeneration, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 104)) ;
        enumerator_4924.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildGalgasSemanticContext??!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildGalgasSemanticContext_3F__3F__21__21__21_ (const GGS_galgasDeclarationAST constinArgument_inDeclarations,
                                                             const GGS_projectSettings constinArgument_inProjectSettings,
                                                             GGS_semanticContext & outArgument_outSemanticContext,
                                                             GGS_unifiedTypeMap & outArgument_outTypeMap,
                                                             GGS__5B_semanticDeclarationAST_5D_ & outArgument_outSortedSemanticDeclarationListAST,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outTypeMap.drop () ; // Release 'out' argument
  outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release 'out' argument
  GGS_galgasDeclarationAST var_semanticDeclarations_6008 = constinArgument_inDeclarations ;
  UpEnumerator__5B_semanticDeclarationAST_5D_ enumerator_6082 (constinArgument_inDeclarations.readProperty_mDeclarationList ()) ;
  while (enumerator_6082.hasCurrentObject ()) {
    callExtensionMethod_addAssociatedElement ((cPtr_semanticDeclarationAST *) enumerator_6082.current (HERE).ptr (), var_semanticDeclarations_6008, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 131)) ;
    enumerator_6082.gotoNextObject () ;
  }
  GGS_semanticTypePrecedenceGraph var_semanticTypePrecedenceGraph_6364 = GGS_semanticTypePrecedenceGraph::init (inCompiler COMMA_HERE) ;
  GGS_extensionInitializerForBuildingContext var_extensionInitializerForBuildingContext_6472 = GGS_extensionInitializerForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_equatableExtensionMap var_equatableExtensionMap_6546 = GGS_equatableExtensionMap::init (inCompiler COMMA_HERE) ;
  GGS_extensionMethodMapForBuildingContext var_extensionMethodMapForBuildingContext_6618 = GGS_extensionMethodMapForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_extensionGetterMapForBuildingContext var_extensionGetterMapForBuildingContext_6705 = GGS_extensionGetterMapForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS_extensionSetterMapForBuildingContext var_extensionSetterMapForBuildingContext_6792 = GGS_extensionSetterMapForBuildingContext::init (inCompiler COMMA_HERE) ;
  GGS__5B_semanticDeclarationAST_5D_ var_extensionOverrideDefinitionList_6867 = GGS__5B_semanticDeclarationAST_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticDeclarationAST_5D_ enumerator_6947 (var_semanticDeclarations_6008.readProperty_mDeclarationList ()) ;
  while (enumerator_6947.hasCurrentObject ()) {
    callExtensionMethod_enterDeclarationInGraph ((cPtr_semanticDeclarationAST *) enumerator_6947.current (HERE).ptr (), var_semanticTypePrecedenceGraph_6364, var_equatableExtensionMap_6546, var_extensionInitializerForBuildingContext_6472, var_extensionMethodMapForBuildingContext_6618, var_extensionGetterMapForBuildingContext_6705, var_extensionSetterMapForBuildingContext_6792, var_extensionOverrideDefinitionList_6867, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 145)) ;
    enumerator_6947.gotoNextObject () ;
  }
  UpEnumerator__5B_lstring_5D_ enumerator_7392 (var_semanticTypePrecedenceGraph_6364.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 156))) ;
  while (enumerator_7392.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_7392.current (HERE).readProperty_string ().getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 157)).objectCompare (GGS_char (utf32 (63)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_println_3F_ (GGS_string ("Optional '").add_operation (enumerator_7392.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 158)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 158)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 158)) ;
        }
      }
    }
    enumerator_7392.gotoNextObject () ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_semanticTypePrecedenceGraph_6364.getter_undefinedNodeCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 162)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      UpEnumerator__5B_lstring_5D_ enumerator_7641 (var_semanticTypePrecedenceGraph_6364.getter_undefinedNodeReferenceList (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 163))) ;
      while (enumerator_7641.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_7641.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_7641.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 164)).add_operation (GGS_string ("' type is not defined"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 164)), fixItArray2  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 164)) ;
        outArgument_outSemanticContext.drop () ; // Release error dropped variable
        outArgument_outSortedSemanticDeclarationListAST.drop () ; // Release error dropped variable
        outArgument_outTypeMap.drop () ; // Release error dropped variable
        enumerator_7641.gotoNextObject () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS__5B_semanticDeclarationAST_5D_ var_unsortedSemanticDeclarationListAST_7975 ;
    GGS__5B_lstring_5D_ joker_7934 ; // Joker input parameter
    GGS__5B_lstring_5D_ joker_8017 ; // Joker input parameter
    var_semanticTypePrecedenceGraph_6364.method_topologicalSort (outArgument_outSortedSemanticDeclarationListAST, joker_7934, var_unsortedSemanticDeclarationListAST_7975, joker_8017, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 168)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_7975.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 174)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_s_8093 = GGS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_7975.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 175)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 175)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 175)).add_operation (GGS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 175)) ;
        UpEnumerator__5B_semanticDeclarationAST_5D_ enumerator_8263 (var_unsortedSemanticDeclarationListAST_7975) ;
        while (enumerator_8263.hasCurrentObject ()) {
          var_s_8093.plusAssignOperation(GGS_string ("\n-  ").add_operation (callExtensionGetter_keyRepresentation ((const cPtr_semanticDeclarationAST *) enumerator_8263.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 177)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 177)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 177)) ;
          enumerator_8263.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 179)), var_s_8093, fixItArray4  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 179)) ;
        outArgument_outSemanticContext.drop () ; // Release error dropped variable
        outArgument_outTypeMap.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      outArgument_outSortedSemanticDeclarationListAST.plusAssignOperation(var_extensionOverrideDefinitionList_6867, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 182)) ;
      outArgument_outTypeMap = GGS_unifiedTypeMap::init (inCompiler COMMA_HERE) ;
      outArgument_outSemanticContext = GGS_semanticContext::init_21_ (constinArgument_inProjectSettings, inCompiler COMMA_HERE) ;
      UpEnumerator__5B_semanticDeclarationAST_5D_ enumerator_8739 (outArgument_outSortedSemanticDeclarationListAST) ;
      while (enumerator_8739.hasCurrentObject ()) {
        callExtensionMethod_enterDeclarationInSemanticContext ((cPtr_semanticDeclarationAST *) enumerator_8739.current (HERE).ptr (), var_equatableExtensionMap_6546, var_extensionInitializerForBuildingContext_6472, var_extensionMethodMapForBuildingContext_6618, var_extensionGetterMapForBuildingContext_6705, var_extensionSetterMapForBuildingContext_6792, outArgument_outTypeMap, outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 188)) ;
        enumerator_8739.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSemanticDeclarationsGalgas3???&swift&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSemanticDeclarationsGalgas_33__3F__3F__3F__26_swift_26__26__26_ (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                      const GGS_string constinArgument_inProductDirectory,
                                                                                      const GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                                      GGS__5B_string_5D_ & ioArgument_ioSwiftAppProductFileList,
                                                                                      GGS__5B_string_5D_ & ioArgument_ioToolProductFileList,
                                                                                      GGS__5B_string_5D_ & ioArgument_ioToolHeaderFileList,
                                                                                      GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_9787 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_9787.hasCurrentObject ()) {
    callExtensionMethod_appendSpecificFiles ((cPtr_semanticDeclarationForGeneration *) enumerator_9787.current (HERE).ptr (), constinArgument_inProductDirectory, ioArgument_ioAllProductFileSet, ioArgument_ioSwiftAppProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 217)) ;
    enumerator_9787.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 224)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_buildOptionValue::class_func_generateOneHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 225)).operator_and (GGS_buildOptionValue::class_func_generateManyFiles (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 225)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 225)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          routine_generateOneBigHeader_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 226)) ;
          }
          {
          routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 232)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_buildOptionValue::class_func_generateOneHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 239)).operator_and (GGS_buildOptionValue::class_func_generateManyFiles (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 239)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 239)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 239)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_generateOneBigHeader_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 240)) ;
            }
            {
            routine_generateFewImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 246)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_buildOptionValue::class_func_generateOneHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 253)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 253)).operator_and (GGS_buildOptionValue::class_func_generateManyFiles (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 253)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 253)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              routine_generateManyHeaders_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 254)) ;
              }
              {
              routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 260)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = function_gGenerateFewHeaderFiles (inCompiler COMMA_HERE).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                {
                routine_generateFewImplementationFilesWithFewHeaders_3F__3F__3F__26__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 268)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              {
              routine_generateManyHeaders_3F__3F__26__26_ (constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioAllProductFileSet, ioArgument_ioToolHeaderFileList, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 277)) ;
              }
              {
              routine_generateManyImplementationFiles_3F__3F__3F__26__26_ (constinArgument_inUnifiedTypeMap, constinArgument_inProductDirectory, constinArgument_inSemanticDeclarationSortedListForGeneration, ioArgument_ioToolProductFileList, ioArgument_ioAllProductFileSet, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 283)) ;
              }
            }
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateManyHeaders??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateManyHeaders_3F__3F__26__26_ (const GGS_string constinArgument_inProductDirectory,
                                                  const GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                  GGS_stringset & ioArgument_ioAllProductFileSet,
                                                  GGS__5B_string_5D_ & ioArgument_ioToolHeaderFileList,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_string_5D_ var_headerInclusionList_31__12598 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_headerInclusionList_32__12641 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_12689 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_12689.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 306)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 306)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_stringset var_inclusionSet_31__12799 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerDef_31__12887 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), var_inclusionSet_31__12799, var_headerDef_31__12887, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 308)) ;
        GGS_string var_headerIncludes_31__12909 = GGS_string::makeEmptyString () ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_inclusionSet_31__12799.getter_contains (GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 310)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            routine_println_3F_ (GGS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 311)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 311)).add_operation (GGS_string ("headers 1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 311)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 311)) ;
            }
          }
        }
        UpEnumerator_stringset enumerator_13090 (var_inclusionSet_31__12799) ;
        while (enumerator_13090.hasCurrentObject ()) {
          var_headerIncludes_31__12909.plusAssignOperation(GGS_string ("#include \"").add_operation (enumerator_13090.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 314)).add_operation (GGS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 314)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 314)) ;
          enumerator_13090.gotoNextObject () ;
        }
        var_headerIncludes_31__12909.plusAssignOperation(var_headerDef_31__12887, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 316)) ;
        GGS_stringset var_inclusionSet_32__13240 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerDef_32__13348 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__13240, var_headerDef_32__13348, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 318)) ;
        GGS_string var_headerIncludes_32__13370 = GGS_string::makeEmptyString () ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_inclusionSet_32__13240.getter_contains (GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 320)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_println_3F_ (GGS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 321)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 321)).add_operation (GGS_string ("headers 2"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 321)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 321)) ;
            }
          }
        }
        UpEnumerator_stringset enumerator_13551 (var_inclusionSet_32__13240) ;
        while (enumerator_13551.hasCurrentObject ()) {
          var_headerIncludes_32__13370.plusAssignOperation(GGS_string ("#include \"").add_operation (enumerator_13551.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 324)).add_operation (GGS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 324)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 324)) ;
          enumerator_13551.gotoNextObject () ;
        }
        var_headerIncludes_32__13370.plusAssignOperation(var_headerDef_32__13348, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 326)) ;
        switch (callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 328)).enumValue ()) {
        case GGS_headerKind::Enumeration::invalid:
          break ;
        case GGS_headerKind::Enumeration::enum_noHeader:
          {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::notEqual, var_headerIncludes_31__12909.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GenericArray <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 331)).readProperty_location (), GGS_string ("'noHeader' setting for the '").add_operation (enumerator_12689.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 332)).add_operation (GGS_string ("' declaration, and 'headerIncludes1' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 332)), fixItArray4  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 331)) ;
              }
            }
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = GGS_bool (ComparisonKind::notEqual, var_headerIncludes_32__13370.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 335)).readProperty_location (), GGS_string ("'noHeader' setting for the '").add_operation (enumerator_12689.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 336)).add_operation (GGS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 336)), fixItArray6  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 335)) ;
              }
            }
          }
          break ;
        case GGS_headerKind::Enumeration::enum_oneHeader:
          {
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::equal, var_headerIncludes_31__12909.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GenericArray <FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 340)).readProperty_location (), GGS_string ("'oneHeader' setting for the '").add_operation (enumerator_12689.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 341)).add_operation (GGS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 341)), fixItArray8  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 340)) ;
              }
            }
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::notEqual, var_headerIncludes_32__13370.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                GenericArray <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticWarning (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 344)).readProperty_location (), GGS_string ("'oneHeader' setting for the '").add_operation (enumerator_12689.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 345)).add_operation (GGS_string ("' declaration, and 'headerIncludes2' string is not empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 345)), fixItArray10  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 344)) ;
              }
            }
          }
          break ;
        case GGS_headerKind::Enumeration::enum_twoHeaders:
          {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::equal, var_headerIncludes_31__12909.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                GenericArray <FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticWarning (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 349)).readProperty_location (), GGS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12689.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 350)).add_operation (GGS_string ("' declaration, and 'headerIncludes1' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 350)), fixItArray12  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 349)) ;
              }
            }
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = GGS_bool (ComparisonKind::equal, var_headerIncludes_32__13370.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                GenericArray <FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticWarning (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 353)).readProperty_location (), GGS_string ("'twoHeaders' setting for the '").add_operation (enumerator_12689.current (HERE).readProperty_infoMessage (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 354)).add_operation (GGS_string ("' declaration, and 'headerIncludes2' string is empty"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 354)), fixItArray14  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 353)) ;
              }
            }
          }
          break ;
        }
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          test_15 = GGS_bool (ComparisonKind::notEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 358)).objectCompare (GGS_headerKind::class_func_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 358)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            GGS_string var_headerString_15139 = GGS_string ("#pragma once\n") ;
            var_headerString_15139.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 360)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 360)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 360)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 360)) ;
            var_headerString_15139.plusAssignOperation(GGS_string ("#include \"all-predefined-types.h\"\n\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 361)) ;
            var_headerString_15139.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 362)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 362)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 362)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 362)) ;
            var_headerString_15139.plusAssignOperation(var_headerIncludes_31__12909, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 363)) ;
            var_headerString_15139.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 364)) ;
            var_headerString_15139.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 365)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 365)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 365)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 365)) ;
            GGS_string temp_16 ;
            const GalgasBool test_17 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 367)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 367)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              temp_16 = GGS_string ("-1") ;
            }else if (GalgasBool::boolFalse == test_17) {
              temp_16 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_headerFileName_15567 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 366)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 366)) ;
            var_headerInclusionList_31__12598.plusPlusAssignOperation (var_headerFileName_15567  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 368)) ;
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_headerFileName_15567.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 369))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 369)) ;
            ioArgument_ioToolHeaderFileList.plusPlusAssignOperation (var_headerFileName_15567.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 370))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 370)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_15567.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 373)), var_headerString_15139, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 371)) ;
            }
          }
        }
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 378)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 378)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            GGS_string var_headerString_16100 = GGS_string ("#ifndef ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 379)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 379)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 379)).add_operation (GGS_string ("_DEFINED\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 379)) ;
            var_headerString_16100.plusAssignOperation(GGS_string ("#define ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 380)).getter_identifierRepresentation (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 380)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 380)).add_operation (GGS_string ("_DEFINED\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 380)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 380)) ;
            var_headerString_16100.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 381)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 381)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 381)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 381)) ;
            var_headerString_16100.plusAssignOperation(GGS_string ("#include \"").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 382)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 382)).add_operation (GGS_string ("-1.h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 382)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 382)) ;
            var_headerString_16100.plusAssignOperation(GGS_string ("\n//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 383)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 383)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 383)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 383)) ;
            var_headerString_16100.plusAssignOperation(var_headerIncludes_32__13370, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 384)) ;
            var_headerString_16100.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 385)) ;
            var_headerString_16100.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringByRepeatingString (GGS_string ("-"), GGS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 386)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 386)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 386)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 386)) ;
            var_headerString_16100.plusAssignOperation(GGS_string ("#endif\n\n"), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 387)) ;
            var_headerInclusionList_32__12641.plusPlusAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 388))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 388)) ;
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 389)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 389))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 389)) ;
            ioArgument_ioToolHeaderFileList.plusPlusAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 390)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 390))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 390)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_12689.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 393)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 393)), var_headerString_16100, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 391)) ;
            }
          }
        }
      }
    }
    enumerator_12689.gotoNextObject () ;
  }
  GGS_string var_headerString_17257 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GGS_string ("all-declarations"), var_headerInclusionList_31__12598.add_operation (var_headerInclusionList_32__12641, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 402)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 400))) ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 404)) ;
  ioArgument_ioToolHeaderFileList.plusPlusAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 405)) ;
  {
  GGS_string::class_method_generateFile (constinArgument_inProductDirectory, GGS_string ("all-declarations.h"), var_headerString_17257, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 406)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateOneBigHeader??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateOneBigHeader_3F__3F__26__26_ (const GGS_string constinArgument_inProductDirectory,
                                                   const GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                   GGS_stringset & ioArgument_ioAllProductFileSet,
                                                   GGS__5B_string_5D_ & ioArgument_ioToolHeaderFileList,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_headerString_17947 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GGS_string ("all-declarations"), GGS__5B_string_5D_::init (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 420))) ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_18104 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_18104.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18104.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 426)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 426)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_stringset joker_18231 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_31__18258 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_18104.current (HERE).ptr (), joker_18231, var_headerString_31__18258, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 427)) ;
        var_headerString_17947.plusAssignOperation(var_headerString_31__18258, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 428)) ;
      }
    }
    enumerator_18104.gotoNextObject () ;
  }
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_18364 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_18364.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_18364.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 433)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 433)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_stringset joker_18511 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__18538 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_18364.current (HERE).ptr (), constinArgument_inProductDirectory, joker_18511, var_headerString_32__18538, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 434)) ;
        var_headerString_17947.plusAssignOperation(var_headerString_32__18538, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 435)) ;
      }
    }
    enumerator_18364.gotoNextObject () ;
  }
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 438)) ;
  ioArgument_ioToolHeaderFileList.plusPlusAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 439)) ;
  {
  GGS_string::class_method_generateFile (constinArgument_inProductDirectory, GGS_string ("all-declarations.h"), var_headerString_17947, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 440)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildHeader???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildHeader_3F__3F__3F__26__26_ (const GGS_headerCompositionMap constinArgument_inHeaderCompositionMap,
                                              const GGS_string constinArgument_inHeaderFileName,
                                              const GGS_string constinArgument_inDeclarationName,
                                              GGS_headerRepartitionMap & ioArgument_ioHeaderRepartitionMap,
                                              GGS_string & ioArgument_ioHeaderString,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioHeaderRepartitionMap.getter_contains (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 473)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 473)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      ioArgument_ioHeaderRepartitionMap.setter_insertKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 474)), constinArgument_inHeaderFileName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 474)) ;
      }
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = constinArgument_inHeaderCompositionMap.getter_contains (constinArgument_inDeclarationName COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 475)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_stringset var_inclusionSet_20104 ;
          GGS_string var_headerString_20139 ;
          constinArgument_inHeaderCompositionMap.method_searchKey (constinArgument_inDeclarationName.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 477)), var_inclusionSet_20104, var_headerString_20139, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 476)) ;
          UpEnumerator_stringset enumerator_20171 (var_inclusionSet_20104) ;
          while (enumerator_20171.hasCurrentObject ()) {
            {
            routine_buildHeader_3F__3F__3F__26__26_ (constinArgument_inHeaderCompositionMap, constinArgument_inHeaderFileName, enumerator_20171.current_key (HERE), ioArgument_ioHeaderRepartitionMap, ioArgument_ioHeaderString, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 482)) ;
            }
            enumerator_20171.gotoNextObject () ;
          }
          ioArgument_ioHeaderString.plusAssignOperation(var_headerString_20139, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 490)) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        ioArgument_ioHeaderString.plusAssignOperation(GGS_string ("#include \"").add_operation (constinArgument_inDeclarationName, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 492)).add_operation (GGS_string (".h\"\n"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 492)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 492)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'gGroupAmount'
//
//--------------------------------------------------------------------------------------------------

static GGS_uint onceFunction_gGroupAmount (Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result ; // Returned variable
  result = GGS_uint (uint32_t (50U)) ;
//---
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_gGroupAmount = false ;
static GGS_uint gOnceFunctionResult_gGroupAmount ;

//--------------------------------------------------------------------------------------------------

GGS_uint function_gGroupAmount (Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_gGroupAmount) {
    gOnceFunctionResult_gGroupAmount = onceFunction_gGroupAmount (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_gGroupAmount = true ;
  }
  return gOnceFunctionResult_gGroupAmount ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_gGroupAmount (void) {
  gOnceFunctionResult_gGroupAmount.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_gGroupAmount (nullptr,
                                                        releaseOnceFunctionResult_gGroupAmount) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFiles???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFiles_3F__3F__3F__26__26_ (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                 const GGS_string constinArgument_inProductDirectory,
                                                                 const GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                 GGS__5B_string_5D_ & ioArgument_ioToolProductFileList,
                                                                 GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_useOneHugeHeader_21046 = GGS_buildOptionValue::class_func_generateOneHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 511)) ;
  GGS_bigint var_n_21143 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 513)) ;
  GGS_bigint var_fileIdx_21155 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 514)) ;
  GGS_string var_implementationString_21173 = GGS_string::makeEmptyString () ;
  GGS_stringset var_inclusionSet_21216 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_21256 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_21256.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_21256.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 518)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 518)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_code_21440 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_21256.current (HERE).ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_21216, var_code_21440, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 519)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_inclusionSet_21216.getter_contains (GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 520)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            routine_println_3F_ (GGS_string ("Empty inclusion in ").add_operation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_21256.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 521)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 521)).add_operation (GGS_string (" cpp headers"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 521)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 521)) ;
            }
          }
        }
        var_implementationString_21173.plusAssignOperation(var_code_21440, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 523)) ;
        var_implementationString_21173.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_21256.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 524)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 524)) ;
        var_n_21143.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 525)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 525)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_n_21143.objectCompare (function_gGroupAmount (inCompiler COMMA_HERE).getter_bigint (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 526)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = var_useOneHugeHeader_21046.boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 528)) ;
                temp_4.plusPlusAssignOperation (GGS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 528)) ;
                var_inclusionSet_21216 = temp_4 ;
              }
            }
            GGS_string var_header_21854 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21216.getter_stringArray (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 531)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 530))) ;
            GGS_string var_fileName_21993 = GGS_string ("all-declarations-").add_operation (var_fileIdx_21155.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 533)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 533)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 533)) ;
            GGS__5B_string_5D_ temp_5 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 534)) ;
            temp_5.plusPlusAssignOperation (var_fileName_21993  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 534)) ;
            ioArgument_ioToolProductFileList = temp_5.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 534)) ;
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_21993  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 535)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_21993, var_header_21854.add_operation (var_implementationString_21173, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 539)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 536)) ;
            }
            var_n_21143 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 541)) ;
            var_fileIdx_21155.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 542)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 542)) ;
            var_implementationString_21173 = GGS_string::makeEmptyString () ;
            var_inclusionSet_21216 = GGS_stringset::init (inCompiler COMMA_HERE) ;
          }
        }
      }
    }
    enumerator_21256.gotoNextObject () ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, var_implementationString_21173.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_useOneHugeHeader_21046.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 551)) ;
          temp_8.plusPlusAssignOperation (GGS_string ("all-declarations")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 551)) ;
          var_inclusionSet_21216 = temp_8 ;
        }
      }
      GGS_string var_header_22552 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_21216.getter_stringArray (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 554)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 553))) ;
      GGS_string var_fileName_22679 = GGS_string ("all-declarations-").add_operation (var_fileIdx_21155.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 556)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 556)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 556)) ;
      GGS__5B_string_5D_ temp_9 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 557)) ;
      temp_9.plusPlusAssignOperation (var_fileName_22679  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 557)) ;
      ioArgument_ioToolProductFileList = temp_9.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 557)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_22679  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 558)) ;
      {
      GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_22679, var_header_22552.add_operation (var_implementationString_21173, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 562)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 559)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateFewImplementationFilesWithFewHeaders???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateFewImplementationFilesWithFewHeaders_3F__3F__3F__26__26__26_ (const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                   const GGS_string constinArgument_inProductDirectory,
                                                                                   const GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                                   GGS__5B_string_5D_ & ioArgument_ioToolProductFileList,
                                                                                   GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                                   GGS__5B_string_5D_ & ioArgument_ioToolHeaderFileList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_headerCompositionMap var_headerCompositionMap_23412 = GGS_headerCompositionMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_23460 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_23460.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_23460.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 578)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 578)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_stringset var_inclusionSet_31__23570 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_31__23658 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_23460.current (HERE).ptr (), var_inclusionSet_31__23570, var_headerString_31__23658, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 580)) ;
        GGS_stringset var_inclusionSet_32__23694 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__23802 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_23460.current (HERE).ptr (), constinArgument_inProductDirectory, var_inclusionSet_32__23694, var_headerString_32__23802, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 582)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::notEqual, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_23460.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 583)).objectCompare (GGS_headerKind::class_func_noHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 583)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_string temp_2 ;
            const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_23460.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 584)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 584)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              temp_2 = GGS_string ("-1") ;
            }else if (GalgasBool::boolFalse == test_3) {
              temp_2 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_headerFileName_23879 = callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_23460.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 584)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 584)) ;
            {
            var_headerCompositionMap_23412.setter_insertKey (var_headerFileName_23879.getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 586)), var_inclusionSet_31__23570, var_headerString_31__23658, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 585)) ;
            }
          }
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_23460.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 591)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 591)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 594)) ;
            temp_5.plusPlusAssignOperation (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_23460.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 594)).add_operation (GGS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 594))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 594)) ;
            var_headerCompositionMap_23412.setter_insertKey (callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_23460.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 593)).getter_nowhere (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 593)), var_inclusionSet_32__23694.operator_or (temp_5 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 594)), var_headerString_32__23802, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 592)) ;
            }
          }
        }
      }
    }
    enumerator_23460.gotoNextObject () ;
  }
  GGS_headerRepartitionMap var_headerRepartitionMap_24475 = GGS_headerRepartitionMap::init (inCompiler COMMA_HERE) ;
  GGS_bigint var_fileIdx_24508 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 601)) ;
  GGS_string var_implementationString_24526 = GGS_string::makeEmptyString () ;
  GGS_string var_headerString_24558 = GGS_string::makeEmptyString () ;
  GGS_stringset var_inclusionSet_24593 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_string var_headerFileName_24618 = GGS_string ("all-declarations-").add_operation (var_fileIdx_24508.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 605)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 605)) ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_24686 (constinArgument_inSemanticDeclarationSortedListForGeneration) ;
  while (enumerator_24686.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_24686.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 607)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 607)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_24686.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 608)).operator_not (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 608)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              test_8 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24686.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 609)).objectCompare (GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 609)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                {
                routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_23412, var_headerFileName_24618, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24686.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 610)).add_operation (GGS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 610)), var_headerRepartitionMap_24475, var_headerString_24558, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 610)) ;
                }
                {
                routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_23412, var_headerFileName_24618, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24686.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 611)), var_headerRepartitionMap_24475, var_headerString_24558, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 611)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_8) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::equal, callExtensionGetter_headerKind ((const cPtr_semanticDeclarationForGeneration *) enumerator_24686.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 612)).objectCompare (GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 612)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  {
                  routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_23412, var_headerFileName_24618, callExtensionGetter_getImplementationCppFileName ((const cPtr_semanticDeclarationForGeneration *) enumerator_24686.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 613)), var_headerRepartitionMap_24475, var_headerString_24558, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 613)) ;
                  }
                }
              }
            }
          }
        }
        GGS_string var_code_25480 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_24686.current (HERE).ptr (), constinArgument_inUnifiedTypeMap, var_inclusionSet_24593, var_code_25480, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 616)) ;
        UpEnumerator_stringset enumerator_25497 (var_inclusionSet_24593) ;
        while (enumerator_25497.hasCurrentObject ()) {
          {
          routine_buildHeader_3F__3F__3F__26__26_ (var_headerCompositionMap_23412, var_headerFileName_24618, enumerator_25497.current_key (HERE), var_headerRepartitionMap_24475, var_headerString_24558, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 618)) ;
          }
          enumerator_25497.gotoNextObject () ;
        }
        var_implementationString_24526.plusAssignOperation(var_code_25480, inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 620)) ;
        var_implementationString_24526.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_24686.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 621)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 621)) ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::greaterThan, var_implementationString_24526.getter_count (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 622)).objectCompare (GGS_uint (uint32_t (786432U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GGS_stringset temp_11 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 623)) ;
            temp_11.plusPlusAssignOperation (GGS_string ("all-declarations-").add_operation (var_fileIdx_24508.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 623)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 623))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 623)) ;
            var_inclusionSet_24593 = temp_11 ;
            GGS_string var_cppHeader_25861 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, var_inclusionSet_24593.getter_stringArray (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 625)) COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 624))) ;
            GGS_string var_fileName_26003 = GGS_string ("all-declarations-").add_operation (var_fileIdx_24508.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 627)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 627)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 627)) ;
            GGS__5B_string_5D_ temp_12 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 628)) ;
            temp_12.plusPlusAssignOperation (var_fileName_26003  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 628)) ;
            ioArgument_ioToolProductFileList = temp_12.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 628)) ;
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_26003  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 629)) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_26003, var_cppHeader_25861.add_operation (var_implementationString_24526, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 633)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 630)) ;
            }
            ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_headerFileName_24618.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 636))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 636)) ;
            ioArgument_ioToolHeaderFileList.plusPlusAssignOperation (var_headerFileName_24618.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 637))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 637)) ;
            GGS__5B_string_5D_ temp_13 ;
            const GalgasBool test_14 = GGS_bool (ComparisonKind::equal, var_fileIdx_24508.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 640)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_14) {
              temp_13 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
            }else if (GalgasBool::boolFalse == test_14) {
              GGS__5B_string_5D_ temp_15 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 640)) ;
              temp_15.plusPlusAssignOperation (GGS_string ("all-declarations-").add_operation (var_fileIdx_24508.subtract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 640)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 640)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 640)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 640))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 640)) ;
              temp_13 = temp_15 ;
            }
            GGS_string var_startOfHeader_26428 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_24618, temp_13 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 638))) ;
            {
            GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_24618.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 644)), var_startOfHeader_26428.add_operation (var_headerString_24558, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 645)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 642)) ;
            }
            var_fileIdx_24508.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 648)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 648)) ;
            var_implementationString_24526 = GGS_string::makeEmptyString () ;
            var_headerString_24558 = GGS_string::makeEmptyString () ;
            var_headerFileName_24618 = GGS_string ("all-declarations-").add_operation (var_fileIdx_24508.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 651)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 651)) ;
            var_inclusionSet_24593 = GGS_stringset::init (inCompiler COMMA_HERE) ;
          }
        }
      }
    }
    enumerator_24686.gotoNextObject () ;
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = GGS_bool (ComparisonKind::equal, var_implementationString_24526.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      var_fileIdx_24508.minusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 658)), inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 658)) ;
    }
  }
  if (GalgasBool::boolFalse == test_16) {
    GGS__5B_string_5D_ temp_17 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 661)) ;
    temp_17.plusPlusAssignOperation (GGS_string ("all-declarations-").add_operation (var_fileIdx_24508.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 661)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 661))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 661)) ;
    GGS_string var_header_27052 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (inCompiler, temp_17 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 660))) ;
    GGS_string var_fileName_27186 = GGS_string ("all-declarations-").add_operation (var_fileIdx_24508.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 663)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 663)).add_operation (GGS_string (".cpp"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 663)) ;
    GGS__5B_string_5D_ temp_18 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 664)) ;
    temp_18.plusPlusAssignOperation (var_fileName_27186  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 664)) ;
    ioArgument_ioToolProductFileList = temp_18.add_operation (ioArgument_ioToolProductFileList, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 664)) ;
    ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_fileName_27186  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 665)) ;
    {
    GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_fileName_27186, var_header_27052.add_operation (var_implementationString_24526, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 669)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 666)) ;
    }
    ioArgument_ioAllProductFileSet.plusPlusAssignOperation (var_headerFileName_24618.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 672))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 672)) ;
    ioArgument_ioToolHeaderFileList.plusPlusAssignOperation (var_headerFileName_24618.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 673))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 673)) ;
    GGS__5B_string_5D_ temp_19 ;
    const GalgasBool test_20 = GGS_bool (ComparisonKind::equal, var_fileIdx_24508.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 676)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      temp_19 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
    }else if (GalgasBool::boolFalse == test_20) {
      GGS__5B_string_5D_ temp_21 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 676)) ;
      temp_21.plusPlusAssignOperation (GGS_string ("all-declarations-").add_operation (var_fileIdx_24508.subtract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 676)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 676)).getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 676)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 676))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 676)) ;
      temp_19 = temp_21 ;
    }
    GGS_string var_startOfHeader_27564 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, var_headerFileName_24618, temp_19 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 674))) ;
    {
    GGS_string::class_method_generateFile (constinArgument_inProductDirectory, var_headerFileName_24618.add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 680)), var_startOfHeader_27564.add_operation (var_headerString_24558, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 681)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 678)) ;
    }
  }
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 685)) ;
  ioArgument_ioToolHeaderFileList.plusPlusAssignOperation (GGS_string ("all-declarations.h")  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 686)) ;
  GGS__5B_string_5D_ temp_22 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 689)) ;
  temp_22.plusPlusAssignOperation (GGS_string ("all-declarations-").add_operation (var_fileIdx_24508.getter_string (SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 689)), inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 689))  COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 689)) ;
  GGS_string var_startOfAllDeclarationsHeader_28009 = GGS_string (filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (inCompiler, GGS_string ("all-declarations"), temp_22 COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 687))) ;
  {
  GGS_string::class_method_generateFile (constinArgument_inProductDirectory, GGS_string ("all-declarations.h"), var_startOfAllDeclarationsHeader_28009, inCompiler COMMA_SOURCE_FILE ("galgasSemanticDeclarationCompilation.galgas4", 691)) ;
  }
}


