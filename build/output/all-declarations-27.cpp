#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

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
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                          const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                          const GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_599_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_599 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_599.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_599.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_599.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_599.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString ("class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_599.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_599.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      index_599_.increment () ;
      enumerator_599.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (Compiler * inCompiler,
                                                                                                             const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                             const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                             const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                             const GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Abstract extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_587_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_587 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_587.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_587.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_587.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_587.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_587.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_587.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      index_587_.increment () ;
      enumerator_587.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 20)).stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_1239_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1239 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1239.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1239.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-getter.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (", ") ;
      index_1239_.increment () ;
      enumerator_1239.gotoNextObject () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                  const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_584_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_584 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_584.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_584.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_584.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_584.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString ("class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_584.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_584.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      index_584_.increment () ;
      enumerator_584.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                     const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const GALGAS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                     const GALGAS_unifiedTypeMapEntry & in_RETURN_5F_TYPE
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_GETTER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" callExtensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_706_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_706 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_706.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_706.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_706.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 15)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_706.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 15)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString ("GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_706.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 17)).stringValue ()) ;
        result.appendString (" in_") ;
        result.appendString (enumerator_706.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 17)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      index_706_.increment () ;
      enumerator_706.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_RETURN_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 22)).stringValue ()) ;
  result.appendString (" result ;\n  if (nullptr != inObject) {\n    result = inObject->getter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_1358_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1358 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1358.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1358.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-getter.cpp.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (", ") ;
      index_1358_.increment () ;
      enumerator_1358.gotoNextObject () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionGetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                               const GALGAS_string & in_GETTER_5F_IMPLEMENTATION,
                                                                                                               const GALGAS_unifiedTypeMapEntry & /* in_RETURN_5F_TYPE */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Overriding extension getter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-getter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_GETTER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef void (*extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (") (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_624_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_624 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_624.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_624.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_624.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_624_IDX.getter_string (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
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
      index_624_IDX.increment () ;
      enumerator_624.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 26)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inClassIndex,\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 27)).stringValue ()) ;
  result.appendString (" inModifier) ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_2145_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2145 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2145.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        switch (test_4) {
        case kBoolTrue : {
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_2145.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          switch (test_5) {
          case kBoolTrue : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2145.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_2145.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
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
      index_2145_.increment () ;
      enumerator_2145.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionSetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (Compiler * inCompiler,
                                                                                                             const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                             const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                             const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Abstract extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nstatic TC_UniqueArray <extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("> gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inClassIndex,\n               ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (" inModifier) {\n  gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (".forceObjectAtIndex (inClassIndex, inModifier, nullptr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void freeExtensionModifier_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 18)).stringValue ()) ;
  result.appendString (" (void) {\n  gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 19)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 19)).stringValue ()) ;
  result.appendString (".removeAll () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nPrologueEpilogue gSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("nullptr,\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("freeExtensionModifier_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 25)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 25)).stringValue ()) ;
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 29)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 29)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_2130_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2130 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2130.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_2130.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 32)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_2130.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 33)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_2130.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 34)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_2130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_2130.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 35)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_2130.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_2130.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_2130.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 39)).stringValue ()) ;
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
      index_2130_.increment () ;
      enumerator_2130.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GALGAS_uint index_3167_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_3167 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3167.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_3167.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 47)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_3167.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 48)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_3167_.increment () ;
      enumerator_3167.gotoNextObject () ;
    }
  }
  result.appendString ("//--- Find setter\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 53)).stringValue ()) ;
  result.appendString (") ;\n    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n    const int32_t classIndex = info->mSlotID ;\n    extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 56)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 56)).stringValue ()) ;
  result.appendString (" f = nullptr ;\n    if (classIndex < gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 57)).stringValue ()) ;
  result.appendString (".count ()) {\n      f = gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 58)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 58)).stringValue ()) ;
  result.appendString (" (classIndex COMMA_HERE) ;\n    }\n    if (nullptr == f) {\n       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n       while ((nullptr == f) && (nullptr != p)) {\n         if (p->mSlotID < gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 63)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 63)).stringValue ()) ;
  result.appendString (".count ()) {\n           f = gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
  result.appendString (" (p->mSlotID COMMA_HERE) ;\n         }\n         p = p->mSuperclassDescriptor ;\n       }\n       gExtensionModifierTable_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
  result.appendString (".forceObjectAtIndex (classIndex, f, nullptr) ;\n    }\n    f (inObject, ") ;
  GALGAS_uint index_4856_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4856 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4856.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_4856.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 72)))).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_4856.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 73)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_4856.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 74)))).boolEnum () ;
        switch (test_5) {
        case kBoolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_4856.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 75)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_4856.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 76)))).boolEnum () ;
          switch (test_6) {
          case kBoolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_4856.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 77)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_4856.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-setter.cpp.galgasTemplate", 79)).stringValue ()) ;
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
      result.appendString (", ") ;
      index_4856_.increment () ;
      enumerator_4856.gotoNextObject () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                  const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef void (*extensionSetterSignature_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (") (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_615_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_615 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_615.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 11)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 13)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 14)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_615.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 15)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 16)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_615.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_615_IDX.getter_string (SOURCE_FILE ("extension-setter.h.galgasTemplate", 18)).stringValue ()) ;
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
      index_615_IDX.increment () ;
      enumerator_615.gotoNextObject () ;
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
  GALGAS_uint index_2149_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2149 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2149.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_2149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.h.galgasTemplate", 34)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_2149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 36)))).boolEnum () ;
        switch (test_4) {
        case kBoolTrue : {
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_2149.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.h.galgasTemplate", 38)))).boolEnum () ;
          switch (test_5) {
          case kBoolTrue : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2149.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_2149.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.h.galgasTemplate", 41)).stringValue ()) ;
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
      index_2149_.increment () ;
      enumerator_2149.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionsetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                     const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nstatic TC_UniqueArray <extensionSetterSignature_") ;
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
  GALGAS_uint index_1414_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1414 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1414.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_1414.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 21)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_1414.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_1414.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 22)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_1414.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 23)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_1414.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_1414.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 24)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_1414.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 25)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1414.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_1414.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 26)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1414.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_1414.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 28)).stringValue ()) ;
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
      index_1414_.increment () ;
      enumerator_1414.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GALGAS_uint index_2451_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2451 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2451.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_2451.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 36)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_2451.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_2451_.increment () ;
      enumerator_2451.gotoNextObject () ;
    }
  }
  result.appendString ("//--- Find setter\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString (") ;\n    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n    const int32_t classIndex = info->mSlotID ;\n    extensionSetterSignature_") ;
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
  result.appendString (" (classIndex COMMA_HERE) ;\n    }\n    if (nullptr == f) {\n       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n       while ((nullptr == f) && (nullptr != p)) {\n         if (p->mSlotID < gExtensionModifierTable_") ;
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
  GALGAS_uint index_4140_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4140 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4140.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_4140.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 61)))).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_4140.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 62)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_4140.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 63)))).boolEnum () ;
        switch (test_5) {
        case kBoolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_4140.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 64)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_4140.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 65)))).boolEnum () ;
          switch (test_6) {
          case kBoolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_4140.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 66)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_4140.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.cpp.galgasTemplate", 68)).stringValue ()) ;
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
      result.appendString (", ") ;
      index_4140_.increment () ;
      enumerator_4140.gotoNextObject () ;
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
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionSetterImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                               const GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Overriding extension setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_MODIFIER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nstatic void defineExtensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 10)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 10)).stringValue ()) ;
  result.appendString (" (void) {\n  enterExtensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("kTypeDescriptor_GALGAS_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (".mSlotID,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("extensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nPrologueEpilogue gSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.appendString (" (defineExtensionSetter_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("overriding-extension-setter.cpp.galgasTemplate", 17)).stringValue ()) ;
  result.appendString (", nullptr) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (Compiler * inCompiler,
                                                                                                          const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                          const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Abstract extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_558_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_558 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_558.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_558.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_558.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_558.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.h.galgasTemplate", 17)).stringValue ()) ;
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
      index_558_.increment () ;
      enumerator_558.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate abstractExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (Compiler * inCompiler,
                                                                                                             const GALGAS_unifiedTypeMapEntry & in_RECEIVER_5F_TYPE,
                                                                                                             const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                             const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Abstract extension method '@").add_operation (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_616_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_616 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_616.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_616.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_616.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_616.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_616.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_616.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
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
      index_616_.increment () ;
      enumerator_616.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n//--- Drop output arguments\n") ;
  GALGAS_uint index_1653_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1653 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1653.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_1653.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 25)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_1653.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 26)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1653_.increment () ;
      enumerator_1653.gotoNextObject () ;
    }
  }
  result.appendString ("//--- Find method\n  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (extensionGetter_definition (in_RECEIVER_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 31)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 31)).stringValue ()) ;
  result.appendString (") ;\n    inObject->method_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 32)).stringValue ()) ;
  result.appendString (" (") ;
  GALGAS_uint index_2205_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2205 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2205.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_2205.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 34)))).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_2205.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 35)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_2205.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
        switch (test_5) {
        case kBoolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_2205.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 37)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_2205.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 38)))).boolEnum () ;
          switch (test_6) {
          case kBoolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_2205.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 39)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_2205.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("abstract-extension-method.cpp.galgasTemplate", 41)).stringValue ()) ;
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
      result.appendString (", ") ;
      index_2205_.increment () ;
      enumerator_2205.gotoNextObject () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                  const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                  const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_549_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_549 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_549.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.h.galgasTemplate", 17)).stringValue ()) ;
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
      index_549_.increment () ;
      enumerator_549.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                     const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                     const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                     const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nvoid callExtensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 11)).stringValue ()) ;
  result.appendString (" * inObject") ;
  GALGAS_uint index_671_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_671 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_671.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 14)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 15)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 16)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 17)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_671.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 18)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 19)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_671.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method.cpp.galgasTemplate", 21)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_671.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 21)).stringValue ()) ;
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
      index_671_.increment () ;
      enumerator_671.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
  GALGAS_uint index_1680_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1680 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1680.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_1680.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 28)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("  out_") ;
        result.appendString (enumerator_1680.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 29)).stringValue ()) ;
        result.appendString (".drop () ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1680_.increment () ;
      enumerator_1680.gotoNextObject () ;
    }
  }
  result.appendString ("  if (nullptr != inObject) {\n    macroValidSharedObject (inObject, cPtr_") ;
  result.appendString (in_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 33)).stringValue ()) ;
  result.appendString (") ;\n    inObject->method_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 34)).stringValue ()) ;
  result.appendString ("  (") ;
  GALGAS_uint index_2183_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2183 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2183.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_2183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 36)))).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("constin_") ;
        result.appendString (enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 37)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_2183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 38)))).boolEnum () ;
        switch (test_5) {
        case kBoolTrue : {
          result.appendString ("io_") ;
          result.appendString (enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 39)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_2183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 40)))).boolEnum () ;
          switch (test_6) {
          case kBoolTrue : {
            result.appendString ("out_") ;
            result.appendString (enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 41)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("in_") ;
            result.appendString (enumerator_2183.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method.cpp.galgasTemplate", 43)).stringValue ()) ;
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
      result.appendString (", ") ;
      index_2183_.increment () ;
      enumerator_2183.gotoNextObject () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE) ;\n  }\n}\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate overridingExtensionMethodImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Overriding extension method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-extension-method.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (Compiler * inCompiler,
                                                                                              const GALGAS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_string & in_FILEWRAPPER_5F_NAME
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_307_idx (0) ;
  if (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_307 (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_307.hasCurrentObject ()) {
      result.appendString ("extern const char * gWrapperFileContent_") ;
      result.appendString (enumerator_307.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 8)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_307_idx.increment () ;
      enumerator_307.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_577_idx (0) ;
  if (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_577 (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_577.hasCurrentObject ()) {
      result.appendString ("extern const uint8_t gWrapperFileContent_") ;
      result.appendString (enumerator_577.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" [] ;\n") ;
      index_577_idx.increment () ;
      enumerator_577.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_841_idx (0) ;
  if (in_FILE_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_841 (in_FILE_5F_INDEX_5F_STRING_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_841.hasCurrentObject ()) {
      result.appendString ("extern const cRegularFileWrapper gWrapperFile_") ;
      result.appendString (enumerator_841.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_841_idx.increment () ;
      enumerator_841.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1108_ (0) ;
  if (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1108 (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1108.hasCurrentObject ()) {
      result.appendString ("extern const cDirectoryWrapper gWrapperDirectory_") ;
      result.appendString (enumerator_1108.current_mValue (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_1108_.increment () ;
      enumerator_1108.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (Compiler * inCompiler,
                                                                                                 const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                 const GALGAS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FILEWRAPPER_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                            const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                            const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("' (as function)"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" extensionGetter_") ;
  result.appendString (in_GETTER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class GALGAS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" & inObject") ;
  GALGAS_uint index_588_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_588 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_588.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_588.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_588.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" & constinArgument") ;
        result.appendString (index_588_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString ("class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_588.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_588_IDX.getter_string (SOURCE_FILE ("extension-getter-as-function-declaration.h.galgasTemplate", 13)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      index_588_IDX.increment () ;
      enumerator_588.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionGetterAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                               const GALGAS_string & in_GETTER_5F_NAME,
                                                                                                               const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension Getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (in_GETTER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-getter-as-function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                            const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionMethod_") ;
  result.appendString (in_METHOD_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class GALGAS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" inObject") ;
  GALGAS_uint index_549_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_549 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_549.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-method-as-function.h.galgasTemplate", 17)).stringValue ()) ;
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
      index_549_.increment () ;
      enumerator_549.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionMethodAsFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (Compiler * inCompiler,
                                                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                               const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-method-as-function.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_METHOD_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate extensionSetterAsFunctionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                            const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                            const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Extension setter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid extensionSetter_") ;
  result.appendString (in_MODIFIER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class GALGAS_") ;
  result.appendString (in_TYPE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" & ioObject") ;
  GALGAS_uint index_549_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_549 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_549.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        result.appendString (" constin_") ;
        result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 11)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          result.appendString (" & io_") ;
          result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 13)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_549.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 15)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_549.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" in_") ;
            result.appendString (enumerator_549.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter-as-function.h.galgasTemplate", 17)).stringValue ()) ;
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
      index_549_.increment () ;
      enumerator_549.gotoNextObject () ;
    }
  }
  result.appendString (",\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (Compiler * inCompiler,
                                                                                           const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                           const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                           const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" function_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_473_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_473 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_473.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_473.current_mIsConstant (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_473.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (" & constinArgument") ;
        result.appendString (index_473_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case kBoolFalse : {
        result.appendString ("class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_473.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_473_IDX.getter_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      default :
        break ;
      }
      index_473_IDX.increment () ;
      enumerator_473.gotoNextObject () ;
    }
  }
  result.appendString ("class Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (Compiler * inCompiler,
                                                                                              const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                              const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                              const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                              const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//  Function introspection                                                                       \n//--------------------------------------------------------------------------------------------------\n\nstatic const C_galgas_type_descriptor * functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue ()) ;
  result.appendString ("] = {\n") ;
  GALGAS_uint index_850_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_850 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_850.hasCurrentObject ()) {
      result.appendString ("  & kTypeDescriptor_GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_850.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 15)).stringValue ()) ;
      result.appendString (",\n") ;
      index_850_.increment () ;
      enumerator_850.gotoNextObject () ;
    }
  }
  result.appendString ("  nullptr\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 23)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("static GALGAS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 24)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const cObjectArray & /* inEffectiveParameterArray */,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 28)).stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("static GALGAS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 31)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const cObjectArray & inEffectiveParameterArray,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
    GALGAS_uint index_2160_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2160 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_2160.hasCurrentObject ()) {
        result.appendString ("  const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2160.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString (" operand") ;
        result.appendString (index_2160_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString (" = GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2160.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString ("::extractObject (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("inEffectiveParameterArray.objectAtIndex (") ;
        result.appendString (index_2160_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (" COMMA_HERE),\n  ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("inCompiler\n  ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_THERE) ;\n") ;
        index_2160_IDX.increment () ;
        enumerator_2160.gotoNextObject () ;
      }
    }
    result.appendString ("  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 41)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_2656_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2656 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_2656.hasCurrentObject ()) {
        result.appendString ("operand") ;
        result.appendString (index_2656_IDX.getter_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 43)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_2656_IDX.increment () ;
        enumerator_2656.gotoNextObject () ;
      }
    }
    result.appendString ("inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  default :
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
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (Compiler * inCompiler,
                                                                                          const GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nvoid routine_") ;
  result.appendString (in_ROUTINE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_450_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_450 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_450.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 9)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("const class GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        result.appendString (" constinArgument") ;
        result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue ()) ;
        } break ;
      case kBoolFalse : {
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 11)))).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("class GALGAS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          result.appendString (" & ioArgument") ;
          result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue ()) ;
          } break ;
        case kBoolFalse : {
          const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_450.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 13)))).boolEnum () ;
          switch (test_2) {
          case kBoolTrue : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            result.appendString (" & outArgument") ;
            result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue ()) ;
            } break ;
          case kBoolFalse : {
            result.appendString ("class GALGAS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_450.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" inArgument") ;
            result.appendString (index_450_IDX.getter_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue ()) ;
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
      index_450_IDX.increment () ;
      enumerator_450.gotoNextObject () ;
    }
  }
  result.appendString ("class Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (Compiler * inCompiler,
                                                                                             const GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                             const GALGAS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_ROUTINE_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                                  const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                                  const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Once function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  result.appendString (in_FUNCTION_5F_IMPLEMENTATION.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//  Function implementation                                                                      \n//--------------------------------------------------------------------------------------------------\n\nstatic bool gOnceFunctionResultAvailable_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (" = false ;\nstatic GALGAS_") ;
  result.appendString (in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" gOnceFunctionResult_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 14)).stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
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
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n//  Function introspection                                                                       \n//--------------------------------------------------------------------------------------------------\n\nstatic const C_galgas_type_descriptor * functionArgs_") ;
  result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue ()) ;
  result.appendString ("] = {\n") ;
  GALGAS_uint index_2587_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_2587 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2587.hasCurrentObject ()) {
      result.appendString ("  & kTypeDescriptor_GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2587.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (",\n") ;
      index_2587_.increment () ;
      enumerator_2587.gotoNextObject () ;
    }
  }
  result.appendString ("  nullptr\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_FORMAL_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 53)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("static GALGAS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 54)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const cObjectArray & /* inEffectiveParameterArray */,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_location & /* inErrorLocation */\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 58)).stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("static GALGAS_object functionWithGenericHeader_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 61)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("Compiler * inCompiler,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const cObjectArray & inEffectiveParameterArray,\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const GALGAS_location & /* inErrorLocation*/\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n") ;
    GALGAS_uint index_3896_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_3896 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3896.hasCurrentObject ()) {
        result.appendString ("  const GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3896.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" operand") ;
        result.appendString (index_3896_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" = GALGAS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3896.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString ("::extractObject (inEffectiveParameterArray.objectAtIndex (") ;
        result.appendString (index_3896_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue ()) ;
        result.appendString (" COMMA_HERE), inCompiler COMMA_THERE) ;\n") ;
        index_3896_IDX.increment () ;
        enumerator_3896.gotoNextObject () ;
      }
    }
    result.appendString ("  return function_") ;
    result.appendString (in_FUNCTION_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 68)).stringValue ()) ;
    result.appendString (" (") ;
    GALGAS_uint index_4369_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_4369 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_4369.hasCurrentObject ()) {
        result.appendString ("operand") ;
        result.appendString (index_4369_IDX.getter_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 70)).stringValue ()) ;
        result.appendString (", ") ;
        index_4369_IDX.increment () ;
        enumerator_4369.gotoNextObject () ;
      }
    }
    result.appendString ("inCompiler COMMA_THERE).getter_object (THERE) ;\n}\n") ;
    } break ;
  default :
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
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (Compiler * inCompiler,
                                                                                                      const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_string filewrapperTemplate_") ;
  result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("class Compiler * inCompiler") ;
  GALGAS_uint index_568_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_568 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_568.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const class GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_568.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" & ") ;
      result.appendString (enumerator_568.current_mFormalArgumentCppName (HERE).stringValue ()) ;
      index_568_.increment () ;
      enumerator_568.gotoNextObject () ;
    }
  }
  result.appendString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (Compiler * inCompiler,
                                                                                                         const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                         const GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                         const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const GALGAS_stringset & in_UNUSED_5F_VAR_5F_SET,
                                                                                                         const GALGAS_bool & in_USES_5F_COLUMN_5F_MARKER,
                                                                                                         const GALGAS_string & in_GENERATED_5F_INSTRUCTION_5F_STRING
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_string filewrapperTemplate_") ;
  result.appendString (in_FILEWRAPPER_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TEMPLATE_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * ") ;
  const enumGalgasBool test_0 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("/* ") ;
    result.appendString (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 9)).stringValue ()) ;
    result.appendString (" */") ;
    } break ;
  case kBoolFalse : {
    result.appendString (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 11)).stringValue ()) ;
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_677_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_677 (in_FORMAL_5F_ARGUMENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_677.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GALGAS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_677.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" & ") ;
      const enumGalgasBool test_1 = in_UNUSED_5F_VAR_5F_SET.getter_hasKey (enumerator_677.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 15)).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("/* ") ;
        result.appendString (enumerator_677.current_mFormalArgumentCppName (HERE).stringValue ()) ;
        result.appendString (" */") ;
        } break ;
      case kBoolFalse : {
        result.appendString (enumerator_677.current_mFormalArgumentCppName (HERE).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      index_677_.increment () ;
      enumerator_677.gotoNextObject () ;
    }
  }
  result.appendString ("\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  String result ;\n") ;
  const enumGalgasBool test_2 = in_USES_5F_COLUMN_5F_MARKER.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("  uint32_t columnMarker = 0 ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result.appendString (in_GENERATED_5F_INSTRUCTION_5F_STRING.stringValue ()) ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).getter_uint (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 27)).uintValue ())) ;
  }
  result.appendString ("  return GALGAS_string (result) ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPrototypeDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_functionPrototypeDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1080)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPrototypeDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_string & outArgument_outHeader,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionPrototypeDeclarationForGeneration temp_0 = this ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_1 = this ;
  const GALGAS_functionPrototypeDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), temp_1.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_2.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1091)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1088))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_onceFunctionDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1098)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_onceFunctionDeclarationForGeneration temp_0 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, temp_0.readProperty_mFunctionName (), GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1108)), extensionGetter_identifierRepresentation (temp_1.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1109)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1106))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_semanticTypeForGeneration::getter_appendTypeGenericImplementation (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_semanticTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_44262 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1118)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::equal, var_selfTypeDefinition_44262.readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_packageType (SOURCE_FILE ("semanticGeneration.galgas", 1119)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_semanticTypeForGeneration temp_2 = this ;
    result_result = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, var_selfTypeDefinition_44262.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1124)), var_selfTypeDefinition_44262.readProperty_superType () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1122))) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionImplementationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionImplementationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1138)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1138))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1138)) ;
  GALGAS_string var_code_45403 ;
  {
  const GALGAS_functionImplementationForGeneration temp_1 = this ;
  const GALGAS_functionImplementationForGeneration temp_2 = this ;
  const GALGAS_functionImplementationForGeneration temp_3 = this ;
  const GALGAS_functionImplementationForGeneration temp_4 = this ;
  const GALGAS_functionImplementationForGeneration temp_5 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GALGAS_string ("function_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1140)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1140)), ioArgument_ioInclusionSet, temp_2.readProperty_mFormalArgumentList (), temp_3.readProperty_mFunctionInstructionList (), GALGAS_string ("Compiler"), temp_4.readProperty_mReturnType (), temp_5.readProperty_mResultVariableCppName (), GALGAS_bool (false), GALGAS_bool (false), var_code_45403, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1139)) ;
  }
  const GALGAS_functionImplementationForGeneration temp_6 = this ;
  const GALGAS_functionImplementationForGeneration temp_7 = this ;
  const GALGAS_functionImplementationForGeneration temp_8 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, temp_6.readProperty_mFunctionName (), var_code_45403, temp_7.readProperty_mFormalArgumentList (), extensionGetter_identifierRepresentation (temp_8.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1155)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1151))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_onceFunctionDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_0.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1166)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1166))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1166)) ;
  GALGAS_string var_code_46314 ;
  {
  const GALGAS_onceFunctionDeclarationForGeneration temp_1 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_2 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_3 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_4 = this ;
  routine_generateFunction_3F__26__3F__3F__3F__3F__3F__3F_static_3F_const_21_ (GALGAS_string ("onceFunction_").add_operation (temp_1.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1168)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1168)), ioArgument_ioInclusionSet, GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1170)), temp_2.readProperty_mFunctionInstructionList (), GALGAS_string ("Compiler"), temp_3.readProperty_mReturnType (), temp_4.readProperty_mResultVariableCppName (), GALGAS_bool (true), GALGAS_bool (false), var_code_46314, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1167)) ;
  }
  const GALGAS_onceFunctionDeclarationForGeneration temp_5 = this ;
  const GALGAS_onceFunctionDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, temp_5.readProperty_mFunctionName (), var_code_46314, GALGAS_formalInputParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1182)), extensionGetter_identifierRepresentation (temp_6.readProperty_mReturnType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1183)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1179))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_lexiqueDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1192)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  outArgument_outHeader = temp_0.readProperty_mHeaderContents () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexiqueDeclarationForGeneration temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperLexiqueName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexiqueDeclarationForGeneration temp_3 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_3.readProperty_mSuperLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1202)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1202))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1202)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1212)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1212))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1212)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = temp_1.readProperty_mCppContents () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificFiles'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::method_appendSpecificFiles (const GALGAS_string constinArgument_inProductDirectory,
                                                                       GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                       GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueDeclarationForGeneration temp_0 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1223)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1223)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1223))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1223)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_1 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_2 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_1.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1226)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1226)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1226)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_2.readProperty_mObjcCocoaHeader (), GALGAS_string ("\n\n"), GALGAS_string ("\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1224)) ;
  }
  const GALGAS_lexiqueDeclarationForGeneration temp_3 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_3.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1236)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1236)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1236))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1236)) ;
  const GALGAS_lexiqueDeclarationForGeneration temp_4 = this ;
  ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_4.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1237)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1237)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1237))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1237)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_5 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_6 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_5.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1240)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1240)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1240)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_6.readProperty_mObjcCocoaImplementation (), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1238)) ;
  }
  const GALGAS_lexiqueDeclarationForGeneration temp_7 = this ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_7.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1250)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1250)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1250))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1250)) ;
  {
  const GALGAS_lexiqueDeclarationForGeneration temp_8 = this ;
  const GALGAS_lexiqueDeclarationForGeneration temp_9 = this ;
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (temp_8.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1253)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1253)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1253)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), temp_9.readProperty_mSwiftCocoaImplementation (), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1251)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@programComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_programComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1269)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@programComponentForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_programComponentForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusAssign_operation(temp_0.readProperty_mInclusionSet (), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1278)) ;
  const GALGAS_programComponentForGeneration temp_1 = this ;
  outArgument_outImplementation = temp_1.readProperty_mImplementationString () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_filewrapperDeclarationForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1289)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivlyEnumerateRegularFile??&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (const GALGAS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                                                     const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                                     GALGAS_stringlist & ioArgument_ioRegularFileIndexStringList,
                                                                     GALGAS_stringlist & ioArgument_ioDirectoryIndexStringList,
                                                                     GALGAS_stringlist & ioArgument_ioRegularTextContentIndexStringList,
                                                                     GALGAS_stringlist & ioArgument_ioRegularBinaryContentIndexStringList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.addAssign_operation (ioArgument_ioDirectoryIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1301)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1301))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1301)) ;
  cEnumerator_wrapperFileMap enumerator_51217 (constinArgument_inFilewrapperFileMap, EnumerationOrder::up) ;
  while (enumerator_51217.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.addAssign_operation (ioArgument_ioRegularFileIndexStringList.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1303)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1303))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_51217.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioRegularTextContentIndexStringList.addAssign_operation (enumerator_51217.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1305))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1305)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.addAssign_operation (enumerator_51217.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1307))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1307)) ;
    }
    enumerator_51217.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_51580 (constinArgument_inFilewrapperDirectoryMap, EnumerationOrder::up) ;
  while (enumerator_51580.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (enumerator_51580.current_mRegularFileMap (HERE), enumerator_51580.current_mDirectoryMap (HERE), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1311)) ;
    }
    enumerator_51580.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_regularFileIndexStringList_52111 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1327)) ;
  GALGAS_stringlist var_regularBinaryContentIndexStringList_52161 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1328)) ;
  GALGAS_stringlist var_regularTextContentIndexStringList_52220 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1329)) ;
  GALGAS_stringlist var_directoryIndexStringList_52277 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1330)) ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = this ;
  routine_recursivlyEnumerateRegularFile_3F__3F__26__26__26__26_ (temp_0.readProperty_mFilewrapperFileMap (), temp_1.readProperty_mFilewrapperDirectoryMap (), var_regularFileIndexStringList_52111, var_directoryIndexStringList_52277, var_regularTextContentIndexStringList_52220, var_regularBinaryContentIndexStringList_52161, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_52111, var_directoryIndexStringList_52277, var_regularTextContentIndexStringList_52220, var_regularBinaryContentIndexStringList_52161, temp_2.readProperty_mFilewrapperName () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1339))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = this ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_52927 (temp_3.readProperty_mFilewrapperTemplateListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_52927.hasCurrentObject ()) {
    const GALGAS_filewrapperDeclarationForGeneration temp_4 = this ;
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, temp_4.readProperty_mFilewrapperName (), enumerator_52927.current_mFilewrapperTemplateName (HERE), enumerator_52927.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1348))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1348)) ;
    enumerator_52927.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'generateWrapperContents?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (const GALGAS_string constinArgument_inFilewrapperName,
                                                              const GALGAS_string constinArgument_inFilewrapperDirectory,
                                                              const GALGAS_uint constinArgument_inFilewrapperDirectoryIndex,
                                                              const GALGAS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                                              const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                                              GALGAS_string & ioArgument_ioImplementation,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_wrapperFileMap enumerator_53650 (constinArgument_inFilewrapperRegularFileMap, EnumerationOrder::up) ;
  while (enumerator_53650.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_53650.current_mIsTextFile (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_contents_53737 = GALGAS_string::class_func_stringWithContentsOfFile (enumerator_53650.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1368)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)).add_operation (enumerator_53650.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("const char * gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1370)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_53650.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1371)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1371)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1372)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1373)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1373)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (" = "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1374)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (ComparisonKind::greaterThan, var_contents_53737.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1375)).objectCompare (GALGAS_uint (uint32_t (100U)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_stringlist var_components_54190 = var_contents_53737.getter_componentsSeparatedByString (GALGAS_string ("\n") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1376)) ;
            GALGAS_string var_lastLine_54283 ;
            {
            var_components_54190.setter_popLast (var_lastLine_54283, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1377)) ;
            }
            cEnumerator_stringlist enumerator_54306 (var_components_54190, EnumerationOrder::up) ;
            const bool bool_2 = true ;
            if (enumerator_54306.hasCurrentObject () && bool_2) {
              ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1380)) ;
              while (enumerator_54306.hasCurrentObject () && bool_2) {
                GALGAS_string var_s_54402 = enumerator_54306.current_mValue (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1382)) ;
                ioArgument_ioImplementation.plusAssign_operation(var_s_54402.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1383)).add_operation (GALGAS_string ("\n  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1383)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1383)) ;
                enumerator_54306.gotoNextObject () ;
              }
            }
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (ComparisonKind::greaterThan, var_lastLine_54283.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1385)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
              if (kBoolTrue == test_3) {
                ioArgument_ioImplementation.plusAssign_operation(var_lastLine_54283.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1386)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1386)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_1) {
          ioArgument_ioImplementation.plusAssign_operation(var_contents_53737.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1389)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1389)) ;
        }
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (" ;\n\nconst cRegularFileWrapper gWrapperFile_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1391)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_53650.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1392)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1392)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1393)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1394)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1394)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (" (\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1395)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_53650.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1396)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1396)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (",\n  "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1397)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_53650.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1398)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1398)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1398)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (",\n  true, // Text file\n "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1399)) ;
        ioArgument_ioImplementation.plusAssign_operation(var_contents_53737.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1400)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1400)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1400)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string (", // Text length\n  gWrapperFileContent_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1401)) ;
        ioArgument_ioImplementation.plusAssign_operation(enumerator_53650.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1402)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1402)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("_"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1403)) ;
        ioArgument_ioImplementation.plusAssign_operation(constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1404)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1404)) ;
        ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("\n) ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1405)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_data var_contents_55581 = GALGAS_data::class_func_dataWithContentsOfFile (enumerator_53650.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1407)) ;
      ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (enumerator_53650.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (GALGAS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)).add_operation (enumerator_53650.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1410)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1409)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1411)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (var_contents_55581.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1411)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1411)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (GALGAS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (var_contents_55581.getter_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1412)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)).add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)).add_operation (enumerator_53650.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1413)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1414)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1414)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1414)).add_operation (enumerator_53650.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1415)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)).add_operation (enumerator_53650.current_lkey (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 1416)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1416)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)).add_operation (GALGAS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)).add_operation (var_contents_55581.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1418)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1418)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)).add_operation (GALGAS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)).add_operation (GALGAS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)).add_operation (enumerator_53650.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)).add_operation (GALGAS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)) ;
    }
    enumerator_53650.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_56587 (constinArgument_inFilewrapperDirectoryMap, EnumerationOrder::up) ;
  while (enumerator_56587.hasCurrentObject ()) {
    {
    routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (constinArgument_inFilewrapperName, enumerator_56587.current_lkey (HERE).readProperty_string (), enumerator_56587.current_mWrapperDirectoryIndex (HERE), enumerator_56587.current_mRegularFileMap (HERE), enumerator_56587.current_mDirectoryMap (HERE), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1425)) ;
    }
    enumerator_56587.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1435)).add_operation (GALGAS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1435)).add_operation (GALGAS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1435)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1437)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1436)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1437)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1437)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1437)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1437)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1438)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1438)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1438)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1438)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1438)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1435)) ;
  cEnumerator_wrapperFileMap enumerator_57193 (constinArgument_inFilewrapperRegularFileMap, EnumerationOrder::up) ;
  while (enumerator_57193.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperFile_").add_operation (enumerator_57193.current_mWrapperFileIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1440)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1440)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1440)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1440)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1440)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1440)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1440)) ;
    enumerator_57193.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  nullptr\n").add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1442)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1442)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1445)).add_operation (GALGAS_string ("' directory\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1445)).add_operation (GALGAS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1445)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1447)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1446)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1447)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1447)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1447)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1447)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1448)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1448)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1448)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1448)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1448)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1445)) ;
  cEnumerator_wrapperDirectoryMap enumerator_57816 (constinArgument_inFilewrapperDirectoryMap, EnumerationOrder::up) ;
  while (enumerator_57816.hasCurrentObject ()) {
    ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  & gWrapperDirectory_").add_operation (enumerator_57816.current_mWrapperDirectoryIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1450)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1450)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)) ;
    enumerator_57816.gotoNextObject () ;
  }
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("  nullptr\n").add_operation (GALGAS_string ("} ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)) ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)).add_operation (GALGAS_string ("'\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)).add_operation (GALGAS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1456)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1456)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1456)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1457)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1456)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1457)).add_operation (constinArgument_inFilewrapperDirectory.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("semanticGeneration.galgas", 1458)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1458)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1458)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1458)).add_operation (constinArgument_inFilewrapperRegularFileMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1459)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1459)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)).add_operation (GALGAS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1460)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1460)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)).add_operation (constinArgument_inFilewrapperDirectoryMap.getter_count (SOURCE_FILE ("semanticGeneration.galgas", 1461)).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1461)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1461)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1461)).add_operation (GALGAS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1461)).add_operation (constinArgument_inFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1462)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (constinArgument_inFilewrapperDirectoryIndex.getter_string (SOURCE_FILE ("semanticGeneration.galgas", 1462)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)).add_operation (GALGAS_string (") ;\n\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1472))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1472)) ;
  GALGAS_string var_filewrapperImplementation_59173 = GALGAS_string::makeEmptyString () ;
  {
  const GALGAS_filewrapperDeclarationForGeneration temp_1 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_2 = this ;
  const GALGAS_filewrapperDeclarationForGeneration temp_3 = this ;
  routine_generateWrapperContents_3F__3F__3F__3F__3F__26_ (temp_1.readProperty_mFilewrapperName (), GALGAS_string::makeEmptyString (), GALGAS_uint (uint32_t (0U)), temp_2.readProperty_mFilewrapperFileMap (), temp_3.readProperty_mFilewrapperDirectoryMap (), var_filewrapperImplementation_59173, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474)) ;
  }
  const GALGAS_filewrapperDeclarationForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, temp_4.readProperty_mFilewrapperName (), var_filewrapperImplementation_59173 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1482))) ;
  const GALGAS_filewrapperDeclarationForGeneration temp_5 = this ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_59633 (temp_5.readProperty_mFilewrapperTemplateListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_59633.hasCurrentObject ()) {
    GALGAS_string var_generatedCodeForInstructionList_59786 = GALGAS_string::makeEmptyString () ;
    GALGAS_uint var_temporaryVariableIndex_59837 = GALGAS_uint (uint32_t (0U)) ;
    GALGAS_stringset var_unusedVariableCppNameSet_59883 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1491)) ;
    var_unusedVariableCppNameSet_59883.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1492))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1492)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_60003 (enumerator_59633.current_mFilewrapperTemplateFormalInputParameters (HERE), EnumerationOrder::up) ;
    while (enumerator_60003.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_59883.addAssign_operation (enumerator_60003.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1494)) ;
      enumerator_60003.gotoNextObject () ;
    }
    GALGAS_bool var_useColumnMarker_60134 = GALGAS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_59633.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList_59786, ioArgument_ioInclusionSet, var_temporaryVariableIndex_59837, var_unusedVariableCppNameSet_59883, var_useColumnMarker_60134, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1497)) ;
    }
    const GALGAS_filewrapperDeclarationForGeneration temp_6 = this ;
    outArgument_outImplementation.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, temp_6.readProperty_mFilewrapperName (), enumerator_59633.current_mFilewrapperTemplateName (HERE), enumerator_59633.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet_59883, var_useColumnMarker_60134, var_generatedCodeForInstructionList_59786 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506)) ;
    enumerator_59633.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primitiveTypeForGeneration appendPrimitiveTypePreDeclaration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_primitiveTypeForGeneration::method_appendPrimitiveTypePreDeclaration (GALGAS_string & ioArgument_ioHeader,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_primitiveTypeForGeneration temp_0 = this ;
  ioArgument_ioHeader.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1529)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1529)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1529)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_primitiveTypeForGeneration::getter_appendPrimitiveTypeDeclaration (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_primitiveTypeForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mCppDeclarationString () ;
  const GALGAS_primitiveTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_61622 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1536)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_primitiveTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_isPackage ().boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_primitiveTypeForGeneration temp_4 = this ;
      result_result.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForPackage (inCompiler, var_selfTypeDefinition_61622.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1540)), var_selfTypeDefinition_61622.readProperty_classFunctionMap (), var_selfTypeDefinition_61622.readProperty_classMethodMap () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1538))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1538)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_primitiveTypeForGeneration temp_5 = this ;
    result_result.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_61622.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1547)), var_selfTypeDefinition_61622.readProperty_isConcrete (), var_selfTypeDefinition_61622.readProperty_classFunctionMap (), var_selfTypeDefinition_61622.readProperty_mGetterMap (), var_selfTypeDefinition_61622.readProperty_mSetterMap (), var_selfTypeDefinition_61622.readProperty_mInstanceMethodMap (), var_selfTypeDefinition_61622.readProperty_classMethodMap (), var_selfTypeDefinition_61622.readProperty_optionalMethodMap (), var_selfTypeDefinition_61622.readProperty_mEnumerationDescriptor (), var_selfTypeDefinition_61622.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_61622.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_61622.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1545))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1545)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generatePredefinedTypeFiles??&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generatePredefinedTypeFiles_3F__3F__26__26__26_ (const GALGAS_string constinArgument_inDirectory,
                                                              const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationListForGeneration,
                                                              GALGAS_stringlist & ioArgument_ioToolHeaderFileList,
                                                              GALGAS_stringlist & ioArgument_ioToolCppFileList,
                                                              GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_generatedCode_63373 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1579))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_63474 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_63474.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_63474.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1581)).boolEnum () ;
      if (kBoolTrue == test_0) {
        callExtensionMethod_appendPrimitiveTypePreDeclaration ((cPtr_semanticDeclarationForGeneration *) enumerator_63474.current_mDeclaration (HERE).ptr (), var_generatedCode_63373, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1582)) ;
      }
    }
    enumerator_63474.gotoNextObject () ;
  }
  var_generatedCode_63373.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1585)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_63691 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_63691.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_63691.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1587)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generatedCode_63373.plusAssign_operation(callExtensionGetter_appendPrimitiveTypeDeclaration ((const cPtr_semanticDeclarationForGeneration *) enumerator_63691.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1588)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1588)) ;
      }
    }
    enumerator_63691.gotoNextObject () ;
  }
  cEnumerator_semanticDeclarationListForGeneration enumerator_63882 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_63882.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_63882.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1592)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_stringset joker_64020 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1593)) ;
        GALGAS_string var_code_64037 ;
        callExtensionMethod_appendDeclaration_31_ ((cPtr_semanticDeclarationForGeneration *) enumerator_63882.current_mDeclaration (HERE).ptr (), joker_64020, var_code_64037, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1593)) ;
        var_generatedCode_63373.plusAssign_operation(var_code_64037, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1594)) ;
      }
    }
    enumerator_63882.gotoNextObject () ;
  }
  var_generatedCode_63373.plusAssign_operation(GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1597))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1597)) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_64185 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_64185.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_64185.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1599)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_stringset joker_64336 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1600)) ;
        GALGAS_string var_headerString_32__64353 ;
        callExtensionMethod_appendDeclaration_32_ ((cPtr_semanticDeclarationForGeneration *) enumerator_64185.current_mDeclaration (HERE).ptr (), constinArgument_inDirectory, joker_64336, var_headerString_32__64353, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1600)) ;
        var_generatedCode_63373.plusAssign_operation(var_headerString_32__64353, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1601)) ;
      }
    }
    enumerator_64185.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1604)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioToolHeaderFileList.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1605)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.h")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1606)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.h"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_generatedCode_63373, GALGAS_string ("\n\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1607)) ;
      }
    }
  }
  var_generatedCode_63373 = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1620))) ;
  cEnumerator_semanticDeclarationListForGeneration enumerator_65119 (constinArgument_inSemanticDeclarationListForGeneration, EnumerationOrder::up) ;
  while (enumerator_65119.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = callExtensionGetter_isPredefined ((const cPtr_semanticDeclarationForGeneration *) enumerator_65119.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1622)).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_generatedCode_63373.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_65119.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1623)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1623)) ;
        GALGAS_stringset joker_65348 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1624)) ;
        GALGAS_string var_code_65365 ;
        callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_65119.current_mDeclaration (HERE).ptr (), GALGAS_unifiedTypeMap::class_func_emptyMap (SOURCE_FILE ("semanticGeneration.galgas", 1624)), joker_65348, var_code_65365, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1624)) ;
        var_generatedCode_63373.plusAssign_operation(var_code_65365, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1625)) ;
      }
    }
    enumerator_65119.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1628)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioToolCppFileList.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1629)) ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("all-predefined-types.cpp")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1630)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inDirectory, GALGAS_string ("all-predefined-types.cpp"), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_generatedCode_63373, GALGAS_string ("\n\n"), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1631)) ;
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

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileHeader (Compiler * /* inCompiler */,
                                                                                     const GALGAS_string & /* in_COMPONENT_5F_NAME */,
                                                                                     const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_295_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_295 (in_IMPORTED_5F_COMPONENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_295.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_295.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      index_295_.increment () ;
      enumerator_295.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'semanticFileGenerationTemplate semanticFileImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_semanticFileGenerationTemplate_semanticFileImplementation (Compiler * /* inCompiler */,
                                                                                             const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#include \"Compiler.h\"\n#include \"galgas-input-output.h\"\n#include \"C_galgas_CLI_Options.h\"\n#include \"PrologueEpilogue.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_264_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_264 (in_IMPORTED_5F_COMPONENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_264.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_264.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      index_264_.increment () ;
      enumerator_264.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkUsefulEntities???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkUsefulEntities_3F__3F__3F_ (const GALGAS_usefulEntitiesGraph constinArgument_inUsefulEntitiesGraph,
                                              const GALGAS_lstringlist constinArgument_inRootEntities,
                                              const GALGAS_string /* constinArgument_inProductDirectory */,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("useful-entities-computation.galgas", 43)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringlist var_undefinedNodeList_2079 = constinArgument_inUsefulEntitiesGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("useful-entities-computation.galgas", 45)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_2079.getter_count (SOURCE_FILE ("useful-entities-computation.galgas", 46)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_string var_s_2196 = GALGAS_string ("usefulness computation, undefined nodes:") ;
            cEnumerator_stringlist enumerator_2254 (var_undefinedNodeList_2079, EnumerationOrder::up) ;
            while (enumerator_2254.hasCurrentObject ()) {
              var_s_2196.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_2254.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 49)) ;
              enumerator_2254.gotoNextObject () ;
            }
            TC_Array <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 51)), var_s_2196, fixItArray2  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 51)) ;
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_lstringlist var_usefullEntityList_2420 = constinArgument_inUsefulEntitiesGraph.getter_accessibleNodesFrom (constinArgument_inRootEntities, GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("useful-entities-computation.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 54)) ;
          GALGAS_stringset var_usefullEntitySet_2514 = GALGAS_stringset::class_func_setWithLStringList (var_usefullEntityList_2420  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)) ;
          GALGAS_stringset var_allEntitySet_2594 = GALGAS_stringset::class_func_setWithStringList (constinArgument_inUsefulEntitiesGraph.getter_keyList (SOURCE_FILE ("useful-entities-computation.galgas", 56))  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 56)) ;
          GALGAS_stringset var_unusedEntities_2683 = var_allEntitySet_2594.substract_operation (var_usefullEntitySet_2514, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 57)) ;
          GALGAS_uselessEntityLocationMap var_uselessEntityLocationMap_2768 = GALGAS_uselessEntityLocationMap::class_func_emptyMap (SOURCE_FILE ("useful-entities-computation.galgas", 58)) ;
          cEnumerator_stringset enumerator_2809 (var_unusedEntities_2683, EnumerationOrder::up) ;
          while (enumerator_2809.hasCurrentObject ()) {
            GALGAS_location var_l_2856 = constinArgument_inUsefulEntitiesGraph.getter_locationForKey (enumerator_2809.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 60)) ;
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (ComparisonKind::equal, var_l_2856.objectCompare (GALGAS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 61)))).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticWarning (GALGAS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 62)), GALGAS_string ("unused entity, '").add_operation (enumerator_2809.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)).add_operation (GALGAS_string ("' (due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)).add_operation (GALGAS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 63)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 63)), fixItArray4  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)) ;
              }
            }
            if (kBoolFalse == test_3) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_uselessEntityLocationMap_2768.getter_hasKey (var_l_2856.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 64)) COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 64)).operator_not (SOURCE_FILE ("useful-entities-computation.galgas", 64)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  {
                  var_uselessEntityLocationMap_2768.setter_insertKey (var_l_2856.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 65)).getter_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 65)), var_l_2856, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 65)) ;
                  }
                }
              }
            }
            enumerator_2809.gotoNextObject () ;
          }
          cEnumerator_uselessEntityLocationMap enumerator_3311 (var_uselessEntityLocationMap_2768, EnumerationOrder::up) ;
          while (enumerator_3311.hasCurrentObject ()) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (enumerator_3311.current_mLocation (HERE), GALGAS_string ("unused entity, due to option --").add_operation (GALGAS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 69)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 69)), fixItArray6  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 69)) ;
            enumerator_3311.gotoNextObject () ;
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

