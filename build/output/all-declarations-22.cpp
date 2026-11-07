#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-22.h"

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
                                                                                              const GGS_formalInputParameterListForGeneration & /* in_FORMAL_5F_ARGUMENT_5F_LIST */,
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
                                                                                                       const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
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
  GGS_uint index_594_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_594 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_594.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_594.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_594.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_594.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_594.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_594.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_594.gotoNextObject () ;
      index_594_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
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
                                                                                                          const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
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
  GGS_uint index_582_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_582 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_582.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_582.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_582.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_582.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_582.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_582.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_582.gotoNextObject () ;
      index_582_.increment () ;
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
  GGS_uint index_1225_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_1225 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1225.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1225.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-func.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (", ") ;
      enumerator_1225.gotoNextObject () ;
      index_1225_.increment () ;
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
                                                                                               const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
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
  GGS_uint index_579_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_579 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_579.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_579.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_579.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_579.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_579.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-func.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_579.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_579.gotoNextObject () ;
      index_579_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
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
                                                                                                  const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
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
  GGS_uint index_701_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_701 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_701.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_701.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_701.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 15)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_701.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 15)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_701.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-func.cpp.galgasTemplate", 17)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_701.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 17)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_701.gotoNextObject () ;
      index_701_.increment () ;
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
  GGS_uint index_1344_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_1344 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1344.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1344.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-func.cpp.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (", ") ;
      enumerator_1344.gotoNextObject () ;
      index_1344_.increment () ;
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
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (Compiler * inCompiler,
                                                                                               const GGS_string & in_CLASS_5F_NAME,
                                                                                               const GGS_string & in_MODIFIER_5F_NAME,
                                                                                               const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension mutating proc '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef void (*extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (") (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_622_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_622 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_622.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_622.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_622.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_622_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_622.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_622.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_622_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_622.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_622.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_622_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_622.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_622_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
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
      enumerator_622.gotoNextObject () ;
      index_622_IDX.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 26)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inClassIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.appendString (" inModifier) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_2145_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2145 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2145.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        switch (test_4) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          switch (test_5) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
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
      enumerator_2145.gotoNextObject () ;
      index_2145_.increment () ;
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
//Filewrapper template 'semanticComponentGenerationTemplate extensionsetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & in_CLASS_5F_NAME,
                                                                                                  const GGS_string & in_MODIFIER_5F_NAME,
                                                                                                  const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GGS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Extension mutating proc '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nstatic GenericUniqueArray <extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("> gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inClassIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (" inModifier) {\n  gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (".forceObjectAtIndex (inClassIndex, inModifier, nullptr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GGS_uint index_1425_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_1425 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1425.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_1425.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 21)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_1425.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 23)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_1425.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 25)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1425.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_1425.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue ()) ;
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
      enumerator_1425.gotoNextObject () ;
      index_1425_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GGS_uint index_2451_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2451 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2451.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_2451.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_2451.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2451.gotoNextObject () ;
      index_2451_.increment () ;
    }
  }
  result.appendString ("//--- Find setter\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString (") ;\n    const GALGAS_TypeDescriptor * info = inObject->classDescriptor () ;\n    const int32_t classIndex = info->mSlotID ;\n    extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 45)).stringValue ()) ;
  result.appendString (" f = nullptr ;\n    if (classIndex < gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 46)).stringValue ()) ;
  result.appendString (".count ()) {\n      f = gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 47)).stringValue ()) ;
  result.appendString (" (classIndex COMMA_HERE) ;\n    }\n    if (nullptr == f) {\n       const GALGAS_TypeDescriptor * p = info->mSuperclassDescriptor ;\n       while ((nullptr == f) && (nullptr != p)) {\n         if (p->mSlotID < gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.appendString (".count ()) {\n           f = gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (" (p->mSlotID COMMA_HERE) ;\n         }\n         p = p->mSuperclassDescriptor ;\n       }\n       gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString (".forceObjectAtIndex (classIndex, f, nullptr) ;\n    }\n    f (inObject, ") ;
  GGS_uint index_4134_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_4134 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_4134.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_4134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 61)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_4134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 62)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_4134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 63)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_4134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_4134.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 65)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_4134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 66)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_4134.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
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
      enumerator_4134.gotoNextObject () ;
      index_4134_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_MODIFIER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nstatic void defineExtensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 81)).stringValue ()) ;
  result.appendString (" (void) {\n  enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("kTypeDescriptor_GALGAS_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 82)).stringValue ()) ;
  result.appendString (".mSlotID,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 83)).stringValue ()) ;
  result.appendString (") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void freeExtensionModifier_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 88)).stringValue ()) ;
  result.appendString (" (void) {\n  gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 89)).stringValue ()) ;
  result.appendString (".removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nPrologueEpilogue gSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("defineExtensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 94)).stringValue ()) ;
  result.appendString (",\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("freeExtensionModifier_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 95)).stringValue ()) ;
  result.appendString (") ;\n\n") ;
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
                                                                                                       const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
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
  GGS_uint index_556_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_556 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_556.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_556.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_556.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_556.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_556.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_556.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_556.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_556.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_556.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_556.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_556.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_556.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.h.galgasTemplate", 17)).stringValue ()) ;
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
      enumerator_556.gotoNextObject () ;
      index_556_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
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
                                                                                                          const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
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
  GGS_uint index_614_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_614 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_614.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_614.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_614.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_614.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_614.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_614.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_614.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_614.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_614.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_614.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_614.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_614.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 17)).stringValue ()) ;
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
      enumerator_614.gotoNextObject () ;
      index_614_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GGS_uint index_1640_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_1640 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1640.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1640.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 25)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_1640.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 26)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1640.gotoNextObject () ;
      index_1640_.increment () ;
    }
  }
  result.appendString ("//--- Find proc\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 31)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (") ;\n    inObject->method_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 32)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_2190_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2190 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2190.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2190.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 34)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_2190.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2190.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 36)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_2190.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_2190.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 38)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_2190.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_2190.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-proc.cpp.galgasTemplate", 41)).stringValue ()) ;
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
      enumerator_2190.gotoNextObject () ;
      index_2190_.increment () ;
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
                                                                                               const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
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
  GGS_uint index_547_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_547 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_547.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_547.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-proc.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_547.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_547.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_547.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-proc.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_547.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_547.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_547.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_547.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_547.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_547.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_547.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.h.galgasTemplate", 17)).stringValue ()) ;
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
      enumerator_547.gotoNextObject () ;
      index_547_.increment () ;
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
                                                                                                  const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
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
  GGS_uint index_663_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_663 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_663.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_663.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 12)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_663.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_663.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_663.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 14)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_663.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 15)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_663.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 15)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_663.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 16)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_663.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_663.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 17)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_663.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_663.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 19)).stringValue ()) ;
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
      enumerator_663.gotoNextObject () ;
      index_663_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
  GGS_uint index_1661_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_1661 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_1661.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1661.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 26)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_1661.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 27)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1661.gotoNextObject () ;
      index_1661_.increment () ;
    }
  }
  result.appendString ("  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (") ;\n    inObject->method_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 32)).stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_2163_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_2163 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2163.hasCurrentObject ()) {
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_2163.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 34)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_2163.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, enumerator_2163.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 36)))).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_2163.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, enumerator_2163.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 38)))).boolEnum () ;
          switch (test_6) {
          case GalgasBool::boolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_2163.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_2163.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc.cpp.galgasTemplate", 41)).stringValue ()) ;
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
      enumerator_2163.gotoNextObject () ;
      index_2163_.increment () ;
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
                                                                                           const GGS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                           const GGS_string & in_FILEWRAPPER_5F_NAME
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_307_idx (0) ;
  if (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_307 (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_307.hasCurrentObject ()) {
      result.appendString ("extern const char * gWrapperFileContent_") ;
      result.appendString (enumerator_307.current_mValue (HERE).stringValue ()) ;
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
    UpEnumerator_stringlist enumerator_577 (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_577.hasCurrentObject ()) {
      result.appendString ("extern const uint8_t gWrapperFileContent_") ;
      result.appendString (enumerator_577.current_mValue (HERE).stringValue ()) ;
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
    UpEnumerator_stringlist enumerator_841 (in_FILE_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_841.hasCurrentObject ()) {
      result.appendString ("extern const cRegularFileWrapper gWrapperFile_") ;
      result.appendString (enumerator_841.current_mValue (HERE).stringValue ()) ;
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
    UpEnumerator_stringlist enumerator_1108 (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST) ;
    while (enumerator_1108.hasCurrentObject ()) {
      result.appendString ("extern const cDirectoryWrapper gWrapperDirectory_") ;
      result.appendString (enumerator_1108.current_mValue (HERE).stringValue ()) ;
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
                                                                                                         const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
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
  GGS_uint index_580_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_580 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_580.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = enumerator_580.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_580.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" & constinArgument") ;
        result.appendString (index_580_IDX.getter_string (SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_580.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_580_IDX.getter_string (SOURCE_FILE ("extension-func-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_580.gotoNextObject () ;
      index_580_IDX.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
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
                                                                                                         const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
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
  GGS_uint index_544_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_544 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_544.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_544.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_544.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_544.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_544.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_544.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_544.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_544.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_544.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_544.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_544.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_544.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-proc-as-function.h.galgasTemplate", 17)).stringValue ()) ;
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
      enumerator_544.gotoNextObject () ;
      index_544_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
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
                                                                                                         const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
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
  GGS_uint index_553_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_553 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_553.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_553.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_553.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_553.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_553.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_553.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_553.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_553.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_553.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_553.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_553.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_553.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
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
      enumerator_553.gotoNextObject () ;
      index_553_.increment () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
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
                                                                                        const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
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
  GGS_uint index_470_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_470 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_470.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_470.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_470.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (" & constinArgument") ;
        result.appendString (index_470_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_470.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_470_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_470.gotoNextObject () ;
      index_470_IDX.increment () ;
    }
  }
  result.appendString ("class Compiler * inCompiler\n") ;
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
                                                                                           const GGS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                           const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                           const GGS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//  Function introspection                                                                       \n//--------------------------------------------------------------------------------------------------\n\nstatic const GALGAS_TypeDescriptor * functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("] = {\n") ;
  GGS_uint index_847_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_847 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_847.hasCurrentObject ()) {
      result.appendString ("  & kTypeDescriptor_GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_847.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 15)).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_847.gotoNextObject () ;
      index_847_.increment () ;
    }
  }
  result.appendString ("  nullptr\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 23)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("static GGS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 24)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_ObjectArray & /* inEffectiveParameterArray */,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GGS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 28)).stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("static GGS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 31)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_ObjectArray & inEffectiveParameterArray,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GGS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
    GGS_uint index_2157_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_formalInputParameterListForGeneration enumerator_2157 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_2157.hasCurrentObject ()) {
        result.appendString ("  const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2157.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString (" operand") ;
        result.appendString (index_2157_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString (" = GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2157.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString ("::extractObject (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("inEffectiveParameterArray.objectAtIndex (") ;
        result.appendString (index_2157_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (" COMMA_HERE),\n  ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("inCompiler\n  ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_THERE) ;\n") ;
        enumerator_2157.gotoNextObject () ;
        index_2157_IDX.increment () ;
      }
    }
    result.appendString ("  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 41)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GGS_uint index_2647_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_formalInputParameterListForGeneration enumerator_2647 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_2647.hasCurrentObject ()) {
        result.appendString ("operand") ;
        result.appendString (index_2647_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 43)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        enumerator_2647.gotoNextObject () ;
        index_2647_IDX.increment () ;
      }
    }
    result.appendString ("inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nC_galgas_function_descriptor functionDescriptor_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString (in_FUNCTION_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("functionWithGenericHeader_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 52)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("& kTypeDescriptor_GALGAS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 55)).stringValue ()) ;
  result.appendString (") ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (Compiler * inCompiler,
                                                                                       const GGS_string & in_ROUTINE_5F_NAME,
                                                                                       const GGS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid routine_") ;
  result.appendString (in_ROUTINE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_450_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalParameterListForGeneration enumerator_450 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_450.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 9)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("const class GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 11)))).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("class GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 13)))).boolEnum () ;
          switch (test_2) {
          case GalgasBool::boolTrue : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
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
      enumerator_450.gotoNextObject () ;
      index_450_IDX.increment () ;
    }
  }
  result.appendString ("class Compiler * inCompiler\n ") ;
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
                                                                                               const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
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
  result.appendString ("class Compiler * inCompiler\n              ") ;
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
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n//  Function introspection                                                                       \n//--------------------------------------------------------------------------------------------------\n\nstatic const GALGAS_TypeDescriptor * functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString ("] = {\n") ;
  GGS_uint index_2578_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_2578 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_2578.hasCurrentObject ()) {
      result.appendString ("  & kTypeDescriptor_GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2578.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_2578.gotoNextObject () ;
      index_2578_.increment () ;
    }
  }
  result.appendString ("  nullptr\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 53)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("static GGS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 54)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_ObjectArray & /* inEffectiveParameterArray */,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GGS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 58)).stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("static GGS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 61)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_ObjectArray & inEffectiveParameterArray,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GGS_location & /* inErrorLocation*/\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
    GGS_uint index_3887_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_formalInputParameterListForGeneration enumerator_3887 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_3887.hasCurrentObject ()) {
        result.appendString ("  const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3887.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" operand") ;
        result.appendString (index_3887_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" = GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3887.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString ("::extractObject (inEffectiveParameterArray.objectAtIndex (") ;
        result.appendString (index_3887_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" COMMA_HERE), inCompiler COMMA_THERE) ;\n") ;
        enumerator_3887.gotoNextObject () ;
        index_3887_IDX.increment () ;
      }
    }
    result.appendString ("  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 68)).stringValue ()) ;
    result.appendString (" (") ;
    GGS_uint index_4354_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_formalInputParameterListForGeneration enumerator_4354 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_4354.hasCurrentObject ()) {
        result.appendString ("operand") ;
        result.appendString (index_4354_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 70)).stringValue ()) ;
        result.appendString (", ") ;
        enumerator_4354.gotoNextObject () ;
        index_4354_IDX.increment () ;
      }
    }
    result.appendString ("inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nC_galgas_function_descriptor functionDescriptor_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString (in_FUNCTION_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("functionWithGenericHeader_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 79)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("& kTypeDescriptor_GALGAS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).stringValue ()) ;
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 82)).stringValue ()) ;
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
                                                                                                   const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
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
  result.appendString ("class Compiler * inCompiler") ;
  GGS_uint index_565_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_565 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_565.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_565.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" & ") ;
      result.appendString (enumerator_565.current_mFormalArgumentCppName (HERE).stringValue ()) ;
      enumerator_565.gotoNextObject () ;
      index_565_.increment () ;
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
                                                                                                      const GGS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
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
  const GalgasBool test_0 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ") ;
    result.appendString (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 9)).stringValue ()) ;
    result.appendString (" */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 11)).stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_674_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_formalInputParameterListForGeneration enumerator_674 (in_FORMAL_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_674.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_674.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" & ") ;
      const GalgasBool test_1 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (enumerator_674.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 15)).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("/* ") ;
        result.appendString (enumerator_674.current_mFormalArgumentCppName (HERE).stringValue ()) ;
        result.appendString (" */") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (enumerator_674.current_mFormalArgumentCppName (HERE).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_674.gotoNextObject () ;
      index_674_.increment () ;
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
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 979)) ;
//---
  return result_result ;
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
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), temp_1.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 990)) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 987))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@onceFunctionDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_onceFunctionDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 997)) ;
//---
  return result_result ;
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
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE), extensionGetter_identifierRepresentation (temp_1.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1008)) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1005))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticTypeForGeneration::getter_appendTypeGenericImplementation (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_39905 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1017)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_selfTypeDefinition_39905.readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("semanticGeneration.galgas4", 1018)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result_result = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_semanticTypeForGeneration temp_2 = this ;
    result_result = GGS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, var_selfTypeDefinition_39905.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1023)), var_selfTypeDefinition_39905.readProperty_superType () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1021))) ;
  }
//---
  return result_result ;
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
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1037)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1037))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1037)) ;
  GGS_string var_code_41025 ;
  {
  const GGS_functionImplementationForGeneration temp_1 = this ;
  const GGS_functionImplementationForGeneration temp_2 = this ;
  const GGS_functionImplementationForGeneration temp_3 = this ;
  const GGS_functionImplementationForGeneration temp_4 = this ;
  const GGS_functionImplementationForGeneration temp_5 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("function_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1039)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1039)), ioArgument_ioInclusionSet, temp_2.readProperty_mFormalArgumentList (), temp_3.readProperty_mFunctionInstructionList (), GGS_string ("Compiler"), temp_4.readProperty_mReturnType (), temp_5.readProperty_mResultVariableCppName (), GGS_bool (false), GGS_bool (false), var_code_41025, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1038)) ;
  }
  const GGS_functionImplementationForGeneration temp_6 = this ;
  const GGS_functionImplementationForGeneration temp_7 = this ;
  const GGS_functionImplementationForGeneration temp_8 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, temp_6.readProperty_mFunctionName (), var_code_41025, temp_7.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_8.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1054)) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1050))) ;
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
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1065)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1065))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1065)) ;
  GGS_string var_code_41920 ;
  {
  const GGS_onceFunctionDeclarationForGeneration temp_1 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_2 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_3 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_4 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("onceFunction_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1067)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1067)), ioArgument_ioInclusionSet, GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE), temp_2.readProperty_mFunctionInstructionList (), GGS_string ("Compiler"), temp_3.readProperty_mReturnType (), temp_4.readProperty_mResultVariableCppName (), GGS_bool (true), GGS_bool (false), var_code_41920, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1066)) ;
  }
  const GGS_onceFunctionDeclarationForGeneration temp_5 = this ;
  const GGS_onceFunctionDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, temp_5.readProperty_mFunctionName (), var_code_41920, GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE), extensionGetter_identifierRepresentation (temp_6.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1082)) COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1078))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexiqueDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_lexiqueDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 1100)) ;
//---
  return result_result ;
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
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_3.readProperty_mSuperLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1110)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1110))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1110)) ;
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
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1120)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1120))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1120)) ;
  const GGS_lexiqueDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = temp_1.readProperty_mCppContents () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexiqueDeclarationForGeneration appendSpecificFiles'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificFiles (const GGS_string constinArgument_inProductDirectory,
                                                                       GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                       GGS_stringlist & ioArgument_ioSwiftAppProductFileList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1131)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1131)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1131))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1131)) ;
  const GGS_lexiqueDeclarationForGeneration temp_1 = this ;
  ioArgument_ioSwiftAppProductFileList.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("lexique-").add_operation (temp_1.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1132)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1132)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1132)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1132)) ;
  {
  const GGS_lexiqueDeclarationForGeneration temp_2 = this ;
  const GGS_lexiqueDeclarationForGeneration temp_3 = this ;
  GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("lexique-").add_operation (temp_2.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1135)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1135)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1135)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), temp_3.readProperty_mSwiftUIImplementation (), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1133)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@programComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_programComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("semanticGeneration.galgas4", 1155)) ;
//---
  return result_result ;
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
  ioArgument_ioInclusionSet.plusAssignOperation(temp_0.readProperty_mInclusionSet (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1164)) ;
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
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas4", 1175)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile??&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (const GGS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                                                     const GGS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                                     GGS_stringlist & ioArgument_ioRegularFileIndexStringList,
                                                                     GGS_stringlist & ioArgument_ioDirectoryIndexStringList,
                                                                     GGS_stringlist & ioArgument_ioRegularTextContentIndexStringList,
                                                                     GGS_stringlist & ioArgument_ioRegularBinaryContentIndexStringList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (ioArgument_ioDirectoryIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1187)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1187)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1187)) ;
  UpEnumerator_wrapperFileMap enumerator_46203 (constinArgument_inFilewrapperFileMap) ;
  while (enumerator_46203.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (ioArgument_ioRegularFileIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1189)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1189)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1189)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_46203.current (HERE).readProperty_mIsTextFile ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (enumerator_46203.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1191)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1191)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (enumerator_46203.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1193)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1193)) ;
    }
    enumerator_46203.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_46584 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_46584.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (enumerator_46584.current (HERE).readProperty_mRegularFileMap (), enumerator_46584.current (HERE).readProperty_mDirectoryMap (), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1197)) ;
    }
    enumerator_46584.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                             GGS_string & outArgument_outHeader,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_regularFileIndexStringList_47151 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_regularBinaryContentIndexStringList_47201 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_regularTextContentIndexStringList_47260 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_directoryIndexStringList_47317 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  {
  const GGS_filewrapperDeclarationForGeneration temp_0 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_1 = this ;
  routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (temp_0.readProperty_mFilewrapperFileMap (), temp_1.readProperty_mFilewrapperDirectoryMap (), var_regularFileIndexStringList_47151, var_directoryIndexStringList_47317, var_regularTextContentIndexStringList_47260, var_regularBinaryContentIndexStringList_47201, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1217)) ;
  }
  const GGS_filewrapperDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_47151, var_directoryIndexStringList_47317, var_regularTextContentIndexStringList_47260, var_regularBinaryContentIndexStringList_47201, temp_2.readProperty_mFilewrapperName () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1225))) ;
  const GGS_filewrapperDeclarationForGeneration temp_3 = this ;
  UpEnumerator_filewrapperTemplateListForGeneration enumerator_47932 (temp_3.readProperty_mFilewrapperTemplateListForGeneration ()) ;
  while (enumerator_47932.hasCurrentObject ()) {
    const GGS_filewrapperDeclarationForGeneration temp_4 = this ;
    outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, temp_4.readProperty_mFilewrapperName (), enumerator_47932.current (HERE).readProperty_mFilewrapperTemplateName (), enumerator_47932.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1234))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1234)) ;
    enumerator_47932.gotoNextObject () ;
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
  UpEnumerator_wrapperFileMap enumerator_48679 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_48679.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_48679.current (HERE).readProperty_mIsTextFile ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_contents_48767 = GGS_string::class_func_stringWithContentsOfFile (enumerator_48679.current (HERE).readProperty_mAbsoluteFilePath (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1254)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1255)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1255)).add_operation (enumerator_48679.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1255)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1255)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1255)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("const char * gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1256)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_48679.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1257)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1257)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1258)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1259)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1259)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" = "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1260)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, var_contents_48767.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1261)).objectCompare (GGS_uint (uint32_t (100U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_stringlist var_components_49281 = var_contents_48767.getter_componentsSeparatedByString (GGS_string ("\n") COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1262)) ;
            GGS_string var_lastLine_49373 ;
            {
            var_components_49281.setter_popLast (var_lastLine_49373, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1263)) ;
            }
            UpEnumerator_stringlist enumerator_49396 (var_components_49281) ;
            const bool bool_2 = true ;
            if (enumerator_49396.hasCurrentObject () && bool_2) {
              ioArgument_ioImplementation.plusAssignOperation(GGS_string ("\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1266)) ;
              while (enumerator_49396.hasCurrentObject () && bool_2) {
                GGS_string var_s_49495 = enumerator_49396.current_mValue (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1268)) ;
                ioArgument_ioImplementation.plusAssignOperation(var_s_49495.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1269)).add_operation (GGS_string ("\n  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1269)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1269)) ;
                enumerator_49396.gotoNextObject () ;
              }
            }
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::greaterThan, var_lastLine_49373.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1271)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                ioArgument_ioImplementation.plusAssignOperation(var_lastLine_49373.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1272)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1272)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          ioArgument_ioImplementation.plusAssignOperation(var_contents_48767.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1275)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1275)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" ;\n\nconst cRegularFileWrapper gWrapperFile_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1277)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_48679.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1278)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1278)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1279)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1280)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1280)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (" (\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1281)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_48679.current (HERE).readProperty_lkey ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1282)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1282)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (",\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1283)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_48679.current (HERE).readProperty_lkey ().readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas4", 1284)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1284)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1284)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (",\n  true, // Text file\n "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1285)) ;
        ioArgument_ioImplementation.plusAssignOperation(var_contents_48767.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1286)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1286)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1286)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string (", // Text length\n  gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1287)) ;
        ioArgument_ioImplementation.plusAssignOperation(enumerator_48679.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1288)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1288)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1289)) ;
        ioArgument_ioImplementation.plusAssignOperation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1290)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1290)) ;
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("\n) ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1291)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_data var_contents_50758 = GGS_data::class_func_dataWithContentsOfFile (enumerator_48679.current (HERE).readProperty_mAbsoluteFilePath (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1293)) ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1294)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1294)).add_operation (enumerator_48679.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1294)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1294)).add_operation (GGS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1294)).add_operation (enumerator_48679.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1296)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1295)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1296)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1297)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1296)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1297)).add_operation (var_contents_50758.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1297)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1297)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1297)).add_operation (GGS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1297)).add_operation (var_contents_50758.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1298)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1297)).add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1298)).add_operation (GGS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1298)).add_operation (enumerator_48679.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1299)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1299)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1299)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1300)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1299)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1300)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1300)).add_operation (enumerator_48679.current (HERE).readProperty_lkey ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1301)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1301)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1301)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1301)).add_operation (enumerator_48679.current (HERE).readProperty_lkey ().readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas4", 1302)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1302)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1302)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1302)).add_operation (GGS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1302)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1303)).add_operation (var_contents_50758.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1304)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1304)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1304)).add_operation (GGS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1304)).add_operation (GGS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1304)).add_operation (enumerator_48679.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1305)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1305)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1305)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1305)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1305)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1305)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1305)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1294)) ;
    }
    enumerator_48679.gotoNextObject () ;
  }
  UpEnumerator_wrapperDirectoryMap enumerator_51902 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_51902.hasCurrentObject ()) {
    {
    routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (constinArgument_inFilewrapperName, enumerator_51902.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_51902.current (HERE).readProperty_mWrapperDirectoryIndex (), enumerator_51902.current (HERE).readProperty_mRegularFileMap (), enumerator_51902.current (HERE).readProperty_mDirectoryMap (), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1311)) ;
    }
    enumerator_51902.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1321)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1321)).add_operation (GGS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1321)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1323)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1322)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1323)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1323)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1323)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1323)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1324)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1324)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1324)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1324)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1324)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1321)) ;
  UpEnumerator_wrapperFileMap enumerator_52577 (constinArgument_inFilewrapperRegularFileMap) ;
  while (enumerator_52577.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  & gWrapperFile_").add_operation (enumerator_52577.current (HERE).readProperty_mWrapperFileIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1326)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1326)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1326)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1326)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1326)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1326)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1326)) ;
    enumerator_52577.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1328)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1328)) ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1331)).add_operation (GGS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1331)).add_operation (GGS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1331)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1333)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1332)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1333)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1333)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1333)).add_operation (GGS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1333)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1334)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1334)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1334)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1334)).add_operation (GGS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1334)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1331)) ;
  UpEnumerator_wrapperDirectoryMap enumerator_53194 (constinArgument_inFilewrapperDirectoryMap) ;
  while (enumerator_53194.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  & gWrapperDirectory_").add_operation (enumerator_53194.current (HERE).readProperty_mWrapperDirectoryIndex ().getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1336)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1336)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1336)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1336)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1336)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1336)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1336)) ;
    enumerator_53194.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  nullptr\n").add_operation (GGS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1338)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1338)) ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1341)).add_operation (GGS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1341)).add_operation (GGS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1341)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1342)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1342)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1342)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1343)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1342)).add_operation (GGS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1343)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1343)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas4", 1344)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1344)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1344)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1344)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1345)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1345)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1345)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1345)).add_operation (GGS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1345)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1346)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1346)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1346)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1346)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1346)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1346)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1346)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas4", 1347)).getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1347)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1347)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1347)).add_operation (GGS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1347)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas4", 1348)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1348)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1348)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas4", 1348)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1348)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1348)).add_operation (GGS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1348)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1341)) ;
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
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1358))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1358)) ;
  GGS_string var_filewrapperImplementation_54503 = GGS_string::makeEmptyString () ;
  {
  const GGS_filewrapperDeclarationForGeneration temp_1 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_2 = this ;
  const GGS_filewrapperDeclarationForGeneration temp_3 = this ;
  routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (temp_1.readProperty_mFilewrapperName (), GGS_string::makeEmptyString (), GGS_uint (uint32_t (0U)), temp_2.readProperty_mFilewrapperFileMap (), temp_3.readProperty_mFilewrapperDirectoryMap (), var_filewrapperImplementation_54503, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1360)) ;
  }
  const GGS_filewrapperDeclarationForGeneration temp_4 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, temp_4.readProperty_mFilewrapperName (), var_filewrapperImplementation_54503 COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1368))) ;
  const GGS_filewrapperDeclarationForGeneration temp_5 = this ;
  UpEnumerator_filewrapperTemplateListForGeneration enumerator_54925 (temp_5.readProperty_mFilewrapperTemplateListForGeneration ()) ;
  while (enumerator_54925.hasCurrentObject ()) {
    GGS_string var_generatedCodeForInstructionList_55032 = GGS_string::makeEmptyString () ;
    GGS_uint var_temporaryVariableIndex_55083 = GGS_uint (uint32_t (0U)) ;
    GGS_stringset var_unusedVariableCppNameSet_55129 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    var_unusedVariableCppNameSet_55129.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1378))  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1378)) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_55249 (enumerator_54925.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters ()) ;
    while (enumerator_55249.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_55129.plusPlusAssignOperation (enumerator_55249.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1380)) ;
      enumerator_55249.gotoNextObject () ;
    }
    GGS_bool var_useColumnMarker_55380 = GGS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_54925.current (HERE).readProperty_mTemplateInstructionListForGeneration (), var_generatedCodeForInstructionList_55032, ioArgument_ioInclusionSet, var_temporaryVariableIndex_55083, var_unusedVariableCppNameSet_55129, var_useColumnMarker_55380, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1383)) ;
    }
    const GGS_filewrapperDeclarationForGeneration temp_6 = this ;
    outArgument_outImplementation.plusAssignOperation(GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, temp_6.readProperty_mFilewrapperName (), enumerator_54925.current (HERE).readProperty_mFilewrapperTemplateName (), enumerator_54925.current (HERE).readProperty_mFilewrapperTemplateFormalInputParameters (), var_unusedVariableCppNameSet_55129, var_useColumnMarker_55380, var_generatedCodeForInstructionList_55032 COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1392))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1392)) ;
    enumerator_54925.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@primitiveTypeForGeneration appendPrimitiveTypePreDeclaration'
//--------------------------------------------------------------------------------------------------

void cPtr_primitiveTypeForGeneration::method_appendPrimitiveTypePreDeclaration (GGS_string & ioArgument_ioHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_primitiveTypeForGeneration temp_0 = this ;
  ioArgument_ioHeader.plusAssignOperation(GGS_string ("class GGS_").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1415)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1415)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1415)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_primitiveTypeForGeneration::getter_appendPrimitiveTypeDeclaration (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_primitiveTypeForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mCppDeclarationString () ;
  const GGS_primitiveTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_56945 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1422)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_primitiveTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_isPackage ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_primitiveTypeForGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (inCompiler, var_selfTypeDefinition_56945.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1426)), var_selfTypeDefinition_56945.readProperty_classFunctionMap (), var_selfTypeDefinition_56945.readProperty_classMethodMap () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1424))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1424)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_primitiveTypeForGeneration temp_5 = this ;
    result_result.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_56945.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1433)), var_selfTypeDefinition_56945.readProperty_isConcrete (), var_selfTypeDefinition_56945.readProperty_initializerMap (), var_selfTypeDefinition_56945.readProperty_classFunctionMap (), var_selfTypeDefinition_56945.readProperty_getterMap (), var_selfTypeDefinition_56945.readProperty_setterMap (), var_selfTypeDefinition_56945.readProperty_instanceMethodMap (), var_selfTypeDefinition_56945.readProperty_classMethodMap (), var_selfTypeDefinition_56945.readProperty_readSubscriptMap (), var_selfTypeDefinition_56945.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_56945.readProperty_features (), var_selfTypeDefinition_56945.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_56945.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_56945.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1431))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1431)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles??&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles_3F__3F__26__26__26_ (const GGS_string constinArgument_inDirectory,
                                                              const GGS__5B_semanticDeclarationForGeneration_5D_ constinArgument_inSemanticDeclarationListForGeneration,
                                                              GGS_stringlist & ioArgument_ioToolHeaderFileList,
                                                              GGS_stringlist & ioArgument_ioToolCppFileList,
                                                              GGS_stringset & ioArgument_ioAllProductFileSet,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_generatedCode_58776 = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1467))) ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_58892 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_58892.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_58892.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1469)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        callExtensionMethod_appendPrimitiveTypePreDeclaration ((cPtr_semanticDeclarationForGeneration *) enumerator_58892.current (HERE).ptr (), var_generatedCode_58776, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1470)) ;
      }
    }
    enumerator_58892.gotoNextObject () ;
  }
  var_generatedCode_58776.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1473)) ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_59100 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_59100.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_59100.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1475)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_generatedCode_58776.plusAssignOperation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_59100.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1476)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1476)) ;
      }
    }
    enumerator_59100.gotoNextObject () ;
  }
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_59280 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_59280.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_59280.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1480)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_stringset joker_59397 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_code_59424 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_59280.current (HERE).ptr (), joker_59397, var_code_59424, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1481)) ;
        var_generatedCode_58776.plusAssignOperation(var_code_59424, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1482)) ;
      }
    }
    enumerator_59280.gotoNextObject () ;
  }
  var_generatedCode_58776.plusAssignOperation(GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1485))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1485)) ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_59587 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_59587.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_59587.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1487)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_stringset joker_59717 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_headerString_32__59744 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_59587.current (HERE).ptr (), constinArgument_inDirectory, joker_59717, var_headerString_32__59744, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1488)) ;
        var_generatedCode_58776.plusAssignOperation(var_headerString_32__59744, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1489)) ;
      }
    }
    enumerator_59587.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas4", 1492)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioToolHeaderFileList.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("all-predefined-types.h"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1493)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1494)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GGS_string ("all-predefined-types.h"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_generatedCode_58776, GGS_string ("\n\n"), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1495)) ;
      }
    }
  }
  var_generatedCode_58776 = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1508))) ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_60488 (constinArgument_inSemanticDeclarationListForGeneration) ;
  while (enumerator_60488.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_60488.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1510)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        var_generatedCode_58776.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_60488.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1511)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1511)) ;
        GGS_stringset joker_60688 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_string var_code_60715 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_60488.current (HERE).ptr (), GGS_unifiedTypeMap::init (inCompiler COMMA_HERE), joker_60688, var_code_60715, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1512)) ;
        var_generatedCode_58776.plusAssignOperation(var_code_60715, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1513)) ;
      }
    }
    enumerator_60488.gotoNextObject () ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas4", 1516)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioToolCppFileList.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("all-predefined-types.cpp"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1517)) ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1518)) ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GGS_string ("all-predefined-types.cpp"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_generatedCode_58776, GGS_string ("\n\n"), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas4", 1519)) ;
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
                                                                                  const GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_295_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_295 (in_IMPORTED_5F_COMPONENT_5F_LIST) ;
    while (enumerator_295.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_295.current_mValue (HERE).stringValue ()) ;
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
                                                                                          const GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#include \"Compiler.h\"\n#include \"galgas-input-output.h\"\n#include \"C_galgas_CLI_Options.h\"\n#include \"PrologueEpilogue.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_264_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_264 (in_IMPORTED_5F_COMPONENT_5F_LIST) ;
    while (enumerator_264.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_264.current_mValue (HERE).stringValue ()) ;
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
//Routine 'analyzeSemanticInstructionList?&?&?localConstantList?localInitializedVariableListWarnsIfNotMutated?localInitializedVariableListNoWarnsIfNotMutated??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                                                                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                                                                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                                                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                                                                                                      const GGS_localConstantList constinArgument_inLocalConstantList,
                                                                                                                                                                                                      const GGS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                                                                                                                                                                                      const GGS_localInitializedVariableList constinArgument_inLocalInitializedVariableListNoWarns,
                                                                                                                                                                                                      const GGS__5B_semanticInstructionAST_5D_ constinArgument_inSemanticInstructionListAST,
                                                                                                                                                                                                      const GGS_location constinArgument_inEndOfBranchLocation,
                                                                                                                                                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                                                                                                      GGS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 70)) ;
  }
  {
  routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inLocalConstantList, constinArgument_inLocalInitializedVariableList, constinArgument_inLocalInitializedVariableListNoWarns, constinArgument_inSemanticInstructionListAST, ioArgument_ioVariableMap, outArgument_outInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 72)) ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 85)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionListWithoutBranch?&?&?localConstantList?localInitializedVariableListWarnsIfNotMutated?localInitializedVariableListNoWarnsIfNotMutated?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                                                                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                                                                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                                                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                                                                                                               const GGS_localConstantList constinArgument_inLocalConstantList,
                                                                                                                                                                                                               const GGS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                                                                                                                                                                                               const GGS_localInitializedVariableList constinArgument_inLocalInitializedVariableListNoWarns,
                                                                                                                                                                                                               const GGS__5B_semanticInstructionAST_5D_ constinArgument_inSemanticInstructionListAST,
                                                                                                                                                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                                                                                                               GGS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                                                                                                                                                                               Compiler * inCompiler
                                                                                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_localConstantList enumerator_4899 (constinArgument_inLocalConstantList) ;
  while (enumerator_4899.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_4899.current (HERE).readProperty_mNoWarningIfUnused ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_4899.current (HERE).readProperty_mName (), enumerator_4899.current (HERE).readProperty_mType (), enumerator_4899.current (HERE).readProperty_mCppName (), enumerator_4899.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 106)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_4899.current (HERE).readProperty_mName (), enumerator_4899.current (HERE).readProperty_mType (), enumerator_4899.current (HERE).readProperty_mCppName (), enumerator_4899.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 108)) ;
      }
    }
    enumerator_4899.gotoNextObject () ;
  }
  UpEnumerator_localInitializedVariableList enumerator_5335 (constinArgument_inLocalInitializedVariableList) ;
  while (enumerator_5335.hasCurrentObject ()) {
    {
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, enumerator_5335.current (HERE).readProperty_mName (), GGS_bool (true), enumerator_5335.current (HERE).readProperty_mType (), enumerator_5335.current (HERE).readProperty_mCppName (), enumerator_5335.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 113)) ;
    }
    enumerator_5335.gotoNextObject () ;
  }
  UpEnumerator_localInitializedVariableList enumerator_5621 (constinArgument_inLocalInitializedVariableListNoWarns) ;
  while (enumerator_5621.hasCurrentObject ()) {
    {
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, enumerator_5621.current (HERE).readProperty_mName (), GGS_bool (false), enumerator_5621.current (HERE).readProperty_mType (), enumerator_5621.current (HERE).readProperty_mCppName (), enumerator_5621.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 116)) ;
    }
    enumerator_5621.gotoNextObject () ;
  }
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_5925 (constinArgument_inSemanticInstructionListAST) ;
  while (enumerator_5925.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_5925.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 120)) ;
    enumerator_5925.gotoNextObject () ;
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
  GGS_unifiedTypeMapEntry var_expressionType_6882 = constinArgument_inExpression.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_boolType_6949 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_expressionType_6882.objectCompare (var_boolType_6949)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outExpression = constinArgument_inExpression ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_6882, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 154)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 154)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (var_expressionType_6882, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 155)).readProperty_propertyMap ().getter_hasKey (GGS_string ("bool") COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 155)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GGS_AccessControl var_accessControl_7315 ;
            GGS_unifiedTypeMapEntry var_attributeType_7376 ;
            GGS_bool joker_7338 ; // Joker input parameter
            extensionGetter_definition (var_expressionType_6882, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 156)).readProperty_propertyMap ().method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("bool"), constinArgument_inErrorLocation, inCompiler COMMA_HERE), var_accessControl_7315, joker_7338, var_attributeType_7376, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 156)) ;
            extensionMethod_checkSetAccess (var_accessControl_7315, constinArgument_inAnalysisContext.readProperty_selfAvailability (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 162)) ;
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::equal, var_attributeType_7376.objectCompare (var_boolType_6949)).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_boolType_6949, constinArgument_inErrorLocation, constinArgument_inExpression, GGS_string ("bool"), inCompiler COMMA_HERE) ;
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              GenericArray <FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_6882, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 172)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 172)).add_operation (GGS_string ("' struct type defines an attribute named 'bool', but its type is not '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 172)), fixItArray4  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 171)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_6882, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 177)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 177)).add_operation (GGS_string ("' struct type does not define an attribute named 'bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 177)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 176)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_getterMap_2E_element var_entry_8125 = extensionGetter_definition (var_expressionType_6882, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 181)).readProperty_getterMap ().readSubscript__3F_ (GGS_string ("bool"), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_expressionType_6882, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 181)).readProperty_getterMap ().readSubscript__3F_ (GGS_string ("bool"), inCompiler COMMA_HERE).isValuated ()) {
          test_6 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_6) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::notEqual, var_entry_8125.readProperty_mReturnedType ().objectCompare (var_boolType_6949)).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not @bool, it handles a 'bool' func, but it does not return a '@bool' value"), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 183)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::greaterThan, var_entry_8125.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 185)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                GenericArray <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not @bool, it handles a 'bool' func that requires argument(s)"), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 186)) ;
                outArgument_outExpression.drop () ; // Release error dropped variable
              }
            }
            if (GalgasBool::boolFalse == test_9) {
              outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_boolType_6949, constinArgument_inErrorLocation, var_entry_8125.readProperty_mKind (), constinArgument_inExpression, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_string ("bool"), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_entry_8125.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expressionType_6882, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 200)).readProperty_getterMap ().getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 200)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            GenericArray <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_6882, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 202)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 202)).add_operation (GGS_string ("', and this type does not define the 'bool' func"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 202)), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 201)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_11) {
          GenericArray <FixItDescription> fixItArray13 ;
          appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, extensionGetter_definition (var_expressionType_6882, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 208)).readProperty_getterMap ().getter_keyList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 208))) ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_6882, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 206)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 206)).add_operation (GGS_string ("', and this type does not define the 'bool' func "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 206)), fixItArray13  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 205)) ;
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
                                                                                                      GGS_stringlist & /* ioArgument__5F_ioAssignementList */,
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
                                                                                                      GGS_stringlist & /* ioArgument__5F_ioAssignementList */,
                                                                                                      GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 244)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 245)) ;
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
                                                                                                       GGS_stringlist & ioArgument_ioAssignementList,
                                                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 258)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 259)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_type_11731 ;
  GGS_string var_cppName_11750 ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GGS_string joker_11759 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_11731, var_cppName_11750, joker_11759, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 261)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_11769 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expectedType_11769.objectCompare (var_type_11731)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 265)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 265)).add_operation (extensionGetter_identifierRepresentation (var_type_11731, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 265)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 265)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 265)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_11769, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 266)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 266)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 266)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 264)) ;
    }
  }
  ioArgument_ioAssignementList.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_cppName_11750.add_operation (GGS_string (" = GGS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 268)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 268)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 268)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 268)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_analyzeGrammarInstructionSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                               const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                               const GGS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                               GGS_stringlist & ioArgument_ioAssignementList,
                                                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 280)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 281)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GGS_string var_cppName_12826 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 283)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 283)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 283)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 283)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 283)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 283)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_12971 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 284)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GGS_bool (true), var_type_12971, var_cppName_12826, var_cppName_12826, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 285)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_13173 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_13173.objectCompare (var_type_12971)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 289)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 289)).add_operation (extensionGetter_identifierRepresentation (var_type_12971, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 289)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 289)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 289)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_13173, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 290)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 290)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 290)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 288)) ;
    }
  }
  ioArgument_ioAssignementList.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GGS_string ").add_operation (var_cppName_12826, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 292)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 292)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 292)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 292)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 292)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_analyzeGrammarInstructionSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                 const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                                 const GGS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                 GGS_stringlist & ioArgument_ioAssignementList,
                                                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 304)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 305)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GGS_string var_cppName_14265 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 307)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 307)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 307)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 307)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 307)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 307)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_14410 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 308)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_14410, var_cppName_14265, var_cppName_14265, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 309)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_14586 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_14586.objectCompare (var_type_14410)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 313)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 313)).add_operation (extensionGetter_identifierRepresentation (var_type_14410, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 313)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 313)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 313)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_14586, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 314)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 314)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 314)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 312)) ;
    }
  }
  ioArgument_ioAssignementList.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("const GGS_string ").add_operation (var_cppName_14265, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 316)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 316)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 316)).add_operation (GGS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 316)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas4", 316)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 125)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 127)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas4", 127)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 128)) ;
      }
    }
  }
  const GGS_overridingExtensionGetterAST temp_4 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_5614 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubscript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingExtensionGetterAST temp_5 = this ;
  const GGS_overridingExtensionGetterAST temp_6 = this ;
  const GGS_overridingExtensionGetterAST temp_7 = this ;
  var_entry_5614.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionGetterName (), temp_6.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_7.readProperty_mOverridingExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-getter.galgas4", 138)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 134)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_5614, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 140)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overridingExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingExtensionGetterAST temp_0 = this ;
  const GGS_overridingExtensionGetterAST temp_1 = this ;
  result_result = GGS_string ("overriding extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 148)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 148)).add_operation (temp_1.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 148)) ;
//---
  return result_result ;
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

void cPtr_overridingExtensionGetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
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
  GGS_lstring var_nameForUsefulness_7894 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 178)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7894, var_nameForUsefulness_7894, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 179)) ;
  }
  const GGS_overridingExtensionGetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_8080 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 180)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_8080, var_nameForUsefulness_7894 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 181)) ;
  }
  const GGS_overridingExtensionGetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8284 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 183)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_8284, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 185)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas4", 185)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas4", 185)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_overridingExtensionGetterAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare a extension func: '@").add_operation (extensionGetter_definition (var_selfType_8284, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 186)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 186)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 186)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 186)) ;
    }
  }
  GGS_string var_baseTypeName_8622 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_8667 = extensionGetter_definition (var_selfType_8284, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 190)).readProperty_superType () ;
  GGS_functionSignature var_inheritedSignature_8734 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_inheritedReturnType_8765 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-getter.galgas4", 192)) ;
  GGS_location var_inheritedDeclarationLocation_8829 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 193)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas4", 194)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 194)).isValid ()) {
    uint32_t variant_8877 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas4", 194)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 194)).uintValue () ;
    bool loop_8877 = true ;
    while (loop_8877) {
      loop_8877 = var_superType_8667.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas4", 195)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas4", 195)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_8622.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 195)).isValid () ;
      if (loop_8877) {
        loop_8877 = var_superType_8667.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas4", 195)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas4", 195)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_8622.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 195)).boolValue () ;
      }
      if (loop_8877 && (0 == variant_8877)) {
        loop_8877 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas4", 194)) ;
      }
      if (loop_8877) {
        variant_8877 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingExtensionGetterAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_8667, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 196)).readProperty_getterMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 196)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_9302 ;
            const GGS_overridingExtensionGetterAST temp_9 = this ;
            GGS_methodKind joker_9158 ; // Joker input parameter
            GGS_bool joker_9238 ; // Joker input parameter
            GGS_string joker_9321 ; // Joker input parameter
            extensionGetter_definition (var_superType_8667, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 197)).readProperty_getterMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionGetterName (), joker_9158, var_inheritedSignature_8734, var_inheritedDeclarationLocation_8829, joker_9238, var_inheritedReturnType_8765, var_qualifier_9302, joker_9321, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 197)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_9302.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas4", 207)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_8622 = extensionGetter_definition (var_superType_8667, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 208)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_8667 = extensionGetter_definition (var_superType_8667, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 211)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_8622.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingExtensionGetterAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GGS_string ("this func is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 214)) ;
    }
  }
  GGS_analysisContext var_analysisContext_9686 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string ("this"), GGS_selfAvailability::class_func_available (var_selfType_8284, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-getter.galgas4", 221))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 221)), GGS_string ("object."), inCompiler COMMA_HERE) ;
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_10380 ;
  GGS_unifiedTypeMapEntry var_returnType_10444 ;
  GGS_string var_returnVariableCppName_10473 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_10543 ;
  {
  const GGS_overridingExtensionGetterAST temp_14 = this ;
  const GGS_overridingExtensionGetterAST temp_15 = this ;
  const GGS_overridingExtensionGetterAST temp_16 = this ;
  const GGS_overridingExtensionGetterAST temp_17 = this ;
  const GGS_overridingExtensionGetterAST temp_18 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_7894, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_9686, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionGetterFormalInputParameterList (), temp_15.readProperty_mOverridingExtensionGetterInstructionList (), temp_16.readProperty_mOverridingExtensionGetterReturnedVariableName (), temp_17.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_18.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_10380, var_returnType_10444, var_returnVariableCppName_10473, var_semanticInstructionListForGeneration_10543, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 224)) ;
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_8622.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      {
      const GGS_overridingExtensionGetterAST temp_20 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_10380, var_returnType_10444, temp_20.readProperty_mOverridingExtensionGetterName ().readProperty_location (), var_inheritedSignature_8734, var_inheritedReturnType_8765, var_inheritedDeclarationLocation_8829, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 241)) ;
      }
    }
  }
  const GGS_overridingExtensionGetterAST temp_21 = this ;
  const GGS_overridingExtensionGetterAST temp_22 = this ;
  const GGS_overridingExtensionGetterAST temp_23 = this ;
  const GGS_overridingExtensionGetterAST temp_24 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_overrideExtensionGetterForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_string ("override extension func ").add_operation (temp_21.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 252)), GGS_bool (false), GGS_string ("func-").add_operation (temp_22.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 254)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 254)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 254)).add_operation (temp_23.readProperty_mOverridingExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 254)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 254)), var_selfType_8284, var_baseTypeName_8622, temp_24.readProperty_mOverridingExtensionGetterName ().readProperty_string (), var_returnType_10444, var_returnVariableCppName_10473, var_formalParameterListForGeneration_10380, extensionGetter_definition (var_selfType_8284, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 261)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_10543, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 251)) ;
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
  extensionSetter_insertKey (ioArgument_ioOverridingExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 283)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overrideExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_overrideExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas4", 307)) ;