GALGAS_lstring function_getterNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inGetterName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("getter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)).add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)), constinArgument_inGetterName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 78)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_getterNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_getterNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

GALGAS_lstring function_setterNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inSetterName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("setter @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)).add_operation (constinArgument_inSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)), constinArgument_inSetterName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 84)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_setterNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_setterNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

GALGAS_lstring function_methodNameForUsefulEntitiesGraph (const GALGAS_string & constinArgument_inTypeName,
                                                          const GALGAS_lstring & constinArgument_inMethodName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("method @").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)).add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)), constinArgument_inMethodName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 90)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_methodNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_methodNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

GALGAS_lstring function_initializerNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inTypeName,
                                                               const GALGAS_formalParameterListAST & constinArgument_inParameterList,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("@").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 96)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 96)).add_operation (extensionGetter_keyRepresentation (constinArgument_inParameterList, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 96)), constinArgument_inTypeName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 96)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_initializerNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_formalParameterListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_initializerNameForUsefulEntitiesGraph (Compiler * inCompiler,
                                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                                      const GALGAS_location & /* inErrorLocation */
                                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_formalParameterListAST operand1 = GALGAS_formalParameterListAST::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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
//Function 'lexiqueNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_lexiqueNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inLexiqueName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("lexique ").add_operation (constinArgument_inLexiqueName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 102)), constinArgument_inLexiqueName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 102)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_lexiqueNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_lexiqueNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

GALGAS_lstring function_grammarNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inGrammarName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("grammar ").add_operation (constinArgument_inGrammarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 108)), constinArgument_inGrammarName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 108)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_grammarNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_grammarNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