//---
  return result_result ;
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
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("class-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 316)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 316)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 316))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 316)) ;
  GGS_string var_extensionGetterCode_14739 ;
  {
  const GGS_overrideExtensionGetterForGeneration temp_1 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_2 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_3 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_4 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_5 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_6 = this ;
  routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_1.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 318)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 318)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 318)).add_operation (GGS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 318)).add_operation (temp_2.readProperty_mOverridingExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas4", 318)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 318)), ioArgument_ioInclusionSet, temp_3.readProperty_mOverridingExtensionGetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_5.readProperty_mResultType (), temp_6.readProperty_mResultVarCppName (), var_extensionGetterCode_14739, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 317)) ;
  }
  const GGS_overrideExtensionGetterForGeneration temp_7 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_8 = this ;
  const GGS_overrideExtensionGetterForGeneration temp_9 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 328)).readProperty_typeName ().readProperty_string (), temp_8.readProperty_mOverridingExtensionGetterName (), var_extensionGetterCode_14739, temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas4", 327))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overridingAbstractExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingAbstractExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_1 = this ;
  result_result = GGS_string ("overriding extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 139)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 139)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 139)) ;
//---
  return result_result ;
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
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 154)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingAbstractExtensionMethodAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 156)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 156)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingAbstractExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 157)) ;
      }
    }
  }
  const GGS_overridingAbstractExtensionMethodAST temp_4 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_6789 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubscript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingAbstractExtensionMethodAST temp_5 = this ;
  const GGS_overridingAbstractExtensionMethodAST temp_6 = this ;
  var_entry_6789.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 166)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 163)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_6789, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 168)) ;
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

void cPtr_overridingAbstractExtensionMethodAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                         const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                         const GGS_semanticContext constinArgument_inSemanticContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                         GGS__5B_semanticDeclarationForGeneration_5D_ & /* ioArgument__5F_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionMethodAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8608 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 198)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8608, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 200)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 200)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 200)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_overridingAbstractExtensionMethodAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension proc: '@").add_operation (extensionGetter_definition (var_selfType_8608, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 201)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 201)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 201)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 201)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8608, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 202)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_overridingAbstractExtensionMethodAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare an abstract extension proc: '@").add_operation (extensionGetter_definition (var_selfType_8608, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 203)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 203)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 203)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 203)) ;
      }
    }
  }
  GGS_string var_baseTypeName_9161 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_9206 = extensionGetter_definition (var_selfType_8608, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 207)).readProperty_superType () ;
  GGS_formalParameterSignature var_inheritedSignature_9254 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_9320 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 209)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 210)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 210)).isValid ()) {
    uint32_t variant_9368 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 210)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 210)).uintValue () ;
    bool loop_9368 = true ;
    while (loop_9368) {
      loop_9368 = var_superType_9206.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 211)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 211)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_9161.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 211)).isValid () ;
      if (loop_9368) {
        loop_9368 = var_superType_9206.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 211)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 211)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_9161.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 211)).boolValue () ;
      }
      if (loop_9368 && (0 == variant_9368)) {
        loop_9368 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 210)) ;
      }
      if (loop_9368) {
        variant_9368 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingAbstractExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_9206, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 212)).readProperty_instanceMethodMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 212)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_9762 ;
            const GGS_overridingAbstractExtensionMethodAST temp_9 = this ;
            GGS_methodKind joker_9665 ; // Joker input parameter
            GGS_bool joker_9745 ; // Joker input parameter
            GGS_string joker_9781 ; // Joker input parameter
            extensionGetter_definition (var_superType_9206, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 213)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_9665, var_inheritedSignature_9254, var_inheritedDeclarationLocation_9320, joker_9745, var_qualifier_9762, joker_9781, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 213)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_9762.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 222)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_9161 = extensionGetter_definition (var_superType_9206, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 223)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_9206 = extensionGetter_definition (var_superType_9206, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 226)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_9161.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingAbstractExtensionMethodAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("this func is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 229)) ;
    }
  }
  GGS_localVarManager var_variableMap_10149 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_10345 ;
  {
  const GGS_overridingAbstractExtensionMethodAST temp_14 = this ;
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), var_variableMap_10149, var_formalParameterListForGeneration_10345, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 233)) ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_9161.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      {
      const GGS_overridingAbstractExtensionMethodAST temp_16 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_10345, temp_16.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_9254, var_inheritedDeclarationLocation_9320, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 242)) ;
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
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas4", 268)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionSetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionSetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_extensionSetterAST temp_0 = this ;
  const GGS_extensionSetterAST temp_1 = this ;
  result_result = GGS_string ("extension mutating proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 96)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 96)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 96)) ;
//---
  return result_result ;
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
  GGS_lstring var_key_5044 = GGS_lstring::init_21__21_ (GGS_string ("extension mutating proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 112)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 112)).add_operation (temp_1.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 112)), temp_2.readProperty_mExtensionSetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionSetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5044, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 115)) ;
  }
  {
  const GGS_extensionSetterAST temp_4 = this ;
  const GGS_extensionSetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5044, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 116)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-setter.galgas4", 116)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_extensionSetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-setter.galgas4", 118)).operator_not (SOURCE_FILE ("extension-setter.galgas4", 118)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_extensionSetterAST temp_8 = this ;
      ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionSetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 119)) ;
      }
    }
  }
  const GGS_extensionSetterAST temp_9 = this ;
  GGS_extensionSetterMapForBuildingContext_2E_element var_entry_5548 = ioArgument_ioExtensionSetterMapForBuildingContext.readSubscript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionSetterAST temp_10 = this ;
  const GGS_extensionSetterAST temp_11 = this ;
  var_entry_5548.mProperty_mExtensionSetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionSetterName (), temp_11.readProperty_mExtensionSetterFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 125)) ;
  }
  {
  ioArgument_ioExtensionSetterMapForBuildingContext.setter_replaceKey (var_entry_5548, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 129)) ;
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

void cPtr_extensionSetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
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
  GGS_lstring var_nameForUsefulness_7499 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 165)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7499, var_nameForUsefulness_7499, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 166)) ;
  }
  const GGS_extensionSetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7675 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 167)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7675, var_nameForUsefulness_7499 COMMA_SOURCE_FILE ("extension-setter.galgas4", 168)) ;
  }
  const GGS_extensionSetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7879 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 170)) ;
  GGS_string var_selfObjectName_7951 ;
  GGS_string var_selfObjectAccessor_7980 ;
  GGS_bool var_implementedAsFunction_8011 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_7879, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 175)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-setter.galgas4", 175)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_selfObjectName_7951 = GGS_string ("object") ;
      var_selfObjectAccessor_7980 = GGS_string ("object->") ;
      var_implementedAsFunction_8011 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    var_selfObjectName_7951 = GGS_string ("ioObject") ;
    var_selfObjectAccessor_7980 = GGS_string ("ioObject.") ;
    var_implementedAsFunction_8011 = GGS_bool (true) ;
  }
  GGS_analysisContext var_analysisContext_8369 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectName_7951, GGS_selfAvailability::class_func_available (var_selfType_7879, GGS_selfMutability::class_func_selfAndPropertiesAreMutable (SOURCE_FILE ("extension-setter.galgas4", 189))  COMMA_SOURCE_FILE ("extension-setter.galgas4", 189)), var_selfObjectAccessor_7980, inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8913 ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_8960 ;
  {
  const GGS_extensionSetterAST temp_5 = this ;
  const GGS_extensionSetterAST temp_6 = this ;
  const GGS_extensionSetterAST temp_7 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_7499, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8369, ioArgument_ioTypeMap, temp_5.readProperty_mExtensionSetterFormalParameterList (), temp_6.readProperty_mExtensionSetterInstructionList (), temp_7.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_8913, var_formalParameterListForGeneration_8960, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas4", 192)) ;
  }
  const GGS_extensionSetterAST temp_8 = this ;
  const GGS_extensionSetterAST temp_9 = this ;
  const GGS_extensionSetterAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_extensionSetterForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_string ("extension mutating proc ").add_operation (temp_8.readProperty_mExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 205)), GGS_bool (true), GGS_string ("mutating proc-").add_operation (extensionGetter_definition (var_selfType_7879, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 207)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas4", 207)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 207)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 207)).add_operation (temp_9.readProperty_mExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas4", 207)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 207)), var_selfType_7879, temp_10.readProperty_mExtensionSetterName ().readProperty_string (), var_implementedAsFunction_8011, var_formalParameterListForGeneration_8960, extensionGetter_definition (var_selfType_7879, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 212)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_8913, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-setter.galgas4", 204)) ;
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
  extensionSetter_insertKey (ioArgument_ioExtensionSetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 237)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionSetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionSetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-setter.galgas4", 259)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@extensionSetterForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_extensionSetterForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_extensionSetterForGeneration temp_2 = this ;
      const GGS_extensionSetterForGeneration temp_3 = this ;
      const GGS_extensionSetterForGeneration temp_4 = this ;
      outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 268)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionSetterName (), temp_4.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas4", 267))) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionSetterForGeneration temp_5 = this ;
    const GGS_extensionSetterForGeneration temp_6 = this ;
    const GGS_extensionSetterForGeneration temp_7 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 274)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionSetterName (), temp_7.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas4", 273))) ;
  }
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
  UpEnumerator_formalParameterListForGeneration enumerator_12876 (temp_0.readProperty_mExtensionSetterFormalParameterList ()) ;
  while (enumerator_12876.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12876.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 288)) ;
    enumerator_12876.gotoNextObject () ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_extensionSetterForGeneration temp_2 = this ;
    test_1 = temp_2.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_extensionSetterForGeneration temp_3 = this ;
      GGS_formalParameterListForGeneration var_extensionSetterFormalParameterList_13034 = temp_3.readProperty_mExtensionSetterFormalParameterList () ;
      {
      const GGS_extensionSetterForGeneration temp_4 = this ;
      var_extensionSetterFormalParameterList_13034.setter_insertAtIndex (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas4", 293)), GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.galgas4", 294)), temp_4.readProperty_mReceiverType (), GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas4", 296)), inCompiler COMMA_HERE), GGS_string ("ioObject"), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 292)) ;
      }
      const GGS_extensionSetterForGeneration temp_5 = this ;
      const GGS_extensionSetterForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("mutating proc-").add_operation (extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 300)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 300)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 300)).add_operation (temp_6.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 300))  COMMA_SOURCE_FILE ("extension-setter.galgas4", 300)) ;
      GGS_string var_code_13980 ;
      {
      const GGS_extensionSetterForGeneration temp_7 = this ;
      const GGS_extensionSetterForGeneration temp_8 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), GGS_string ("extensionSetter_").add_operation (temp_7.readProperty_mExtensionSetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas4", 303)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 303)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_13034, temp_8.readProperty_mSemanticInstructionListForGeneration (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_13980, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas4", 301)) ;
      }
      const GGS_extensionSetterForGeneration temp_9 = this ;
      const GGS_extensionSetterForGeneration temp_10 = this ;
      outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_9.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 315)).readProperty_typeName ().readProperty_string (), temp_10.readProperty_mExtensionSetterName (), var_code_13980 COMMA_SOURCE_FILE ("extension-setter.galgas4", 314))) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_extensionSetterForGeneration temp_11 = this ;
    GGS_unifiedTypeMapEntry var_baseType_14245 = temp_11.readProperty_mReceiverType () ;
    GGS_bool var_searching_14289 = GGS_bool (true) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("extension-setter.galgas4", 322)).isValid ()) {
      uint32_t variant_14310 = GGS_uint::class_func_max (SOURCE_FILE ("extension-setter.galgas4", 322)).uintValue () ;
      bool loop_14310 = true ;
      while (loop_14310) {
        loop_14310 = var_searching_14289.isValid () ;
        if (loop_14310) {
          loop_14310 = var_searching_14289.boolValue () ;
        }
        if (loop_14310 && (0 == variant_14310)) {
          loop_14310 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-setter.galgas4", 322)) ;
        }
        if (loop_14310) {
          variant_14310 -= 1 ;
          GalgasBool test_12 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_12) {
            test_12 = extensionGetter_definition (var_baseType_14245, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 323)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-setter.galgas4", 323)).operator_not (SOURCE_FILE ("extension-setter.galgas4", 323)).boolEnum () ;
            if (GalgasBool::boolTrue == test_12) {
              GalgasBool test_13 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_13) {
                const GGS_extensionSetterForGeneration temp_14 = this ;
                test_13 = extensionGetter_definition (extensionGetter_definition (var_baseType_14245, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 324)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 324)).readProperty_setterMap ().getter_hasKey (temp_14.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-setter.galgas4", 324)).boolEnum () ;
                if (GalgasBool::boolTrue == test_13) {
                  var_baseType_14245 = extensionGetter_definition (var_baseType_14245, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 325)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_13) {
                var_searching_14289 = GGS_bool (false) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_12) {
            var_searching_14289 = GGS_bool (false) ;
          }
        }
      }
    }
    const GGS_extensionSetterForGeneration temp_15 = this ;
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("mutating proc-").add_operation (extensionGetter_definition (var_baseType_14245, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 333)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas4", 333)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 333)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 333)).add_operation (temp_15.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas4", 333)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 333))  COMMA_SOURCE_FILE ("extension-setter.galgas4", 333)) ;
    extensionMethod_addHeaderFileName (var_baseType_14245, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 334)) ;
    GGS_string var_setterImplementation_15137 ;
    {
    const GGS_extensionSetterForGeneration temp_16 = this ;
    const GGS_extensionSetterForGeneration temp_17 = this ;
    const GGS_extensionSetterForGeneration temp_18 = this ;
    const GGS_extensionSetterForGeneration temp_19 = this ;
    routine_generateExtensionSetter_3F__3F__3F__26__3F__3F__21_ (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 336)).readProperty_typeName ().readProperty_string (), GGS_string::makeEmptyString (), temp_17.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionSetterFormalParameterList (), temp_19.readProperty_mSemanticInstructionListForGeneration (), var_setterImplementation_15137, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas4", 335)) ;
    }
    const GGS_extensionSetterForGeneration temp_20 = this ;
    const GGS_extensionSetterForGeneration temp_21 = this ;
    const GGS_extensionSetterForGeneration temp_22 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (inCompiler, extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas4", 345)).readProperty_typeName ().readProperty_string (), temp_21.readProperty_mExtensionSetterName (), temp_22.readProperty_mExtensionSetterFormalParameterList (), var_setterImplementation_15137 COMMA_SOURCE_FILE ("extension-setter.galgas4", 344))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@initializerAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_initializerAST::getter_keyRepresentation (Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_initializerAST temp_0 = this ;
  const GGS_initializerAST temp_1 = this ;
  result_result = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), extensionGetter_initializerSignature (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 141)).readProperty_string () ;
//---
  return result_result ;
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
  GGS_lstring var_key_6344 = GGS_lstring::init_21__21_ (callExtensionGetter_keyRepresentation ((const cPtr_initializerAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 157)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_initializerAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6344, temp_2, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 158)) ;
  }
  {
  const GGS_initializerAST temp_3 = this ;
  const GGS_initializerAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6344, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 159)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-initializer.galgas4", 159)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_initializerAST temp_6 = this ;
    test_5 = ioArgument_ioExtensionInitializerForBuildingContext.getter_hasKey (temp_6.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-initializer.galgas4", 161)).operator_not (SOURCE_FILE ("extension-initializer.galgas4", 161)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      {
      const GGS_initializerAST temp_7 = this ;
      ioArgument_ioExtensionInitializerForBuildingContext.setter_insertKey (temp_7.readProperty_mTypeName (), GGS_extensionInitializerMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 162)) ;
      }
    }
  }
  const GGS_initializerAST temp_8 = this ;
  GGS_extensionInitializerForBuildingContext_2E_element var_entry_6784 = ioArgument_ioExtensionInitializerForBuildingContext.readSubscript__3F_searchKey (temp_8.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_initializerAST temp_9 = this ;
  const GGS_initializerAST temp_10 = this ;
  const GGS_initializerAST temp_11 = this ;
  var_entry_6784.mProperty_mExtensionInitializerMapForType.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (temp_9.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 169)), temp_10.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE), temp_11.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 168)) ;
  }
  {
  ioArgument_ioExtensionInitializerForBuildingContext.setter_replaceKey (var_entry_6784, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 172)) ;
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

void cPtr_initializerAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
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
  GGS_lstring var_nameForUsefulness_8368 = function_initializerNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), extensionGetter_initializerSignature (temp_1.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 200)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 198)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8368, var_nameForUsefulness_8368, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 202)) ;
  }
  const GGS_initializerAST temp_2 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8631 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 204)) ;
  GGS_string var_selfObjectNameString_8705 ;
  GGS_string var_selfObjectAccessorString_8742 ;
  GGS_bool var_isClass_8810 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_8631, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 208)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("extension-initializer.galgas4", 208)))) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_isClass_8810.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_selfObjectNameString_8705 = GGS_string ("this") ;
      var_selfObjectAccessorString_8742 = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    var_selfObjectNameString_8705 = GGS_string ("result") ;
    var_selfObjectAccessorString_8742 = GGS_string ("result.") ;
  }
  GGS_analysisContext var_analysisContextNew_9094 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_8705, GGS_selfAvailability::class_func_available (var_selfType_8631, GGS_selfMutability::class_func_initializer (SOURCE_FILE ("extension-initializer.galgas4", 221))  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 221)), var_selfObjectAccessorString_8742, inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9638 ;
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9687 ;
  {
  const GGS_initializerAST temp_4 = this ;
  const GGS_initializerAST temp_5 = this ;
  const GGS_initializerAST temp_6 = this ;
  routine_analyzeInitializerBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_8368, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_9094, ioArgument_ioTypeMap, temp_4.readProperty_mFormalParameterList (), temp_5.readProperty_mInstructionList (), temp_6.readProperty_mEndOfInitializerLocation (), var_semanticInstructionListForGeneration_9638, var_formalParameterListForGeneration_9687, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 224)) ;
  }
  const GGS_initializerAST temp_7 = this ;
  GGS_string var_initializerName_9742 = extensionGetter_initializerSignature (temp_7.readProperty_mFormalParameterList (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 236)) ;
  const GGS_initializerAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_extensionInitializerForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string ("initializer @").add_operation (temp_8.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 238)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 238)).add_operation (var_initializerName_9742, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 238)), GGS_bool (false), GGS_string ("initializer-").add_operation (extensionGetter_definition (var_selfType_8631, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 240)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 240)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 240)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 240)).add_operation (var_initializerName_9742.getter_fileNameRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 240)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 240)), var_selfType_8631, var_initializerName_9742, var_formalParameterListForGeneration_9687, extensionGetter_definition (var_selfType_8631, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 244)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9638, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 237)) ;
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
                                                                         const GGS_formalInputParameterListAST constinArgument_inFormalArgumentListAST,
                                                                         const GGS__5B_semanticInstructionAST_5D_ constinArgument_inInstructionList,
                                                                         const GGS_location constinArgument_inEndOfMethodLocation,
                                                                         GGS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                                                         GGS_formalInputParameterListForGeneration & outArgument_outSignatureForGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_11231 = GGS_localVarManager::init (inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_11335 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("extension-initializer.galgas4", 266)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("extension-initializer.galgas4", 266)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator_typedPropertyList enumerator_11454 (extensionGetter_definition (var_selfAvailable_11335.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 267)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_11454.hasCurrentObject ()) {
        GGS_bool temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_selfAvailable_11335.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("extension-initializer.galgas4", 268)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_bool (ComparisonKind::notEqual, enumerator_11454.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("extension-initializer.galgas4", 269)))) ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_bool (true) ;
        }
        GGS_bool var_initialized_11488 = temp_1 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_11231, enumerator_11454.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_11454.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_11454.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 277)), var_initialized_11488, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 272)) ;
        }
        enumerator_11454.gotoNextObject () ;
      }
    }
  }
  outArgument_outSignatureForGeneration = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formalInputParameterListAST enumerator_11998 (constinArgument_inFormalArgumentListAST) ;
  while (enumerator_11998.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_12033 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11998.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 285)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = enumerator_11998.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_cppName_12167 = GGS_string ("constinArgument_").add_operation (enumerator_11998.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 287)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 287)) ;
        outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_11998.current (HERE).readProperty_mFormalSelector (), var_parameterType_12033, var_cppName_12167, enumerator_11998.current (HERE).readProperty_mFormalArgumentName (), enumerator_11998.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 288)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = enumerator_11998.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_11231, enumerator_11998.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_12033, var_cppName_12167, var_cppName_12167, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 295)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_11231, enumerator_11998.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_12033, var_cppName_12167, var_cppName_12167, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 297)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_cppName_12784 = GGS_string ("inArgument_").add_operation (enumerator_11998.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 300)) ;
      outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_11998.current (HERE).readProperty_mFormalSelector (), var_parameterType_12033, var_cppName_12784, enumerator_11998.current (HERE).readProperty_mFormalArgumentName (), enumerator_11998.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 301)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = enumerator_11998.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_11231, enumerator_11998.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_12033, var_cppName_12784, var_cppName_12784, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 308)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_11231, enumerator_11998.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_12033, var_cppName_12784, var_cppName_12784, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 310)) ;
        }
      }
    }
    enumerator_11998.gotoNextObject () ;
  }
  outArgument_outSemanticInstructionListForGeneration = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_13505 (constinArgument_inInstructionList) ;
  while (enumerator_13505.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_13505.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_11231, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 317)) ;
    enumerator_13505.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_11231, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 327)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionInitializerForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionInitializerForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-initializer.galgas4", 344)) ;
//---
  return result_result ;
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
  UpEnumerator_formalInputParameterListForGeneration enumerator_14992 (temp_0.readProperty_formalParameterList ()) ;
  while (enumerator_14992.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_14992.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 353)) ;
    enumerator_14992.gotoNextObject () ;
  }
  GGS_string var_methodImplementation_15300 ;
  {
  const GGS_extensionInitializerForGeneration temp_1 = this ;
  const GGS_extensionInitializerForGeneration temp_2 = this ;
  const GGS_extensionInitializerForGeneration temp_3 = this ;
  const GGS_extensionInitializerForGeneration temp_4 = this ;
  routine_generateInitializer_3F__3F__26__3F__3F__21_ (temp_1.readProperty_mReceiverType (), temp_2.readProperty_initializerName (), ioArgument_ioInclusionSet, temp_3.readProperty_formalParameterList (), temp_4.readProperty_semanticInstructionListForGeneration (), var_methodImplementation_15300, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 355)) ;
  }
  const GGS_extensionInitializerForGeneration temp_5 = this ;
  const GGS_extensionInitializerForGeneration temp_6 = this ;
  const GGS_extensionInitializerForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_initializerImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 364)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_initializerName (), temp_7.readProperty_formalParameterList (), var_methodImplementation_15300 COMMA_SOURCE_FILE ("extension-initializer.galgas4", 363))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInitializer??&??!'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInitializer_3F__3F__26__3F__3F__21_ (const GGS_unifiedTypeMapEntry constinArgument_inReceiverType,
                                                          const GGS_string constinArgument_inInitializerName,
                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                          const GGS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                                                          const GGS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                                          GGS_string & outArgument_outGeneratedCode,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GGS_string var_className_16338 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 385)).readProperty_typeName ().readProperty_string () ;
  GGS_stringset var_unusedVariableCppNameSet_16441 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  var_unusedVariableCppNameSet_16441.plusPlusAssignOperation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 388))  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 388)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_16541 (constinArgument_inFormalArgumentList) ;
  while (enumerator_16541.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_16441.plusPlusAssignOperation (enumerator_16541.current (HERE).readProperty_mFormalArgumentCppName ()  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 390)) ;
    enumerator_16541.gotoNextObject () ;
  }
  GGS_uint var_temporaryVariableIndex_16669 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_routineBody_16710 = GGS_string::makeEmptyString () ;
  {
  var_routineBody_16710.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 395)) ;
  }
  UpEnumerator_semanticInstructionListForGeneration enumerator_16777 (constinArgument_inInstructionList) ;
  while (enumerator_16777.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_16777.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_16669, var_unusedVariableCppNameSet_16441, GGS_bool (false), var_routineBody_16710, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 397)) ;
    enumerator_16777.gotoNextObject () ;
  }
  {
  var_routineBody_16710.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 405)) ;
  }
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 407)) ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_17157 (constinArgument_inFormalArgumentList) ;
  while (enumerator_17157.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17157.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 409)) ;
    enumerator_17157.gotoNextObject () ;
  }
  GGS_bool var_isStruct_17286 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 412)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("extension-initializer.galgas4", 412)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_isStruct_17286.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outGeneratedCode = GGS_string ("GGS_").add_operation (var_className_16338.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 415)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 415)).add_operation (GGS_string (" GGS_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 415)).add_operation (var_className_16338.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 416)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 416)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 416)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 417)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 417)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 417)) ;
      GGS_uint var_colRef_17595 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("extension-initializer.galgas4", 418)) ;
      UpEnumerator_formalInputParameterListForGeneration enumerator_17664 (constinArgument_inFormalArgumentList) ;
      while (enumerator_17664.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_17664.current (HERE).readProperty_mIsConstant ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17664.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 422)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 422)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 422)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 422)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17664.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 424)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 424)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 424)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 424)) ;
        }
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_unusedVariableCppNameSet_16441.getter_hasKey (enumerator_17664.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("extension-initializer.galgas4", 426)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_17664.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 427)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 427)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 427)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          outArgument_outGeneratedCode.plusAssignOperation(enumerator_17664.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 429)) ;
        }
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 431)) ;
        {
        outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_17595, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 432)) ;
        }
        enumerator_17664.gotoNextObject () ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 435)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 435)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 435)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 435)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_17595, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 436)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 437)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 438)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (var_className_16338.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 439)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 439)).add_operation (GGS_string (" result ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 439)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 439)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  result.setInitializedProperties (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 440)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 440)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 440)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 440)) ;
      outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_16710, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 441)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 442)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 443)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outGeneratedCode = GGS_string ("GGS_").add_operation (var_className_16338.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 445)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 445)).add_operation (GGS_string (" GGS_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 445)).add_operation (var_className_16338.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 446)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 446)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 446)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 447)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 447)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 447)) ;
    GGS_uint var_colRef_19027 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("extension-initializer.galgas4", 448)) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_19096 (constinArgument_inFormalArgumentList) ;
    while (enumerator_19096.hasCurrentObject ()) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = enumerator_19096.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19096.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 452)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 452)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 452)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 452)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19096.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 454)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 454)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 454)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 454)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_19096.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 456)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 457)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19027, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 458)) ;
      }
      enumerator_19096.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 461)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 461)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 461)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 461)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19027, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 462)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("COMMA_LOCATION_ARGS) {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 463)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  cPtr_").add_operation (var_className_16338.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 464)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 464)).add_operation (GGS_string (" * object = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 464)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 464)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  macroMyNew (object, cPtr_").add_operation (var_className_16338.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 465)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 465)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 465)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 466)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 466)).add_operation (GGS_string (" COMMA_THERE)) ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 466)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 466)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  object->").add_operation (var_className_16338.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 467)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 467)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 467)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 468)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 468)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 468)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 467)) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_20163 (constinArgument_inFormalArgumentList) ;
    while (enumerator_20163.hasCurrentObject ()) {
      outArgument_outGeneratedCode.plusAssignOperation(enumerator_20163.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 470)) ;
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 471)) ;
      enumerator_20163.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 473)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 473)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 473)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  const GGS_").add_operation (var_className_16338.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 474)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 474)).add_operation (GGS_string (" result (object) ;\n"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 474)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 474)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  macroDetachSharedObject (object) ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 475)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("  return result ;\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 476)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 477)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("void cPtr_").add_operation (var_className_16338.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 478)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 478)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 478)).add_operation (var_className_16338.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 479)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 479)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 479)).add_operation (constinArgument_inInitializerName.getter_identifierRepresentation (SOURCE_FILE ("extension-initializer.galgas4", 480)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 480)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 480)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 478)) ;
    UpEnumerator_formalInputParameterListForGeneration enumerator_20794 (constinArgument_inFormalArgumentList) ;
    while (enumerator_20794.hasCurrentObject ()) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = enumerator_20794.current (HERE).readProperty_mIsConstant ().boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("const "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 483)) ;
        }
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_20794.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 485)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 485)).add_operation (GGS_string (" & "), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 485)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 485)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_unusedVariableCppNameSet_16441.getter_hasKey (enumerator_20794.current (HERE).readProperty_mFormalArgumentCppName () COMMA_SOURCE_FILE ("extension-initializer.galgas4", 486)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (enumerator_20794.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 487)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 487)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 487)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssignOperation(enumerator_20794.current (HERE).readProperty_mFormalArgumentCppName (), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 489)) ;
      }
      outArgument_outGeneratedCode.plusAssignOperation(GGS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 491)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19027, inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 492)) ;
      }
      enumerator_20794.gotoNextObject () ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("Compiler * "), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 495)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_unusedVariableCppNameSet_16441.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 496)) COMMA_SOURCE_FILE ("extension-initializer.galgas4", 496)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 497)), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 497)).add_operation (GGS_string (" */"), inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 497)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 497)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      outArgument_outGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("extension-initializer.galgas4", 499)), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 499)) ;
    }
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 501)) ;
    outArgument_outGeneratedCode.plusAssignOperation(var_routineBody_16710, inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 502)) ;
    outArgument_outGeneratedCode.plusAssignOperation(GGS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("extension-initializer.galgas4", 503)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@abstractExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_abstractExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  const GGS_abstractExtensionGetterAST temp_1 = this ;
  result_result = GGS_string ("abstract extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 139)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 139)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 139)) ;
//---
  return result_result ;
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
  GGS_lstring var_key_6575 = GGS_lstring::init_21__21_ (GGS_string ("extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 154)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 154)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 154)), temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6575, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 157)) ;
  }
  {
  const GGS_abstractExtensionGetterAST temp_4 = this ;
  const GGS_abstractExtensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6575, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 158)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 158)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_abstractExtensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 160)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas4", 160)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_abstractExtensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 161)) ;
      }
    }
  }
  const GGS_abstractExtensionGetterAST temp_9 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_7112 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubscript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionGetterAST temp_10 = this ;
  const GGS_abstractExtensionGetterAST temp_11 = this ;
  const GGS_abstractExtensionGetterAST temp_12 = this ;
  var_entry_7112.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionGetterName (), temp_11.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_12.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("extension-abstract-getter.galgas4", 171)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 167)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_7112, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 173)) ;
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

void cPtr_abstractExtensionGetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                               const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                               GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionGetterAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_9052 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 206)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_9052, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 208)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-getter.galgas4", 208)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas4", 208)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_abstractExtensionGetterAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an extension func: '@").add_operation (extensionGetter_definition (var_selfType_9052, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 210)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 210)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 210)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 209)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_9052, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 212)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_abstractExtensionGetterAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension func: '@").add_operation (extensionGetter_definition (var_selfType_9052, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 214)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 214)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 214)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 213)) ;
      }
    }
  }
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9689 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_abstractExtensionGetterAST temp_7 = this ;
  UpEnumerator_formalInputParameterListAST enumerator_9760 (temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList ()) ;
  while (enumerator_9760.hasCurrentObject ()) {
    var_formalParameterListForGeneration_9689.plusPlusAssignOperation (GGS_formalInputParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_9760.current (HERE).readProperty_mFormalSelector (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9760.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 222)), enumerator_9760.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_9760.current (HERE).readProperty_mFormalArgumentName (), enumerator_9760.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 220)) ;
    enumerator_9760.gotoNextObject () ;
  }
  const GGS_abstractExtensionGetterAST temp_8 = this ;
  const GGS_abstractExtensionGetterAST temp_9 = this ;
  const GGS_abstractExtensionGetterAST temp_10 = this ;
  const GGS_abstractExtensionGetterAST temp_11 = this ;
  const GGS_abstractExtensionGetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_abstractExtensionGetterForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (GGS_string ("abstract extension func ").add_operation (temp_8.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 230)), GGS_bool (true), GGS_string ("func-").add_operation (temp_9.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas4", 232)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 232)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 232)).add_operation (temp_10.readProperty_mAbstractExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas4", 232)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 232)), var_selfType_9052, temp_11.readProperty_mAbstractExtensionGetterName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_12.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 235)), var_formalParameterListForGeneration_9689, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 229)) ;
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
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 255)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@abstractExtensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_abstractExtensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas4", 275)) ;
//---
  return result_result ;
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
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 283)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), temp_2.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_3.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 282))) ;
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
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 296)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas4", 296)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 295)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 296)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-getter.galgas4", 297)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 297))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 295)) ;
  const GGS_abstractExtensionGetterForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 298)) ;
  const GGS_abstractExtensionGetterForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 299)) ;
  const GGS_abstractExtensionGetterForGeneration temp_4 = this ;
  UpEnumerator_formalInputParameterListForGeneration enumerator_13862 (temp_4.readProperty_mAbstractExtensionGetterFormalParameterList ()) ;
  while (enumerator_13862.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13862.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 301)) ;
    enumerator_13862.gotoNextObject () ;
  }
  const GGS_abstractExtensionGetterForGeneration temp_5 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_6 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_7 = this ;
  const GGS_abstractExtensionGetterForGeneration temp_8 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 304)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mAbstractExtensionGetterName (), temp_7.readProperty_mAbstractExtensionGetterFormalParameterList (), temp_8.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-abstract-getter.galgas4", 303))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_extensionGetterAST temp_0 = this ;
  const GGS_extensionGetterAST temp_1 = this ;
  result_result = GGS_string ("extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 115)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 115)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 115)) ;
//---
  return result_result ;
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
  GGS_lstring var_key_5515 = GGS_lstring::init_21__21_ (GGS_string ("extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 128)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 128)).add_operation (temp_1.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 128)), temp_2.readProperty_mExtensionGetterName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionGetterAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5515, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 129)) ;
  }
  {
  const GGS_extensionGetterAST temp_4 = this ;
  const GGS_extensionGetterAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5515, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 130)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-getter.galgas4", 130)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_extensionGetterAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-getter.galgas4", 132)).operator_not (SOURCE_FILE ("extension-getter.galgas4", 132)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_extensionGetterAST temp_8 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 133)) ;
      }
    }
  }
  const GGS_extensionGetterAST temp_9 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_6018 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubscript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionGetterAST temp_10 = this ;
  const GGS_extensionGetterAST temp_11 = this ;
  const GGS_extensionGetterAST temp_12 = this ;
  var_entry_6018.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_10.readProperty_mExtensionGetterName (), temp_11.readProperty_mExtensionGetterReturnedTypeName (), temp_12.readProperty_mExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-getter.galgas4", 143)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 139)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_6018, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 145)) ;
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

void cPtr_extensionGetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
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
  GGS_lstring var_nameForUsefulness_8113 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 185)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8113, var_nameForUsefulness_8113, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 186)) ;
  }
  const GGS_extensionGetterAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_8289 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 187)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_8289, var_nameForUsefulness_8113 COMMA_SOURCE_FILE ("extension-getter.galgas4", 188)) ;
  }
  const GGS_extensionGetterAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8493 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 190)) ;
  GGS_string var_selfObjectNameNew_8604 ;
  GGS_string var_selfObjectAccessorNew_8636 ;
  GGS_bool var_implementedAsFunctionNew_8670 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_8493, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 195)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-getter.galgas4", 195)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_selfObjectNameNew_8604 = GGS_string ("this") ;
      var_selfObjectAccessorNew_8636 = GGS_string ("this->") ;
      var_implementedAsFunctionNew_8670 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    var_selfObjectNameNew_8604 = GGS_string ("inObject") ;
    var_selfObjectAccessorNew_8636 = GGS_string ("inObject.") ;
    var_implementedAsFunctionNew_8670 = GGS_bool (true) ;
  }
  GGS_analysisContext var_analysisContextNew_9012 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameNew_8604, GGS_selfAvailability::class_func_available (var_selfType_8493, GGS_selfMutability::class_func_none (SOURCE_FILE ("extension-getter.galgas4", 209))  COMMA_SOURCE_FILE ("extension-getter.galgas4", 209)), var_selfObjectAccessorNew_8636, inCompiler COMMA_HERE) ;
  GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9630 ;
  GGS_unifiedTypeMapEntry var_returnType_9673 ;
  GGS_string var_returnVariableCppName_9694 ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9726 ;
  {
  const GGS_extensionGetterAST temp_5 = this ;
  const GGS_extensionGetterAST temp_6 = this ;
  const GGS_extensionGetterAST temp_7 = this ;
  const GGS_extensionGetterAST temp_8 = this ;
  const GGS_extensionGetterAST temp_9 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__3F__21__21__21__21_ (var_nameForUsefulness_8113, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_9012, ioArgument_ioTypeMap, temp_5.readProperty_mExtensionGetterFormalInputParameterList (), temp_6.readProperty_mExtensionGetterInstructionList (), temp_7.readProperty_mExtensionGetterReturnedVariableName (), temp_8.readProperty_mExtensionGetterReturnedTypeName (), temp_9.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_9630, var_returnType_9673, var_returnVariableCppName_9694, var_semanticInstructionListForGeneration_9726, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 212)) ;
  }
  const GGS_extensionGetterAST temp_10 = this ;
  const GGS_extensionGetterAST temp_11 = this ;
  const GGS_extensionGetterAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_extensionGetterForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_string ("extension func ").add_operation (temp_10.readProperty_mExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 229)), GGS_bool (true), GGS_string ("func-").add_operation (extensionGetter_definition (var_selfType_8493, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 231)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 231)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 231)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 231)).add_operation (temp_11.readProperty_mExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 231)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 231)), var_selfType_8493, temp_12.readProperty_mExtensionGetterName ().readProperty_string (), var_implementedAsFunctionNew_8670, var_returnType_9673, var_returnVariableCppName_9694, var_formalParameterListForGeneration_9630, extensionGetter_definition (var_selfType_8493, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 238)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9726, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-getter.galgas4", 228)) ;
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
  extensionSetter_insertKey (ioArgument_ioExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 260)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionGetterForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionGetterForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-getter.galgas4", 280)) ;