GALGAS_lstring function_syntaxNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inSyntaxName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("syntax ").add_operation (constinArgument_inSyntaxName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 114)), constinArgument_inSyntaxName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 114)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_syntaxNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_syntaxNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

GALGAS_lstring function_optionNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inOptionName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("option ").add_operation (constinArgument_inOptionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)), constinArgument_inOptionName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 120)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_optionNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_optionNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

GALGAS_lstring function_filewrapperNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFilewrapperName,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("filewrapper ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 126)), constinArgument_inFilewrapperName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 126)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_filewrapperNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_filewrapperNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

GALGAS_lstring function_filewrapperTemplateNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFilewrapperName,
                                                                       const GALGAS_lstring & constinArgument_inTemplateName,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("filewrapper template ").add_operation (constinArgument_inFilewrapperName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 133)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 133)).add_operation (constinArgument_inTemplateName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 133)), constinArgument_inTemplateName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 133)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_filewrapperTemplateNameForUsefulEntitiesGraph [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_filewrapperTemplateNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

GALGAS_lstring function_functionNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFunctionName,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("function ").add_operation (constinArgument_inFunctionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 139)), constinArgument_inFunctionName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 139)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_functionNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_functionNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

GALGAS_lstring function_procedureNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inProcName,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("procedure ").add_operation (constinArgument_inProcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 145)), constinArgument_inProcName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 145)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_procedureNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_procedureNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