//---
  return result_result ;
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
      outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 289)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionGetterName (), temp_4.readProperty_mExtensionGetterFormalParameterList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 292)) COMMA_SOURCE_FILE ("extension-getter.galgas4", 288))) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionGetterForGeneration temp_6 = this ;
    const GGS_extensionGetterForGeneration temp_7 = this ;
    const GGS_extensionGetterForGeneration temp_8 = this ;
    const GGS_extensionGetterForGeneration temp_9 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 296)).readProperty_typeName ().readProperty_string (), temp_7.readProperty_mExtensionGetterName (), temp_8.readProperty_mExtensionGetterFormalParameterList (), temp_9.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas4", 295))) ;
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
  UpEnumerator_formalInputParameterListForGeneration enumerator_13765 (temp_0.readProperty_mExtensionGetterFormalParameterList ()) ;
  while (enumerator_13765.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13765.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 310)) ;
    enumerator_13765.gotoNextObject () ;
  }
  const GGS_extensionGetterForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 312)) ;
  const GGS_extensionGetterForGeneration temp_2 = this ;
  GGS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_13947 = temp_2.readProperty_mExtensionGetterFormalParameterList () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_extensionGetterForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      const GGS_extensionGetterForGeneration temp_5 = this ;
      var_extensionReaderFormalParameterList_13947.setter_insertAtIndex (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas4", 316)), temp_5.readProperty_mReceiverType (), GGS_string ("inObject"), GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 319)), inCompiler COMMA_HERE), GGS_bool (true), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 315)) ;
      }
      const GGS_extensionGetterForGeneration temp_6 = this ;
      const GGS_extensionGetterForGeneration temp_7 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 324)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 324)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 323)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 324)).add_operation (temp_7.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 325)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 325))  COMMA_SOURCE_FILE ("extension-getter.galgas4", 323)) ;
      GGS_string var_code_14817 ;
      {
      const GGS_extensionGetterForGeneration temp_8 = this ;
      const GGS_extensionGetterForGeneration temp_9 = this ;
      const GGS_extensionGetterForGeneration temp_10 = this ;
      const GGS_extensionGetterForGeneration temp_11 = this ;
      routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GGS_string ("extensionGetter_").add_operation (temp_8.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas4", 327)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 327)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_13947, temp_9.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_10.readProperty_mResultType (), temp_11.readProperty_mResultVarCppName (), GGS_bool (false), GGS_bool (false), var_code_14817, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 326)) ;
      }
      const GGS_extensionGetterForGeneration temp_12 = this ;
      const GGS_extensionGetterForGeneration temp_13 = this ;
      outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 339)).readProperty_typeName ().readProperty_string (), temp_13.readProperty_mExtensionGetterName (), var_code_14817 COMMA_SOURCE_FILE ("extension-getter.galgas4", 338))) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_extensionGetterForGeneration temp_14 = this ;
    extensionMethod_addHeaderFileName (temp_14.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 344)) ;
    const GGS_extensionGetterForGeneration temp_15 = this ;
    GGS_unifiedTypeMapEntry var_baseType_15160 = temp_15.readProperty_mReceiverType () ;
    GGS_bool var_searching_15206 = GGS_bool (true) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("extension-getter.galgas4", 347)).isValid ()) {
      uint32_t variant_15229 = GGS_uint::class_func_max (SOURCE_FILE ("extension-getter.galgas4", 347)).uintValue () ;
      bool loop_15229 = true ;
      while (loop_15229) {
        loop_15229 = var_searching_15206.isValid () ;
        if (loop_15229) {
          loop_15229 = var_searching_15206.boolValue () ;
        }
        if (loop_15229 && (0 == variant_15229)) {
          loop_15229 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas4", 347)) ;
        }
        if (loop_15229) {
          variant_15229 -= 1 ;
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            test_16 = extensionGetter_definition (var_baseType_15160, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 348)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-getter.galgas4", 348)).operator_not (SOURCE_FILE ("extension-getter.galgas4", 348)).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              GalgasBool test_17 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_17) {
                const GGS_extensionGetterForGeneration temp_18 = this ;
                test_17 = extensionGetter_definition (extensionGetter_definition (var_baseType_15160, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 349)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 349)).readProperty_getterMap ().getter_hasKey (temp_18.readProperty_mExtensionGetterName () COMMA_SOURCE_FILE ("extension-getter.galgas4", 349)).boolEnum () ;
                if (GalgasBool::boolTrue == test_17) {
                  var_baseType_15160 = extensionGetter_definition (var_baseType_15160, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 350)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_17) {
                var_searching_15206 = GGS_bool (false) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            var_searching_15206 = GGS_bool (false) ;
          }
        }
      }
    }
    const GGS_extensionGetterForGeneration temp_19 = this ;
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (extensionGetter_definition (var_baseType_15160, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 359)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 359)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 358)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 359)).add_operation (temp_19.readProperty_mExtensionGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-getter.galgas4", 360)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 360))  COMMA_SOURCE_FILE ("extension-getter.galgas4", 358)) ;
    GGS_string var_extensionGetterCode_16178 ;
    {
    const GGS_extensionGetterForGeneration temp_20 = this ;
    const GGS_extensionGetterForGeneration temp_21 = this ;
    const GGS_extensionGetterForGeneration temp_22 = this ;
    const GGS_extensionGetterForGeneration temp_23 = this ;
    const GGS_extensionGetterForGeneration temp_24 = this ;
    routine_generateExtensionGetter_3F__26__3F__3F__3F__3F__3F__21_ (GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 362)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas4", 362)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 362)).add_operation (GGS_string ("::getter_"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 362)).add_operation (temp_21.readProperty_mExtensionGetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas4", 362)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 362)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_13947, temp_22.readProperty_mSemanticInstructionListForGeneration (), GGS_string ("Compiler"), temp_23.readProperty_mResultType (), temp_24.readProperty_mResultVarCppName (), var_extensionGetterCode_16178, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas4", 361)) ;
    }
    const GGS_extensionGetterForGeneration temp_25 = this ;
    const GGS_extensionGetterForGeneration temp_26 = this ;
    const GGS_extensionGetterForGeneration temp_27 = this ;
    const GGS_extensionGetterForGeneration temp_28 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, extensionGetter_definition (temp_25.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas4", 372)).readProperty_typeName ().readProperty_string (), temp_26.readProperty_mExtensionGetterName (), temp_27.readProperty_mExtensionGetterFormalParameterList (), var_extensionGetterCode_16178, temp_28.readProperty_mResultType () COMMA_SOURCE_FILE ("extension-getter.galgas4", 371))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overridingExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingExtensionMethodAST temp_0 = this ;
  const GGS_overridingExtensionMethodAST temp_1 = this ;
  result_result = GGS_string ("overriding extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 96)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 96)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 96)) ;
//---
  return result_result ;
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
    test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 113)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas4", 113)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingExtensionMethodAST temp_3 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 114)) ;
      }
    }
  }
  const GGS_overridingExtensionMethodAST temp_4 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_5365 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubscript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingExtensionMethodAST temp_5 = this ;
  const GGS_overridingExtensionMethodAST temp_6 = this ;
  var_entry_5365.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_5.readProperty_mOverridingExtensionMethodName (), temp_6.readProperty_mOverridingExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("extension-overriding-method.galgas4", 123)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 120)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_5365, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 125)) ;
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

void cPtr_overridingExtensionMethodAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
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
  GGS_lstring var_nameForUsefulness_7148 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 155)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7148, var_nameForUsefulness_7148, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 156)) ;
  }
  const GGS_overridingExtensionMethodAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7334 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 157)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7334, var_nameForUsefulness_7148 COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 158)) ;
  }
  const GGS_overridingExtensionMethodAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7538 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 160)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_selfType_7538, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 162)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-method.galgas4", 162)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas4", 162)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_overridingExtensionMethodAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension proc: '@").add_operation (extensionGetter_definition (var_selfType_7538, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 163)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 163)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 163)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 163)) ;
    }
  }
  GGS_string var_baseTypeName_7876 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_7921 = extensionGetter_definition (var_selfType_7538, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 167)).readProperty_superType () ;
  GGS_formalParameterSignature var_inheritedSignature_7969 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_location var_inheritedDeclarationLocation_8035 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 169)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas4", 170)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 170)).isValid ()) {
    uint32_t variant_8083 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas4", 170)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 170)).uintValue () ;
    bool loop_8083 = true ;
    while (loop_8083) {
      loop_8083 = var_superType_7921.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas4", 171)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas4", 171)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7876.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 171)).isValid () ;
      if (loop_8083) {
        loop_8083 = var_superType_7921.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas4", 171)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas4", 171)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_7876.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 171)).boolValue () ;
      }
      if (loop_8083 && (0 == variant_8083)) {
        loop_8083 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-method.galgas4", 170)) ;
      }
      if (loop_8083) {
        variant_8083 -= 1 ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_overridingExtensionMethodAST temp_8 = this ;
          test_7 = extensionGetter_definition (var_superType_7921, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 172)).readProperty_instanceMethodMap ().getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 172)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GGS_methodQualifier var_qualifier_8476 ;
            const GGS_overridingExtensionMethodAST temp_9 = this ;
            GGS_methodKind joker_8379 ; // Joker input parameter
            GGS_bool joker_8459 ; // Joker input parameter
            GGS_string joker_8495 ; // Joker input parameter
            extensionGetter_definition (var_superType_7921, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 173)).readProperty_instanceMethodMap ().method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_8379, var_inheritedSignature_7969, var_inheritedDeclarationLocation_8035, joker_8459, var_qualifier_8476, joker_8495, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 173)) ;
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_8476.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-method.galgas4", 182)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                var_baseTypeName_7876 = extensionGetter_definition (var_superType_7921, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 183)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_7921 = extensionGetter_definition (var_superType_7921, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 186)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_baseTypeName_7876.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_overridingExtensionMethodAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GGS_string ("this proc is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 189)) ;
    }
  }
  GGS_analysisContext var_analysisContext_8859 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string ("this"), GGS_selfAvailability::class_func_available (var_selfType_7538, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-overriding-method.galgas4", 196))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 196)), GGS_string ("this->"), inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9573 ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_9620 ;
  {
  const GGS_overridingExtensionMethodAST temp_14 = this ;
  const GGS_overridingExtensionMethodAST temp_15 = this ;
  const GGS_overridingExtensionMethodAST temp_16 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_7148, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8859, ioArgument_ioTypeMap, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), temp_15.readProperty_mOverridingExtensionMethodInstructionList (), temp_16.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_9573, var_formalParameterListForGeneration_9620, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 203)) ;
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_7876.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      {
      const GGS_overridingExtensionMethodAST temp_18 = this ;
      routine_checkMethodSignatures_3F__3F__3F__3F_ (var_formalParameterListForGeneration_9620, temp_18.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_7969, var_inheritedDeclarationLocation_8035, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 216)) ;
      }
    }
  }
  const GGS_overridingExtensionMethodAST temp_19 = this ;
  const GGS_overridingExtensionMethodAST temp_20 = this ;
  const GGS_overridingExtensionMethodAST temp_21 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_overridingExtensionMethodForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_string ("override extension proc ").add_operation (temp_19.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 225)), GGS_bool (false), GGS_string ("proc-").add_operation (extensionGetter_definition (var_selfType_7538, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 227)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 227)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 227)).add_operation (temp_20.readProperty_mOverridingExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 227)), var_selfType_7538, var_baseTypeName_7876, temp_21.readProperty_mOverridingExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_9620, extensionGetter_definition (var_selfType_7538, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 232)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_9573, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 224)) ;
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
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("extension-overriding-method.galgas4", 279)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@overridingExtensionMethodForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionMethodForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                                       GGS_string & outArgument_outImplementation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_methodImplementation_13460 ;
  {
  const GGS_overridingExtensionMethodForGeneration temp_0 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_1 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_2 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_3 = this ;
  routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_0.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_1.readProperty_mExtensionMethodName (), temp_2.readProperty_mExtensionMethodFormalParameterList (), temp_3.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_13460, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 288)) ;
  }
  const GGS_overridingExtensionMethodForGeneration temp_4 = this ;
  const GGS_overridingExtensionMethodForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (inCompiler, extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 297)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mExtensionMethodName (), var_methodImplementation_13460 COMMA_SOURCE_FILE ("extension-overriding-method.galgas4", 296))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@overridingAbstractExtensionGetterAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_overridingAbstractExtensionGetterAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_1 = this ;
  result_result = GGS_string ("overriding extension func @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 154)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 154)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 154)) ;
//---
  return result_result ;
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
  ioArgument_ioExtensionOverrideDefinitionList.plusPlusAssignOperation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 169)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_overridingAbstractExtensionGetterAST temp_2 = this ;
    test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (temp_2.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 171)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 171)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_overridingAbstractExtensionGetterAST temp_3 = this ;
      ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (temp_3.readProperty_mTypeName (), GGS_extensionGetterMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 172)) ;
      }
    }
  }
  const GGS_overridingAbstractExtensionGetterAST temp_4 = this ;
  GGS_extensionGetterMapForBuildingContext_2E_element var_entry_7436 = ioArgument_ioExtensionGetterMapForBuildingContext.readSubscript__3F_searchKey (temp_4.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_overridingAbstractExtensionGetterAST temp_5 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_6 = this ;
  const GGS_overridingAbstractExtensionGetterAST temp_7 = this ;
  var_entry_7436.mProperty_mExtensionGetterMapForType.setter_insertKey (temp_5.readProperty_mAbstractExtensionGetterName (), temp_6.readProperty_mAbstractExtensionGetterReturnedTypeName (), temp_7.readProperty_mAbstractExtensionGetterFormalInputParameterList (), GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 182)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 178)) ;
  }
  {
  ioArgument_ioExtensionGetterMapForBuildingContext.setter_replaceKey (var_entry_7436, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 184)) ;
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

void cPtr_overridingAbstractExtensionGetterAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                         const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                         const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                         GGS__5B_semanticDeclarationForGeneration_5D_ & /* ioArgument__5F_ioSemanticDeclarationListForGeneration */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_overridingAbstractExtensionGetterAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_9307 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 214)) ;
  const GGS_overridingAbstractExtensionGetterAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_returnType_9389 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 216)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_selfType_9307, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 218)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 218)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 218)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_overridingAbstractExtensionGetterAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare a extension func: '@").add_operation (extensionGetter_definition (var_selfType_9307, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 219)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 219)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 219)), fixItArray4  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 219)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = extensionGetter_definition (var_selfType_9307, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 220)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_overridingAbstractExtensionGetterAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("cannot declare an abstract extension func: '@").add_operation (extensionGetter_definition (var_selfType_9307, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 221)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 221)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 221)), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 221)) ;
      }
    }
  }
  GGS_string var_baseTypeName_9971 = GGS_string::makeEmptyString () ;
  GGS_unifiedTypeMapEntry var_superType_10016 = extensionGetter_definition (var_selfType_9307, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 225)).readProperty_superType () ;
  GGS_functionSignature var_inheritedSignature_10083 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_inheritedReturnType_10135 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 227)) ;
  GGS_location var_inheritedDeclarationLocation_10179 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 228)) ;
  if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 229)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 229)).isValid ()) {
    uint32_t variant_10227 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 229)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 229)).uintValue () ;
    bool loop_10227 = true ;
    while (loop_10227) {
      loop_10227 = var_superType_10016.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 230)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 230)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_9971.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 230)).isValid () ;
      if (loop_10227) {
        loop_10227 = var_superType_10016.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 230)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 230)).operator_and (GGS_bool (ComparisonKind::equal, var_baseTypeName_9971.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 230)).boolValue () ;
      }
      if (loop_10227 && (0 == variant_10227)) {
        loop_10227 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 229)) ;
      }
      if (loop_10227) {
        variant_10227 -= 1 ;
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_overridingAbstractExtensionGetterAST temp_9 = this ;
          test_8 = extensionGetter_definition (var_superType_10016, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 231)).readProperty_getterMap ().getter_hasKey (temp_9.readProperty_mAbstractExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 231)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_methodQualifier var_qualifier_10631 ;
            const GGS_overridingAbstractExtensionGetterAST temp_10 = this ;
            GGS_methodKind joker_10504 ; // Joker input parameter
            GGS_bool joker_10584 ; // Joker input parameter
            GGS_string joker_10650 ; // Joker input parameter
            extensionGetter_definition (var_superType_10016, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 232)).readProperty_getterMap ().method_searchKey (temp_10.readProperty_mAbstractExtensionGetterName (), joker_10504, var_inheritedSignature_10083, var_inheritedDeclarationLocation_10179, joker_10584, var_inheritedReturnType_10135, var_qualifier_10631, joker_10650, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 232)) ;
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::lowerOrEqual, var_qualifier_10631.objectCompare (GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 242)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                var_baseTypeName_9971 = extensionGetter_definition (var_superType_10016, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 243)).readProperty_typeName ().readProperty_string () ;
              }
            }
          }
        }
        var_superType_10016 = extensionGetter_definition (var_superType_10016, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 246)).readProperty_superType () ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, var_baseTypeName_9971.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_overridingAbstractExtensionGetterAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GGS_string ("this func is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 249)) ;
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_baseTypeName_9971.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS_formalInputParameterListForGeneration var_formalParameterListForGeneration_11035 = GGS_formalInputParameterListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_overridingAbstractExtensionGetterAST temp_16 = this ;
      UpEnumerator_formalInputParameterListAST enumerator_11138 (temp_16.readProperty_mAbstractExtensionGetterFormalInputParameterList ()) ;
      while (enumerator_11138.hasCurrentObject ()) {
        var_formalParameterListForGeneration_11035.plusPlusAssignOperation (GGS_formalInputParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_11138.current (HERE).readProperty_mFormalSelector (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11138.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 257)), enumerator_11138.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_11138.current (HERE).readProperty_mFormalArgumentName (), enumerator_11138.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 255)) ;
        enumerator_11138.gotoNextObject () ;
      }
      {
      const GGS_overridingAbstractExtensionGetterAST temp_17 = this ;
      routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (var_formalParameterListForGeneration_11035, var_returnType_9389, temp_17.readProperty_mAbstractExtensionGetterName ().readProperty_location (), var_inheritedSignature_10083, var_inheritedReturnType_10135, var_inheritedDeclarationLocation_10179, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 263)) ;
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
  extensionSetter_insertKey (ioArgument_ioOverridingAbstractExtensionGetterListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas4", 291)) ;
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
    const GGS_equatableExtensionMap_2E_element var_node_3329 = ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_location var_location_3386 = ioArgument_ioEquatableExtensionMap.getter_locationForKey (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 84)) ;
      {
      GGS_equatableComparableExtension joker_3502 ; // Joker input parameter
      ioArgument_ioEquatableExtensionMap.setter_removeKey (constinArgument_inTypeName, joker_3502, inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 85)) ;
      }
      GGS_bool var_currentlyEquatable_3514 = ioArgument_ioFeatures.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 86)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 86)) ;
      GGS_bool var_currentlyComparable_3576 = ioArgument_ioFeatures.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 87)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 87)) ;
      switch (var_node_3329.readProperty_mExtension ().enumValue ()) {
      case GGS_equatableComparableExtension::Enumeration::invalid:
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_equatable:
        {
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_currentlyComparable_3576.boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (var_location_3386, GGS_string ("useless extension, the type is already declared comparable"), fixItArray2  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 91)) ;
            }
          }
          if (GalgasBool::boolFalse == test_1) {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = var_currentlyEquatable_3514.boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GenericArray <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (var_location_3386, GGS_string ("useless extension, the type is already declared equatable"), fixItArray4  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 93)) ;
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = constinArgument_inAcceptEquatable.boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  ioArgument_ioFeatures.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 95)), inCompiler  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 95)) ;
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (var_location_3386, GGS_string ("useless extension, the type does not support %equatable"), fixItArray6  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 97)) ;
                GenericArray <FixItDescription> fixItArray7 ;
                inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type declaration is here"), fixItArray7  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 98)) ;
              }
            }
          }
        }
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_comparable:
        {
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_currentlyComparable_3576.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_location_3386, GGS_string ("useless extension, the type is already declared comparable"), fixItArray9  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 102)) ;
            }
          }
          if (GalgasBool::boolFalse == test_8) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = constinArgument_inAcceptComparable.boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                ioArgument_ioFeatures.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 104)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("extension-equatable-comparable.galgas4", 104)) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 104)), inCompiler  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 104)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GenericArray <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (var_location_3386, GGS_string ("useless extension, the type does not support %comparable"), fixItArray11  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 106)) ;
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("type declaration is here"), fixItArray12  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 107)) ;
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
  GGS_string result_result ; // Returned variable
  const GGS_equatableExtensionAST temp_0 = this ;
  result_result = function_equatableNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 137)).readProperty_string () ;
//---
  return result_result ;
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
  GGS_lstring var_key_6307 = GGS_lstring::init_21__21_ (callExtensionGetter_keyRepresentation ((const cPtr_equatableExtensionAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 150)), temp_1.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_equatableExtensionAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6307, temp_2, inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 151)) ;
  }
  {
  const GGS_equatableExtensionAST temp_3 = this ;
  const GGS_equatableExtensionAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6307, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 152)), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 152)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_equatableExtensionAST temp_6 = this ;
    const GGS_equatableExtensionMap_2E_element var_node_6550 = ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (temp_6.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioEquatableExtensionMap.readSubscript__3F_ (temp_6.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_5 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_5) {
      const GGS_equatableExtensionAST temp_7 = this ;
      switch (temp_7.readProperty_mExtension ().enumValue ()) {
      case GGS_equatableComparableExtension::Enumeration::invalid:
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_equatable:
        {
          switch (var_node_6550.readProperty_mExtension ().enumValue ()) {
          case GGS_equatableComparableExtension::Enumeration::invalid:
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_equatable:
            {
              const GGS_equatableExtensionAST temp_8 = this ;
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (temp_8.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is already equatable"), fixItArray9  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 159)) ;
              const GGS_equatableExtensionAST temp_10 = this ;
              GenericArray <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_10.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 160)), GGS_string ("equatable extension declaration is here"), fixItArray11  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 160)) ;
            }
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_comparable:
            {
              const GGS_equatableExtensionAST temp_12 = this ;
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mTypeName ().readProperty_location (), GGS_string ("useless declaration, this type is already comparable"), fixItArray13  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 162)) ;
              const GGS_equatableExtensionAST temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_14.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 163)), GGS_string ("comparable extension declaration is here"), fixItArray15  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 163)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_equatableComparableExtension::Enumeration::enum_comparable:
        {
          switch (var_node_6550.readProperty_mExtension ().enumValue ()) {
          case GGS_equatableComparableExtension::Enumeration::invalid:
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_equatable:
            {
              const GGS_equatableExtensionAST temp_16 = this ;
              GenericArray <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_16.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 168)), GGS_string ("useless declaration, this type is already comparable"), fixItArray17  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 168)) ;
              const GGS_equatableExtensionAST temp_18 = this ;
              GenericArray <FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (temp_18.readProperty_mTypeName ().readProperty_location (), GGS_string ("comparable extension declaration is here"), fixItArray19  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 169)) ;
            }
            break ;
          case GGS_equatableComparableExtension::Enumeration::enum_comparable:
            {
              const GGS_equatableExtensionAST temp_20 = this ;
              GenericArray <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_20.readProperty_mTypeName ().readProperty_location (), GGS_string ("this type is already comparable"), fixItArray21  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 171)) ;
              const GGS_equatableExtensionAST temp_22 = this ;
              GenericArray <FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticError (ioArgument_ioEquatableExtensionMap.getter_locationForKey (temp_22.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 172)), GGS_string ("comparable extension declaration is here"), fixItArray23  COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 172)) ;
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
    ioArgument_ioEquatableExtensionMap.setter_insertKey (temp_24.readProperty_mTypeName (), temp_25.readProperty_mExtension (), inCompiler COMMA_SOURCE_FILE ("extension-equatable-comparable.galgas4", 176)) ;
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

void cPtr_equatableExtensionAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
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
  GGS_lstring var_key_5825 = GGS_lstring::init_21__21_ (GGS_string ("extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 140)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 140)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 140)), temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5825, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 143)) ;
  }
  {
  const GGS_abstractExtensionMethodAST temp_4 = this ;
  const GGS_abstractExtensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5825, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 144)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 144)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_abstractExtensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 146)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas4", 146)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_abstractExtensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 147)) ;
      }
    }
  }
  const GGS_abstractExtensionMethodAST temp_9 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_6362 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubscript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_abstractExtensionMethodAST temp_10 = this ;
  const GGS_abstractExtensionMethodAST temp_11 = this ;
  var_entry_6362.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mAbstractExtensionMethodName (), temp_11.readProperty_mAbstractExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isVirtualAbstract (SOURCE_FILE ("extension-abstract-method.galgas4", 156)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 153)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_6362, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 158)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@abstractExtensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_abstractExtensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  const GGS_abstractExtensionMethodAST temp_1 = this ;
  result_result = GGS_string ("abstract extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 171)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 171)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 171)) ;
//---
  return result_result ;
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

void cPtr_abstractExtensionMethodAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                               const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                               GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_abstractExtensionMethodAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8445 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 197)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_selfType_8445, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 199)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("extension-abstract-method.galgas4", 199)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas4", 199)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_abstractExtensionMethodAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare a extension proc: '@").add_operation (extensionGetter_definition (var_selfType_8445, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 200)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 200)).add_operation (GGS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 200)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 200)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = extensionGetter_definition (var_selfType_8445, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 201)).readProperty_isConcrete ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_abstractExtensionMethodAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mAbstractExtensionMethodName ().readProperty_location (), GGS_string ("cannot declare an abstract extension proc: '@").add_operation (extensionGetter_definition (var_selfType_8445, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 202)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 202)).add_operation (GGS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 202)), fixItArray6  COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 202)) ;
      }
    }
  }
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_9010 = GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_abstractExtensionMethodAST temp_7 = this ;
  UpEnumerator_formalParameterListAST enumerator_9114 (temp_7.readProperty_mAbstractExtensionMethodFormalParameterList ()) ;
  while (enumerator_9114.hasCurrentObject ()) {
    var_formalParameterListForGeneration_9010.plusPlusAssignOperation (GGS_formalParameterListForGeneration_2E_element::init_21__21__21__21__21_ (enumerator_9114.current (HERE).readProperty_mFormalSelector (), enumerator_9114.current (HERE).readProperty_mFormalArgumentPassingMode (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9114.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 210)), enumerator_9114.current (HERE).readProperty_mFormalArgumentName (), enumerator_9114.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 207)) ;
    enumerator_9114.gotoNextObject () ;
  }
  const GGS_abstractExtensionMethodAST temp_8 = this ;
  const GGS_abstractExtensionMethodAST temp_9 = this ;
  const GGS_abstractExtensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_abstractExtensionMethodForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21_ (GGS_string ("abstract extension proc ").add_operation (temp_8.readProperty_mAbstractExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 217)), GGS_bool (true), GGS_string ("proc-").add_operation (extensionGetter_definition (var_selfType_8445, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 219)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas4", 219)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 219)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 219)).add_operation (temp_9.readProperty_mAbstractExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas4", 219)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 219)), var_selfType_8445, temp_10.readProperty_mAbstractExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_9010, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 216)) ;
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
  extensionSetter_insertKey (ioArgument_ioAbstractExtensionMethodListMapAST, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 241)) ;
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
  outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 265)).readProperty_typeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionMethodName (), temp_2.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 264))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@abstractExtensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_abstractExtensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas4", 274)) ;
//---
  return result_result ;
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
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (extensionGetter_definition (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 283)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas4", 283)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 282)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 283)).add_operation (temp_1.readProperty_mAbstractExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-abstract-method.galgas4", 284)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 284))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 282)) ;
  const GGS_abstractExtensionMethodForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 285)) ;
  const GGS_abstractExtensionMethodForGeneration temp_3 = this ;
  UpEnumerator_formalParameterListForGeneration enumerator_13045 (temp_3.readProperty_mAbstractExtensionMethodFormalParameterList ()) ;
  while (enumerator_13045.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13045.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 287)) ;
    enumerator_13045.gotoNextObject () ;
  }
  const GGS_abstractExtensionMethodForGeneration temp_4 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_5 = this ;
  const GGS_abstractExtensionMethodForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, temp_4.readProperty_mReceiverType (), temp_5.readProperty_mAbstractExtensionMethodName (), temp_6.readProperty_mAbstractExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-abstract-method.galgas4", 289))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionMethodAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_extensionMethodAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_extensionMethodAST temp_0 = this ;
  const GGS_extensionMethodAST temp_1 = this ;
  result_result = GGS_string ("extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 87)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 87)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 87)) ;
//---
  return result_result ;
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
  GGS_lstring var_key_4491 = GGS_lstring::init_21__21_ (GGS_string ("extension proc @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 101)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 101)).add_operation (temp_1.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 101)), temp_2.readProperty_mExtensionMethodName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionMethodAST temp_3 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4491, temp_3, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 104)) ;
  }
  {
  const GGS_extensionMethodAST temp_4 = this ;
  const GGS_extensionMethodAST temp_5 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4491, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 105)), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("extension-method.galgas4", 105)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_extensionMethodAST temp_7 = this ;
    test_6 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (temp_7.readProperty_mTypeName ().readProperty_string () COMMA_SOURCE_FILE ("extension-method.galgas4", 107)).operator_not (SOURCE_FILE ("extension-method.galgas4", 107)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      const GGS_extensionMethodAST temp_8 = this ;
      ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (temp_8.readProperty_mTypeName (), GGS_extensionMethodMapForType::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 108)) ;
      }
    }
  }
  const GGS_extensionMethodAST temp_9 = this ;
  GGS_extensionMethodMapForBuildingContext_2E_element var_entry_5013 = ioArgument_ioExtensionMethodMapForBuildingContext.readSubscript__3F_searchKey (temp_9.readProperty_mTypeName (), inCompiler COMMA_HERE) ;
  {
  const GGS_extensionMethodAST temp_10 = this ;
  const GGS_extensionMethodAST temp_11 = this ;
  var_entry_5013.mProperty_mExtensionMethodMapForType.setter_insertKey (temp_10.readProperty_mExtensionMethodName (), temp_11.readProperty_mExtensionMethodFormalParameterList (), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("extension-method.galgas4", 117)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 114)) ;
  }
  {
  ioArgument_ioExtensionMethodMapForBuildingContext.setter_replaceKey (var_entry_5013, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 119)) ;
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

void cPtr_extensionMethodAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument__5F_ioUsefulnessRootEntities */,
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
  GGS_lstring var_nameForUsefulness_6915 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 151)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6915, var_nameForUsefulness_6915, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 152)) ;
  }
  const GGS_extensionMethodAST temp_2 = this ;
  GGS_lstring var_typeNameForUsefulness_7095 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 153)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7095, var_nameForUsefulness_6915 COMMA_SOURCE_FILE ("extension-method.galgas4", 154)) ;
  }
  const GGS_extensionMethodAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_7306 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 156)) ;
  GGS_string var_selfObjectNameString_7381 ;
  GGS_string var_selfObjectPropertyAccessorString_7418 ;
  GGS_bool var_implementedAsFunction_7465 ;
  GGS_bool var_isClass_7530 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_selfType_7306, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 161)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_classType (SOURCE_FILE ("extension-method.galgas4", 161)))) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_isClass_7530.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_selfObjectNameString_7381 = GGS_string ("this") ;
      var_selfObjectPropertyAccessorString_7418 = GGS_string ("this->") ;
      var_implementedAsFunction_7465 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    var_selfObjectNameString_7381 = GGS_string ("inObject") ;
    var_selfObjectPropertyAccessorString_7418 = GGS_string ("inObject.") ;
    var_implementedAsFunction_7465 = GGS_bool (true) ;
  }
  GGS_analysisContext var_analysisContextNew_7911 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfObjectNameString_7381, GGS_selfAvailability::class_func_available (var_selfType_7306, GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (SOURCE_FILE ("extension-method.galgas4", 176))  COMMA_SOURCE_FILE ("extension-method.galgas4", 176)), var_selfObjectPropertyAccessorString_7418, inCompiler COMMA_HERE) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8650 ;
  GGS_formalParameterListForGeneration var_formalParameterListForGeneration_8699 ;
  {
  const GGS_extensionMethodAST temp_5 = this ;
  const GGS_extensionMethodAST temp_6 = this ;
  const GGS_extensionMethodAST temp_7 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_6915, ioArgument_ioUsefulEntitiesGraph, var_analysisContextNew_7911, ioArgument_ioTypeMap, temp_5.readProperty_mExtensionMethodFormalParameterList (), temp_6.readProperty_mExtensionMethodInstructionList (), temp_7.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_8650, var_formalParameterListForGeneration_8699, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 183)) ;
  }
  const GGS_extensionMethodAST temp_8 = this ;
  const GGS_extensionMethodAST temp_9 = this ;
  const GGS_extensionMethodAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_extensionMethodForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_string ("extension proc ").add_operation (temp_8.readProperty_mExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 196)), GGS_bool (true), GGS_string ("proc-").add_operation (extensionGetter_definition (var_selfType_7306, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 198)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 198)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 198)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 198)).add_operation (temp_9.readProperty_mExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 198)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 198)), var_selfType_7306, temp_10.readProperty_mExtensionMethodName ().readProperty_string (), var_implementedAsFunction_7465, var_formalParameterListForGeneration_8699, extensionGetter_definition (var_selfType_7306, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 203)).readProperty_allTypedPropertyList (), var_semanticInstructionListForGeneration_8650, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extension-method.galgas4", 195)) ;
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
  extensionSetter_insertKey (ioArgument_ioExtensionMethodListMap, temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 230)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@extensionMethodForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_extensionMethodForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  result_result = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("extension-method.galgas4", 249)) ;