GALGAS_lstring function_typeNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inTypeName,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("type @").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 151)), constinArgument_inTypeName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 151)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_typeNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_typeNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_typeNameForUsefulEntitiesGraph ("typeNameForUsefulEntitiesGraph",
                                                                                functionWithGenericHeader_typeNameForUsefulEntitiesGraph,
                                                                                & kTypeDescriptor_GALGAS_lstring,
                                                                                1,
                                                                                functionArgs_typeNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'afterNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_afterNameForUsefulEntitiesGraph (const GALGAS_location & constinArgument_inLocation,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("after"), constinArgument_inLocation, inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 157)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_afterNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_afterNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_afterNameForUsefulEntitiesGraph ("afterNameForUsefulEntitiesGraph",
                                                                                 functionWithGenericHeader_afterNameForUsefulEntitiesGraph,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_afterNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'beforeNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_beforeNameForUsefulEntitiesGraph (const GALGAS_location & constinArgument_inLocation,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("before"), constinArgument_inLocation, inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 163)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_beforeNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_beforeNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_beforeNameForUsefulEntitiesGraph ("beforeNameForUsefulEntitiesGraph",
                                                                                  functionWithGenericHeader_beforeNameForUsefulEntitiesGraph,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_beforeNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'rootRuleNameForUsefulEntitiesGraph'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_rootRuleNameForUsefulEntitiesGraph (const GALGAS_lstring & constinArgument_inFileExtension,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::class_func_new (GALGAS_string ("rule .").add_operation (constinArgument_inFileExtension.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 169)), constinArgument_inFileExtension.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 169)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_rootRuleNameForUsefulEntitiesGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_rootRuleNameForUsefulEntitiesGraph (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_rootRuleNameForUsefulEntitiesGraph ("rootRuleNameForUsefulEntitiesGraph",
                                                                                    functionWithGenericHeader_rootRuleNameForUsefulEntitiesGraph,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_rootRuleNameForUsefulEntitiesGraph) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 115)) ;
  const GALGAS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 116)) ;
  const GALGAS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 117)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_if_5F_expression_5266 ;
  const GALGAS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_if_5F_expression_5266, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 132)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression_5551 ;
  const GALGAS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_then_5F_expression_5551, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 142)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression_5838 ;
  const GALGAS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_else_5F_expression_5838, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 152)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_if_5F_expression_5266.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 162)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_ifExpressionAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mOperatorLocation (), GALGAS_string ("the test expression type is '@").add_operation (extensionGetter_definition (var_if_5F_expression_5266.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 164)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 164)).add_operation (GALGAS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 164)), fixItArray5  COMMA_SOURCE_FILE ("expression-if.galgas", 163)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (ComparisonKind::notEqual, var_then_5F_expression_5551.readProperty_mResultType ().objectCompare (var_else_5F_expression_5838.readProperty_mResultType ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_ifExpressionAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GALGAS_string ("operand expression types are '@").add_operation (extensionGetter_definition (var_then_5F_expression_5551.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)).add_operation (GALGAS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)).add_operation (extensionGetter_definition (var_else_5F_expression_5838.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)).add_operation (GALGAS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 168)), fixItArray8  COMMA_SOURCE_FILE ("expression-if.galgas", 167)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      const GALGAS_ifExpressionAST temp_9 = this ;
      outArgument_outExpression = GALGAS_ifExpressionForGeneration::class_func_new (var_then_5F_expression_5551.readProperty_mResultType (), temp_9.readProperty_mOperatorLocation (), var_if_5F_expression_5266, var_then_5F_expression_5551, var_else_5F_expression_5838  COMMA_SOURCE_FILE ("expression-if.galgas", 172)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                GALGAS_string & outArgument_outCppExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_ifExpression_7709 ;
  const GALGAS_ifExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression_7709, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 202)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-if.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 210)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 211)) ;
  const GALGAS_ifExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mThenExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 212)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 212)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 212)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 212)) ;
  GALGAS_string var_testVar_7977 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-if.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 213)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 214)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_7977, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 215)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 215)).add_operation (var_ifExpression_7709, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 215)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 215)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_7977, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 216)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 216)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 218)) ;
  }
  GALGAS_string var_thenExpression_8445 ;
  const GALGAS_ifExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mThenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression_8445, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 219)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 226)).add_operation (var_thenExpression_8445, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 226)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 226)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 227)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_7977, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 229)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 229)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 230)) ;
  }
  GALGAS_string var_elseExpression_8866 ;
  const GALGAS_ifExpressionForGeneration temp_3 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_3.readProperty_mElseExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression_8866, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 231)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 238)).add_operation (var_elseExpression_8866, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 238)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 238)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 239)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 240)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryPlusExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryPlusExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-plus.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 86)) ;
  GALGAS_unifiedTypeMapEntry var_type_4076 = outArgument_outExpression.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4076, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 97)).readProperty_mHandledOperatorFlags ().getter_prefixPlusOperator (SOURCE_FILE ("expression-unary-plus.galgas", 97)).operator_not (SOURCE_FILE ("expression-unary-plus.galgas", 97)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_unaryPlusExpressionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4076, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 99)).add_operation (GALGAS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4060 ;
  const GALGAS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-minus.galgas", 90)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4060, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 87)) ;
  GALGAS_unifiedTypeMapEntry var_type_4135 = var_expression_4060.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_4174 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_4060.ptr ())) ;
    if (nullptr == var_exp_4174.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (var_exp_4174.readProperty_mResultType (), var_exp_4174.readProperty_mLocation (), var_exp_4174.readProperty_mValue ().operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 102))  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 99)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_4135, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 104)).readProperty_mHandledOperatorFlags ().getter_prefixMinusOperator (SOURCE_FILE ("expression-unary-minus.galgas", 104)).operator_not (SOURCE_FILE ("expression-unary-minus.galgas", 104)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_unaryMinusExpressionAST temp_3 = this ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4135, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 106)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 106)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 106)), fixItArray4  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 105)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_unaryMinusExpressionAST temp_5 = this ;
      outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::class_func_new (var_type_4135, temp_5.readProperty_mOperatorLocation (), var_expression_4060  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 110)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryMinusExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 133)) ;
  GALGAS_string var_operand_6012 ;
  const GALGAS_unaryMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_6012, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 135)) ;
  const GALGAS_unaryMinusExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_6012.add_operation (GALGAS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 143)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 144)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 144)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_type_3523 ;
  GALGAS_string var_sourceVariableCppName_3547 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_3588 ;
  {
  const GALGAS_varInExpressionAST temp_0 = this ;
  extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, temp_0.readProperty_mVarName (), var_type_3523, var_sourceVariableCppName_3547, var_nameForCheckingFormalParameterUsing_3588, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 73)) ;
  }
  const GALGAS_varInExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::class_func_new (var_type_3523, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_3547, var_nameForCheckingFormalParameterUsing_3588  COMMA_SOURCE_FILE ("expression-var.galgas", 79)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_varInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 107)) ;
  const GALGAS_varInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = temp_1.readProperty_mCppVarName () ;
  {
  const GALGAS_varInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("expression-var.galgas", 109)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                               GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_trueExpressionAST temp_0 = this ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-true-false.galgas", 102)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_falseExpressionAST temp_0 = this ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-true-false.galgas", 123)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@trueExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (true)") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@falseExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (false)") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@trueExpressionForGeneration isTrueExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_trueExpressionForGeneration::getter_isTrueExpression (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_3903 = GALGAS_string::makeEmptyString () ;
  const GALGAS_literalStringExpressionAST temp_0 = this ;
  cEnumerator_stringlist enumerator_3917 (temp_0.readProperty_mStringSequence (), EnumerationOrder::up) ;
  while (enumerator_3917.hasCurrentObject ()) {
    var_s_3903.plusAssign_operation(enumerator_3917.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 93)) ;
    enumerator_3917.gotoNextObject () ;
  }
  const GALGAS_literalStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_3903  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 95)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_literalStringExpressionForGeneration temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mString ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_string::makeEmptyString ()") ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_literalStringExpressionForGeneration temp_2 = this ;
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string (").add_operation (temp_2.readProperty_mString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("expression-literal-string.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 117)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 117)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                      const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalCharExpressionAST temp_0 = this ;
  const GALGAS_literalCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mCharacter ().readProperty_location (), temp_1.readProperty_mCharacter ().readProperty_char ()  COMMA_SOURCE_FILE ("expression-literal-char.galgas", 80)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalCharExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalCharExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (TO_UNICODE (").add_operation (temp_0.readProperty_mCharacter ().getter_uint (SOURCE_FILE ("expression-literal-char.galgas", 103)).getter_string (SOURCE_FILE ("expression-literal-char.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-literal-char.galgas", 103)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-char.galgas", 103)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalDoubleExpressionAST temp_0 = this ;
  const GALGAS_literalDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_double ()  COMMA_SOURCE_FILE ("expression-literal-double.galgas", 80)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalDoubleExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalDoubleExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_double (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-double.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-literal-double.galgas", 104)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-double.galgas", 104)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalBigIntExpressionAST temp_0 = this ;
  const GALGAS_literalBigIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_bigint ()  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 172)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUIntExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalUIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint (uint32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 195)).add_operation (GALGAS_string ("U))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 195)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalUInt64ExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalUInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint_36__34_ (uint64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 212)).add_operation (GALGAS_string ("ULL))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 212)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSIntExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalSIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint (int32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 229)).add_operation (GALGAS_string ("L))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 229)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalSInt64ExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalSInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint_36__34_ (int64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 246)).add_operation (GALGAS_string ("LL))"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 246)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalBigIntExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalBigIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bigint (\"").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-literal-integer.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 263)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 263)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 264)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 264)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 265)) ;
  const GALGAS_literalBigIntExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 266)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 266)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 181)) ;
  const GALGAS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 182)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_8839 ;
  const GALGAS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8839, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 197)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_9178 ;
  const GALGAS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8839.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9178, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 207)) ;
  GALGAS_bool var_isComparable_9223 = extensionGetter_definition (var_leftExpression_8839.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 217)).readProperty_mHandledOperatorFlags ().getter_isComparable (SOURCE_FILE ("expression-comparison.galgas", 217)) ;
  GALGAS_bool var_isReferenceEquatable_9321 = extensionGetter_definition (var_leftExpression_8839.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 218)).readProperty_mHandledOperatorFlags ().getter_isReferenceEquatable (SOURCE_FILE ("expression-comparison.galgas", 218)) ;
  GALGAS_bool var_operatorIsAvailable_9441 ;
  GALGAS_string var_operatorName_9475 ;
  const GALGAS_comparisonExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mComparison ().enumValue ()) {
  case GALGAS_comparison::kNotBuilt:
    break ;
  case GALGAS_comparison::kEnum_equal:
    {
      var_operatorName_9475 = GALGAS_string ("==") ;
      var_operatorIsAvailable_9441 = var_isComparable_9223 ;
    }
    break ;
  case GALGAS_comparison::kEnum_notEqual:
    {
      var_operatorName_9475 = GALGAS_string ("!=") ;
      var_operatorIsAvailable_9441 = var_isComparable_9223 ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerOrEqual:
    {
      var_operatorName_9475 = GALGAS_string ("<=") ;
      var_operatorIsAvailable_9441 = var_isComparable_9223 ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerThan:
    {
      var_operatorName_9475 = GALGAS_string ("<") ;
      var_operatorIsAvailable_9441 = var_isComparable_9223 ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterOrEqual:
    {
      var_operatorName_9475 = GALGAS_string (">=") ;
      var_operatorIsAvailable_9441 = var_isComparable_9223 ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterThan:
    {
      var_operatorName_9475 = GALGAS_string (">") ;
      var_operatorIsAvailable_9441 = var_isComparable_9223 ;
    }
    break ;
  case GALGAS_comparison::kEnum_sameInstance:
    {
      var_operatorName_9475 = GALGAS_string ("===") ;
      var_operatorIsAvailable_9441 = var_isReferenceEquatable_9321 ;
    }
    break ;
  case GALGAS_comparison::kEnum_differentInstances:
    {
      var_operatorName_9475 = GALGAS_string ("!==") ;
      var_operatorIsAvailable_9441 = var_isReferenceEquatable_9321 ;
    }
    break ;
  }
  {
  const GALGAS_comparisonExpressionAST temp_3 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (var_operatorIsAvailable_9441, var_operatorName_9475, temp_3.readProperty_mOperatorLocation (), var_leftExpression_8839, var_rightExpression_9178, inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 248)) ;
  }
  const GALGAS_comparisonExpressionAST temp_4 = this ;
  const GALGAS_comparisonExpressionAST temp_5 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), var_leftExpression_8839, temp_5.readProperty_mComparison (), var_rightExpression_9178  COMMA_SOURCE_FILE ("expression-comparison.galgas", 256)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_comparisonExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 284)) ;
  GALGAS_string var_leftTemporaryOperand_11690 ;
  const GALGAS_comparisonExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_11690, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 286)) ;
  GALGAS_string var_rightTemporaryOperand_11895 ;
  const GALGAS_comparisonExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_11895, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 294)) ;
  GALGAS_string var_operatorName_11954 ;
  const GALGAS_comparisonExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mComparison ().enumValue ()) {
  case GALGAS_comparison::kNotBuilt:
    break ;
  case GALGAS_comparison::kEnum_equal:
  case GALGAS_comparison::kEnum_sameInstance:
    {
      var_operatorName_11954 = GALGAS_string ("ComparisonKind::equal") ;
    }
    break ;
  case GALGAS_comparison::kEnum_notEqual:
  case GALGAS_comparison::kEnum_differentInstances:
    {
      var_operatorName_11954 = GALGAS_string ("ComparisonKind::notEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerOrEqual:
    {
      var_operatorName_11954 = GALGAS_string ("ComparisonKind::lowerOrEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_lowerThan:
    {
      var_operatorName_11954 = GALGAS_string ("ComparisonKind::lowerThan") ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterOrEqual:
    {
      var_operatorName_11954 = GALGAS_string ("ComparisonKind::greaterOrEqual") ;
    }
    break ;
  case GALGAS_comparison::kEnum_greaterThan:
    {
      var_operatorName_11954 = GALGAS_string ("ComparisonKind::greaterThan") ;
    }
    break ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_operatorName_11954, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 312)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 312)).add_operation (var_leftTemporaryOperand_11690, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 312)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 312)).add_operation (var_rightTemporaryOperand_11895, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 312)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 312)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 183)) ;
  const GALGAS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 184)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@rightShiftExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_8694 ;
  const GALGAS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8694, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 199)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_9053 ;
  const GALGAS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9053, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 209)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_9133 = var_leftExpression_8694.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_literalBigIntExpressionForGeneration var_left_9180 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_8694.ptr ())) ;
    if (nullptr == var_left_9180.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GALGAS_literalUIntExpressionForGeneration var_right_9253 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_9053.ptr ())) ;
      if (nullptr == var_right_9253.ptr ()) {
        test_2 = kBoolFalse ;
      }
      if (kBoolTrue == test_2) {
        const GALGAS_rightShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_9180.readProperty_mValue ().right_shift_operation (var_right_9253.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 225))  COMMA_SOURCE_FILE ("expression-additive.galgas", 222)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_literalBigIntExpressionForGeneration var_left_9527 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_8694.ptr ())) ;
      if (nullptr == var_left_9527.ptr ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_literalBigIntExpressionForGeneration var_right_9600 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_9053.ptr ())) ;
        if (nullptr == var_right_9600.ptr ()) {
          test_4 = kBoolFalse ;
        }
        if (kBoolTrue == test_4) {
          const GALGAS_rightShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_9527.readProperty_mValue ().right_shift_operation (var_right_9600.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 232))  COMMA_SOURCE_FILE ("expression-additive.galgas", 229)) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_9133, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 234)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 234)).operator_not (SOURCE_FILE ("expression-additive.galgas", 234)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_rightShiftExpressionAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_9133, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 236)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 236)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 236)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 235)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_rightShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftType_9133, temp_9.readProperty_mOperatorLocation (), var_leftExpression_8694, GALGAS_binaryOperator::class_func_rightShift (SOURCE_FILE ("expression-additive.galgas", 244)), var_rightExpression_9053  COMMA_SOURCE_FILE ("expression-additive.galgas", 240)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 255)) ;
  const GALGAS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 256)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@leftShiftExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_11555 ;
  const GALGAS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11555, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 271)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_11914 ;
  const GALGAS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_11914, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 281)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_11994 = var_leftExpression_11555.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_literalBigIntExpressionForGeneration var_left_12041 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_11555.ptr ())) ;
    if (nullptr == var_left_12041.ptr ()) {
      test_2 = kBoolFalse ;
    }
    if (kBoolTrue == test_2) {
      GALGAS_literalUIntExpressionForGeneration var_right_12114 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_11914.ptr ())) ;
      if (nullptr == var_right_12114.ptr ()) {
        test_2 = kBoolFalse ;
      }
      if (kBoolTrue == test_2) {
        const GALGAS_leftShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_12041.readProperty_mValue ().left_shift_operation (var_right_12114.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 297))  COMMA_SOURCE_FILE ("expression-additive.galgas", 294)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_literalBigIntExpressionForGeneration var_left_12388 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_11555.ptr ())) ;
      if (nullptr == var_left_12388.ptr ()) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_literalBigIntExpressionForGeneration var_right_12461 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_11914.ptr ())) ;
        if (nullptr == var_right_12461.ptr ()) {
          test_4 = kBoolFalse ;
        }
        if (kBoolTrue == test_4) {
          const GALGAS_leftShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_12388.readProperty_mValue ().left_shift_operation (var_right_12461.readProperty_mValue ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 304))  COMMA_SOURCE_FILE ("expression-additive.galgas", 301)) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_11994, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 306)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas", 306)).operator_not (SOURCE_FILE ("expression-additive.galgas", 306)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_leftShiftExpressionAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_11994, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 308)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 308)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 308)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas", 307)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_leftShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftType_11994, temp_9.readProperty_mOperatorLocation (), var_leftExpression_11555, GALGAS_binaryOperator::class_func_leftShift (SOURCE_FILE ("expression-additive.galgas", 316)), var_rightExpression_11914  COMMA_SOURCE_FILE ("expression-additive.galgas", 312)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 327)) ;
  const GALGAS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 328)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_14423 ;
  const GALGAS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14423, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 343)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_14758 ;
  const GALGAS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14423.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14758, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 353)) ;
  {
  const GALGAS_addExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14423.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 364)).readProperty_mHandledOperatorFlags ().getter_infixAddOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 364)), GALGAS_string ("&+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14423, var_rightExpression_14758, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 363)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_15045 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_14423.ptr ())) ;
    if (nullptr == var_leftBigint_15045.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_15125 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_14758.ptr ())) ;
      if (nullptr == var_rightBigint_15125.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_addExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_15045.readProperty_mValue ().add_operation (var_rightBigint_15125.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 376))  COMMA_SOURCE_FILE ("expression-additive.galgas", 373)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_addExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_14423.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_14423, GALGAS_binaryOperator::class_func_addNoOverflow (SOURCE_FILE ("expression-additive.galgas", 383)), var_rightExpression_14758  COMMA_SOURCE_FILE ("expression-additive.galgas", 379)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_addExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 394)) ;
  const GALGAS_addExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 395)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@addExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_16817 ;
  const GALGAS_addExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16817, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 409)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_17152 ;
  const GALGAS_addExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_16817.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_17152, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 419)) ;
  {
  const GALGAS_addExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16817.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 430)).readProperty_mHandledOperatorFlags ().getter_infixAddOperator (SOURCE_FILE ("expression-additive.galgas", 430)), GALGAS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16817, var_rightExpression_17152, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 429)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_17433 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_16817.ptr ())) ;
    if (nullptr == var_leftBigint_17433.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_17513 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_17152.ptr ())) ;
      if (nullptr == var_rightBigint_17513.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_addExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_17433.readProperty_mValue ().add_operation (var_rightBigint_17513.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 442))  COMMA_SOURCE_FILE ("expression-additive.galgas", 439)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_addExpressionAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_16817.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_16817, GALGAS_binaryOperator::class_func_add (SOURCE_FILE ("expression-additive.galgas", 449)), var_rightExpression_17152  COMMA_SOURCE_FILE ("expression-additive.galgas", 445)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 460)) ;
  const GALGAS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 461)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_19215 ;
  const GALGAS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_19215, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 476)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_19550 ;
  const GALGAS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_19215.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_19550, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 486)) ;
  {
  const GALGAS_subExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_19215.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 497)).readProperty_mHandledOperatorFlags ().getter_infixSubOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas", 497)), GALGAS_string ("&-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_19215, var_rightExpression_19550, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 496)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_19837 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_19215.ptr ())) ;
    if (nullptr == var_leftBigint_19837.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_19917 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_19550.ptr ())) ;
      if (nullptr == var_rightBigint_19917.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_subExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_19837.readProperty_mValue ().substract_operation (var_rightBigint_19917.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 509))  COMMA_SOURCE_FILE ("expression-additive.galgas", 506)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_subExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_19215.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_19215, GALGAS_binaryOperator::class_func_subNoOverflow (SOURCE_FILE ("expression-additive.galgas", 516)), var_rightExpression_19550  COMMA_SOURCE_FILE ("expression-additive.galgas", 512)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_subExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 527)) ;
  const GALGAS_subExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 528)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@subExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_21609 ;
  const GALGAS_subExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_21609, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 542)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_21944 ;
  const GALGAS_subExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_21609.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_21944, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 552)) ;
  {
  const GALGAS_subExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_21609.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 563)).readProperty_mHandledOperatorFlags ().getter_infixSubOperator (SOURCE_FILE ("expression-additive.galgas", 563)), GALGAS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_21609, var_rightExpression_21944, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 562)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    GALGAS_literalBigIntExpressionForGeneration var_leftBigint_22225 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_21609.ptr ())) ;
    if (nullptr == var_leftBigint_22225.ptr ()) {
      test_3 = kBoolFalse ;
    }
    if (kBoolTrue == test_3) {
      GALGAS_literalBigIntExpressionForGeneration var_rightBigint_22305 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_21944.ptr ())) ;
      if (nullptr == var_rightBigint_22305.ptr ()) {
        test_3 = kBoolFalse ;
      }
      if (kBoolTrue == test_3) {
        const GALGAS_subExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_22225.readProperty_mValue ().substract_operation (var_rightBigint_22305.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 575))  COMMA_SOURCE_FILE ("expression-additive.galgas", 572)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_subExpressionAST temp_5 = this ;
    outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_21609.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_21609, GALGAS_binaryOperator::class_func_sub (SOURCE_FILE ("expression-additive.galgas", 582)), var_rightExpression_21944  COMMA_SOURCE_FILE ("expression-additive.galgas", 578)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binaryOperatorExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperatorExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_binaryOperatorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 625)) ;
  GALGAS_string var_leftTemporaryOperand_24289 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_24289, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 627)) ;
  GALGAS_string var_rightTemporaryOperand_24470 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_24470, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 629)) ;
  GALGAS_string var_operatorString_24532 ;
  GALGAS_bool var_hasCompilerOption_24559 ;
  const GALGAS_binaryOperatorExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mOperator ().enumValue ()) {
  case GALGAS_binaryOperator::kNotBuilt:
    break ;
  case GALGAS_binaryOperator::kEnum_rightShift:
    {
      var_operatorString_24532 = GALGAS_string ("right_shift_operation") ;
      var_hasCompilerOption_24559 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_leftShift:
    {
      var_operatorString_24532 = GALGAS_string ("left_shift_operation") ;
      var_hasCompilerOption_24559 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_add:
    {
      var_operatorString_24532 = GALGAS_string ("add_operation") ;
      var_hasCompilerOption_24559 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_addNoOverflow:
    {
      var_operatorString_24532 = GALGAS_string ("add_operation_no_ovf") ;
      var_hasCompilerOption_24559 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_sub:
    {
      var_operatorString_24532 = GALGAS_string ("substract_operation") ;
      var_hasCompilerOption_24559 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_subNoOverflow:
    {
      var_operatorString_24532 = GALGAS_string ("substract_operation_no_ovf") ;
      var_hasCompilerOption_24559 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_and:
    {
      var_operatorString_24532 = GALGAS_string ("operator_and") ;
      var_hasCompilerOption_24559 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_or:
    {
      var_operatorString_24532 = GALGAS_string ("operator_or") ;
      var_hasCompilerOption_24559 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_operator_5F_xor:
    {
      var_operatorString_24532 = GALGAS_string ("operator_xor") ;
      var_hasCompilerOption_24559 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_multiply_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_24532 = GALGAS_string ("multiply_operation_no_ovf") ;
      var_hasCompilerOption_24559 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_multiply_5F_operation:
    {
      var_operatorString_24532 = GALGAS_string ("multiply_operation") ;
      var_hasCompilerOption_24559 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_divide_5F_operation:
    {
      var_operatorString_24532 = GALGAS_string ("divide_operation") ;
      var_hasCompilerOption_24559 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_divide_5F_operation_5F_no_5F_ovf:
    {
      var_operatorString_24532 = GALGAS_string ("divide_operation_no_ovf") ;
      var_hasCompilerOption_24559 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_binaryOperator::kEnum_modulo_5F_operation:
    {
      var_operatorString_24532 = GALGAS_string ("modulo_operation") ;
      var_hasCompilerOption_24559 = GALGAS_bool (true) ;
    }
    break ;
  }
  outArgument_outCppExpression = var_leftTemporaryOperand_24289.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 677)).add_operation (var_operatorString_24532, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 677)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 677)) ;
  outArgument_outCppExpression.plusAssign_operation(var_rightTemporaryOperand_24470, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 678)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_hasCompilerOption_24559.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 680)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 680)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 681)) COMMA_SOURCE_FILE ("expression-additive.galgas", 681)) ;
      }
    }
  }
  const GALGAS_binaryOperatorExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_5.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 683)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 683)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 163)) ;
  const GALGAS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 164)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_8021 ;
  const GALGAS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8021, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 178)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_8356 ;
  const GALGAS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8021.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8356, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 188)) ;
  {
  const GALGAS_multiplicationExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_8021.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 199)).readProperty_mHandledOperatorFlags ().getter_infixMulOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas", 199)), GALGAS_string ("&*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_8021, var_rightExpression_8356, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 198)) ;
  }
  const GALGAS_multiplicationExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_8021.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_8021, GALGAS_binaryOperator::class_func_multiply_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas", 210)), var_rightExpression_8356  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 206)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 221)) ;
  const GALGAS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 222)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@multiplicationExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_10058 ;
  const GALGAS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_10058, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 236)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_10393 ;
  const GALGAS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_10058.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10393, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 246)) ;
  {
  const GALGAS_multiplicationExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_10058.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 257)).readProperty_mHandledOperatorFlags ().getter_infixMulOperator (SOURCE_FILE ("expression-multiplicative.galgas", 257)), GALGAS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_10058, var_rightExpression_10393, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 256)) ;
  }
  const GALGAS_multiplicationExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_10058.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_10058, GALGAS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 268)), var_rightExpression_10393  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 264)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 278)) ;
  const GALGAS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 279)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionNoOverflowAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_12089 ;
  const GALGAS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_12089, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 293)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_12424 ;
  const GALGAS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_12089.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12424, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 303)) ;
  {
  const GALGAS_divisionExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_12089.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 314)).readProperty_mHandledOperatorFlags ().getter_infixDivOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas", 314)), GALGAS_string ("&/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_12089, var_rightExpression_12424, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 313)) ;
  }
  const GALGAS_divisionExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_12089.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_12089, GALGAS_binaryOperator::class_func_divide_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas", 325)), var_rightExpression_12424  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 321)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 335)) ;
  const GALGAS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 336)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divisionExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_14111 ;
  const GALGAS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14111, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 350)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_14446 ;
  const GALGAS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14111.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14446, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 360)) ;
  {
  const GALGAS_divisionExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14111.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 371)).readProperty_mHandledOperatorFlags ().getter_infixDivOperator (SOURCE_FILE ("expression-multiplicative.galgas", 371)), GALGAS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14111, var_rightExpression_14446, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 370)) ;
  }
  const GALGAS_divisionExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_14111.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_14111, GALGAS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 382)), var_rightExpression_14446  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 378)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 392)) ;
  const GALGAS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 393)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_16116 ;
  const GALGAS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16116, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 407)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16451 ;
  const GALGAS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_16116.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16451, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 417)) ;
  {
  const GALGAS_moduloExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16116.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 428)).readProperty_mHandledOperatorFlags ().getter_infixModOperator (SOURCE_FILE ("expression-multiplicative.galgas", 428)), GALGAS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16116, var_rightExpression_16451, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 427)) ;
  }
  const GALGAS_moduloExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_16116.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16116, GALGAS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 439)), var_rightExpression_16451  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 435)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 144)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_6002 ;
  const GALGAS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas", 162)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_6002, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 159)) ;
  const GALGAS_testDynamicClassInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_castType_6050 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 169)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_6002.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 171)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 171)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMapEntry var_t_6299 = var_castType_6050 ;
      GALGAS_bool var_found_6326 = GALGAS_bool (ComparisonKind::equal, var_t_6299.objectCompare (var_expression_6002.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 175)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 175)).isValid ()) {
        uint32_t variant_6366 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 175)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 175)).uintValue () ;
        bool loop_6366 = true ;
        while (loop_6366) {
          loop_6366 = var_found_6326.operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_and (extensionGetter_definition (var_t_6299, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).isValid () ;
          if (loop_6366) {
            loop_6366 = var_found_6326.operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_and (extensionGetter_definition (var_t_6299, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).boolValue () ;
          }
          if (loop_6366 && (0 == variant_6366)) {
            loop_6366 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 175)) ;
          }
          if (loop_6366) {
            variant_6366 -- ;
            var_t_6299 = extensionGetter_definition (var_t_6299, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 177)).readProperty_superType () ;
            var_found_6326 = GALGAS_bool (ComparisonKind::equal, var_t_6299.objectCompare (var_expression_6002.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_6326.operator_not (SOURCE_FILE ("expression-is-as.galgas", 180)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_testDynamicClassInExpressionAST temp_4 = this ;
          const GALGAS_testDynamicClassInExpressionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (extensionGetter_definition (var_expression_6002.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 181)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_6002.readProperty_mLocation (), GALGAS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_6002.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 186)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 185)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 186)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas", 185)) ;
  }
  const GALGAS_testDynamicClassInExpressionAST temp_8 = this ;
  const GALGAS_testDynamicClassInExpressionAST temp_9 = this ;
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_6002, temp_9.readProperty_mTypeComparisonKind (), var_castType_6050  COMMA_SOURCE_FILE ("expression-is-as.galgas", 189)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 202)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_8318 ;
  const GALGAS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas", 220)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8318, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 217)) ;
  const GALGAS_castInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_type_8367 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 227)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_8318.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 229)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 229)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMapEntry var_t_8612 = var_type_8367 ;
      GALGAS_bool var_found_8635 = GALGAS_bool (ComparisonKind::equal, var_t_8612.objectCompare (var_expression_8318.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 233)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 233)).isValid ()) {
        uint32_t variant_8675 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 233)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 233)).uintValue () ;
        bool loop_8675 = true ;
        while (loop_8675) {
          loop_8675 = var_found_8635.operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_and (extensionGetter_definition (var_t_8612, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).isValid () ;
          if (loop_8675) {
            loop_8675 = var_found_8635.operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_and (extensionGetter_definition (var_t_8612, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).boolValue () ;
          }
          if (loop_8675 && (0 == variant_8675)) {
            loop_8675 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 233)) ;
          }
          if (loop_8675) {
            variant_8675 -- ;
            var_t_8612 = extensionGetter_definition (var_t_8612, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 235)).readProperty_superType () ;
            var_found_8635 = GALGAS_bool (ComparisonKind::equal, var_t_8612.objectCompare (var_expression_8318.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_8635.operator_not (SOURCE_FILE ("expression-is-as.galgas", 238)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_castInExpressionAST temp_4 = this ;
          const GALGAS_castInExpressionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (extensionGetter_definition (var_expression_8318.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 241)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 241)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 239)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_8318.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 243)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("object"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_expression_8318.readProperty_mLocation (), GALGAS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (extensionGetter_definition (var_expression_8318.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 246)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 245)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 246)), fixItArray8  COMMA_SOURCE_FILE ("expression-is-as.galgas", 244)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_expression_8318.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 249)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("object"))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_castInExpressionAST temp_10 = this ;
      const GALGAS_castInExpressionAST temp_11 = this ;
      outArgument_outExpression = GALGAS_extractObjectInExpressionForGeneration::class_func_new (var_type_8367, temp_10.readProperty_mEndOfReceiverExpression (), var_expression_8318, temp_11.readProperty_mTypeName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-is-as.galgas", 250)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_castInExpressionAST temp_12 = this ;
    const GALGAS_castInExpressionAST temp_13 = this ;
    outArgument_outExpression = GALGAS_castInExpressionForGeneration::class_func_new (var_type_8367, temp_12.readProperty_mTypeName ().readProperty_location (), var_expression_8318, temp_13.readProperty_mTypeName ().readProperty_string (), var_type_8367  COMMA_SOURCE_FILE ("expression-is-as.galgas", 256)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_testDynamicClassInExpressionForGeneration temp_0 = this ;
  GALGAS_string var_typeNameRepresentation_10644 = extensionGetter_definition (temp_0.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 284)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 284)) ;
  GALGAS_string var_receiverExpression_10936 ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_10936, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 286)) ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 294)) ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mTypeComparisonKind ().enumValue ()) {
  case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_receiverExpression_10936, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 297)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 297)).add_operation (var_typeNameRepresentation_10644, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 298)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 299)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (nullptr != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_10644, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 301)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 302)).add_operation (var_receiverExpression_10936, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 303)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 303)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool ((").add_operation (var_receiverExpression_10936, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 305)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 305)).add_operation (var_typeNameRepresentation_10644, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 306)).add_operation (GALGAS_string (") && (nullptr != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 307)).add_operation (var_typeNameRepresentation_10644, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 307)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 308)).add_operation (var_receiverExpression_10936, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 309)).add_operation (GALGAS_string (".ptr ())))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 309)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_castInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 322)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 323)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 324)) ;
  GALGAS_string var_receiverExpression_12413 ;
  const GALGAS_castInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_12413, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 326)) ;
  const GALGAS_castInExpressionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_2.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (var_receiverExpression_12413, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 336)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 337)) ;
  }
  const GALGAS_castInExpressionForGeneration temp_3 = this ;
  const GALGAS_castInExpressionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nullptr != dynamic_cast <const cPtr_").add_operation (temp_3.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 340)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 341)).add_operation (var_receiverExpression_12413, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GALGAS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (temp_4.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (var_receiverExpression_12413, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 344)).add_operation (GALGAS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 339)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 346)) ;
  }
  const GALGAS_castInExpressionForGeneration temp_5 = this ;
  const GALGAS_castInExpressionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (GALGAS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (temp_5.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 349)).add_operation (var_receiverExpression_12413, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (GALGAS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 347)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 352)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 353)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 353)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 354)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 355)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 356)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extractObjectInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extractObjectInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 374)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 375)) ;
  GALGAS_string var_receiverExpression_14366 ;
  const GALGAS_extractObjectInExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_14366, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 377)) ;
  const GALGAS_extractObjectInExpressionForGeneration temp_1 = this ;
  const GALGAS_extractObjectInExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)).add_operation (GALGAS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)).add_operation (var_receiverExpression_14366, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 386)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 386)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 388)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 389)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 389)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_4851 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 120)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4851 COMMA_SOURCE_FILE ("expression-option.galgas", 121)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_5150 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_5209 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_5254 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_5299 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_5346 ;
  const GALGAS_optionExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_5150, var_boolOptionMap_5209, var_uintOptionMap_5254, var_stringOptionMap_5299, var_stringListOptionMap_5346, inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 123)) ;
  const GALGAS_optionExpressionAST temp_2 = this ;
  GALGAS_bool var_found_5382 = var_boolOptionMap_5209.getter_hasKey (temp_2.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 131)) ;
  GALGAS_unifiedTypeMapEntry var_returnedType_5470 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_5382.operator_not (SOURCE_FILE ("expression-option.galgas", 133)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_optionExpressionAST temp_4 = this ;
      var_found_5382 = var_uintOptionMap_5254.getter_hasKey (temp_4.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 134)) ;
      var_returnedType_5470 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_5382.operator_not (SOURCE_FILE ("expression-option.galgas", 137)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_optionExpressionAST temp_6 = this ;
      var_found_5382 = var_stringOptionMap_5299.getter_hasKey (temp_6.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 138)) ;
      var_returnedType_5470 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_5382.operator_not (SOURCE_FILE ("expression-option.galgas", 141)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_optionExpressionAST temp_8 = this ;
      var_found_5382 = var_stringListOptionMap_5346.getter_hasKey (temp_8.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 142)) ;
      var_returnedType_5470 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_5382.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_optionExpressionAST temp_11 = this ;
        test_10 = GALGAS_bool (ComparisonKind::equal, temp_11.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_optionExpressionAST temp_12 = this ;
          const GALGAS_optionExpressionAST temp_13 = this ;
          const GALGAS_optionExpressionAST temp_14 = this ;
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::class_func_new (var_returnedType_5470, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5150, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 147)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          const GALGAS_optionExpressionAST temp_16 = this ;
          test_15 = GALGAS_bool (ComparisonKind::equal, temp_16.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("char"))).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_optionExpressionAST temp_17 = this ;
            const GALGAS_optionExpressionAST temp_18 = this ;
            const GALGAS_optionExpressionAST temp_19 = this ;
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5150, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 154)) ;
          }
        }
        if (kBoolFalse == test_15) {
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            const GALGAS_optionExpressionAST temp_21 = this ;
            test_20 = GALGAS_bool (ComparisonKind::equal, temp_21.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_20) {
              const GALGAS_optionExpressionAST temp_22 = this ;
              const GALGAS_optionExpressionAST temp_23 = this ;
              const GALGAS_optionExpressionAST temp_24 = this ;
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5150, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 161)) ;
            }
          }
          if (kBoolFalse == test_20) {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              const GALGAS_optionExpressionAST temp_26 = this ;
              test_25 = GALGAS_bool (ComparisonKind::equal, temp_26.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("comment"))).boolEnum () ;
              if (kBoolTrue == test_25) {
                const GALGAS_optionExpressionAST temp_27 = this ;
                const GALGAS_optionExpressionAST temp_28 = this ;
                const GALGAS_optionExpressionAST temp_29 = this ;
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5150, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionEntryName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 168)) ;
              }
            }
            if (kBoolFalse == test_25) {
              const GALGAS_optionExpressionAST temp_30 = this ;
              TC_Array <FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mOptionGetterName ().readProperty_location (), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("expression-option.galgas", 175)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_stringlist var_s_7523 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-option.galgas", 178)) ;
    cEnumerator_commandLineOptionMap enumerator_7550 (var_boolOptionMap_5209, EnumerationOrder::up) ;
    while (enumerator_7550.hasCurrentObject ()) {
      var_s_7523.addAssign_operation (enumerator_7550.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 180)) ;
      enumerator_7550.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_7618 (var_uintOptionMap_5254, EnumerationOrder::up) ;
    while (enumerator_7618.hasCurrentObject ()) {
      var_s_7523.addAssign_operation (enumerator_7618.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 183)) ;
      enumerator_7618.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_7686 (var_stringOptionMap_5299, EnumerationOrder::up) ;
    while (enumerator_7686.hasCurrentObject ()) {
      var_s_7523.addAssign_operation (enumerator_7686.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 186)) ;
      enumerator_7686.gotoNextObject () ;
    }
    const GALGAS_optionExpressionAST temp_32 = this ;
    const GALGAS_optionExpressionAST temp_33 = this ;
    const GALGAS_optionExpressionAST temp_34 = this ;
    TC_Array <FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_7523) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionEntryName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 189)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 189)).add_operation (temp_34.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 189)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 189)), fixItArray35  COMMA_SOURCE_FILE ("expression-option.galgas", 188)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionValueExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionValueExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionValueExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 213)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionValueExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 214))  COMMA_SOURCE_FILE ("expression-option.galgas", 214)) ;
    }
  }
  const GALGAS_optionValueExpressionForGeneration temp_3 = this ;
  const GALGAS_optionValueExpressionForGeneration temp_4 = this ;
  const GALGAS_optionValueExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 216)).add_operation (GALGAS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 216)).add_operation (temp_4.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 216)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 216)).add_operation (temp_5.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 217)).add_operation (GALGAS_string (".readProperty_value ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 217)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCharExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionCharExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionCharExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 236)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionCharExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 237))  COMMA_SOURCE_FILE ("expression-option.galgas", 237)) ;
    }
  }
  const GALGAS_optionCharExpressionForGeneration temp_3 = this ;
  const GALGAS_optionCharExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 239)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 239)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 240)).add_operation (GALGAS_string (".readProperty_char ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 240)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionStringExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionStringExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 259)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionStringExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 260))  COMMA_SOURCE_FILE ("expression-option.galgas", 260)) ;
    }
  }
  const GALGAS_optionStringExpressionForGeneration temp_3 = this ;
  const GALGAS_optionStringExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 262)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 262)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 263)).add_operation (GALGAS_string (".readProperty_string ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 263)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCommentExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionCommentExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 274)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionCommentExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 275))  COMMA_SOURCE_FILE ("expression-option.galgas", 275)) ;
    }
  }
  const GALGAS_optionCommentExpressionForGeneration temp_3 = this ;
  const GALGAS_optionCommentExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 277)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 277)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 278)).add_operation (GALGAS_string (".readProperty_comment ()"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 278)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueIntrospectionExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_3795 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 91)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3795 COMMA_SOURCE_FILE ("expression-lexique.galgas", 92)) ;
  }
  const GALGAS_lexiqueIntrospectionExpressionAST temp_1 = this ;
  GALGAS_bool joker_4114_7 ; // Joker input parameter
  GALGAS_terminalMap joker_4114_6 ; // Joker input parameter
  GALGAS_indexingListAST joker_4114_5 ; // Joker input parameter
  GALGAS_terminalDeclarationListAST joker_4114_4 ; // Joker input parameter
  GALGAS_lexicalAttributeListAST joker_4114_3 ; // Joker input parameter
  GALGAS_lexicalStyleListAST joker_4114_2 ; // Joker input parameter
  GALGAS_lexicalListDeclarationListAST joker_4114_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueComponentName (), joker_4114_7, joker_4114_6, joker_4114_5, joker_4114_4, joker_4114_3, joker_4114_2, joker_4114_1, inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 94)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_lexiqueIntrospectionExpressionAST temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::notEqual, temp_3.readProperty_mLexiqueGetterName ().readProperty_string ().objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_lexiqueIntrospectionExpressionAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mLexiqueGetterName ().readProperty_location (), GALGAS_string ("unknown getter"), fixItArray5  COMMA_SOURCE_FILE ("expression-lexique.galgas", 100)) ;
    }
  }
  const GALGAS_lexiqueIntrospectionExpressionAST temp_6 = this ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_7 = this ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_8 = this ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_string ("stringlist").getter_nowhere (SOURCE_FILE ("expression-lexique.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 104)), temp_6.readProperty_mLexiqueComponentName ().readProperty_location (), temp_7.readProperty_mLexiqueComponentName ().readProperty_string (), temp_8.readProperty_mLexiqueGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-lexique.galgas", 103)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueIntrospectionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-lexique.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 128))  COMMA_SOURCE_FILE ("expression-lexique.galgas", 128)) ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_1 = this ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_2 = this ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("Lexique_").add_operation (temp_1.readProperty_mLexiqueComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 129)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 129)).add_operation (temp_2.readProperty_mLexiqueGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 129)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 130)).add_operation (extensionGetter_sourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 131)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 131)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_5461 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 142)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_5461 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 143)) ;
  }
  GALGAS_lstring var_filewrapperPath_5784 ;
  GALGAS_bool var_isInternal_5823 ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_1 = this ;
  GALGAS_lstringlist joker_5804_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_5804_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_5804_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_5804_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), var_filewrapperPath_5784, joker_5804_4, joker_5804_3, joker_5804_2, joker_5804_1, var_isInternal_5823, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 145)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_5823.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_3 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_5887 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_3.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 153)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_5 = this ;
        test_4 = GALGAS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 154)).objectCompare (var_filewrapperDeclarationLocation_5887.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 154)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_5887.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)), fixItArray7  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)) ;
        }
      }
    }
  }
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_8 = this ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_9 = this ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_10 = this ;
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("filewrapper"), temp_8.readProperty_mFilewrapperName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 160)), temp_9.readProperty_mFilewrapperName ().readProperty_location (), temp_10.readProperty_mFilewrapperName ().readProperty_string (), var_filewrapperPath_5784.readProperty_string ()  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 159)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = this ;
  cEnumerator_actualOutputExpressionList enumerator_6753 (temp_0.readProperty_mExpressions (), EnumerationOrder::up) ;
  while (enumerator_6753.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_6753.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 172)) ;
    enumerator_6753.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_1 = this ;
  GALGAS_lstring var_usefulnessName_7422 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), temp_1.readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 187)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_7422 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 188)) ;
  }
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_7763 ;
  GALGAS_bool var_isInternal_7802 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_2 = this ;
  GALGAS_lstring joker_7725_4 ; // Joker input parameter
  GALGAS_lstringlist joker_7725_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_7725_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_7725_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_2.readProperty_mFilewrapperName (), joker_7725_4, joker_7725_3, joker_7725_2, joker_7725_1, var_filewrapperTemplateMap_7763, var_isInternal_7802, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 190)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_isInternal_7802.boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_4 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_7867 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_4.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperTemplateInExpressionAST temp_6 = this ;
        test_5 = GALGAS_bool (ComparisonKind::notEqual, temp_6.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 199)).objectCompare (var_filewrapperDeclarationLocation_7867.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 199)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_filewrapperTemplateInExpressionAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_7867.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)) ;
        }
      }
    }
  }
  GALGAS_functionSignature var_templateSignature_8322 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_9 = this ;
  GALGAS_lstring joker_8340 ; // Joker input parameter
  var_filewrapperTemplateMap_7763.method_searchKey (temp_9.readProperty_mFilewrapperTemplateName (), var_templateSignature_8322, joker_8340, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 204)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_8411 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_filewrapperTemplateInExpressionAST temp_11 = this ;
    test_10 = GALGAS_bool (ComparisonKind::notEqual, temp_11.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 207)).objectCompare (var_templateSignature_8322.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 207)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_12 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_13 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_14 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_15 = this ;
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mFilewrapperTemplateName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mFilewrapperTemplateName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (var_templateSignature_8322.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 210)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 210)).add_operation (temp_15.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 211)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 210)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 211)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 208)) ;
      var_effectiveParameterList_8411.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_effectiveParameterList_8411 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 214)) ;
    const GALGAS_filewrapperTemplateInExpressionAST temp_17 = this ;
    cEnumerator_actualOutputExpressionList enumerator_8910 (temp_17.readProperty_mExpressions (), EnumerationOrder::up) ;
    cEnumerator_functionSignature enumerator_8995 (var_templateSignature_8322, EnumerationOrder::up) ;
    while (enumerator_8910.hasCurrentObject () && enumerator_8995.hasCurrentObject ()) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8995.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8910.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_18) {
          GALGAS_string temp_19 ;
          const enumGalgasBool test_20 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8995.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_20) {
            temp_19 = enumerator_8995.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 217)) ;
          }else if (kBoolFalse == test_20) {
            temp_19 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_9105 = GALGAS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 217)) ;
          TC_Array <FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, kFixItReplace, var_s_9105) ;
          inCompiler->emitSemanticError (enumerator_8910.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_9105, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 218)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 218)), fixItArray21  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 218)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_9592 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_8910.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8995.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9592, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 220)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8995.current_mFormalArgumentType (HERE), var_exp_9592.readProperty_mResultType (), enumerator_8910.current_mEndOfExpressionLocation (HERE), var_exp_9592, inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 229)) ;
      }
      var_effectiveParameterList_8411.addAssign_operation (var_exp_9592  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 230)) ;
      enumerator_8910.gotoNextObject () ;
      enumerator_8995.gotoNextObject () ;
    }
  }
  const GALGAS_filewrapperTemplateInExpressionAST temp_22 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_23 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_24 = this ;
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mFilewrapperName ().readProperty_location (), temp_23.readProperty_mFilewrapperName ().readProperty_string (), temp_24.readProperty_mFilewrapperTemplateName ().readProperty_string (), var_effectiveParameterList_8411  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 234)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_10834 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 260)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_10834 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 261)) ;
  }
  GALGAS_stringlist var_directoryList_11042 ;
  GALGAS_string var_fileName_11070 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_filewrapperInExpressionAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mFilewrapperPath ().readProperty_string ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 265)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_filewrapperInExpressionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("path is empty"), fixItArray4  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 266)) ;
      var_directoryList_11042.drop () ; // Release error dropped variable
      var_fileName_11070.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_6 = this ;
      test_5 = GALGAS_bool (ComparisonKind::equal, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("expression-filewrapper.galgas", 267)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperInExpressionAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the path should not begin with '/'"), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 268)) ;
        var_directoryList_11042.drop () ; // Release error dropped variable
        var_fileName_11070.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_9 = this ;
      var_directoryList_11042 = temp_9.readProperty_mFilewrapperPath ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 270)) ;
      {
      var_directoryList_11042.setter_popLast (var_fileName_11070, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 271)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap_11651 ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap_11700 ;
  GALGAS_bool var_isInternal_11746 ;
  const GALGAS_filewrapperInExpressionAST temp_10 = this ;
  GALGAS_lstring joker_11616 ; // Joker input parameter
  GALGAS_lstringlist joker_11623 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_11728 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_10.readProperty_mFilewrapperName (), joker_11616, joker_11623, var_filewrapperFileMap_11651, var_filewrapperDirectoryMap_11700, joker_11728, var_isInternal_11746, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 274)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_isInternal_11746.boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_filewrapperInExpressionAST temp_12 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_11810 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_12.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 285)) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GALGAS_filewrapperInExpressionAST temp_14 = this ;
        test_13 = GALGAS_bool (ComparisonKind::notEqual, temp_14.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)).objectCompare (var_filewrapperDeclarationLocation_11810.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_filewrapperInExpressionAST temp_15 = this ;
          TC_Array <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_11810.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)) ;
        }
      }
    }
  }
  GALGAS_string var_builtPath_12204 = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_11700.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 292)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 292)).isValid ()) {
    uint32_t variant_12221 = var_filewrapperDirectoryMap_11700.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 292)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 292)).uintValue () ;
    bool loop_12221 = true ;
    while (loop_12221) {
      loop_12221 = GALGAS_bool (ComparisonKind::greaterThan, var_directoryList_11042.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 293)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_12221) {
        loop_12221 = GALGAS_bool (ComparisonKind::greaterThan, var_directoryList_11042.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 293)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_12221 && (0 == variant_12221)) {
        loop_12221 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-filewrapper.galgas", 292)) ;
      }
      if (loop_12221) {
        variant_12221 -- ;
        GALGAS_string var_directoryName_12336 ;
        {
        var_directoryList_11042.setter_popFirst (var_directoryName_12336, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 294)) ;
        }
        var_builtPath_12204.plusAssign_operation(var_directoryName_12336.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 295)) ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = var_filewrapperDirectoryMap_11700.getter_hasKey (var_directoryName_12336 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 296)).boolEnum () ;
          if (kBoolTrue == test_17) {
            GALGAS_uint joker_12613 ; // Joker input parameter
            var_filewrapperDirectoryMap_11700.method_searchKey (GALGAS_lstring::class_func_new (var_directoryName_12336, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 298)), var_filewrapperFileMap_11651, var_filewrapperDirectoryMap_11700, joker_12613, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 297)) ;
          }
        }
        if (kBoolFalse == test_17) {
          const GALGAS_filewrapperInExpressionAST temp_18 = this ;
          const GALGAS_filewrapperInExpressionAST temp_19 = this ;
          TC_Array <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the '").add_operation (var_builtPath_12204, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)).add_operation (temp_19.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)), fixItArray20  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)) ;
          var_filewrapperFileMap_11651.drop () ; // Release error dropped variable
          var_directoryList_11042 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 305)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex_12871 ;
  GALGAS_bool var_isTextFile_12893 ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = var_filewrapperFileMap_11651.getter_hasKey (var_fileName_11070 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 310)).boolEnum () ;
    if (kBoolTrue == test_21) {
      GALGAS_string joker_13028 ; // Joker input parameter
      GALGAS_uint joker_13043 ; // Joker input parameter
      var_filewrapperFileMap_11651.method_searchKey (GALGAS_lstring::class_func_new (var_fileName_11070, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 311)), joker_13028, var_isTextFile_12893, joker_13043, var_fileIndex_12871, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 311)) ;
    }
  }
  if (kBoolFalse == test_21) {
    const GALGAS_filewrapperInExpressionAST temp_22 = this ;
    const GALGAS_filewrapperInExpressionAST temp_23 = this ;
    TC_Array <FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the '").add_operation (var_fileName_11070, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (var_builtPath_12204, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (temp_23.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)), fixItArray24  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 313)) ;
    var_fileIndex_12871.drop () ; // Release error dropped variable
    var_isTextFile_12893.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMapEntry temp_25 ;
  const enumGalgasBool test_26 = var_isTextFile_12893.boolEnum () ;
  if (kBoolTrue == test_26) {
    temp_25 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  }else if (kBoolFalse == test_26) {
    temp_25 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("data"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 321)) ;
  }
  const GALGAS_filewrapperInExpressionAST temp_27 = this ;
  const GALGAS_filewrapperInExpressionAST temp_28 = this ;
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::class_func_new (temp_25, temp_27.readProperty_mFilewrapperName ().readProperty_location (), temp_28.readProperty_mFilewrapperName ().readProperty_string (), var_fileIndex_12871, var_isTextFile_12893  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 318)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 346))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 346)) ;
  const GALGAS_filewrapperInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_filewrapper (gWrapperDirectory_0_").add_operation (temp_1.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 367))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 367)) ;
  GALGAS_stringlist var_parameterList_15354 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-filewrapper.galgas", 368)) ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_15392 (temp_1.readProperty_mActualOutputParameterList (), EnumerationOrder::up) ;
  while (enumerator_15392.hasCurrentObject ()) {
    GALGAS_string var_parameter_15605 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_15392.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_15605, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 370)) ;
    var_parameterList_15354.addAssign_operation (var_parameter_15605  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 377)) ;
    enumerator_15392.gotoNextObject () ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_2 = this ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (filewrapperTemplate_").add_operation (temp_2.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (temp_3.readProperty_mFilewrapperTemplateName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 380)) ;
  cEnumerator_stringlist enumerator_15887 (var_parameterList_15354, EnumerationOrder::up) ;
  while (enumerator_15887.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_15887.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 382)) ;
    enumerator_15887.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 384)) COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 384)) ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 385)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 385)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 405))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 405)) ;
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
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (gWrapperFileContent_").add_operation (temp_4.readProperty_mFilewrapperFileIndex ().getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)).add_operation (temp_5.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 63)) ;
  const GALGAS_getterCallExpressionAST temp_1 = this ;
  extensionMethod_enterInSemanticContext (temp_1.readProperty_mActualArgumentList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 64)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_4155 ;
  const GALGAS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas", 80)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_4155, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 77)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_4209 = var_receiverExpression_4155.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_getterCallExpressionAST temp_2 = this ;
    GALGAS_methodKind var_kind_4417 ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_4435 ;
    GALGAS_location var_unused_0_4473 ;
    GALGAS_bool var_hasCompilerArgument_4494 ;
    GALGAS_unifiedTypeMapEntry var_returnedType_4548 ;
    GALGAS_methodQualifier var_unused_0_4570 ;
    GALGAS_string var_replacementGetter_4585 ;
    const bool optionalResult4361 = extensionGetter_definition (var_receiverType_4209, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 88)).readProperty_mGetterMap ().optional_searchKey (temp_2.readProperty_mGetterName ().readProperty_string (), var_kind_4417, var_getterFormalArgumentTypeList_4435, var_unused_0_4473, var_hasCompilerArgument_4494, var_returnedType_4548, var_unused_0_4570, var_replacementGetter_4585) ;
    if (!optionalResult4361) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        GALGAS_bool test_4 = GALGAS_bool (ComparisonKind::notEqual, var_replacementGetter_4585.objectCompare (GALGAS_string::makeEmptyString ())) ;
        if (kBoolTrue == test_4.boolEnum ()) {
          test_4 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
        }
        test_3 = test_4.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_getterCallExpressionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          appendFixItActions (fixItArray6, kFixItReplace, var_replacementGetter_4585) ;
          inCompiler->emitSemanticError (temp_5.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray6  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 98)) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_getterCallExpressionAST temp_8 = this ;
        GALGAS_bool test_9 = temp_8.readProperty_errorOnGetterCallInsteadOfPropertyRead () ;
        if (kBoolTrue == test_9.boolEnum ()) {
          const GALGAS_getterCallExpressionAST temp_10 = this ;
          test_9 = extensionGetter_definition (var_receiverType_4209, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 101)).readProperty_propertyMap ().getter_hasKey (temp_10.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 101)) ;
        }
        GALGAS_bool test_11 = test_9 ;
        if (kBoolTrue == test_11.boolEnum ()) {
          const GALGAS_getterCallExpressionAST temp_12 = this ;
          test_11 = GALGAS_bool (ComparisonKind::equal, temp_12.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 102)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
        }
        test_7 = test_11.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_getterCallExpressionAST temp_13 = this ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray14  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 103)) ;
        }
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        const GALGAS_getterCallExpressionAST temp_16 = this ;
        test_15 = GALGAS_bool (ComparisonKind::notEqual, temp_16.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 106)).objectCompare (var_getterFormalArgumentTypeList_4435.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 106)))).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_getterCallExpressionAST temp_17 = this ;
          const GALGAS_getterCallExpressionAST temp_18 = this ;
          const GALGAS_getterCallExpressionAST temp_19 = this ;
          TC_Array <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_18.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (extensionGetter_definition (var_receiverType_4209, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (var_getterFormalArgumentTypeList_4435.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 108)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 108)).add_operation (temp_19.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 109)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 108)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 109)), fixItArray20  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_15) {
        GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_5605 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 111)) ;
        const GALGAS_getterCallExpressionAST temp_21 = this ;
        cEnumerator_actualOutputExpressionList enumerator_5685 (temp_21.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
        cEnumerator_functionSignature enumerator_5789 (var_getterFormalArgumentTypeList_4435, EnumerationOrder::up) ;
        while (enumerator_5685.hasCurrentObject () && enumerator_5789.hasCurrentObject ()) {
          GALGAS_semanticExpressionForGeneration var_exp_6159 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5685.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5789.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_6159, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 114)) ;
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (ComparisonKind::notEqual, enumerator_5789.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5685.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_22) {
              GALGAS_string temp_23 ;
              const enumGalgasBool test_24 = GALGAS_bool (ComparisonKind::notEqual, enumerator_5789.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_24) {
                temp_23 = enumerator_5789.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 124)) ;
              }else if (kBoolFalse == test_24) {
                temp_23 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_6266 = GALGAS_string ("!").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 124)) ;
              TC_Array <FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, kFixItReplace, var_s_6266) ;
              inCompiler->emitSemanticError (enumerator_5685.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_6266, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 125)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 125)), fixItArray25  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 125)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5789.current_mFormalArgumentType (HERE), var_exp_6159.readProperty_mResultType (), enumerator_5685.current_mEndOfExpressionLocation (HERE), var_exp_6159, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 127)) ;
          }
          var_constructorEffectiveParameterList_5605.addAssign_operation (var_exp_6159  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 128)) ;
          enumerator_5685.gotoNextObject () ;
          enumerator_5789.gotoNextObject () ;
        }
        const GALGAS_getterCallExpressionAST temp_26 = this ;
        GALGAS_string temp_27 ;
        const enumGalgasBool test_28 = GALGAS_bool (ComparisonKind::equal, var_replacementGetter_4585.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_28) {
          const GALGAS_getterCallExpressionAST temp_29 = this ;
          temp_27 = temp_29.readProperty_mGetterName ().readProperty_string () ;
        }else if (kBoolFalse == test_28) {
          temp_27 = var_replacementGetter_4585 ;
        }
        outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::class_func_new (var_returnedType_4548, temp_26.readProperty_mGetterName ().readProperty_location (), var_kind_4417, var_receiverExpression_4155, GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 135)), temp_27, var_constructorEffectiveParameterList_5605, var_hasCompilerArgument_4494  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 130)) ;
        enumGalgasBool test_30 = kBoolTrue ;
        if (kBoolTrue == test_30) {
          GALGAS_bool test_31 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_galgas_34_ () ;
          if (kBoolTrue == test_31.boolEnum ()) {
            const GALGAS_getterCallExpressionAST temp_32 = this ;
            test_31 = GALGAS_bool (ComparisonKind::equal, temp_32.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 141)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
          }
          GALGAS_bool test_33 = test_31 ;
          if (kBoolTrue == test_33.boolEnum ()) {
            test_33 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOnGetterCallWithNoArgument.readProperty_value ()) ;
          }
          test_30 = test_33.boolEnum () ;
          if (kBoolTrue == test_30) {
            const GALGAS_getterCallExpressionAST temp_34 = this ;
            TC_Array <FixItDescription> fixItArray35 ;
            fixItArray35.appendObject (FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (temp_34.readProperty_mExpressionLocation (), GALGAS_string ("getter with no argument, remove parenthesis"), fixItArray35  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 143)) ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_36 = kBoolTrue ;
    if (kBoolTrue == test_36) {
      const GALGAS_getterCallExpressionAST temp_37 = this ;
      test_36 = GALGAS_bool (ComparisonKind::equal, temp_37.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 147)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_36) {
        const GALGAS_getterCallExpressionAST temp_38 = this ;
        GALGAS_AccessControl var_accessControl_7553 ;
        GALGAS_bool var_unused_0_7568 ;
        GALGAS_unifiedTypeMapEntry var_propertyType_7575 ;
        const bool optionalResult7513 = extensionGetter_definition (var_receiverType_4209, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 147)).readProperty_propertyMap ().optional_searchKey (temp_38.readProperty_mGetterName ().readProperty_string (), var_accessControl_7553, var_unused_0_7568, var_propertyType_7575) ;
        if (!optionalResult7513) {
          test_36 = kBoolFalse ;
        }
        if (kBoolTrue == test_36) {
          const GALGAS_getterCallExpressionAST temp_39 = this ;
          extensionMethod_checkGetAccess (var_accessControl_7553, constinArgument_inAnalysisContext.readProperty_selfType (), temp_39.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 148)) ;
          const GALGAS_getterCallExpressionAST temp_40 = this ;
          const GALGAS_getterCallExpressionAST temp_41 = this ;
          outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::class_func_new (var_propertyType_7575, temp_40.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4155, temp_41.readProperty_mGetterName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 152)) ;
          enumGalgasBool test_42 = kBoolTrue ;
          if (kBoolTrue == test_42) {
            const GALGAS_getterCallExpressionAST temp_43 = this ;
            test_42 = temp_43.readProperty_errorOnGetterCallInsteadOfPropertyRead ().boolEnum () ;
            if (kBoolTrue == test_42) {
              const GALGAS_getterCallExpressionAST temp_44 = this ;
              TC_Array <FixItDescription> fixItArray45 ;
              inCompiler->emitSemanticError (temp_44.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray45  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 159)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_36) {
      GALGAS_uint var_matchingReaderCount_8347 = GALGAS_uint (uint32_t (0U)) ;
      enumGalgasBool test_46 = kBoolTrue ;
      if (kBoolTrue == test_46) {
        test_46 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_4209, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 164)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-getter-call.galgas", 164)))).boolEnum () ;
        if (kBoolTrue == test_46) {
          GALGAS_functionSignature var_getterFormalArgumentTypeList_8466 = GALGAS_functionSignature::class_func_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 165)) ;
          GALGAS_bool var_hasCompilerArgument_8512 = GALGAS_bool (true) ;
          GALGAS_unifiedTypeMapEntry var_returnedType_8551 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas", 167)) ;
          GALGAS_methodKind var_kind_8604 = GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas", 168)) ;
          GALGAS_stringlist var_fieldList_8666 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 169)) ;
          GALGAS_string var_obsoletedByGetter_8693 = GALGAS_string::makeEmptyString () ;
          cEnumerator_typedPropertyList enumerator_8761 (extensionGetter_definition (var_receiverType_4209, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 171)).readProperty_currentTypedPropertyList (), EnumerationOrder::up) ;
          while (enumerator_8761.hasCurrentObject ()) {
            GALGAS_unifiedTypeMapEntry var_propertyType_8835 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (extensionGetter_definition (enumerator_8761.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 172)).readProperty_typeName ().readProperty_string (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 172)) ;
            GALGAS_getterMap var_aMap_8959 = extensionGetter_definition (var_propertyType_8835, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 173)).readProperty_mGetterMap () ;
            const GALGAS_getterCallExpressionAST temp_47 = this ;
            const cMapElement_getterMap * objectArray_9013 = (const cMapElement_getterMap *) var_aMap_8959.readAccessForWithInstruction (temp_47.readProperty_mGetterName ().readProperty_string ()) ;
            if (nullptr != objectArray_9013) {
                macroValidSharedObject (objectArray_9013, cMapElement_getterMap) ;
              enumGalgasBool test_48 = kBoolTrue ;
              if (kBoolTrue == test_48) {
                test_48 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_propertyType_8835, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 175)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_8761.current_mPropertyName (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_48) {
                  var_matchingReaderCount_8347.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 176)) ;
                  var_getterFormalArgumentTypeList_8466 = objectArray_9013->mProperty_mArgumentTypeList ;
                  var_hasCompilerArgument_8512 = objectArray_9013->mProperty_mHasCompilerArgument ;
                  var_returnedType_8551 = objectArray_9013->mProperty_mReturnedType ;
                  const GALGAS_getterCallExpressionAST temp_49 = this ;
                  var_receiverExpression_4155 = GALGAS_structPropertyAccessExpressionForGeneration::class_func_new (var_returnedType_8551, temp_49.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4155, enumerator_8761.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 180)) ;
                  var_kind_8604 = objectArray_9013->mProperty_mKind ;
                  var_obsoletedByGetter_8693 = objectArray_9013->mProperty_mGetterNameThatObsoletesInvokationName ;
                }
              }
            }
            enumerator_8761.gotoNextObject () ;
          }
          enumGalgasBool test_50 = kBoolTrue ;
          if (kBoolTrue == test_50) {
            test_50 = GALGAS_bool (ComparisonKind::equal, var_matchingReaderCount_8347.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_50) {
              const GALGAS_getterCallExpressionAST temp_51 = this ;
              const GALGAS_getterCallExpressionAST temp_52 = this ;
              TC_Array <FixItDescription> fixItArray53 ;
              inCompiler->emitSemanticError (temp_51.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4209, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 193)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 193)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 193)).add_operation (temp_52.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 193)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 193)), fixItArray53  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 192)) ;
              var_getterFormalArgumentTypeList_8466.drop () ; // Release error dropped variable
              var_hasCompilerArgument_8512.drop () ; // Release error dropped variable
              var_returnedType_8551.drop () ; // Release error dropped variable
              var_kind_8604.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_50) {
            enumGalgasBool test_54 = kBoolTrue ;
            if (kBoolTrue == test_54) {
              test_54 = GALGAS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_8347.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_54) {
                GALGAS_string var_s_10139 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_10161 (var_fieldList_8666, EnumerationOrder::up) ;
                while (enumerator_10161.hasCurrentObject ()) {
                  var_s_10139.plusAssign_operation(enumerator_10161.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 199)) ;
                  if (enumerator_10161.hasNextObject ()) {
                    var_s_10139.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 200)) ;
                  }
                  enumerator_10161.gotoNextObject () ;
                }
                const GALGAS_getterCallExpressionAST temp_55 = this ;
                const GALGAS_getterCallExpressionAST temp_56 = this ;
                TC_Array <FixItDescription> fixItArray57 ;
                inCompiler->emitSemanticError (temp_55.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4209, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 203)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 203)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 203)).add_operation (temp_56.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 203)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 203)).add_operation (var_s_10139, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 204)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 204)), fixItArray57  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 202)) ;
                var_getterFormalArgumentTypeList_8466.drop () ; // Release error dropped variable
                var_hasCompilerArgument_8512.drop () ; // Release error dropped variable
                var_returnedType_8551.drop () ; // Release error dropped variable
                var_kind_8604.drop () ; // Release error dropped variable
              }
            }
          }
          enumGalgasBool test_58 = kBoolTrue ;
          if (kBoolTrue == test_58) {
            const GALGAS_getterCallExpressionAST temp_59 = this ;
            test_58 = GALGAS_bool (ComparisonKind::notEqual, temp_59.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 208)).objectCompare (var_getterFormalArgumentTypeList_8466.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 208)))).boolEnum () ;
            if (kBoolTrue == test_58) {
              const GALGAS_getterCallExpressionAST temp_60 = this ;
              const GALGAS_getterCallExpressionAST temp_61 = this ;
              const GALGAS_getterCallExpressionAST temp_62 = this ;
              TC_Array <FixItDescription> fixItArray63 ;
              inCompiler->emitSemanticError (temp_60.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_61.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)).add_operation (extensionGetter_definition (var_receiverType_4209, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)).add_operation (var_getterFormalArgumentTypeList_8466.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 210)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 210)).add_operation (temp_62.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 211)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 210)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)), fixItArray63  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_58) {
            GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_11135 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 213)) ;
            const GALGAS_getterCallExpressionAST temp_64 = this ;
            cEnumerator_actualOutputExpressionList enumerator_11217 (temp_64.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
            cEnumerator_functionSignature enumerator_11323 (var_getterFormalArgumentTypeList_8466, EnumerationOrder::up) ;
            while (enumerator_11217.hasCurrentObject () && enumerator_11323.hasCurrentObject ()) {
              GALGAS_semanticExpressionForGeneration var_exp_11709 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11217.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11323.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11709, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 216)) ;
              enumGalgasBool test_65 = kBoolTrue ;
              if (kBoolTrue == test_65) {
                test_65 = GALGAS_bool (ComparisonKind::notEqual, enumerator_11323.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_11217.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_65) {
                  GALGAS_string temp_66 ;
                  const enumGalgasBool test_67 = GALGAS_bool (ComparisonKind::notEqual, enumerator_11323.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_67) {
                    temp_66 = enumerator_11323.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 226)) ;
                  }else if (kBoolFalse == test_67) {
                    temp_66 = GALGAS_string::makeEmptyString () ;
                  }
                  GALGAS_string var_s_11822 = GALGAS_string ("!").add_operation (temp_66, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 226)) ;
                  TC_Array <FixItDescription> fixItArray68 ;
                  appendFixItActions (fixItArray68, kFixItReplace, var_s_11822) ;
                  inCompiler->emitSemanticError (enumerator_11217.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11822, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 227)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 227)), fixItArray68  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 227)) ;
                }
              }
              {
              routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11323.current_mFormalArgumentType (HERE), var_exp_11709.readProperty_mResultType (), enumerator_11217.current_mEndOfExpressionLocation (HERE), var_exp_11709, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 229)) ;
              }
              var_constructorEffectiveParameterList_11135.addAssign_operation (var_exp_11709  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 230)) ;
              enumerator_11217.gotoNextObject () ;
              enumerator_11323.gotoNextObject () ;
            }
            enumGalgasBool test_69 = kBoolTrue ;
            if (kBoolTrue == test_69) {
              GALGAS_bool test_70 = GALGAS_bool (ComparisonKind::notEqual, var_obsoletedByGetter_8693.objectCompare (GALGAS_string::makeEmptyString ())) ;
              if (kBoolTrue == test_70.boolEnum ()) {
                test_70 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
              }
              test_69 = test_70.boolEnum () ;
              if (kBoolTrue == test_69) {
                const GALGAS_getterCallExpressionAST temp_71 = this ;
                TC_Array <FixItDescription> fixItArray72 ;
                appendFixItActions (fixItArray72, kFixItReplace, var_obsoletedByGetter_8693) ;
                inCompiler->emitSemanticError (temp_71.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray72  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 233)) ;
              }
            }
            const GALGAS_getterCallExpressionAST temp_73 = this ;
            GALGAS_string temp_74 ;
            const enumGalgasBool test_75 = GALGAS_bool (ComparisonKind::equal, var_obsoletedByGetter_8693.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_75) {
              const GALGAS_getterCallExpressionAST temp_76 = this ;
              temp_74 = temp_76.readProperty_mGetterName ().readProperty_string () ;
            }else if (kBoolFalse == test_75) {
              temp_74 = var_obsoletedByGetter_8693 ;
            }
            outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::class_func_new (var_returnedType_8551, temp_73.readProperty_mGetterName ().readProperty_location (), var_kind_8604, var_receiverExpression_4155, var_fieldList_8666, temp_74, var_constructorEffectiveParameterList_11135, var_hasCompilerArgument_8512  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 235)) ;
          }
        }
      }
      if (kBoolFalse == test_46) {
        enumGalgasBool test_77 = kBoolTrue ;
        if (kBoolTrue == test_77) {
          test_77 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_4209, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 246)).readProperty_mGetterMap ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 246)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_77) {
            const GALGAS_getterCallExpressionAST temp_78 = this ;
            TC_Array <FixItDescription> fixItArray79 ;
            inCompiler->emitSemanticError (temp_78.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4209, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 248)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 248)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 248)), fixItArray79  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 247)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_77) {
          const GALGAS_getterCallExpressionAST temp_80 = this ;
          const GALGAS_getterCallExpressionAST temp_81 = this ;
          TC_Array <FixItDescription> fixItArray82 ;
          appendFixItActions (fixItArray82, kFixItReplace, extensionGetter_definition (var_receiverType_4209, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 254)).readProperty_mGetterMap ().getter_keyList (SOURCE_FILE ("expression-getter-call.galgas", 254))) ;
          inCompiler->emitSemanticError (temp_80.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4209, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 252)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 252)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 252)).add_operation (temp_81.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 252)).add_operation (GALGAS_string ("' getter "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 252)), fixItArray82  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 251)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_getterCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 285)) ;
  GALGAS_string var_receiverCppName_14633 ;
  const GALGAS_getterCallExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_14633, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 287)) ;
  GALGAS_stringlist var_getterArgumentCppNameList_14698 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-getter-call.galgas", 295)) ;
  const GALGAS_getterCallExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_14738 (temp_2.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
  while (enumerator_14738.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName_14956 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14738.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_14956, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 297)) ;
    var_getterArgumentCppNameList_14698.addAssign_operation (var_argumentCppName_14956  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 304)) ;
    enumerator_14738.gotoNextObject () ;
  }
  const GALGAS_getterCallExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_getterCallExpressionForGeneration temp_4 = this ;
      GALGAS_unifiedTypeMapEntry var_baseType_15151 = temp_4.readProperty_mReceiverExpression ().readProperty_mResultType () ;
      extensionMethod_addHeaderFileName (var_baseType_15151, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 310)) ;
      GALGAS_bool var_searching_15266 = GALGAS_bool (true) ;
      if (GALGAS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas", 312)).isValid ()) {
        uint32_t variant_15289 = GALGAS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas", 312)).uintValue () ;
        bool loop_15289 = true ;
        while (loop_15289) {
          loop_15289 = var_searching_15266.isValid () ;
          if (loop_15289) {
            loop_15289 = var_searching_15266.boolValue () ;
          }
          if (loop_15289 && (0 == variant_15289)) {
            loop_15289 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-getter-call.galgas", 312)) ;
          }
          if (loop_15289) {
            variant_15289 -- ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = extensionGetter_definition (var_baseType_15151, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 313)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-getter-call.galgas", 313)).operator_not (SOURCE_FILE ("expression-getter-call.galgas", 313)).boolEnum () ;
              if (kBoolTrue == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  const GALGAS_getterCallExpressionForGeneration temp_7 = this ;
                  test_6 = extensionGetter_definition (extensionGetter_definition (var_baseType_15151, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 314)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 314)).readProperty_mGetterMap ().getter_hasKey (temp_7.readProperty_mGetterName () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 314)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    var_baseType_15151 = extensionGetter_definition (var_baseType_15151, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 315)).readProperty_superType () ;
                  }
                }
                if (kBoolFalse == test_6) {
                  var_searching_15266 = GALGAS_bool (false) ;
                }
              }
            }
            if (kBoolFalse == test_5) {
              var_searching_15266 = GALGAS_bool (false) ;
            }
          }
        }
      }
      const GALGAS_getterCallExpressionForGeneration temp_8 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_15151, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)).add_operation (temp_8.readProperty_mGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_14633 COMMA_SOURCE_FILE ("expression-getter-call.galgas", 324)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_getterCallExpressionForGeneration temp_10 = this ;
        test_9 = extensionGetter_definition (temp_10.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-getter-call.galgas", 325)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_getterCallExpressionForGeneration temp_11 = this ;
          const GALGAS_getterCallExpressionForGeneration temp_12 = this ;
          outArgument_outCppExpression = GALGAS_string ("callExtensionGetter_").add_operation (temp_11.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 326)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 326)).add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 327)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 327)).add_operation (var_receiverCppName_14633, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 327)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 327)) ;
        }
      }
      if (kBoolFalse == test_9) {
        const GALGAS_getterCallExpressionForGeneration temp_13 = this ;
        extensionMethod_addHeaderFileName (temp_13.readProperty_mReceiverExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329)) ;
        const GALGAS_getterCallExpressionForGeneration temp_14 = this ;
        outArgument_outCppExpression = GALGAS_string ("extensionGetter_").add_operation (temp_14.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 330)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 330)).add_operation (var_receiverCppName_14633, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 330)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 330)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_14633 ;
      const GALGAS_getterCallExpressionForGeneration temp_15 = this ;
      cEnumerator_stringlist enumerator_16504 (temp_15.readProperty_mFieldList (), EnumerationOrder::up) ;
      while (enumerator_16504.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".readProperty_").add_operation (enumerator_16504.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 335)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 335)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 335)) ;
        enumerator_16504.gotoNextObject () ;
      }
      const GALGAS_getterCallExpressionForGeneration temp_16 = this ;
      extensionMethod_addHeaderFileName (temp_16.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 337)) ;
      const GALGAS_getterCallExpressionForGeneration temp_17 = this ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".getter_").add_operation (temp_17.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 338)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 338)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_16801 (var_getterArgumentCppNameList_14698, EnumerationOrder::up) ;
  while (enumerator_16801.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_16801.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 341)) ;
    if (enumerator_16801.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 342)) ;
    }
    enumerator_16801.gotoNextObject () ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (ComparisonKind::equal, var_getterArgumentCppNameList_14698.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 344)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_18) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        const GALGAS_getterCallExpressionForGeneration temp_20 = this ;
        test_19 = temp_20.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (kBoolTrue == test_19) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 346)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 346)) ;
          }
          outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 347)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 347)) ;
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
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 350)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 350)) ;
        }
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 351)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 351)) ;
      }
    }
    if (kBoolFalse == test_21) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 353)) ;
    }
  }
  const GALGAS_getterCallExpressionForGeneration temp_23 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_23.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 355)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 355)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_constructorExpressionAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_constructorExpressionAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_6238 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_6238, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 177)) ;
      }
    }
  }
  const GALGAS_constructorExpressionAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 179)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation?&??&&????!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                   const GALGAS_lstring constinArgument_inTypeName,
                                                                                                   const GALGAS_lstring constinArgument_inConstructorName,
                                                                                                   const GALGAS_actualOutputExpressionList constinArgument_inInitializerEffectiveParameterExpressions,
                                                                                                   const GALGAS_location constinArgument_inLocationForOldStyleCollectionInitializerError,
                                                                                                   GALGAS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                                   GALGAS_unifiedTypeMapEntry & outArgument_outConstructorType,
                                                                                                   GALGAS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                                                                                   GALGAS_bool & outArgument_outHasCompilerArgument,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outConstructorType.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outHasCompilerArgument.drop () ; // Release 'out' argument
  outArgument_outConstructorType = constinArgument_inType ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outConstructorType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 202)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-constructor.galgas", 204)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-constructor.galgas", 205)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_classFunctionMap var_classFunctionMap_7534 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 210)).readProperty_classFunctionMap () ;
    GALGAS_functionSignature var_constructorFormalArgumentTypeList_7654 ;
    const cMapElement_classFunctionMap * objectArray_7692 = (const cMapElement_classFunctionMap *) var_classFunctionMap_7534.readAccessForWithInstruction (constinArgument_inConstructorName.readProperty_string ()) ;
    if (nullptr != objectArray_7692) {
        macroValidSharedObject (objectArray_7692, cMapElement_classFunctionMap) ;
      var_constructorFormalArgumentTypeList_7654 = objectArray_7692->mProperty_mArgumentTypeList ;
      outArgument_outHasCompilerArgument = objectArray_7692->mProperty_mHasCompilerArgument ;
      outArgument_outReturnedType = objectArray_7692->mProperty_mReturnedType ;
    }else{
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::equal, var_classFunctionMap_7534.getter_count (SOURCE_FILE ("expression-constructor.galgas", 218)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 220)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 220)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 220)), fixItArray4  COMMA_SOURCE_FILE ("expression-constructor.galgas", 219)) ;
          var_constructorFormalArgumentTypeList_7654.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_3) {
        TC_Array <FixItDescription> fixItArray5 ;
        appendFixItActions (fixItArray5, kFixItReplace, var_classFunctionMap_7534.getter_keyList (SOURCE_FILE ("expression-constructor.galgas", 226))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 224)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 224)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 224)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 224)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 224)), fixItArray5  COMMA_SOURCE_FILE ("expression-constructor.galgas", 223)) ;
        var_constructorFormalArgumentTypeList_7654.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-constructor.galgas", 230)).objectCompare (var_constructorFormalArgumentTypeList_7654.getter_count (SOURCE_FILE ("expression-constructor.galgas", 230)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 232)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 232)).add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 232)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 232)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 232)).add_operation (var_constructorFormalArgumentTypeList_7654.getter_count (SOURCE_FILE ("expression-constructor.galgas", 233)).getter_string (SOURCE_FILE ("expression-constructor.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 232)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 233)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-constructor.galgas", 234)).getter_string (SOURCE_FILE ("expression-constructor.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 233)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 234)), fixItArray7  COMMA_SOURCE_FILE ("expression-constructor.galgas", 231)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-constructor.galgas", 236)) ;
    cEnumerator_actualOutputExpressionList enumerator_9089 (constinArgument_inInitializerEffectiveParameterExpressions, EnumerationOrder::up) ;
    cEnumerator_functionSignature enumerator_9207 (var_constructorFormalArgumentTypeList_7654, EnumerationOrder::up) ;
    while (enumerator_9089.hasCurrentObject () && enumerator_9207.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_9550 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_9089.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_9207.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9550, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 239)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_9207.current_mFormalArgumentType (HERE), var_exp_9550.readProperty_mResultType (), enumerator_9089.current_mEndOfExpressionLocation (HERE), var_exp_9550, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 248)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_9550  COMMA_SOURCE_FILE ("expression-constructor.galgas", 249)) ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (ComparisonKind::notEqual, enumerator_9207.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_9089.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_string temp_9 ;
          const enumGalgasBool test_10 = GALGAS_bool (ComparisonKind::notEqual, enumerator_9207.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            temp_9 = enumerator_9207.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 251)) ;
          }else if (kBoolFalse == test_10) {
            temp_9 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_9816 = GALGAS_string ("!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 251)) ;
          TC_Array <FixItDescription> fixItArray11 ;
          appendFixItActions (fixItArray11, kFixItReplace, var_s_9816) ;
          inCompiler->emitSemanticError (enumerator_9089.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_9816, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 252)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 252)), fixItArray11  COMMA_SOURCE_FILE ("expression-constructor.galgas", 252)) ;
        }
      }
      enumerator_9089.gotoNextObject () ;
      enumerator_9207.gotoNextObject () ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    GALGAS_bool test_13 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer.readProperty_value ()) ;
    if (kBoolTrue == test_13.boolEnum ()) {
      test_13 = GALGAS_bool (ComparisonKind::equal, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-constructor.galgas", 257)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    }
    test_12 = test_13.boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_stringset temp_14 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("expression-constructor.galgas", 258)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyList")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 258)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyMap")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 258)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptySortedList")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 258)) ;
      temp_14.addAssign_operation (GALGAS_string ("emptyDict")  COMMA_SOURCE_FILE ("expression-constructor.galgas", 258)) ;
      GALGAS_stringset var_oldInitializers_10170 = temp_14 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_oldInitializers_10170.getter_hasKey (constinArgument_inConstructorName.readProperty_string () COMMA_SOURCE_FILE ("expression-constructor.galgas", 259)).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <FixItDescription> fixItArray16 ;
          appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string (" {}")) ;
          inCompiler->emitSemanticError (constinArgument_inLocationForOldStyleCollectionInitializerError, GALGAS_string ("old style collection initializer call (due to '--error-old-syle-collection-initializer' option)"), fixItArray16  COMMA_SOURCE_FILE ("expression-constructor.galgas", 260)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedType_11406 ;
  GALGAS_unifiedTypeMapEntry var_constructorType_11449 ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_11511 ;
  GALGAS_bool var_hasCompilerArgument_11560 ;
  {
  const GALGAS_constructorExpressionAST temp_0 = this ;
  const GALGAS_constructorExpressionAST temp_1 = this ;
  const GALGAS_constructorExpressionAST temp_2 = this ;
  const GALGAS_constructorExpressionAST temp_3 = this ;
  routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_mTypeName (), temp_1.readProperty_mConstructorName (), temp_2.readProperty_mExpressions (), temp_3.readProperty_locationForOldStyleCollectionInitializerError (), var_returnedType_11406, var_constructorType_11449, var_constructorEffectiveParameterList_11511, var_hasCompilerArgument_11560, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 278)) ;
  }
  const GALGAS_constructorExpressionAST temp_4 = this ;
  GALGAS_lstring var_constructorTypeUsefulnessName_11590 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::class_func_new (extensionGetter_definition (var_constructorType_11449, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 294)).readProperty_typeName ().readProperty_string (), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 294)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_11590 COMMA_SOURCE_FILE ("expression-constructor.galgas", 295)) ;
  }
  const GALGAS_constructorExpressionAST temp_5 = this ;
  GALGAS_lstring var_returnedTypeUsefulnessName_11827 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::class_func_new (extensionGetter_definition (var_returnedType_11406, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 296)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 296)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_11827 COMMA_SOURCE_FILE ("expression-constructor.galgas", 297)) ;
  }
  const GALGAS_constructorExpressionAST temp_6 = this ;
  const GALGAS_constructorExpressionAST temp_7 = this ;
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::class_func_new (var_returnedType_11406, temp_6.readProperty_mConstructorName ().readProperty_location (), var_constructorType_11449, temp_7.readProperty_mConstructorName ().readProperty_string (), var_constructorEffectiveParameterList_11511, var_hasCompilerArgument_11560  COMMA_SOURCE_FILE ("expression-constructor.galgas", 299)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_constructorExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_constructorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 329)) ;
  GALGAS_stringlist var_parameterList_13234 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-constructor.galgas", 330)) ;
  const GALGAS_constructorExpressionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_13260 (temp_1.readProperty_mEffectiveParameterList (), EnumerationOrder::up) ;
  while (enumerator_13260.hasCurrentObject ()) {
    GALGAS_string var_parameter_13478 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_13260.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_13478, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 332)) ;
    var_parameterList_13234.addAssign_operation (var_parameter_13478  COMMA_SOURCE_FILE ("expression-constructor.galgas", 339)) ;
    enumerator_13260.gotoNextObject () ;
  }
  const GALGAS_constructorExpressionForGeneration temp_2 = this ;
  const GALGAS_constructorExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mConstructorType (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 341)).add_operation (GALGAS_string ("::class_func_"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 341)).add_operation (temp_3.readProperty_mConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("expression-constructor.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 342)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 342)) ;
  cEnumerator_stringlist enumerator_13736 (var_parameterList_13234, EnumerationOrder::up) ;
  while (enumerator_13736.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_13736.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 345)) ;
    if (enumerator_13736.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 346)) ;
    }
    enumerator_13736.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma_13850 = GALGAS_bool (ComparisonKind::greaterThan, var_parameterList_13234.getter_count (SOURCE_FILE ("expression-constructor.galgas", 348)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_constructorExpressionForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needsComma_13850.boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 351)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 353)) COMMA_SOURCE_FILE ("expression-constructor.galgas", 353)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 354)) ;
      var_needsComma_13850 = GALGAS_bool (true) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_needsComma_13850.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_constructorExpressionForGeneration temp_8 = this ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 358)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 358)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_constructorExpressionForGeneration temp_9 = this ;
    outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_9.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 360)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 360)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@defaultConstructorExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_defaultConstructorExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_defaultConstructorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 380)) ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_1 = this ;
  const GALGAS_defaultConstructorExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 382)).add_operation (GALGAS_string ("::class_func_"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 382)).add_operation (temp_2.readProperty_mConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("expression-constructor.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 383)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_defaultConstructorExpressionForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_defaultConstructorExpressionForGeneration temp_5 = this ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 386)).add_operation (extensionGetter_commaSourceFile (temp_5.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 386)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 386)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_defaultConstructorExpressionForGeneration temp_6 = this ;
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (").add_operation (extensionGetter_sourceFile (temp_6.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 388)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 388)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionAST temp_0 = this ;
  cEnumerator_actualOutputExpressionList enumerator_3368 (temp_0.readProperty_mExpressionList (), EnumerationOrder::up) ;
  while (enumerator_3368.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_3368.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 78)) ;
    enumerator_3368.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_4031 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 93)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4031 COMMA_SOURCE_FILE ("expression-function-call.galgas", 94)) ;
  }
  GALGAS_functionSignature var_functionSignature_4332 ;
  GALGAS_unifiedTypeMapEntry var_resultType_4380 ;
  GALGAS_bool var_isInternal_4406 ;
  const GALGAS_functionCallExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_4332, var_resultType_4380, var_isInternal_4406, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 96)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_4406.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_functionCallExpressionAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_4470 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 104)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_functionCallExpressionAST temp_5 = this ;
        test_4 = GALGAS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 105)).objectCompare (var_procDeclarationLocation_4470.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 105)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_functionCallExpressionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_4470.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 106)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 106)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas", 106)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_functionCallExpressionAST temp_9 = this ;
    test_8 = GALGAS_bool (ComparisonKind::notEqual, var_functionSignature_4332.getter_count (SOURCE_FILE ("expression-function-call.galgas", 110)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas", 110)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_functionCallExpressionAST temp_10 = this ;
      const GALGAS_functionCallExpressionAST temp_11 = this ;
      const GALGAS_functionCallExpressionAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 112)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 112)).add_operation (var_functionSignature_4332.getter_count (SOURCE_FILE ("expression-function-call.galgas", 112)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 112)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 112)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas", 113)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 113)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 113)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas", 111)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_5193 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-function-call.galgas", 117)) ;
    const GALGAS_functionCallExpressionAST temp_14 = this ;
    cEnumerator_functionSignature enumerator_5316 (var_functionSignature_4332, EnumerationOrder::up) ;
    cEnumerator_actualOutputExpressionList enumerator_5370 (temp_14.readProperty_mExpressionList (), EnumerationOrder::up) ;
    while (enumerator_5316.hasCurrentObject () && enumerator_5370.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_5723 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5370.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5316.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5723, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 119)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5316.current_mFormalArgumentType (HERE), var_expression_5723.readProperty_mResultType (), enumerator_5370.current_mEndOfExpressionLocation (HERE), var_expression_5723, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 128)) ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (ComparisonKind::notEqual, enumerator_5316.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5370.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (ComparisonKind::notEqual, enumerator_5316.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_5316.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 135)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_5999 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 135)) ;
          TC_Array <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_5999) ;
          inCompiler->emitSemanticError (enumerator_5370.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_5999, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 136)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 136)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas", 136)) ;
        }
      }
      var_semanticExpressionListForGeneration_5193.addAssign_operation (var_expression_5723  COMMA_SOURCE_FILE ("expression-function-call.galgas", 139)) ;
      enumerator_5316.gotoNextObject () ;
      enumerator_5370.gotoNextObject () ;
    }
    const GALGAS_functionCallExpressionAST temp_19 = this ;
    const GALGAS_functionCallExpressionAST temp_20 = this ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::class_func_new (var_resultType_4380, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_5193  COMMA_SOURCE_FILE ("expression-function-call.galgas", 141)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 167)) ;
  const GALGAS_functionCallExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_1.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 169))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 169)) ;
  GALGAS_stringlist var_parameterList_7417 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-function-call.galgas", 171)) ;
  const GALGAS_functionCallExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_7455 (temp_2.readProperty_mExpressions (), EnumerationOrder::up) ;
  while (enumerator_7455.hasCurrentObject ()) {
    GALGAS_string var_parameter_7624 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_7455.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_7624, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 173)) ;
    var_parameterList_7417.addAssign_operation (var_parameter_7624  COMMA_SOURCE_FILE ("expression-function-call.galgas", 174)) ;
    enumerator_7455.gotoNextObject () ;
  }
  const GALGAS_functionCallExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("function_").add_operation (temp_3.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 176)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 176)) ;
  cEnumerator_stringlist enumerator_7768 (var_parameterList_7417, EnumerationOrder::up) ;
  while (enumerator_7768.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_7768.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 178)) ;
    enumerator_7768.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 180)) COMMA_SOURCE_FILE ("expression-function-call.galgas", 180)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 181)) ;
  const GALGAS_functionCallExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 182)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 182)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_literalTypeInExpressionAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry joker_3101 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mLiteralTypeName (), joker_3101, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 69)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalTypeInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_3684 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 83)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3684 COMMA_SOURCE_FILE ("expression-literal-type.galgas", 84)) ;
  }
  const GALGAS_literalTypeInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_type_3850 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 86)) ;
  const GALGAS_literalTypeInExpressionAST temp_2 = this ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::class_func_new (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::class_func_new (GALGAS_string ("type"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 88)), temp_2.readProperty_mLiteralTypeName ().readProperty_location (), var_type_3850  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 87)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalTypeInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLiteralType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 111)) ;
  const GALGAS_literalTypeInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_type (& kTypeDescriptor_GALGAS_").add_operation (extensionGetter_definition (temp_1.readProperty_mLiteralType (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 113)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-literal-type.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 112)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 113)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_collectionValueAST temp_0 = this ;
  cEnumerator_collectionValueElementList enumerator_7119 (temp_0.readProperty_mElementList (), EnumerationOrder::up) ;
  while (enumerator_7119.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((cPtr_abstractCollectionValueElement *) enumerator_7119.current_mElement (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 185)) ;
    enumerator_7119.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_7790 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_collectionValueAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_targetType_7790 = constinArgument_inType ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_collectionValueAST temp_2 = this ;
    var_targetType_7790 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 204)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::equal, var_targetType_7790.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-collection-value.galgas", 207)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_collectionValueAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 208)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = extensionGetter_definition (var_targetType_7790, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 209)).readProperty_supportCollectionValue ().operator_not (SOURCE_FILE ("expression-collection-value.galgas", 209)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_collectionValueAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (extensionGetter_definition (var_targetType_7790, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 211)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 211)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 211)), fixItArray8  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 210)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      GALGAS_classFunctionMap var_classFunctionMap_8259 = extensionGetter_definition (var_targetType_7790, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 213)).readProperty_classFunctionMap () ;
      GALGAS_bool var_hasCompilerArgument_8333 = GALGAS_bool (false) ;
      GALGAS_string var_constructorName_8377 = GALGAS_string::makeEmptyString () ;
      GALGAS_bool var_found_8406 = GALGAS_bool (false) ;
      cEnumerator_classFunctionMap enumerator_8433 (var_classFunctionMap_8259, EnumerationOrder::up) ;
      bool bool_9 = var_found_8406.operator_not (SOURCE_FILE ("expression-collection-value.galgas", 217)).isValidAndTrue () ;
      if (enumerator_8433.hasCurrentObject () && bool_9) {
        while (enumerator_8433.hasCurrentObject () && bool_9) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            GALGAS_bool test_11 = GALGAS_bool (ComparisonKind::equal, enumerator_8433.current (HERE).readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-collection-value.galgas", 218)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
            if (kBoolTrue == test_11.boolEnum ()) {
              test_11 = GALGAS_bool (ComparisonKind::equal, enumerator_8433.current (HERE).readProperty_mReturnedType ().objectCompare (var_targetType_7790)) ;
            }
            test_10 = test_11.boolEnum () ;
            if (kBoolTrue == test_10) {
              var_hasCompilerArgument_8333 = enumerator_8433.current (HERE).readProperty_mHasCompilerArgument () ;
              var_constructorName_8377 = enumerator_8433.current (HERE).readProperty_lkey ().readProperty_string () ;
              var_found_8406 = GALGAS_bool (true) ;
            }
          }
          enumerator_8433.gotoNextObject () ;
          if (enumerator_8433.hasCurrentObject ()) {
            bool_9 = var_found_8406.operator_not (SOURCE_FILE ("expression-collection-value.galgas", 217)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = var_found_8406.operator_not (SOURCE_FILE ("expression-collection-value.galgas", 224)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_collectionValueAST temp_13 = this ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_targetType_7790, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 226)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 226)).add_operation (GALGAS_string ("' has no initializer without argument"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 226)), fixItArray14  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 225)) ;
        }
      }
      const GALGAS_collectionValueAST temp_15 = this ;
      GALGAS_lstring var_usefulnessName_8845 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::class_func_new (extensionGetter_definition (var_targetType_7790, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 229)).readProperty_typeName ().readProperty_string (), temp_15.readProperty_mEndOfCollectionValue (), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 228)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_8845 COMMA_SOURCE_FILE ("expression-collection-value.galgas", 232)) ;
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        const GALGAS_collectionValueAST temp_17 = this ;
        test_16 = GALGAS_bool (ComparisonKind::equal, temp_17.readProperty_mElementList ().getter_count (SOURCE_FILE ("expression-collection-value.galgas", 233)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_collectionValueAST temp_18 = this ;
          outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::class_func_new (var_targetType_7790, temp_18.readProperty_mTypeName ().readProperty_location (), var_constructorName_8377, var_hasCompilerArgument_8333  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 234)) ;
        }
      }
      if (kBoolFalse == test_16) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration_9363 = GALGAS_collectionValueElementListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 241)) ;
        const GALGAS_collectionValueAST temp_19 = this ;
        cEnumerator_collectionValueElementList enumerator_9419 (temp_19.readProperty_mElementList (), EnumerationOrder::up) ;
        while (enumerator_9419.hasCurrentObject ()) {
          callExtensionMethod_analyze ((cPtr_abstractCollectionValueElement *) enumerator_9419.current_mElement (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_targetType_7790, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration_9363, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 243)) ;
          enumerator_9419.gotoNextObject () ;
        }
        const GALGAS_collectionValueAST temp_20 = this ;
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::class_func_new (var_targetType_7790, temp_20.readProperty_mEndOfCollectionValue (), var_collectionValueElementListForGeneration_9363  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 253)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValue enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValue::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_expressionCollectionValue temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 270)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionValue enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionValue::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_expressionListCollectionValue temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 276)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValue analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValue::method_analyze (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                     const GALGAS_unifiedTypeMapEntry constinArgument_inElementType,
                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                     GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_11943 ;
  const GALGAS_expressionCollectionValue temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11943, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 301)) ;
  {
  const GALGAS_expressionCollectionValue temp_1 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inElementType, var_expression_11943.readProperty_mResultType (), temp_1.readProperty_mExpressionLocation (), var_expression_11943, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 311)) ;
  }
  const GALGAS_expressionCollectionValue temp_2 = this ;
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::class_func_new (temp_2.readProperty_mExpressionLocation (), var_expression_11943  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 313))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 313)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionValue analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionValue::method_analyze (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                         const GALGAS_unifiedTypeMapEntry constinArgument_inElementType,
                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                         GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionSignature var_formalParameterTypeList_12803 = extensionGetter_definition (constinArgument_inElementType, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 326)).readProperty_mAddAssignOperatorArguments () ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_12927 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_expressionListCollectionValue temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_formalParameterTypeList_12803.getter_count (SOURCE_FILE ("expression-collection-value.galgas", 328)).objectCompare (temp_1.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-collection-value.galgas", 328)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_expressionListCollectionValue temp_2 = this ;
      const GALGAS_expressionListCollectionValue temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfExpressionLocation (), GALGAS_string ("element of of '@").add_operation (extensionGetter_definition (constinArgument_inElementType, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 329)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 329)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 329)).add_operation (var_formalParameterTypeList_12803.getter_count (SOURCE_FILE ("expression-collection-value.galgas", 330)).getter_string (SOURCE_FILE ("expression-collection-value.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 329)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 330)).add_operation (temp_3.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-collection-value.galgas", 331)).getter_string (SOURCE_FILE ("expression-collection-value.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 330)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 331)), fixItArray4  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 329)) ;
      var_semanticExpressionListForGeneration_12927.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration_12927 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 333)) ;
    const GALGAS_expressionListCollectionValue temp_5 = this ;
    cEnumerator_actualOutputExpressionList enumerator_13441 (temp_5.readProperty_mExpressionList (), EnumerationOrder::up) ;
    cEnumerator_functionSignature enumerator_13495 (var_formalParameterTypeList_12803, EnumerationOrder::up) ;
    while (enumerator_13441.hasCurrentObject () && enumerator_13495.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_13839 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_13441.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_13495.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_13839, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 335)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (ComparisonKind::notEqual, enumerator_13495.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_13441.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (ComparisonKind::notEqual, enumerator_13495.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_13495.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 345)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_13945 = GALGAS_string ("!").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 345)) ;
          TC_Array <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_s_13945) ;
          inCompiler->emitSemanticError (enumerator_13441.current (HERE).readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_13945, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 346)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 346)), fixItArray9  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 346)) ;
        }
      }
      {
      const GALGAS_expressionListCollectionValue temp_10 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_13495.current_mFormalArgumentType (HERE), var_exp_13839.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_exp_13839, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 350)) ;
      }
      var_semanticExpressionListForGeneration_12927.addAssign_operation (var_exp_13839  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 351)) ;
      enumerator_13441.gotoNextObject () ;
      enumerator_13495.gotoNextObject () ;
    }
    const GALGAS_expressionListCollectionValue temp_11 = this ;
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::class_func_new (temp_11.readProperty_mEndOfExpressionLocation (), var_semanticExpressionListForGeneration_12927  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 353))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 353)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionValueForGeneration generateCollectionElementCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionValueForGeneration::method_generateCollectionElementCode (const GALGAS_unifiedTypeMapEntry /* constinArgument_inTargetType */,
                                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                        const GALGAS_string constinArgument_inCppTargetVar,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceVar_16481 ;
  const GALGAS_expressionCollectionValueForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_16481, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 398)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 405)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".plusAssign_operation (").add_operation (var_sourceVar_16481, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 406)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 407)) ;
  const GALGAS_expressionCollectionValueForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mExpressionLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 408)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 408)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 408)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 409)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 409)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionListCollectionForGeneration generateCollectionElementCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionListCollectionForGeneration::method_generateCollectionElementCode (const GALGAS_unifiedTypeMapEntry constinArgument_inTargetType,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_string constinArgument_inCppTargetVar,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_parameterList_17484 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 428)) ;
  const GALGAS_expressionListCollectionForGeneration temp_0 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_17522 (temp_0.readProperty_mExpressionList (), EnumerationOrder::up) ;
  while (enumerator_17522.hasCurrentObject ()) {
    GALGAS_string var_parameter_17732 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_17522.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_17732, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 430)) ;
    var_parameterList_17484.addAssign_operation (var_parameter_17732  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 437)) ;
    enumerator_17522.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 440)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 442)) ;
  cEnumerator_stringlist enumerator_17924 (var_parameterList_17484, EnumerationOrder::up) ;
  while (enumerator_17924.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17924.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 444)) ;
    if (enumerator_17924.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 445)) ;
    }
    enumerator_17924.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 447)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("expression-collection-value.galgas", 447)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 448)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 448)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 449)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 449)) ;
      }
    }
  }
  const GALGAS_expressionListCollectionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mExpressionLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 451)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 451)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_expressionCollectionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 469)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-collection-value.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 471)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 472)) ;
  const GALGAS_expressionCollectionForGeneration temp_1 = this ;
  const GALGAS_expressionCollectionForGeneration temp_2 = this ;
  const GALGAS_expressionCollectionForGeneration temp_3 = this ;
  const GALGAS_expressionCollectionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 474)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 474)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 474)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 474)).add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 475)).add_operation (GALGAS_string ("::class_func_"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 475)).add_operation (extensionGetter_definition (temp_3.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 475)).readProperty_defaultConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("expression-collection-value.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 475)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 475)).add_operation (extensionGetter_sourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 475)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 474)) ;
  const GALGAS_expressionCollectionForGeneration temp_5 = this ;
  cEnumerator_collectionValueElementListForGeneration enumerator_19532 (temp_5.readProperty_mElementList (), EnumerationOrder::up) ;
  while (enumerator_19532.hasCurrentObject ()) {
    const GALGAS_expressionCollectionForGeneration temp_6 = this ;
    callExtensionMethod_generateCollectionElementCode ((cPtr_abstractCollectionValueElementForGeneration *) enumerator_19532.current_mElement (HERE).ptr (), temp_6.readProperty_mResultType (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 478)) ;
    enumerator_19532.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_3544 ;
    GALGAS_bool var_unused_0_3555 ;
    GALGAS_bool var_unused_1_3555 ;
    const bool optionalResult3523 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_3544, var_unused_0_3555, var_unused_1_3555) ;
    if (!optionalResult3523) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GALGAS_string var_selfCppName_3579 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
      const GALGAS_selfInExpressionAST temp_1 = this ;
      outArgument_outExpression = GALGAS_selfInExpressionForGeneration::class_func_new (var_selfType_3544, temp_1.readProperty_mSelfLocation (), var_selfCppName_3579  COMMA_SOURCE_FILE ("expression-self.galgas", 82)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfInExpressionAST temp_2 = this ;
    TC_Array <FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (temp_2.readProperty_mSelfLocation (), GALGAS_string ("'self' not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-self.galgas", 84)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                    GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-self.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 104)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 105)) ;
  const GALGAS_selfInExpressionForGeneration temp_0 = this ;
  const GALGAS_selfInExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (temp_1.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 106)) ;
  {
  const GALGAS_selfInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("expression-self.galgas", 107)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_5311 ;
  const GALGAS_structPropertyAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-property-access.galgas", 126)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5311, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 123)) ;
  GALGAS_unifiedTypeMapEntry var_expressionType_5390 = var_expression_5311.readProperty_mResultType () ;
  GALGAS_propertyMap var_propertyMap_5436 = extensionGetter_definition (var_expressionType_5390, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 134)).readProperty_propertyMap () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_structPropertyAccessExpressionAST temp_2 = this ;
    GALGAS_AccessControl var_accessControl_5547 ;
    GALGAS_bool var_unused_0_5562 ;
    GALGAS_unifiedTypeMapEntry var_type_5569 ;
    const bool optionalResult5512 = var_propertyMap_5436.optional_searchKey (temp_2.readProperty_mPropertyName ().readProperty_string (), var_accessControl_5547, var_unused_0_5562, var_type_5569) ;
    if (!optionalResult5512) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = extensionGetter_definition (var_expressionType_5390, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 136)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("expression-property-access.galgas", 136)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 136)).operator_and (extensionGetter_definition (var_expressionType_5390, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 136)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-property-access.galgas", 136)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 136)) COMMA_SOURCE_FILE ("expression-property-access.galgas", 136)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_structPropertyAccessExpressionAST temp_4 = this ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct or a class"), fixItArray5  COMMA_SOURCE_FILE ("expression-property-access.galgas", 137)) ;
        }
      }
      const GALGAS_structPropertyAccessExpressionAST temp_6 = this ;
      extensionMethod_checkGetAccess (var_accessControl_5547, constinArgument_inAnalysisContext.readProperty_selfType (), temp_6.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 139)) ;
      const GALGAS_structPropertyAccessExpressionAST temp_7 = this ;
      const GALGAS_structPropertyAccessExpressionAST temp_8 = this ;
      outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::class_func_new (var_type_5569, temp_7.readProperty_mOperatorLocation (), var_expression_5311, temp_8.readProperty_mPropertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-property-access.galgas", 146)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_getterMap var_getterMap_6356 = extensionGetter_definition (var_expressionType_5390, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 153)).readProperty_mGetterMap () ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      const GALGAS_structPropertyAccessExpressionAST temp_10 = this ;
      GALGAS_methodKind var_kind_6480 ;
      GALGAS_functionSignature var_getterFormalArgumentTypeList_6498 ;
      GALGAS_location var_unused_0_6536 ;
      GALGAS_bool var_hasCompilerArgument_6551 ;
      GALGAS_unifiedTypeMapEntry var_returnedType_6584 ;
      GALGAS_methodQualifier var_unused_0_6606 ;
      GALGAS_string var_actualGetterNameString_6621 ;
      const bool optionalResult6429 = var_getterMap_6356.optional_searchKey (temp_10.readProperty_mPropertyName ().readProperty_string (), var_kind_6480, var_getterFormalArgumentTypeList_6498, var_unused_0_6536, var_hasCompilerArgument_6551, var_returnedType_6584, var_unused_0_6606, var_actualGetterNameString_6621) ;
      if (!optionalResult6429) {
        test_9 = kBoolFalse ;
      }
      if (kBoolTrue == test_9) {
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = GALGAS_bool (ComparisonKind::notEqual, var_getterFormalArgumentTypeList_6498.getter_count (SOURCE_FILE ("expression-property-access.galgas", 164)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_11) {
            const GALGAS_structPropertyAccessExpressionAST temp_12 = this ;
            TC_Array <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (temp_12.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("for being called as a property read, the getter should have no formal argument (has ").add_operation (var_getterFormalArgumentTypeList_6498.getter_count (SOURCE_FILE ("expression-property-access.galgas", 167)).getter_string (SOURCE_FILE ("expression-property-access.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 166)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 167)), fixItArray13  COMMA_SOURCE_FILE ("expression-property-access.galgas", 165)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_11) {
          const GALGAS_structPropertyAccessExpressionAST temp_14 = this ;
          GALGAS_string temp_15 ;
          const enumGalgasBool test_16 = GALGAS_bool (ComparisonKind::equal, var_actualGetterNameString_6621.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            const GALGAS_structPropertyAccessExpressionAST temp_17 = this ;
            temp_15 = temp_17.readProperty_mPropertyName ().readProperty_string () ;
          }else if (kBoolFalse == test_16) {
            temp_15 = var_actualGetterNameString_6621 ;
          }
          outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::class_func_new (var_returnedType_6584, temp_14.readProperty_mPropertyName ().readProperty_location (), var_kind_6480, var_expression_5311, GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("expression-property-access.galgas", 175)), temp_15, GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("expression-property-access.galgas", 177)), var_hasCompilerArgument_6551  COMMA_SOURCE_FILE ("expression-property-access.galgas", 170)) ;
        }
      }
    }
    if (kBoolFalse == test_9) {
      const GALGAS_structPropertyAccessExpressionAST temp_18 = this ;
      TC_Array <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("undefined property, undefined getter"), fixItArray19  COMMA_SOURCE_FILE ("expression-property-access.galgas", 182)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structPropertyAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 423)) ;
  GALGAS_string var_operand_20008 ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_20008, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 425)) ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_20008.add_operation (GALGAS_string (".readProperty_"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 433)).add_operation (temp_2.readProperty_mStructFieldName ().getter_identifierRepresentation (SOURCE_FILE ("expression-property-access.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 433)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 433)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_notExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4023 ;
  const GALGAS_notExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-not.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4023, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 86)) ;
  GALGAS_unifiedTypeMapEntry var_type_4098 = var_expression_4023.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (var_expression_4023.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_notExpressionAST temp_2 = this ;
      outArgument_outExpression = GALGAS_falseExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation ()  COMMA_SOURCE_FILE ("expression-not.galgas", 98)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (var_expression_4023.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_notExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_trueExpressionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation ()  COMMA_SOURCE_FILE ("expression-not.galgas", 100)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = extensionGetter_definition (var_type_4098, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 101)).readProperty_mHandledOperatorFlags ().getter_prefixNotOperator (SOURCE_FILE ("expression-not.galgas", 101)).operator_not (SOURCE_FILE ("expression-not.galgas", 101)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_notExpressionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4098, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas", 102)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_notExpressionAST temp_8 = this ;
        outArgument_outExpression = GALGAS_notExpressionForGeneration::class_func_new (var_type_4098, temp_8.readProperty_mOperatorLocation (), var_expression_4023  COMMA_SOURCE_FILE ("expression-not.galgas", 107)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_notExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 131)) ;
  GALGAS_string var_operand_5814 ;
  const GALGAS_notExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5814, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 133)) ;
  const GALGAS_notExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5814.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4062 ;
  const GALGAS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-tilde.galgas", 90)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4062, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 87)) ;
  GALGAS_unifiedTypeMapEntry var_type_4137 = var_expression_4062.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_4176 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_4062.ptr ())) ;
    if (nullptr == var_exp_4176.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::class_func_new (var_exp_4176.readProperty_mResultType (), var_exp_4176.readProperty_mLocation (), var_exp_4176.readProperty_mValue ().operator_tilde (SOURCE_FILE ("expression-tilde.galgas", 102))  COMMA_SOURCE_FILE ("expression-tilde.galgas", 99)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_4137, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 104)).readProperty_mHandledOperatorFlags ().getter_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas", 104)).operator_not (SOURCE_FILE ("expression-tilde.galgas", 104)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_tildeExpressionAST temp_3 = this ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4137, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 106)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 106)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 106)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas", 105)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_tildeExpressionAST temp_5 = this ;
      outArgument_outExpression = GALGAS_tildeExpressionForGeneration::class_func_new (var_type_4137, temp_5.readProperty_mOperatorLocation (), var_expression_4062  COMMA_SOURCE_FILE ("expression-tilde.galgas", 110)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_tildeExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 134)) ;
  GALGAS_string var_operand_5698 ;
  const GALGAS_tildeExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5698, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 136)) ;
  const GALGAS_tildeExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5698.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 138)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 138)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 138)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 75)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4092 ;
  const GALGAS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-bang.galgas", 93)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4092, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 90)) ;
  GALGAS_unifiedTypeMapEntry var_type_4167 = var_expression_4092.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_unifiedTypeMapEntry var_classIndex_4272 ;
    const bool optionalResult4234 = extensionGetter_definition (var_type_4167, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 101)).readProperty_typeKind ().optional_weakReferenceType (var_classIndex_4272) ;
    if (!optionalResult4234) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      const GALGAS_bangExpressionAST temp_2 = this ;
      outArgument_outExpression = GALGAS_bangExpressionForGeneration::class_func_new (var_classIndex_4272, temp_2.readProperty_mOperatorLocation (), var_expression_4092, extensionGetter_definition (var_type_4167, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 106)).readProperty_typeName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-bang.galgas", 102)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_bangExpressionAST temp_3 = this ;
    TC_Array <FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4167, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)).add_operation (GALGAS_string ("' and does not support the '°' operator"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)), fixItArray4  COMMA_SOURCE_FILE ("expression-bang.galgas", 109)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_bangExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 131)) ;
  GALGAS_string var_operand_5857 ;
  const GALGAS_bangExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5857, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 133)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 141)) COMMA_SOURCE_FILE ("expression-bang.galgas", 141)) ;
  }
  const GALGAS_bangExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5857.add_operation (GALGAS_string (".bang_"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 142)).add_operation (temp_2.readProperty_mReceiverTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-bang.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 142)) ;
  const GALGAS_bangExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 143)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4096 ;
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4096, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 86)) ;
  GALGAS_unifiedTypeMapEntry var_type_4171 = var_expression_4096.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4171, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).readProperty_mHandledOperatorFlags ().getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_unaryWrappingMinusExpressionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4171, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_unaryWrappingMinusExpressionAST temp_4 = this ;
    outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionForGeneration::class_func_new (var_type_4171, temp_4.readProperty_mOperatorLocation (), var_expression_4096  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 103)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 126)) ;
  GALGAS_string var_operand_5604 ;
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5604, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 128)) ;
  outArgument_outCppExpression = var_operand_5604.add_operation (GALGAS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 136)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_orExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 163)) ;
  const GALGAS_orExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 164)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_7921 ;
  const GALGAS_orExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7921, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 178)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_8257 ;
  const GALGAS_orExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7921.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8257, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 188)) ;
  {
  const GALGAS_orExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7921.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 199)).readProperty_mHandledOperatorFlags ().getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 199)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7921, var_rightExpression_8257, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 198)) ;
  }
  const GALGAS_orExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::class_func_new (var_leftExpression_7921.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7921, GALGAS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("expression-or.galgas", 209)), var_rightExpression_8257  COMMA_SOURCE_FILE ("expression-or.galgas", 205)) ;
}