//---
  return result_result ;
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
      outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, extensionGetter_definition (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 258)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_mExtensionMethodName (), temp_4.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas4", 257))) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionMethodForGeneration temp_5 = this ;
    const GGS_extensionMethodForGeneration temp_6 = this ;
    const GGS_extensionMethodForGeneration temp_7 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, extensionGetter_definition (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 264)).readProperty_typeName ().readProperty_string (), temp_6.readProperty_mExtensionMethodName (), temp_7.readProperty_mExtensionMethodFormalParameterList () COMMA_SOURCE_FILE ("extension-method.galgas4", 263))) ;
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
      GGS_formalParameterListForGeneration var_extensionMethodFormalParameterList_12887 = temp_2.readProperty_mExtensionMethodFormalParameterList () ;
      {
      const GGS_extensionMethodForGeneration temp_3 = this ;
      var_extensionMethodFormalParameterList_12887.setter_insertAtIndex (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas4", 279)), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.galgas4", 280)), temp_3.readProperty_mReceiverType (), GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 282)), inCompiler COMMA_HERE), GGS_string ("inObject"), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 278)) ;
      }
      const GGS_extensionMethodForGeneration temp_4 = this ;
      const GGS_extensionMethodForGeneration temp_5 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (extensionGetter_definition (temp_4.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 286)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 286)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 286)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 286)).add_operation (temp_5.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 286)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 286))  COMMA_SOURCE_FILE ("extension-method.galgas4", 286)) ;
      GGS_string var_code_13828 ;
      {
      const GGS_extensionMethodForGeneration temp_6 = this ;
      const GGS_extensionMethodForGeneration temp_7 = this ;
      routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (GGS_bool (false), GGS_string ("extensionMethod_").add_operation (temp_6.readProperty_mExtensionMethodName ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas4", 289)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 289)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_12887, temp_7.readProperty_mSemanticInstructionListForGeneration (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_13828, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 287)) ;
      }
      const GGS_extensionMethodForGeneration temp_8 = this ;
      const GGS_extensionMethodForGeneration temp_9 = this ;
      outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 301)).readProperty_typeName ().readProperty_string (), temp_9.readProperty_mExtensionMethodName (), var_code_13828 COMMA_SOURCE_FILE ("extension-method.galgas4", 300))) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_extensionMethodForGeneration temp_10 = this ;
    extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 306)) ;
    const GGS_extensionMethodForGeneration temp_11 = this ;
    UpEnumerator_formalParameterListForGeneration enumerator_14146 (temp_11.readProperty_mExtensionMethodFormalParameterList ()) ;
    while (enumerator_14146.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_14146.current (HERE).readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 308)) ;
      enumerator_14146.gotoNextObject () ;
    }
    const GGS_extensionMethodForGeneration temp_12 = this ;
    GGS_unifiedTypeMapEntry var_baseType_14291 = temp_12.readProperty_mReceiverType () ;
    GGS_bool var_searching_14335 = GGS_bool (true) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas4", 312)).isValid ()) {
      uint32_t variant_14356 = GGS_uint::class_func_max (SOURCE_FILE ("extension-method.galgas4", 312)).uintValue () ;
      bool loop_14356 = true ;
      while (loop_14356) {
        loop_14356 = var_searching_14335.isValid () ;
        if (loop_14356) {
          loop_14356 = var_searching_14335.boolValue () ;
        }
        if (loop_14356 && (0 == variant_14356)) {
          loop_14356 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas4", 312)) ;
        }
        if (loop_14356) {
          variant_14356 -= 1 ;
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            test_13 = extensionGetter_definition (var_baseType_14291, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 313)).readProperty_superType ().getter_isNull (SOURCE_FILE ("extension-method.galgas4", 313)).operator_not (SOURCE_FILE ("extension-method.galgas4", 313)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                const GGS_extensionMethodForGeneration temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_14291, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 314)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 314)).readProperty_instanceMethodMap ().getter_hasKey (temp_15.readProperty_mExtensionMethodName () COMMA_SOURCE_FILE ("extension-method.galgas4", 314)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  var_baseType_14291 = extensionGetter_definition (var_baseType_14291, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 315)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_14) {
                var_searching_14335 = GGS_bool (false) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_13) {
            var_searching_14335 = GGS_bool (false) ;
          }
        }
      }
    }
    const GGS_extensionMethodForGeneration temp_16 = this ;
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (extensionGetter_definition (var_baseType_14291, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 324)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 324)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 324)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 324)).add_operation (temp_16.readProperty_mExtensionMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-method.galgas4", 325)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 325))  COMMA_SOURCE_FILE ("extension-method.galgas4", 323)) ;
    GGS_string var_methodImplementation_15110 ;
    {
    const GGS_extensionMethodForGeneration temp_17 = this ;
    const GGS_extensionMethodForGeneration temp_18 = this ;
    const GGS_extensionMethodForGeneration temp_19 = this ;
    const GGS_extensionMethodForGeneration temp_20 = this ;
    routine_generateExtensionMethodNew_3F__26__3F__3F__3F__21_ (temp_17.readProperty_mReceiverType (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionMethodName (), temp_19.readProperty_mExtensionMethodFormalParameterList (), temp_20.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_15110, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas4", 326)) ;
    }
    const GGS_extensionMethodForGeneration temp_21 = this ;
    const GGS_extensionMethodForGeneration temp_22 = this ;
    const GGS_extensionMethodForGeneration temp_23 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, extensionGetter_definition (temp_21.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas4", 335)).readProperty_typeName ().readProperty_string (), temp_22.readProperty_mExtensionMethodName (), temp_23.readProperty_mExtensionMethodFormalParameterList (), var_methodImplementation_15110 COMMA_SOURCE_FILE ("extension-method.galgas4", 334))) ;
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
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  UpEnumerator_range enumerator_1973 (GGS_range (GGS_uint (uint32_t (0U)), constinArgument_inString.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 40)).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 40)))) ;
  while (enumerator_1973.hasCurrentObject ()) {
    GGS_char var_c_1990 = constinArgument_inString.getter_characterAtIndex (enumerator_1973.current (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 41)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (95)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        result_result.plusAssignOperation(GGS_string ("\\_"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 43)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (123)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          result_result.plusAssignOperation(GGS_string ("\\{"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 45)) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (125)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            result_result.plusAssignOperation(GGS_string ("\\}"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 47)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (38)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              result_result.plusAssignOperation(GGS_string ("\\&"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 49)) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (35)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                result_result.plusAssignOperation(GGS_string ("\\#"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 51)) ;
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (36)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  result_result.plusAssignOperation(GGS_string ("\\$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 53)) ;
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                GalgasBool test_6 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_6) {
                  test_6 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (94)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_6) {
                    result_result.plusAssignOperation(GGS_string ("\\verb=^="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 55)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_6) {
                  GalgasBool test_7 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_7) {
                    test_7 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (37)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_7) {
                      result_result.plusAssignOperation(GGS_string ("\\verb=%="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 57)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_7) {
                    GalgasBool test_8 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_8) {
                      test_8 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (126)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_8) {
                        result_result.plusAssignOperation(GGS_string ("$\\sim$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 59)) ;
                      }
                    }
                    if (GalgasBool::boolFalse == test_8) {
                      GalgasBool test_9 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_9) {
                        test_9 = GGS_bool (ComparisonKind::equal, var_c_1990.objectCompare (GGS_char (utf32 (94)))).boolEnum () ;
                        if (GalgasBool::boolTrue == test_9) {
                          result_result.plusAssignOperation(GGS_string ("$\\wedge$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 61)) ;
                        }
                      }
                      if (GalgasBool::boolFalse == test_9) {
                        result_result.plusAssignOperation(var_c_1990.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 63)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 63)) ;
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
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_escapeForTex [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_escapeForTex (Compiler * inCompiler,
                                                          const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                          const GGS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_escapeForTex (operand0,
                                inCompiler
                                COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_escapeForTex ("escapeForTex",
                                                              functionWithGenericHeader_escapeForTex,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              1,
                                                              functionArgs_escapeForTex) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitProductionRulesInTexFile?????'
//
//--------------------------------------------------------------------------------------------------

void routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inProductDirectory,
                                                               const GGS_string constinArgument_inGrammarComponentName,
                                                               const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                                               const GGS_syntaxComponentListForGrammarAnalysis constinArgument_inSyntaxComponentListForGrammarAnalysis,
                                                               const GGS_lstring constinArgument_inStartSymbol,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_texDocumentFilePath_3066 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 78)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 78)).add_operation (GGS_string (".document.tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 78)) ;
  var_texDocumentFilePath_3066.getter_deletingLastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas4", 79)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 79)) ;
  GGS_string var_document_3234 = GGS_string (filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (inCompiler, constinArgument_inGrammarComponentName, function_escapeForTex (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 82)) COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 80))) ;
  GGS_bool joker_3443 ; // Joker input parameter
  var_document_3234.method_writeToFileWhenDifferentContents (var_texDocumentFilePath_3066, joker_3443, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 84)) ;
  GGS_string var_texFilePath_3453 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 85)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 85)).add_operation (GGS_string (".tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 85)) ;
  GGS_string var_s_3539 = GGS_string::makeEmptyString () ;
  GGS_uint var_startSymbolIndex_3614 ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_3632 ; // Joker input parameter
  constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (constinArgument_inStartSymbol, var_startSymbolIndex_3614, joker_3632, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 87)) ;
  var_s_3539.plusAssignOperation(GGS_string ("\\startSymbol{").add_operation (function_escapeForTex (constinArgument_inStartSymbol.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 88)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 88)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 88)).add_operation (var_startSymbolIndex_3614.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 88)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 88)).add_operation (GGS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 88)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 88)) ;
  var_s_3539.plusAssignOperation(GGS_string ("\\nonTerminalSummaryStart "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 89)) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3784 (constinArgument_inNonTerminalMapForGrammarAnalysis) ;
  while (enumerator_3784.hasCurrentObject ()) {
    var_s_3539.plusAssignOperation(GGS_string ("\\nonTerminalSummary{").add_operation (function_escapeForTex (enumerator_3784.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 91)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 91)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 91)).add_operation (enumerator_3784.current (HERE).readProperty_mNonTerminalIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 91)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 91)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 91)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 91)) ;
    enumerator_3784.gotoNextObject () ;
    if (enumerator_3784.hasCurrentObject ()) {
      var_s_3539.plusAssignOperation(GGS_string ("\\nonTerminalSummarySeparator "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 92)) ;
    }
  }
  var_s_3539.plusAssignOperation(GGS_string ("\\nonTerminalSummaryEnd "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 94)) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_4045 (constinArgument_inNonTerminalMapForGrammarAnalysis) ;
  while (enumerator_4045.hasCurrentObject ()) {
    var_s_3539.plusAssignOperation(GGS_string ("\\nonTerminalSection{").add_operation (function_escapeForTex (enumerator_4045.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 96)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 96)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 96)).add_operation (enumerator_4045.current (HERE).readProperty_mNonTerminalIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 96)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 96)).add_operation (GGS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 96)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 96)) ;
    UpEnumerator_syntaxComponentListForGrammarAnalysis enumerator_4226 (constinArgument_inSyntaxComponentListForGrammarAnalysis) ;
    while (enumerator_4226.hasCurrentObject ()) {
      UpEnumerator_productionRuleListForGrammarAnalysis enumerator_4313 (enumerator_4226.current (HERE).readProperty_mProductionRulesList ()) ;
      while (enumerator_4313.hasCurrentObject ()) {
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = GGS_bool (ComparisonKind::equal, enumerator_4313.current (HERE).readProperty_mLeftNonterminalSymbol ().readProperty_string ().objectCompare (enumerator_4045.current (HERE).readProperty_lkey ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GalgasBool test_1 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_1) {
              test_1 = extensionGetter_displayVertically (enumerator_4313.current (HERE).readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 100)).boolEnum () ;
              if (GalgasBool::boolTrue == test_1) {
                extensionMethod_displayRuleVertically (enumerator_4313.current (HERE), enumerator_4226.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), var_s_3539, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 101)) ;
              }
            }
            if (GalgasBool::boolFalse == test_1) {
              extensionMethod_displayRule (enumerator_4313.current (HERE), enumerator_4226.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), var_s_3539, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 103)) ;
            }
          }
        }
        enumerator_4313.gotoNextObject () ;
      }
      enumerator_4226.gotoNextObject () ;
    }
    enumerator_4045.gotoNextObject () ;
  }
  GGS_bool joker_4792 ; // Joker input parameter
  var_s_3539.method_writeToFileWhenDifferentContents (var_texFilePath_3453, joker_4792, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 109)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nonTerminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_nonTerminalInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS_rowList & ioArgument_ioRowList,
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
  GGS_string var_nodeDefinition_11662 = GGS_string ("[nonterminal] {\\nonTerminalSymbol{").add_operation (function_escapeForTex (temp_0.readProperty_mNonterminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 327)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 327)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 327)).add_operation (temp_1.readProperty_mNonterminalSymbolIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 328)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 328)).add_operation (GGS_string ("}}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 328)) ;
  GGS_string var_nodeName_11928 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, var_nodeDefinition_11662, constinArgument_inRow, ioArgument_ioColumn, var_nodeName_11928, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 329)) ;
  }
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 335)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 335)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 335)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 335)).add_operation (var_nodeName_11928, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 335)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 335)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 335)) ;
  ioArgument_ioCurrentNode = var_nodeName_11928 ;
  ioArgument_ioArrowShape = GGS_string ("--") ;
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 338)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selectInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS_rowList & ioArgument_ioRowList,
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
      GGS_string var_markerStartNodeName_12729 ;
      {
      const GGS_selectInstructionForGrammarAnalysis temp_1 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {SS").add_operation (temp_1.readProperty_mSelectBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 356)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 356)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 356)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 356)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_12729, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 355)) ;
      }
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 361)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 361)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 361)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 361)).add_operation (var_markerStartNodeName_12729, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 361)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 361)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 361)) ;
      ioArgument_ioCurrentNode = var_markerStartNodeName_12729 ;
      ioArgument_ioArrowShape = GGS_string ("--") ;
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 364)) ;
    }
  }
  GGS_string var_startNodeName_13076 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_13076, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 367)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 368)) ;
  const GGS_selectInstructionForGrammarAnalysis temp_2 = this ;
  GGS_branchListForGrammarAnalysis var_branches_13137 = temp_2.readProperty_mSelectBranchList () ;
  GGS_syntaxInstructionListForGrammarAnalysis var_brancheZero_13240 ;
  {
  var_branches_13137.setter_popFirst (var_brancheZero_13240, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 371)) ;
  }
  GGS_uint var_branchZeroColumn_13259 = ioArgument_ioColumn ;
  GGS_uint var_maxUsedRowIndex_13293 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_13240, ioArgument_ioRowList, constinArgument_inRow, var_branchZeroColumn_13259, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_13293, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 374)) ;
  GGS_uint var_endColumn_13561 = var_branchZeroColumn_13259 ;
  GGS_stringlist var_endingNodes_13639 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_branchListForGrammarAnalysis enumerator_13673 (var_branches_13137) ;
  while (enumerator_13673.hasCurrentObject ()) {
    var_maxUsedRowIndex_13293.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 388)) ;
    GGS_uint var_branchColumn_13718 = ioArgument_ioColumn ;
    GGS_string var_currentNode_13750 = var_startNodeName_13076 ;
    GGS_string var_arrowStyle_13786 = GGS_string ("|-") ;
    extensionMethod_tikzNodeForSyntaxInstruction (enumerator_13673.current (HERE).readProperty_mSyntaxInstructionList (), ioArgument_ioRowList, var_maxUsedRowIndex_13293, var_branchColumn_13718, var_currentNode_13750, var_arrowStyle_13786, ioArgument_ioArrows, var_maxUsedRowIndex_13293, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 392)) ;
    var_endingNodes_13639.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_currentNode_13750, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 402)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::lowerThan, var_endColumn_13561.objectCompare (var_branchColumn_13718)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_endColumn_13561 = var_branchColumn_13718 ;
      }
    }
    enumerator_13673.gotoNextObject () ;
  }
  ioArgument_ioColumn = var_endColumn_13561 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::lowerThan, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_13293)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_13293 ;
    }
  }
  GGS_string var_endNodeName_14435 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_endNodeName_14435, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 412)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 413)) ;
  ioArgument_ioArrowShape = GGS_string ("--") ;
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 415)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 415)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 415)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 415)).add_operation (var_endNodeName_14435, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 415)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 415)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 415)) ;
  ioArgument_ioCurrentNode = var_endNodeName_14435 ;
  UpEnumerator_stringlist enumerator_14650 (var_endingNodes_13639) ;
  while (enumerator_14650.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (enumerator_14650.current (HERE).readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 419)).add_operation (GGS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 419)).add_operation (var_endNodeName_14435, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 419)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 419)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 419)) ;
    enumerator_14650.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = constinArgument_inDebug.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_string var_markerEndNodeName_14955 ;
      {
      const GGS_selectInstructionForGrammarAnalysis temp_6 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {SE").add_operation (temp_6.readProperty_mSelectBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 424)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 424)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 424)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 424)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_14955, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 423)) ;
      }
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 429)) ;
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 430)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 430)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 430)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 430)).add_operation (var_markerEndNodeName_14955, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 430)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 430)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 430)) ;
      ioArgument_ioCurrentNode = var_markerEndNodeName_14955 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@repeatInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS_rowList & ioArgument_ioRowList,
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
      GGS_string var_markerStartNodeName_15775 ;
      {
      const GGS_repeatInstructionForGrammarAnalysis temp_1 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {RS").add_operation (temp_1.readProperty_mRepeatBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 450)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 450)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 450)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 450)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_15775, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 449)) ;
      }
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 455)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 455)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 455)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 455)).add_operation (var_markerStartNodeName_15775, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 455)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 455)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 455)) ;
      ioArgument_ioCurrentNode = var_markerStartNodeName_15775 ;
      ioArgument_ioArrowShape = GGS_string ("--") ;
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 458)) ;
    }
  }
  GGS_string var_returnNodeName_16123 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_returnNodeName_16123, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 461)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 462)) ;
  const GGS_repeatInstructionForGrammarAnalysis temp_2 = this ;
  GGS_branchListForGrammarAnalysis var_branches_16185 = temp_2.readProperty_mRepeatBranchList () ;
  GGS_syntaxInstructionListForGrammarAnalysis var_brancheZero_16288 ;
  {
  var_branches_16185.setter_popFirst (var_brancheZero_16288, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 465)) ;
  }
  GGS_uint var_maxUsedRowIndex_16307 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_16288, ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_16307, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 467)) ;
  GGS_uint var_endColumn_16567 = ioArgument_ioColumn ;
  GGS_string var_startNodeName_16711 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_16711, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 479)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 480)) ;
  GGS_bool var_oneEmptyBranch_16814 = GGS_bool (ComparisonKind::equal, var_branches_16185.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 482)).objectCompare (GGS_uint (uint32_t (1U)))) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_oneEmptyBranch_16814.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_syntaxInstructionListForGrammarAnalysis var_firstBranch_16901 ;
      var_branches_16185.method_first (var_firstBranch_16901, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 484)) ;
      var_oneEmptyBranch_16814 = GGS_bool (ComparisonKind::equal, var_firstBranch_16901.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 485)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    }
  }
  GGS_stringlist var_endingNodes_17003 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_oneEmptyBranch_16814.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_endingNodes_17003.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_startNodeName_16711, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 490)) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    GGS_uint var_nextBranchUsedRowIndex_17098 = constinArgument_inRow ;
    UpEnumerator_branchListForGrammarAnalysis enumerator_17147 (var_branches_16185) ;
    while (enumerator_17147.hasCurrentObject ()) {
      var_nextBranchUsedRowIndex_17098.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 494)) ;
      GGS_uint var_branchColumn_17203 = ioArgument_ioColumn ;
      GGS_string var_currentNode_17237 = var_startNodeName_16711 ;
      GGS_string var_arrowStyle_17275 = GGS_string ("|-") ;
      extensionMethod_tikzNodeForSyntaxInstruction (enumerator_17147.current (HERE).readProperty_mSyntaxInstructionList (), ioArgument_ioRowList, var_nextBranchUsedRowIndex_17098, var_branchColumn_17203, var_currentNode_17237, var_arrowStyle_17275, ioArgument_ioArrows, var_nextBranchUsedRowIndex_17098, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 498)) ;
      var_endingNodes_17003.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_currentNode_17237, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 508)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::lowerThan, var_endColumn_16567.objectCompare (var_branchColumn_17203)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          var_endColumn_16567 = var_branchColumn_17203 ;
        }
      }
      enumerator_17147.gotoNextObject () ;
    }
    ioArgument_ioColumn = var_endColumn_16567 ;
    ioArgument_ioMaxUsedRowIndex = var_nextBranchUsedRowIndex_17098 ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::lowerThan, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_16307)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_16307 ;
    }
  }
  ioArgument_ioMaxUsedRowIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 520)) ;
  GGS_string var_returnUpperNodeName_18124 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), ioArgument_ioMaxUsedRowIndex, ioArgument_ioColumn, var_returnUpperNodeName_18124, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 522)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 523)) ;
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (var_returnUpperNodeName_18124, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 524)).add_operation (GGS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 524)).add_operation (var_returnNodeName_16123, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 524)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 524)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 524)) ;
  UpEnumerator_stringlist enumerator_18291 (var_endingNodes_17003) ;
  while (enumerator_18291.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (enumerator_18291.current (HERE).readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 527)).add_operation (GGS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 527)).add_operation (var_returnUpperNodeName_18124, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 527)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 527)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 527)) ;
    enumerator_18291.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = constinArgument_inDebug.boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_string var_markerEndNodeName_18604 ;
      {
      const GGS_repeatInstructionForGrammarAnalysis temp_8 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {RE").add_operation (temp_8.readProperty_mRepeatBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 532)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 532)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 532)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 532)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_18604, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 531)) ;
      }
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 537)) ;
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 538)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 538)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 538)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 538)).add_operation (var_markerEndNodeName_18604, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 538)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 538)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 538)) ;
      ioArgument_ioCurrentNode = var_markerEndNodeName_18604 ;
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
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@selectInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_selectInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@repeatInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_repeatInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalStructuredSendInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GGS_lexicalTagMap & /* ioArgument__5F_ioTagMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSendSearchListAST enumerator_4701 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_4701.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GGS_bool (true), enumerator_4701.current (HERE).readProperty_mSearchListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 112)) ;
    }
    GGS_lexicalTypeEnum joker_4951 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_4701.current (HERE).readProperty_mAttributeName (), joker_4951, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 113)) ;
    enumerator_4701.gotoNextObject () ;
  }
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  callExtensionMethod_checkLexicalDefaultAction ((cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 115)) ;
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
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSendSearchListAST enumerator_5422 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_5422.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if (tokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 126)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("  tokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 127)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 127)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 127)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("_").add_operation (enumerator_5422.current (HERE).readProperty_mSearchListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 128)).add_operation (GGS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 128)).add_operation (enumerator_5422.current (HERE).readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 128)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 128)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 128)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 129)) ;
    enumerator_5422.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("if tokenCode == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 131)) ;
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (callExtensionGetter_generateSwiftCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 132)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 132)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 132)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 133)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStructuredSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalStructuredSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
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
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSendSearchListAST enumerator_6645 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_6645.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 152)) ;
    result_result.plusAssignOperation(GGS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_6645.current (HERE).readProperty_mSearchListName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 153)).add_operation (GGS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 153)).add_operation (enumerator_6645.current (HERE).readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 153)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 153)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 153)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 153)) ;
    result_result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 154)) ;
    enumerator_6645.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 156)) ;
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("  ").add_operation (callExtensionGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 157)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 157)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 157)) ;
  result_result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 158)) ;
  result_result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas4", 159)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalAttributeInputOutputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("&self.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 159)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalFormalInputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFormalInputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 167)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputOutputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                          const GGS_lexicalArgumentModeAST constinArgument_inLexicalRoutineFormalArgumentMode,
                                                                                          const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_7643 ;
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_7643, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 184)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_7643.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputOutputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_7643, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 191)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 190)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 191)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 193)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 192)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 193)), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 190)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 198)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalAttributeInputOutputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualPassingModeLocation (), GGS_string ("the output mode (!) is required here, not an output/input mode"), fixItArray6  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 199)) ;
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
  callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), ioArgument_ioLexiqueAnalysisContext, constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 210)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 215)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFormalInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualPassingModeLocation (), GGS_string ("the output/input mode (!\?) is required here, not an input mode"), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 216)) ;
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
  GGS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_9423 ;
  GGS_stringlist var_routineErrorMessageList_9466 ;
  const GGS_lexicalRoutineCallInstructionAST temp_0 = this ;
  GGS_bool joker_9495 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalRoutineMessageMap ().method_searchKey (temp_0.readProperty_mRoutineName (), var_lexicalRoutineFormalArgumentList_9423, var_routineErrorMessageList_9466, joker_9495, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 225)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexicalRoutineCallInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, var_lexicalRoutineFormalArgumentList_9423.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 232)).objectCompare (temp_2.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 232)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalRoutineCallInstructionAST temp_3 = this ;
      const GGS_lexicalRoutineCallInstructionAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRoutineName ().readProperty_location (), GGS_string ("this lexical routine call names ").add_operation (temp_4.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 234)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 234)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 233)).add_operation (GGS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 234)).add_operation (var_lexicalRoutineFormalArgumentList_9423.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 236)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 235)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 235)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 236)), fixItArray5  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 233)) ;
    }
  }
  const GGS_lexicalRoutineCallInstructionAST temp_6 = this ;
  UpEnumerator_lexicalRoutineFormalArgumentList enumerator_9953 (var_lexicalRoutineFormalArgumentList_9423) ;
  UpEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_10002 (temp_6.readProperty_mActualArgumentList ()) ;
  while (enumerator_9953.hasCurrentObject () && enumerator_10002.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_10002.current (HERE).readProperty_mLexicalRoutineActualArgument ().ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_9953.current (HERE).readProperty_mLexicalFormalArgumentMode (), enumerator_9953.current (HERE).readProperty_mLexicalFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 241)) ;
    enumerator_9953.gotoNextObject () ;
    enumerator_10002.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalRoutineCallInstructionAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_routineErrorMessageList_9466.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 248)).objectCompare (temp_8.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 248)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalRoutineCallInstructionAST temp_9 = this ;
      const GGS_lexicalRoutineCallInstructionAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mRoutineName ().readProperty_location (), GGS_string ("this lexical routine call names ").add_operation (temp_10.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 250)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 250)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 249)).add_operation (GGS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 250)).add_operation (var_routineErrorMessageList_9466.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 252)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 252)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 251)).add_operation (GGS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 252)), fixItArray11  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 249)) ;
    }
  }
  const GGS_lexicalRoutineCallInstructionAST temp_12 = this ;
  UpEnumerator_lstringlist enumerator_10640 (temp_12.readProperty_mErrorMessageList ()) ;
  while (enumerator_10640.hasCurrentObject ()) {
    GGS_lexicalMessageMap_2E_element var_entry_10685 = ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalMessageMap ().readSubscript__3F_searchKey (enumerator_10640.current_mValue (HERE), inCompiler COMMA_HERE) ;
    var_entry_10685.mProperty_mMessageIsUsed = GGS_bool (true) ;
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_replaceKey (var_entry_10685, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 259)) ;
    }
    enumerator_10640.gotoNextObject () ;
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
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("scanner_cocoa_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 284)).add_operation (GGS_string (" (&scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 284)) ;
  const GGS_lexicalRoutineCallInstructionAST temp_1 = this ;
  UpEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_12059 (temp_1.readProperty_mActualArgumentList ()) ;
  while (enumerator_12059.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_generateSwiftCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_12059.current (HERE).readProperty_mLexicalRoutineActualArgument ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 286)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 286)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 286)) ;
    enumerator_12059.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 288)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result_result = GGS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 302)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 302)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalFormalInputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFormalInputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_result = callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 309)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalRoutineCallInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalRoutineCallInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
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
  GGS_string result_result ; // Returned variable
  const GGS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_result = GGS_string ("::scanner_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 324)).add_operation (GGS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 324)) ;
  const GGS_lexicalRoutineCallInstructionAST temp_1 = this ;
  UpEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_13725 (temp_1.readProperty_mActualArgumentList ()) ;
  while (enumerator_13725.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_13725.current_mLexicalRoutineActualArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 326)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 326)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 326)) ;
    enumerator_13725.gotoNextObject () ;
  }
  const GGS_lexicalRoutineCallInstructionAST temp_2 = this ;
  UpEnumerator_lstringlist enumerator_13888 (temp_2.readProperty_mErrorMessageList ()) ;
  while (enumerator_13888.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string (", gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 329)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 329)).add_operation (enumerator_13888.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 329)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 329)) ;
    enumerator_13888.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas4", 331)) ;
//---
  return result_result ;
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
  ioArgument_ioTagMap.setter_insertKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 68)) ;
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
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalTagInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("let locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 77)).add_operation (GGS_string (" = self.savedScanningPoint ()\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 77)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalTagInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalTagInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
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
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTagInstructionAST temp_0 = this ;
  const GGS_lexicalTagInstructionAST temp_1 = this ;
  const GGS_lexicalTagInstructionAST temp_2 = this ;
  result_result = GGS_string ("const LocationInSource currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 94)).add_operation (GGS_string (" = mCurrentLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 94)).add_operation (GGS_string ("const LocationInSource endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 94)).add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 95)).add_operation (GGS_string (" = mTokenEndLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 95)).add_operation (GGS_string ("const utf32 currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 95)).add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 96)).add_operation (GGS_string (" = mCurrentChar ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas4", 96)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalSelectInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSelectBranchListAST enumerator_4508 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  while (enumerator_4508.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_4508.current (HERE).readProperty_mSelectExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 114)) ;
    GGS_lexicalTagMap var_tagMap_4638 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 115)) ;
    UpEnumerator_lexicalInstructionListAST enumerator_4730 (enumerator_4508.current (HERE).readProperty_mSelectInstructionList ()) ;
    while (enumerator_4730.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4730.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4638, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 117)) ;
      enumerator_4730.gotoNextObject () ;
    }
    enumerator_4508.gotoNextObject () ;
  }
  GGS_lexicalTagMap var_tagMap_4864 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 120)) ;
  const GGS_lexicalSelectInstructionAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_4939 (temp_1.readProperty_mDefaultInstructionList ()) ;
  while (enumerator_4939.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4939.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4864, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 122)) ;
    enumerator_4939.gotoNextObject () ;
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
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSelectBranchListAST enumerator_5430 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  while (enumerator_5430.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 136)) ;
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_5430.current (HERE).readProperty_mSelectExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 137)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 137)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 138)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 139)) ;
    }
    UpEnumerator_lexicalInstructionListAST enumerator_5737 (enumerator_5430.current (HERE).readProperty_mSelectInstructionList ()) ;
    while (enumerator_5737.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_5737.current (HERE).readProperty_mInstruction ().ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 141)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 141)) ;
      enumerator_5737.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 143)) ;
    }
    enumerator_5430.gotoNextObject () ;
    if (enumerator_5430.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 145)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas4", 148)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result_outGeneratedCode.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 149)) ;
      {
      result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 150)) ;
      }
      const GGS_lexicalSelectInstructionAST temp_3 = this ;
      UpEnumerator_lexicalInstructionListAST enumerator_6157 (temp_3.readProperty_mDefaultInstructionList ()) ;
      while (enumerator_6157.hasCurrentObject ()) {
        result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6157.current (HERE).readProperty_mInstruction ().ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 152)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 152)) ;
        enumerator_6157.gotoNextObject () ;
      }
      {
      result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 154)) ;
      }
    }
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 156)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalSelectInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalSelectInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSelectBranchListAST enumerator_6758 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas4", 165)).isValidAndTrue () ;
  if (enumerator_6758.hasCurrentObject () && bool_1) {
    while (enumerator_6758.hasCurrentObject () && bool_1) {
      UpEnumerator_lexicalInstructionListAST enumerator_6825 (enumerator_6758.current (HERE).readProperty_mSelectInstructionList ()) ;
      bool bool_2 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas4", 166)).isValidAndTrue () ;
      if (enumerator_6825.hasCurrentObject () && bool_2) {
        while (enumerator_6825.hasCurrentObject () && bool_2) {
          result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_6825.current (HERE).readProperty_mInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 167)) ;
          enumerator_6825.gotoNextObject () ;
          if (enumerator_6825.hasCurrentObject ()) {
            bool_2 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas4", 166)).isValidAndTrue () ;
          }
        }
      }
      enumerator_6758.gotoNextObject () ;
      if (enumerator_6758.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas4", 165)).isValidAndTrue () ;
      }
    }
  }
  const GGS_lexicalSelectInstructionAST temp_3 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_6975 (temp_3.readProperty_mDefaultInstructionList ()) ;
  bool bool_4 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas4", 170)).isValidAndTrue () ;
  if (enumerator_6975.hasCurrentObject () && bool_4) {
    while (enumerator_6975.hasCurrentObject () && bool_4) {
      result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_6975.current (HERE).readProperty_mInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 171)) ;
      enumerator_6975.gotoNextObject () ;
      if (enumerator_6975.hasCurrentObject ()) {
        bool_4 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas4", 170)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
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
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  const GGS_lexicalSelectInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSelectBranchListAST enumerator_7438 (temp_0.readProperty_mLexicalSelectBranchList ()) ;
  while (enumerator_7438.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 185)) ;
    result_result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_7438.current (HERE).readProperty_mSelectExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 186)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 186)) ;
    result_result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 187)) ;
    {
    result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 188)) ;
    }
    UpEnumerator_lexicalInstructionListAST enumerator_7690 (enumerator_7438.current (HERE).readProperty_mSelectInstructionList ()) ;
    while (enumerator_7690.hasCurrentObject ()) {
      result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7690.current (HERE).readProperty_mInstruction ().ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 190)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 190)) ;
      enumerator_7690.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 192)) ;
    }
    enumerator_7438.gotoNextObject () ;
    if (enumerator_7438.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 194)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas4", 197)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      result_result.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 198)) ;
      {
      result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 199)) ;
      }
      const GGS_lexicalSelectInstructionAST temp_3 = this ;
      UpEnumerator_lexicalInstructionListAST enumerator_8057 (temp_3.readProperty_mDefaultInstructionList ()) ;
      while (enumerator_8057.hasCurrentObject ()) {
        result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8057.current (HERE).readProperty_mInstruction ().ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 201)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 201)) ;
        enumerator_8057.gotoNextObject () ;
      }
      {
      result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 203)) ;
      }
    }
  }
  result_result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas4", 205)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalSimpleSendInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSimpleSendInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                           GGS_lexicalTagMap & /* ioArgument__5F_ioTagMap */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  GGS_lexicalSentValueList joker_3174 ; // Joker input parameter
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
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 75)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 75)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 75)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 75)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 75)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalSimpleSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalSimpleSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
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
  GGS_string result_result ; // Returned variable
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_result = GGS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 93)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 93)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 93)) ;
  result_result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas4", 94)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalLogInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalLogInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & /* ioArgument__5F_ioLexiqueAnalysisContext */,
                                                                    GGS_lexicalTagMap & /* ioArgument__5F_ioTagMap */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalLogInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalLogInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                    const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                    Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) */\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalLogInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalLogInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalLogInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalLogInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                 const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                 Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("lexicalLog (LINE_AND_SOURCE_FILE) ;\n") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalRewindInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRewindInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.method_searchKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 73)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  GGS_lexicalSentValueList joker_3334 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_1.readProperty_mTerminalName (), joker_3334, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 74)) ;
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
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("self.restoreScanningPoint (locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 83)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 83)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 84)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 84)).add_operation (temp_1.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas4", 84)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 84)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 84)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 84)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalRewindInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalRewindInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
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
  GGS_string result_result ; // Returned variable
  const GGS_lexicalRewindInstructionAST temp_0 = this ;
  result_result = GGS_string ("mCurrentLocation = currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 100)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 100)) ;
  const GGS_lexicalRewindInstructionAST temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("mTokenEndLocation = endLocationForTag_").add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 101)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 101)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 101)) ;
  const GGS_lexicalRewindInstructionAST temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("mCurrentChar = currentCharForTag_").add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 102)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 102)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 102)) ;
  const GGS_lexicalRewindInstructionAST temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("token.mTokenCode = kToken_").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas4", 103)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 103)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 103)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 103)) ;
  result_result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas4", 104)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalRepeatInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator_lexicalWhileBranchListAST enumerator_4054 (temp_0.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_4054.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_4054.current (HERE).readProperty_mWhileExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 101)) ;
    GGS_lexicalTagMap var_tagMap_4181 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 102)) ;
    UpEnumerator_lexicalInstructionListAST enumerator_4272 (enumerator_4054.current (HERE).readProperty_mWhileInstructionList ()) ;
    while (enumerator_4272.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4272.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4181, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 104)) ;
      enumerator_4272.gotoNextObject () ;
    }
    enumerator_4054.gotoNextObject () ;
  }
  GGS_lexicalTagMap var_tagMap_4405 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 107)) ;
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_4480 (temp_1.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_4480.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4480.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4405, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 109)) ;
    enumerator_4480.gotoNextObject () ;
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
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("while (loop && scanningOk) {\n") ;
  {
  result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 158)) ;
  }
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_6897 (temp_0.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_6897.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6897.current (HERE).readProperty_mInstruction ().ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 161)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 161)) ;
    enumerator_6897.gotoNextObject () ;
  }
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator_lexicalWhileBranchListAST enumerator_7094 (temp_1.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_7094.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 166)) ;
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_7094.current (HERE).readProperty_mWhileExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 167)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 167)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 168)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 169)) ;
    }
    UpEnumerator_lexicalInstructionListAST enumerator_7397 (enumerator_7094.current (HERE).readProperty_mWhileInstructionList ()) ;
    while (enumerator_7397.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7397.current (HERE).readProperty_mInstruction ().ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 171)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 171)) ;
      enumerator_7397.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 173)) ;
    }
    enumerator_7094.gotoNextObject () ;
    if (enumerator_7094.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 175)) ;
    }
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}else{\n  loop = false\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 177)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 180)) ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}\nloop = true\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 181)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalRepeatInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalRepeatInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
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
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("do {\n") ;
  {
  result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 200)) ;
  }
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_8582 (temp_0.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_8582.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8582.current (HERE).readProperty_mInstruction ().ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 203)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 203)) ;
    enumerator_8582.gotoNextObject () ;
  }
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator_lexicalWhileBranchListAST enumerator_8766 (temp_1.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_8766.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 208)) ;
    result_result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_8766.current (HERE).readProperty_mWhileExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 209)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 209)) ;
    result_result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 210)) ;
    {
    result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 211)) ;
    }
    UpEnumerator_lexicalInstructionListAST enumerator_9014 (enumerator_8766.current (HERE).readProperty_mWhileInstructionList ()) ;
    while (enumerator_9014.hasCurrentObject ()) {
      result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_9014.current (HERE).readProperty_mInstruction ().ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 213)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 213)) ;
      enumerator_9014.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 215)) ;
    }
    enumerator_8766.gotoNextObject () ;
    if (enumerator_8766.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 217)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string ("}else{\n  loop = false ;\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 219)) ;
  {
  result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 222)) ;
  }
  result_result.plusAssignOperation(GGS_string ("}while (loop) ;\nloop = true ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas4", 223)) ;
//---
  return result_result ;
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
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 68)) ;
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
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalWarningInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalWarningInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
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
  GGS_string result_result ; // Returned variable
  const GGS_lexicalWarningInstructionAST temp_0 = this ;
  result_result = GGS_string ("lexicalWarning (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 96)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 96)).add_operation (temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 96)).add_operation (GGS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas4", 96)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@lexicalDropInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalDropInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     GGS_lexicalTagMap & /* ioArgument__5F_ioTagMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalDropInstructionAST temp_0 = this ;
  GGS_lexicalSentValueList joker_3178 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mTerminalName (), joker_3178, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 68)) ;
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
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalDropInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 77)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 77)).add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas4", 77)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 77)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 77)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalDropInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalDropInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
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
  GGS_string result_result ; // Returned variable
  const GGS_lexicalDropInstructionAST temp_0 = this ;
  result_result = GGS_string ("enterDroppedTerminal (kToken_").add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas4", 95)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 95)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas4", 95)) ;
//---
  return result_result ;
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
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 68)) ;
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
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("scanningOk = false\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalErrorInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalErrorInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
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
  GGS_string result_result ; // Returned variable
  const GGS_lexicalErrorInstructionAST temp_0 = this ;
  result_result = GGS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 105)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 105)).add_operation (temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 105)).add_operation (GGS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas4", 105)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkUsefulEntities???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkUsefulEntities_3F__3F__3F_ (const GGS_usefulEntitiesGraph constinArgument_inUsefulEntitiesGraph,
                                              const GGS_lstringlist constinArgument_inRootEntities,
                                              const GGS_string /* constinArgument__5F_inProductDirectory */,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("useful-entities-computation.galgas4", 42)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_stringlist var_undefinedNodeList_2196 = constinArgument_inUsefulEntitiesGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("useful-entities-computation.galgas4", 44)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_2196.getter_count (SOURCE_FILE ("useful-entities-computation.galgas4", 45)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_string var_s_2309 = GGS_string ("usefulness computation, ").add_operation (var_undefinedNodeList_2196.getter_count (SOURCE_FILE ("useful-entities-computation.galgas4", 46)).getter_string (SOURCE_FILE ("useful-entities-computation.galgas4", 46)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 46)).add_operation (GGS_string (" undefined nodes:"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 46)) ;
            UpEnumerator_stringlist enumerator_2407 (var_undefinedNodeList_2196) ;
            while (enumerator_2407.hasCurrentObject ()) {
              var_s_2309.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_2407.current (HERE).readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 48)), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 48)) ;
              enumerator_2407.gotoNextObject () ;
            }
            GenericArray <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas4", 50)), var_s_2309, fixItArray2  COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 50)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GGS_lstringlist var_usefullEntityList_2575 = constinArgument_inUsefulEntitiesGraph.getter_accessibleNodesFrom (constinArgument_inRootEntities, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 53)) ;
          GGS_stringset var_usefullEntitySet_2669 = GGS_stringset::class_func_setWithLStringList (var_usefullEntityList_2575  COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 54)) ;
          GGS_stringset var_allEntitySet_2748 = GGS_stringset::class_func_setWithStringList (constinArgument_inUsefulEntitiesGraph.getter_keyList (SOURCE_FILE ("useful-entities-computation.galgas4", 55))  COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 55)) ;
          GGS_stringset var_unusedEntities_2834 = var_allEntitySet_2748.substract_operation (var_usefullEntitySet_2669, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 56)) ;
          GGS_uselessEntityLocationMap var_uselessEntityLocationMap_2919 = GGS_uselessEntityLocationMap::init (inCompiler COMMA_HERE) ;
          UpEnumerator_stringset enumerator_2967 (var_unusedEntities_2834) ;
          while (enumerator_2967.hasCurrentObject ()) {
            GGS_location var_l_2997 = constinArgument_inUsefulEntitiesGraph.getter_locationForKey (enumerator_2967.current (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 59)) ;
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::equal, var_l_2997.objectCompare (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas4", 60)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GenericArray <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas4", 61)), GGS_string ("unused entity, '").add_operation (enumerator_2967.current (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 61)).add_operation (GGS_string ("' (due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 61)).add_operation (GGS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 62)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 62)), fixItArray4  COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 61)) ;
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = var_uselessEntityLocationMap_2919.getter_hasKey (var_l_2997.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 63)) COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 63)).operator_not (SOURCE_FILE ("useful-entities-computation.galgas4", 63)).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  {
                  var_uselessEntityLocationMap_2919.setter_insertKey (var_l_2997.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 64)).getter_nowhere (SOURCE_FILE ("useful-entities-computation.galgas4", 64)), enumerator_2967.current (HERE), var_l_2997, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 64)) ;
                  }
                }
              }
            }
            enumerator_2967.gotoNextObject () ;
          }
          UpEnumerator_uselessEntityLocationMap enumerator_3443 (var_uselessEntityLocationMap_2919) ;
          while (enumerator_3443.hasCurrentObject ()) {
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (enumerator_3443.current (HERE).readProperty_mLocation (), GGS_string ("unused '").add_operation (enumerator_3443.current (HERE).readProperty_mUnusedEntityName (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 68)).add_operation (GGS_string ("' entity, due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 68)).add_operation (GGS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 68)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 69)), fixItArray6  COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 68)) ;
            enumerator_3443.gotoNextObject () ;
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
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("func @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 78)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 78)).add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 78)), constinArgument_inGetterName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_getterNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_getterNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_getterNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_getterNameForUsefulEntitiesGraph ("getterNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_getterNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_getterNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_setterNameForUsefulEntitiesGraph (const GGS_string & constinArgument_inTypeName,
                                                       const GGS_lstring & constinArgument_inSetterName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("mutatingproc  @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 84)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 84)).add_operation (constinArgument_inSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 84)), constinArgument_inSetterName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_setterNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_setterNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_setterNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_setterNameForUsefulEntitiesGraph ("setterNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_setterNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_setterNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'methodNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_methodNameForUsefulEntitiesGraph (const GGS_string & constinArgument_inTypeName,
                                                       const GGS_lstring & constinArgument_inMethodName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("proc @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 90)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 90)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 90)), constinArgument_inMethodName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_methodNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_methodNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_methodNameForUsefulEntitiesGraph (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_methodNameForUsefulEntitiesGraph ("methodNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_methodNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_methodNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'initializerNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_initializerNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inTypeName,
                                                            const GGS_string & constinArgument_inParameterSignature,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 97)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 97)).add_operation (constinArgument_inParameterSignature, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 97)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_initializerNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_initializerNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                   const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                   const GGS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_string operand1 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_initializerNameForUsefulEntitiesGraph (operand0,
                                                         operand1,
                                                         inCompiler
                                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_initializerNameForUsefulEntitiesGraph ("initializerNameForUsefulEntitiesGraph",
                                                                                       functionWithGenericHeader_initializerNameForUsefulEntitiesGraph,
                                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                                       2,
                                                                                       functionArgs_initializerNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'equatableNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_equatableNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inTypeName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 103)).add_operation (GGS_string (" equatable"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 103)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_equatableNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_equatableNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                 const GGS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_equatableNameForUsefulEntitiesGraph (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_equatableNameForUsefulEntitiesGraph ("equatableNameForUsefulEntitiesGraph",
                                                                                     functionWithGenericHeader_equatableNameForUsefulEntitiesGraph,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_equatableNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'lexiqueNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_lexiqueNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inLexiqueName,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (constinArgument_inLexiqueName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 109)), constinArgument_inLexiqueName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_lexiqueNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_lexiqueNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                               const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                               const GGS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_lexiqueNameForUsefulEntitiesGraph (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_lexiqueNameForUsefulEntitiesGraph ("lexiqueNameForUsefulEntitiesGraph",
                                                                                   functionWithGenericHeader_lexiqueNameForUsefulEntitiesGraph,
                                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                                   1,
                                                                                   functionArgs_lexiqueNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'grammarNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_grammarNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inGrammarName,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("grammar ").add_operation (constinArgument_inGrammarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 115)), constinArgument_inGrammarName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_grammarNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_grammarNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                               const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                               const GGS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_grammarNameForUsefulEntitiesGraph (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_grammarNameForUsefulEntitiesGraph ("grammarNameForUsefulEntitiesGraph",
                                                                                   functionWithGenericHeader_grammarNameForUsefulEntitiesGraph,
                                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                                   1,
                                                                                   functionArgs_grammarNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_syntaxNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inSyntaxName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (constinArgument_inSyntaxName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 121)), constinArgument_inSyntaxName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_syntaxNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_syntaxNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_syntaxNameForUsefulEntitiesGraph (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxNameForUsefulEntitiesGraph ("syntaxNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_syntaxNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_syntaxNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'optionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_optionNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inOptionName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("option ").add_operation (constinArgument_inOptionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 127)), constinArgument_inOptionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_optionNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_optionNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_optionNameForUsefulEntitiesGraph (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_optionNameForUsefulEntitiesGraph ("optionNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_optionNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_optionNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'filewrapperNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_filewrapperNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFilewrapperName,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("filewrapper ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 133)), constinArgument_inFilewrapperName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_filewrapperNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_filewrapperNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                   const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                   const GGS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_filewrapperNameForUsefulEntitiesGraph (operand0,
                                                         inCompiler
                                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_filewrapperNameForUsefulEntitiesGraph ("filewrapperNameForUsefulEntitiesGraph",
                                                                                       functionWithGenericHeader_filewrapperNameForUsefulEntitiesGraph,
                                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                                       1,
                                                                                       functionArgs_filewrapperNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'filewrapperTemplateNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_filewrapperTemplateNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFilewrapperName,
                                                                    const GGS_lstring & constinArgument_inTemplateName,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("filewrapper template ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 140)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 140)).add_operation (constinArgument_inTemplateName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 140)), constinArgument_inTemplateName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_filewrapperTemplateNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_filewrapperTemplateNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                           const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                           const GGS_location & /* inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_filewrapperTemplateNameForUsefulEntitiesGraph (operand0,
                                                                 operand1,
                                                                 inCompiler
                                                                 COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_filewrapperTemplateNameForUsefulEntitiesGraph ("filewrapperTemplateNameForUsefulEntitiesGraph",
                                                                                               functionWithGenericHeader_filewrapperTemplateNameForUsefulEntitiesGraph,
                                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                                               2,
                                                                                               functionArgs_filewrapperTemplateNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'functionNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_functionNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inFunctionName,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("function ").add_operation (constinArgument_inFunctionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 146)), constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_functionNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_functionNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_functionNameForUsefulEntitiesGraph (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_functionNameForUsefulEntitiesGraph ("functionNameForUsefulEntitiesGraph",
                                                                                    functionWithGenericHeader_functionNameForUsefulEntitiesGraph,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_functionNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'procedureNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_procedureNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inProcName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("procedure ").add_operation (constinArgument_inProcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 152)), constinArgument_inProcName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_procedureNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_procedureNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                 const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                 const GGS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_procedureNameForUsefulEntitiesGraph (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_procedureNameForUsefulEntitiesGraph ("procedureNameForUsefulEntitiesGraph",
                                                                                     functionWithGenericHeader_procedureNameForUsefulEntitiesGraph,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_procedureNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'typeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_typeNameForUsefulEntitiesGraph (const GGS_lstring & constinArgument_inTypeName,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  result_result = GGS_lstring::init_21__21_ (GGS_string ("type @").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas4", 158)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_typeNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_typeNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                            const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                            const GGS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_typeNameForUsefulEntitiesGraph (operand0,
                                                  inCompiler
                                                  COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_typeNameForUsefulEntitiesGraph ("typeNameForUsefulEntitiesGraph",
                                                                                functionWithGenericHeader_typeNameForUsefulEntitiesGraph,
                                                                                & kTypeDescriptor_GALGAS_lstring,
                                                                                1,
                                                                                functionArgs_typeNameForUsefulEntitiesGraph) ;

