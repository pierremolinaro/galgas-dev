#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassInstanceMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_generateClassInstanceMethodDeclaration (const GGS_lstring & constinArgument_inMethodName,
                                                            const GGS_formalParameterSignature & constinArgument_inArgumentTypeList,
                                                            const GGS_bool & constinArgument_inHasCompilerArgument,
                                                            const GGS_methodQualifier & constinArgument_inQualifier,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  GGS_bool var_generateMethodDeclaration_36633 = GGS_bool (true) ;
  GGS_string var_suffix_36672 = GGS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GGS_methodQualifier::Enumeration::invalid:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualAbstract:
    {
      var_suffix_36672 = GGS_string (" = 0") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtual:
    break ;
  case GGS_methodQualifier::Enumeration::enum_isBasic:
  case GGS_methodQualifier::Enumeration::enum_isBasicFinal:
    {
      var_generateMethodDeclaration_36633 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isInherited:
    {
      var_generateMethodDeclaration_36633 = GGS_bool (false) ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverriding:
    {
      var_suffix_36672 = GGS_string (" override") ;
    }
    break ;
  case GGS_methodQualifier::Enumeration::enum_isVirtualOverridingAbstract:
    {
      var_suffix_36672 = GGS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_36633.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(GGS_string ("//--- Extension method ").add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 932)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 932)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 932)) ;
      result_result.plusAssignOperation(GGS_string ("  public: virtual void method_").add_operation (constinArgument_inMethodName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-class.galgas", 933)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 933)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 933)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 933)) ;
      GGS_bool var_first_37253 = GGS_bool (true) ;
      UpEnumerator_formalParameterSignature enumerator_37292 (constinArgument_inArgumentTypeList) ;
      while (enumerator_37292.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_first_37253.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            var_first_37253 = GGS_bool (false) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          result_result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 940)) ;
        }
        switch (enumerator_37292.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            result_result.plusAssignOperation(GGS_string ("const class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_37292.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 944)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 944)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 944)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
          {
            result_result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_37292.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 946)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 946)).add_operation (GGS_string (" &"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 946)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 946)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          {
            result_result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_37292.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 948)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 948)).add_operation (GGS_string (" &"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 948)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 948)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            result_result.plusAssignOperation(GGS_string ("class GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_37292.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 950)), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 950)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 950)) ;
          }
          break ;
        }
        result_result.plusAssignOperation(GGS_string (" arg_").add_operation (enumerator_37292.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 952)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 952)) ;
        enumerator_37292.gotoNextObject () ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_first_37253.operator_not (SOURCE_FILE ("declaration-type-class.galgas", 955)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              result_result.plusAssignOperation(GGS_string (",\n           "), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 956)) ;
            }
          }
          result_result.plusAssignOperation(GGS_string ("Compiler *"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 958)) ;
          var_first_37253 = GGS_bool (false) ;
        }
      }
      GGS_string temp_4 ;
      const GalgasBool test_5 = var_first_37253.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        temp_4 = GGS_string ("LOCATION_ARGS") ;
      }else if (GalgasBool::boolFalse == test_5) {
        temp_4 = GGS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssignOperation(temp_4.add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 961)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 961)) ;
      result_result.plusAssignOperation(var_suffix_36672.add_operation (GGS_string (" ;\n\n"), inCompiler COMMA_SOURCE_FILE ("declaration-type-class.galgas", 962)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-class.galgas", 962)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_generateClassInstanceMethodDeclaration [5] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_methodQualifier,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_generateClassInstanceMethodDeclaration (Compiler * inCompiler,
                                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                                    const GGS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_formalParameterSignature operand1 = GGS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  const GGS_bool operand2 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_methodQualifier operand3 = GGS_methodQualifier::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                           inCompiler
                                                                           COMMA_THERE) ;
  return function_generateClassInstanceMethodDeclaration (operand0,
                                                          operand1,
                                                          operand2,
                                                          operand3,
                                                          inCompiler
                                                          COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateClassInstanceMethodDeclaration ("generateClassInstanceMethodDeclaration",
                                                                                        functionWithGenericHeader_generateClassInstanceMethodDeclaration,
                                                                                        & kTypeDescriptor_GALGAS_string,
                                                                                        4,
                                                                                        functionArgs_generateClassInstanceMethodDeclaration) ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'classGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- File '/galgas-predefined-types.ggs'

const char * gWrapperFileContent_0_classGenerationTemplate = 
  "\n"
  "extern proc %usefull println (let @string inString)\n"
  "\n"
  "extern proc %usefull print (let @string inString)\n"
  "\n"
  "list @2lstringlist %usefull {\n"
  "  public var @lstring mValue0\n"
  "  public var @lstring mValue1\n"
  "}\n"
  "\n"
   ;

const cRegularFileWrapper gWrapperFile_0_classGenerationTemplate (
  "galgas-predefined-types.ggs",
  "ggs",
  true, // Text file
 198, // Text length
  gWrapperFileContent_0_classGenerationTemplate
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_classGenerationTemplate_0 [2] = {
  & gWrapperFile_0_classGenerationTemplate,
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_classGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_classGenerationTemplate (
  "",
  1,
  gWrapperAllFiles_classGenerationTemplate_0,
  0,
  gWrapperAllDirectories_classGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                 const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                 const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                 const GGS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                 const GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("  value class\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_value_class") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Embedded object pointer\n  public: inline const class cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr (void) const {\n    return (const cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) mObjectPtr ;\n  }\n\n//--------------------------------- Constructor from pointer\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSourcePtr) ;\n\n//--------------------------------- Property read access\n") ;
  GGS_uint index_990_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_990 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_990.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_990.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (" readProperty_") ;
      result.appendString (enumerator_990.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (" (void) const ;\n\n") ;
      enumerator_990.gotoNextObject () ;
      index_990_.increment () ;
    }
  }
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeHeader2part1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_31_ (Compiler * inCompiler,
                                                                                         const GGS_string & in_TYPE_5F_NAME,
                                                                                         const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                         const GGS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                         const GGS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                         const GGS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                         const GGS_getterMap & in_GETTER_5F_MAP,
                                                                                         const GGS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 2)).add_operation (GGS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("acPtr_class") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n\n") ;
  GGS_uint index_505_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    UpEnumerator_getterMap enumerator_505 (in_GETTER_5F_MAP) ;
    while (enumerator_505.hasCurrentObject ()) {
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_505.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString (function_generateClassGetterDeclaration (enumerator_505.current_lkey (HERE), enumerator_505.current_mArgumentTypeList (HERE), enumerator_505.current_mHasCompilerArgument (HERE), enumerator_505.current_mReturnedType (HERE), enumerator_505.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 10)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_505.gotoNextObject () ;
      index_505_.increment () ;
    }
  }
  GGS_uint index_747_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    UpEnumerator_instanceMethodMap enumerator_747 (in_INSTANCE_5F_METHOD_5F_MAP) ;
    while (enumerator_747.hasCurrentObject ()) {
      result.appendString (function_generateClassInstanceMethodDeclaration (enumerator_747.current_lkey (HERE), enumerator_747.current_mParameterList (HERE), enumerator_747.current_mHasCompilerArgument (HERE), enumerator_747.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 14)).stringValue ()) ;
      enumerator_747.gotoNextObject () ;
      index_747_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeHeader2part2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeHeader_32_part_32_ (Compiler * inCompiler,
                                                                                         const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                         const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GGS_string & /* in_SUPER_5F_TYPE_5F_IDENTIFIER */,
                                                                                         const GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                         const GGS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                         const GGS_bool & in_IS_5F_ABSTRACT
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--- Properties\n") ;
  GGS_uint index_111_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_111 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_111.hasCurrentObject ()) {
      result.appendString ("  public: GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_111.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_111.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_111.gotoNextObject () ;
      index_111_.increment () ;
    }
  }
  result.appendString ("\n//--- Constructor\n  public: cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_398_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_398 (in_ALL_5F_PROPERTY_5F_LIST) ;
    while (enumerator_398.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_398.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_398.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_398.gotoNextObject () ;
      index_398_.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 14)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("LOCATION_ARGS") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") ;\n\n") ;
  const GalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 21)).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--- Duplication\n  public: virtual acPtr_class * duplicate (class Compiler * COMMA_LOCATION_ARGS) const override ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--- Attribute accessors\n") ;
  GGS_uint index_925_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_925 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_925.hasCurrentObject ()) {
      result.appendString ("  public: VIRTUAL_IN_DEBUG GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_925.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" getter_") ;
      result.appendString (enumerator_925.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      const GalgasBool test_2 = enumerator_925.current_hasSetter (HERE).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("  public: VIRTUAL_IN_DEBUG void setter_set") ;
        result.appendString (enumerator_925.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 31)).getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 31)).stringValue ()) ;
        result.appendString (" (GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_925.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 31)).stringValue ()) ;
        result.appendString (" inValue, class Compiler * COMMA_LOCATION_ARGS) ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_925.gotoNextObject () ;
      index_925_.increment () ;
    }
  }
  const GalgasBool test_3 = in_IS_5F_ABSTRACT.boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const int32_t inIndentation) const override = 0 ;\n\n  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;\n\n  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const int32_t inIndentation) const override ;\n\n  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;\n\n  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n} ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate valueClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_valueClassTypeSpecificImplementation (Compiler * inCompiler,
                                                                                             const GGS_string & in_TYPE_5F_NAME,
                                                                                             const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                             const GGS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                             const GGS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                             const GGS_bool & in_IS_5F_ABSTRACT
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   Object comparison                                                                           \n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).operator_and (GGS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("ComparisonResult cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n  return ComparisonResult::operandEqual ;\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).operator_and (GGS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("ComparisonResult cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {\n  ComparisonResult result = ComparisonResult::operandEqual ;\n  const cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * p = (const cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" *) inOperandPtr ;\n  macroValidSharedObject (p, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (") ;\n") ;
    GGS_uint index_1088_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_1088 (in_ALL_5F_PROPERTY_5F_LIST) ;
      while (enumerator_1088.hasCurrentObject ()) {
        result.appendString ("  if (ComparisonResult::operandEqual == result) {\n    result = mProperty_") ;
        result.appendString (enumerator_1088.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue ()) ;
        result.appendString (".objectCompare (p->mProperty_") ;
        result.appendString (enumerator_1088.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue ()) ;
        result.appendString (") ;\n  }\n") ;
        enumerator_1088.gotoNextObject () ;
        index_1088_.increment () ;
      }
    }
    result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\nComparisonResult GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;\n    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;\n    if (mySlot < operandSlot) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (mySlot > operandSlot) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_value_class") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSourcePtr) :\n") ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_value_class") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" (inSourcePtr) {\n  macroNullOrValidSharedObject (inSourcePtr, cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n}\n") ;
  const GalgasBool test_4 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).operator_and (GGS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 65)).boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::class_func_new (LOCATION_ARGS) {\n  GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (THERE)) ;\n  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_5 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).operator_and (GGS_bool (ComparisonKind::greaterThan, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 74)).boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::class_func_new (") ;
    columnMarker = result.currentColumn () ;
    GGS_uint index_3525_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_3525 (in_ALL_5F_PROPERTY_5F_LIST) ;
      while (enumerator_3525.hasCurrentObject ()) {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3525.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (" & inAttribute_") ;
        result.appendString (enumerator_3525.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        enumerator_3525.gotoNextObject () ;
        index_3525_.increment () ;
      }
    }
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  if (") ;
    GGS_uint index_3863_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_3863 (in_ALL_5F_PROPERTY_5F_LIST) ;
      while (enumerator_3863.hasCurrentObject ()) {
        result.appendString ("inAttribute_") ;
        result.appendString (enumerator_3863.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 86)).stringValue ()) ;
        result.appendString (".isValid ()") ;
        enumerator_3863.gotoNextObject () ;
        if (enumerator_3863.hasCurrentObject ()) {
          result.appendString (" && ") ;
        }
        index_3863_.increment () ;
      }
    }
    result.appendString (") {\n    macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GGS_uint index_4129_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_4129 (in_ALL_5F_PROPERTY_5F_LIST) ;
      while (enumerator_4129.hasCurrentObject ()) {
        result.appendString ("inAttribute_") ;
        result.appendString (enumerator_4129.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 92)).stringValue ()) ;
        result.appendString (", ") ;
        enumerator_4129.gotoNextObject () ;
        index_4129_.increment () ;
      }
    }
    result.appendString ("inCompiler COMMA_THERE)) ;\n  }\n  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_4374_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4374 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_4374.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4374.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 102)).stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::readProperty_") ;
      result.appendString (enumerator_4374.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 102)).stringValue ()) ;
      result.appendString (" (void) const {\n  if (nullptr == mObjectPtr) {\n    return GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4374.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 104)).stringValue ()) ;
      result.appendString (" () ;\n  }else{\n    const cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (const cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    return p->mProperty_") ;
      result.appendString (enumerator_4374.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 108)).stringValue ()) ;
      result.appendString (" ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4374.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 112)).stringValue ()) ;
      result.appendString (" cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_4374.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 112)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return mProperty_") ;
      result.appendString (enumerator_4374.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_4374.gotoNextObject () ;
      index_4374_.increment () ;
    }
  }
  GGS_uint index_5472_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5472 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5472.hasCurrentObject ()) {
      const GalgasBool test_6 = enumerator_5472.current_hasSetter (HERE).boolEnum () ;
      switch (test_6) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_setProperty_5F_") ;
        result.appendString (enumerator_5472.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 120)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 120)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_5472.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 120)).stringValue ()) ;
        result.appendString (" inValue,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("Compiler * inCompiler\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) {\n  if (nullptr != mObjectPtr) {\n    insulate (inCompiler COMMA_THERE) ;\n    cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" * p = (cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (") ;\n    p->mProperty_") ;
        result.appendString (enumerator_5472.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 127)).stringValue ()) ;
        result.appendString (" = inValue ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_set") ;
        result.appendString (enumerator_5472.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 131)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 131)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_5472.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 131)).stringValue ()) ;
        result.appendString (" inValue,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("Compiler * /* inCompiler */\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  mProperty_") ;
        result.appendString (enumerator_5472.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 134)).stringValue ()) ;
        result.appendString (" = inValue ;\n}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_5472.gotoNextObject () ;
      index_5472_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 140)).add_operation (GGS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 140)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\ncPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_7160_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7160 (in_ALL_5F_PROPERTY_5F_LIST) ;
    while (enumerator_7160.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7160.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 145)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_7160.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 145)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_7160.gotoNextObject () ;
      index_7160_.increment () ;
    }
  }
  result.appendString ("Compiler *") ;
  const GalgasBool test_7 = GGS_bool (ComparisonKind::notEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString (" inCompiler") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\n") ;
  const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("acPtr_class (THERE)") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GGS_uint index_7603_ (0) ;
    if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_7603 (in_INHERITED_5F_ATTRIBUTE_5F_LIST) ;
      while (enumerator_7603.hasCurrentObject ()) {
        result.appendString ("in_") ;
        result.appendString (enumerator_7603.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 158)).stringValue ()) ;
        result.appendString (", ") ;
        enumerator_7603.gotoNextObject () ;
        index_7603_.increment () ;
      }
    }
    result.appendString ("inCompiler COMMA_THERE)") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_7796_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7796 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_7796.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_7796.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 163)).stringValue ()) ;
      result.appendString (" (in_") ;
      result.appendString (enumerator_7796.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 163)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_7796.gotoNextObject () ;
      index_7796_.increment () ;
    }
  }
  result.appendString (" {\n}\n\n") ;
  const GalgasBool test_9 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 169)).boolEnum () ;
  switch (test_9) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nconst GALGAS_TypeDescriptor * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::classDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n}\n\n") ;
    const GalgasBool test_10 = GGS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 174)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_10) {
    case GalgasBool::boolTrue : {
      result.appendString ("void cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"[@") ;
      result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("]\") ;\n}\n\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      result.appendString ("void cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"[@") ;
      result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (":\") ;\n") ;
      GGS_uint index_8789_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_8789 (in_ALL_5F_PROPERTY_5F_LIST) ;
        while (enumerator_8789.hasCurrentObject ()) {
          result.appendString ("  mProperty_") ;
          result.appendString (enumerator_8789.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 184)).stringValue ()) ;
          result.appendString (".description (ioString, inIndentation+1) ;\n") ;
          enumerator_8789.gotoNextObject () ;
          if (enumerator_8789.hasCurrentObject ()) {
            result.appendString ("  ioString.appendCString (\", \") ;\n") ;
          }
          index_8789_.increment () ;
        }
      }
      result.appendString ("  ioString.appendCString (\"]\") ;\n}\n\n") ;
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_11 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 192)).boolEnum () ;
  switch (test_11) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nacPtr_class * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {\n  acPtr_class * ptr = nullptr ;\n  macroMyNew (ptr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GGS_uint index_9412_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_9412 (in_ALL_5F_PROPERTY_5F_LIST) ;
      while (enumerator_9412.hasCurrentObject ()) {
        result.appendString ("mProperty_") ;
        result.appendString (enumerator_9412.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 199)).stringValue ()) ;
        result.appendString (", ") ;
        enumerator_9412.gotoNextObject () ;
        index_9412_.increment () ;
      }
    }
    result.appendString ("inCompiler COMMA_THERE)) ;\n  return ptr ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                     const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                     const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                     const GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                     const GGS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                     const GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString (" reference class\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_reference_class") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Constructor from pointer\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSourcePtr) ;\n\n//--------------------------------- Property access\n") ;
  GGS_uint index_790_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_790 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_790.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_790.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 19)).stringValue ()) ;
      result.appendString (" readProperty_") ;
      result.appendString (enumerator_790.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 19)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      const GalgasBool test_1 = enumerator_790.current_hasSetter (HERE).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("  public: void setProperty_") ;
        result.appendString (enumerator_790.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 21)).stringValue ()) ;
        result.appendString (" (const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_790.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 21)).stringValue ()) ;
        result.appendString (" & inValue) ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("\n") ;
      enumerator_790.gotoNextObject () ;
      index_790_.increment () ;
    }
  }
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeHeader2part1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_31_ (Compiler * inCompiler,
                                                                                             const GGS_string & in_TYPE_5F_NAME,
                                                                                             const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                             const GGS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                             const GGS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                             const GGS_getterMap & in_GETTER_5F_MAP,
                                                                                             const GGS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                                             const GGS_initializerMap & in_INITIALIZER_5F_MAP
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 2)).add_operation (GGS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("acStrongPtr_class") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (void) const override ;\n  #endif\n\n//--------------------------------- Initializers\n") ;
  GGS_uint index_633_ (0) ;
  if (in_INITIALIZER_5F_MAP.isValid ()) {
    UpEnumerator_initializerMap enumerator_633 (in_INITIALIZER_5F_MAP) ;
    while (enumerator_633.hasCurrentObject ()) {
      result.appendString ("  public: void ") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_633.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      GGS_uint index_814_IDX (0) ;
      if (enumerator_633.current_mArgumentTypeList (HERE).isValid ()) {
        UpEnumerator_functionSignature enumerator_814 (enumerator_633.current_mArgumentTypeList (HERE)) ;
        while (enumerator_814.hasCurrentObject ()) {
          const GalgasBool test_1 = enumerator_814.current_isConstant (HERE).boolEnum () ;
          switch (test_1) {
          case GalgasBool::boolTrue : {
            result.appendString ("const class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_814.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (" & inOperand") ;
            result.appendString (index_814_IDX.getter_string (SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_814.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" inOperand") ;
            result.appendString (index_814_IDX.getter_string (SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_814.gotoNextObject () ;
          index_814_IDX.increment () ;
        }
      }
      result.appendString ("Compiler * inCompiler) ;\n") ;
      enumerator_633.gotoNextObject () ;
      index_633_.increment () ;
    }
  }
  result.appendString ("\n\n") ;
  GGS_uint index_1233_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    UpEnumerator_getterMap enumerator_1233 (in_GETTER_5F_MAP) ;
    while (enumerator_1233.hasCurrentObject ()) {
      const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_1233.current_mGetterNameThatObsoletesInvokationName (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString (function_generateClassGetterDeclaration (enumerator_1233.current_lkey (HERE), enumerator_1233.current_mArgumentTypeList (HERE), enumerator_1233.current_mHasCompilerArgument (HERE), enumerator_1233.current_mReturnedType (HERE), enumerator_1233.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 28)).stringValue ()) ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1233.gotoNextObject () ;
      index_1233_.increment () ;
    }
  }
  GGS_uint index_1475_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    UpEnumerator_instanceMethodMap enumerator_1475 (in_INSTANCE_5F_METHOD_5F_MAP) ;
    while (enumerator_1475.hasCurrentObject ()) {
      result.appendString (function_generateClassInstanceMethodDeclaration (enumerator_1475.current_lkey (HERE), enumerator_1475.current_mParameterList (HERE), enumerator_1475.current_mHasCompilerArgument (HERE), enumerator_1475.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 32)).stringValue ()) ;
      enumerator_1475.gotoNextObject () ;
      index_1475_.increment () ;
    }
  }
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeHeader2part2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeHeader_32_part_32_ (Compiler * inCompiler,
                                                                                             const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                             const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_string & /* in_SUPER_5F_TYPE_5F_IDENTIFIER */,
                                                                                             const GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                             const GGS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                             const GGS_bool & in_IS_5F_ABSTRACT,
                                                                                             const GGS_typedPropertyList & in_INITIALIZER_5F_ARGUMENT_5F_LIST
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--- Properties\n") ;
  GGS_uint index_111_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_111 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_111.hasCurrentObject ()) {
      result.appendString ("  public: GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_111.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" mProperty_") ;
      result.appendString (enumerator_111.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_111.gotoNextObject () ;
      index_111_.increment () ;
    }
  }
  result.appendString ("\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 8)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--- Default constructor\n  public: cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--- Constructor\n  public: cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_566_ (0) ;
  if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_566 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_566.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_566.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_566.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_566.gotoNextObject () ;
      index_566_.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  const GalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 19)).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--- Duplication\n  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--- Attribute accessors\n") ;
  const GalgasBool test_2 = in_IS_5F_ABSTRACT.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const int32_t inIndentation) const override = 0 ;\n\n//--- Class descriptor\n  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("//--- Description\n  public: virtual void description (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("String & ioString,\n                           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("const int32_t inIndentation) const override ;\n\n//--- Class descriptor\n  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n} ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'classGenerationTemplate referenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_classGenerationTemplate_referenceClassTypeSpecificImplementation (Compiler * inCompiler,
                                                                                                 const GGS_string & in_TYPE_5F_NAME,
                                                                                                 const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                 const GGS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                                 const GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                                 const GGS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                                 const GGS_typedPropertyList & /* in_INHERITED_5F_ATTRIBUTE_5F_LIST */,
                                                                                                 const GGS_bool & in_IS_5F_ABSTRACT,
                                                                                                 const GGS_bool & /* in_CONSTRUCTOR_5F_NEEDS_5F_COMPILER_5F_VAR */,
                                                                                                 const GGS_string & in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE,
                                                                                                 const GGS_bool & in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER,
                                                                                                 const GGS_typedPropertyList & in_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                                 const GGS_typedPropertyList & in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST,
                                                                                                 const GGS_initializerMap & /* in_INITIALIZER_5F_MAP */,
                                                                                                 const GGS_bool & in_CLONABLE
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString (" reference class\n//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    const size_t myObjectPtr = size_t (mObjectPtr) ;\n    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;\n    if (myObjectPtr < operandObjectPtr) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (myObjectPtr > operandObjectPtr) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_reference_class") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" () {\n}\n\n") ;
  const GalgasBool test_1 = in_CLONABLE.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::init_21_cloned (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inObject,\n           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("Compiler * inCompiler\n           ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  if (inObject.isValid ()) {\n    macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (inCompiler COMMA_HERE)) ;\n") ;
    GGS_uint index_1662_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_1662 (in_ALL_5F_PROPERTY_5F_LIST) ;
      while (enumerator_1662.hasCurrentObject ()) {
        result.appendString ("    ((cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) result.mObjectPtr)->mProperty_") ;
        result.appendString (enumerator_1662.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 42)).stringValue ()) ;
        result.appendString (" = ((cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) inObject.mObjectPtr)->mProperty_") ;
        result.appendString (enumerator_1662.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 42)).stringValue ()) ;
        result.appendString (" ;\n") ;
        enumerator_1662.gotoNextObject () ;
        index_1662_.increment () ;
      }
    }
    result.appendString ("  }\n  return result ;\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_2 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 49)).operator_and (in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 49)).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--- Synthetized initializer ----------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::\n") ;
    result.appendString (extensionGetter_initializerSignature (in_INITIALIZER_5F_ARGUMENT_5F_LIST, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 53)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 53)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GGS_uint index_2259_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_2259 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_2259.hasCurrentObject ()) {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_2259.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 55)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_2259.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 55)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        enumerator_2259.gotoNextObject () ;
        index_2259_.increment () ;
      }
    }
    result.appendString ("Compiler * inCompiler\n          ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" * object = nullptr ;\n  macroMyNew (object, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE)) ;\n  object->") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_") ;
    result.appendString (extensionGetter_initializerSignature (in_INITIALIZER_5F_ARGUMENT_5F_LIST, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 61)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 61)).stringValue ()) ;
    result.appendString (" (") ;
    GGS_uint index_2718_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_2718 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_2718.hasCurrentObject ()) {
        result.appendString ("in_") ;
        result.appendString (enumerator_2718.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 63)).stringValue ()) ;
        result.appendString (", ") ;
        enumerator_2718.gotoNextObject () ;
        index_2718_.increment () ;
      }
    }
    result.appendString ("inCompiler) ;\n  const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result (object) ;\n  macroDetachSharedObject (object) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_3 = in_GENERATE_5F_SYNTHETIZED_5F_INITIALIZER.boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("\nvoid cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::\n") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_") ;
    result.appendString (extensionGetter_initializerSignature (in_INITIALIZER_5F_ARGUMENT_5F_LIST, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 76)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 76)).stringValue ()) ;
    result.appendString (" (") ;
    columnMarker = result.currentColumn () ;
    GGS_uint index_3234_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_3234 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_3234.hasCurrentObject ()) {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_3234.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_3234.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        enumerator_3234.gotoNextObject () ;
        index_3234_.increment () ;
      }
    }
    result.appendString ("Compiler * /* inCompiler */) {\n") ;
    GGS_uint index_3435_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_3435 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_3435.hasCurrentObject ()) {
        result.appendString ("  mProperty_") ;
        result.appendString (enumerator_3435.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 83)).stringValue ()) ;
        result.appendString (" = in_") ;
        result.appendString (enumerator_3435.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 83)).stringValue ()) ;
        result.appendString (" ;\n") ;
        enumerator_3435.gotoNextObject () ;
        index_3435_.increment () ;
      }
    }
    result.appendString ("}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * inSourcePtr) :\n") ;
  const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_reference_class") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" (inSourcePtr) {\n  macroNullOrValidSharedObject (inSourcePtr, cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n}\n") ;
  const GalgasBool test_5 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 98)).operator_and (GGS_bool (ComparisonKind::equal, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 98)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 98)).boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {\n  GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (inCompiler COMMA_THERE)) ;\n  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_6 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 107)).operator_and (GGS_bool (ComparisonKind::greaterThan, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 107)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 107)).boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::class_func_new (") ;
    columnMarker = result.currentColumn () ;
    GGS_uint index_4760_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_4760 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_4760.hasCurrentObject ()) {
        result.appendString ("const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_4760.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 111)).stringValue ()) ;
        result.appendString (" & in_") ;
        result.appendString (enumerator_4760.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 111)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        enumerator_4760.gotoNextObject () ;
        index_4760_.increment () ;
      }
    }
    result.appendString ("Compiler * inCompiler\n") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" result ;\n  macroMyNew (result.mObjectPtr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GGS_uint index_5148_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_5148 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_5148.hasCurrentObject ()) {
        result.appendString ("in_") ;
        result.appendString (enumerator_5148.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 119)).stringValue ()) ;
        result.appendString (", ") ;
        enumerator_5148.gotoNextObject () ;
        index_5148_.increment () ;
      }
    }
    result.appendString (" inCompiler COMMA_THERE)) ;\n  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_5365_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5365 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5365.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_5365.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 128)).stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::readProperty_") ;
      result.appendString (enumerator_5365.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 128)).stringValue ()) ;
      result.appendString (" (void) const {\n  if (nullptr == mObjectPtr) {\n    return GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_5365.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 130)).stringValue ()) ;
      result.appendString (" () ;\n  }else{\n    cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * p = (cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n    return p->mProperty_") ;
      result.appendString (enumerator_5365.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 134)).stringValue ()) ;
      result.appendString (" ;\n  }\n}\n\n") ;
      const GalgasBool test_7 = enumerator_5365.current_hasSetter (HERE).boolEnum () ;
      switch (test_7) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setProperty_") ;
        result.appendString (enumerator_5365.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 139)).stringValue ()) ;
        result.appendString (" (const GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_5365.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 139)).stringValue ()) ;
        result.appendString (" & inValue) {\n  if (nullptr != mObjectPtr) {\n    cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" * p = (cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (" *) mObjectPtr ;\n    macroValidSharedObject (p, cPtr_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (") ;\n    p->mProperty_") ;
        result.appendString (enumerator_5365.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 143)).stringValue ()) ;
        result.appendString (" = inValue ;\n  }\n}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_5365.gotoNextObject () ;
      index_5365_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 150)).add_operation (GGS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 150)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, in_INITIALIZER_5F_ARGUMENT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 153)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) :\n") ;
    const GalgasBool test_9 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    switch (test_9) {
    case GalgasBool::boolTrue : {
      result.appendString ("acStrongPtr_class") ;
      } break ;
    case GalgasBool::boolFalse : {
      result.appendString ("cPtr_") ;
      result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString (" (inCompiler COMMA_THERE)") ;
    GGS_uint index_7204_ (0) ;
    if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_7204 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
      while (enumerator_7204.hasCurrentObject ()) {
        result.appendString (",\nmProperty_") ;
        result.appendString (enumerator_7204.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 161)).stringValue ()) ;
        result.appendString (" ()") ;
        enumerator_7204.gotoNextObject () ;
        index_7204_.increment () ;
      }
    }
    result.appendString (" {\n") ;
    result.appendString (in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue ()) ;
    result.appendString ("}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\ncPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_7577_ (0) ;
  if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7577 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_7577.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7577.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 170)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_7577.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 170)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_7577.gotoNextObject () ;
      index_7577_.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\n") ;
  const GalgasBool test_10 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_10) {
  case GalgasBool::boolTrue : {
    result.appendString ("acStrongPtr_class") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" (") ;
  GGS_uint index_7993_ (0) ;
  if (in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7993 (in_INHERITED_5F_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_7993.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_7993.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 178)).stringValue ()) ;
      result.appendString (", ") ;
      enumerator_7993.gotoNextObject () ;
      index_7993_.increment () ;
    }
  }
  result.appendString ("inCompiler COMMA_THERE)") ;
  GGS_uint index_8173_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8173 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_8173.hasCurrentObject ()) {
      result.appendString (",\nmProperty_") ;
      result.appendString (enumerator_8173.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 182)).stringValue ()) ;
      result.appendString (" ()") ;
      enumerator_8173.gotoNextObject () ;
      index_8173_.increment () ;
    }
  }
  result.appendString (" {\n") ;
  result.appendString (in_CONSTRUCTOR_5F_INITIALIZATION_5F_CODE.stringValue ()) ;
  GGS_uint index_8345_ (0) ;
  if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8345 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
    while (enumerator_8345.hasCurrentObject ()) {
      result.appendString ("  mProperty_") ;
      result.appendString (enumerator_8345.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 187)).stringValue ()) ;
      result.appendString (" = in_") ;
      result.appendString (enumerator_8345.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 187)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_8345.gotoNextObject () ;
      index_8345_.increment () ;
    }
  }
  result.appendString ("}\n\n") ;
  const GalgasBool test_11 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 192)).boolEnum () ;
  switch (test_11) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nconst GALGAS_TypeDescriptor * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::classDescriptor (void) const {\n  return & kTypeDescriptor_GALGAS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" ;\n}\n\n") ;
    const GalgasBool test_12 = GGS_bool (ComparisonKind::equal, in_ALL_5F_PROPERTY_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 197)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_12) {
    case GalgasBool::boolTrue : {
      result.appendString ("void cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"[@") ;
      result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("]\") ;\n}\n\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      result.appendString ("void cPtr_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::description (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("String & ioString,\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"[@") ;
      result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (":\") ;\n") ;
      GGS_uint index_9339_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_9339 (in_ALL_5F_PROPERTY_5F_LIST) ;
        while (enumerator_9339.hasCurrentObject ()) {
          result.appendString ("  mProperty_") ;
          result.appendString (enumerator_9339.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 207)).stringValue ()) ;
          result.appendString (".description (ioString, inIndentation+1) ;\n") ;
          enumerator_9339.gotoNextObject () ;
          if (enumerator_9339.hasCurrentObject ()) {
            result.appendString ("  ioString.appendCString (\", \") ;\n") ;
          }
          index_9339_.increment () ;
        }
      }
      result.appendString ("  ioString.appendCString (\"]\") ;\n}\n\n") ;
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_13 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 215)).boolEnum () ;
  switch (test_13) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nacPtr_class * cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {\n  acPtr_class * ptr = nullptr ;\n  macroMyNew (ptr, cPtr_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (") ;
    GGS_uint index_9972_ (0) ;
    if (in_INITIALIZER_5F_ARGUMENT_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_9972 (in_INITIALIZER_5F_ARGUMENT_5F_LIST) ;
      while (enumerator_9972.hasCurrentObject ()) {
        result.appendString ("mProperty_") ;
        result.appendString (enumerator_9972.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 222)).stringValue ()) ;
        result.appendString (", ") ;
        enumerator_9972.gotoNextObject () ;
        index_9972_.increment () ;
      }
    }
    result.appendString ("inCompiler COMMA_THERE)) ;\n  return ptr ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n#ifndef DO_NOT_GENERATE_CHECKINGS\n  void cPtr_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::printNonNullClassInstanceProperties (void) const {\n  ") ;
  const GalgasBool test_14 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_14) {
  case GalgasBool::boolTrue : {
    result.appendString ("  acStrongPtr_class::printNonNullClassInstanceProperties () ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("  cPtr_") ;
    result.appendString (in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::printNonNullClassInstanceProperties () ;\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_10570_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_10570 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_10570.hasCurrentObject ()) {
      result.appendString ("    mProperty_") ;
      result.appendString (enumerator_10570.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 240)).stringValue ()) ;
      result.appendString (".printNonNullClassInstanceProperties (\"") ;
      result.appendString (enumerator_10570.current_name (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\") ;\n") ;
      enumerator_10570.gotoNextObject () ;
      index_10570_.increment () ;
    }
  }
  result.appendString ("  }\n#endif\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@weakReferenceDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_weakReferenceDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_weakReferenceDeclarationAST temp_0 = this ;
  result_result = GGS_string ("weak reference @").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 34)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                       GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                       GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_weakReferenceDeclarationAST temp_0 = this ;
  const GGS_weakReferenceDeclarationAST temp_1 = this ;
  GGS_lstring var_key_2666 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 48)), temp_1.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2666, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 49)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_weakReferenceDeclarationAST temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::notEqual, temp_4.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      const GGS_weakReferenceDeclarationAST temp_5 = this ;
      const GGS_weakReferenceDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2666, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 53)), temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 51)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                                 const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                 const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                 const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                 const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_superClassIndex_3918 ;
  GGS_bool var_generateHeaderInSeparateFile_3946 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_weakReferenceDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_superClassIndex_3918 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas", 74)) ;
      const GGS_weakReferenceDeclarationAST temp_2 = this ;
      var_generateHeaderInSeparateFile_3946 = temp_2.readProperty_mGenerateInSeparateFile () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_weakReferenceDeclarationAST temp_3 = this ;
    extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mSuperWeakReferenceTypeName (), var_superClassIndex_3918, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 77)) ;
    }
    const GGS_weakReferenceDeclarationAST temp_4 = this ;
    GGS_unifiedTypeDefinition var_superTypeDefinition_4237 = extensionGetter_typeDefinition (ioArgument_ioTypeMap, temp_4.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 78)) ;
    var_generateHeaderInSeparateFile_3946 = var_superTypeDefinition_4237.readProperty_generateHeaderInSeparateFile () ;
  }
  GGS_unifiedTypeMapEntry var_weakReferenceIndex_4750 ;
  {
  const GGS_weakReferenceDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_5.readProperty_mWeakReferenceTypeName (), var_weakReferenceIndex_4750, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 87)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_4819 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_6 = this ;
  var_classFunctionMap_4819.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nil"), temp_6.readProperty_mWeakReferenceTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_weakReferenceIndex_4750, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 93)) ;
  }
  GGS_getterMap var_getterMap_5021 = GGS_getterMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_5054 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_5095 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_5141 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_weakReferenceDeclarationAST temp_7 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_7.readProperty_mWeakReferenceTypeName (), GGS_bool (false), var_initializerMap_5141, var_getterMap_5021, var_setterMap_5054, var_instanceMethodMap_5095, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 104)) ;
  }
  UpEnumerator_getterMap enumerator_5577 (var_getterMap_5021) ;
  while (enumerator_5577.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (enumerator_5577.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray8  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 120)) ;
    enumerator_5577.gotoNextObject () ;
  }
  UpEnumerator_setterMap enumerator_5684 (var_setterMap_5054) ;
  while (enumerator_5684.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (enumerator_5684.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray9  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 123)) ;
    enumerator_5684.gotoNextObject () ;
  }
  UpEnumerator_instanceMethodMap enumerator_5791 (var_instanceMethodMap_5095) ;
  while (enumerator_5791.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (enumerator_5791.current (HERE).readProperty_lkey ().readProperty_location (), GGS_string ("a weak reference does not support extension"), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 126)) ;
    enumerator_5791.gotoNextObject () ;
  }
  GGS_typeFeatures var_features_5895 = GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-weak-reference.galgas", 128)) ;
  {
  const GGS_weakReferenceDeclarationAST temp_11 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_11.readProperty_mWeakReferenceTypeName (), var_features_5895, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 129)) ;
  }
  GGS_unifiedTypeMapEntry var_classIndex_6192 ;
  {
  const GGS_weakReferenceDeclarationAST temp_12 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_12.readProperty_mClassTypeName (), var_classIndex_6192, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 137)) ;
  }
  const GGS_weakReferenceDeclarationAST temp_13 = this ;
  const GGS_weakReferenceDeclarationAST temp_14 = this ;
  const GGS_weakReferenceDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_6210 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_mWeakReferenceTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), var_superClassIndex_3918, GGS_typeKindEnum::class_func_weakReferenceType (var_classIndex_6192  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 144)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_5141, var_classFunctionMap_4819, GGS_getterMap::init (inCompiler COMMA_HERE), GGS_setterMap::init (inCompiler COMMA_HERE), GGS_instanceMethodMap::init (inCompiler COMMA_HERE), GGS_classMethodMap::init (inCompiler COMMA_HERE), var_classIndex_6192, GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_5895, GGS_functionSignature::init (inCompiler COMMA_HERE), var_generateHeaderInSeparateFile_3946, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas", 161)), GGS_string ("weak-reference-").add_operation (temp_15.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 162)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-weak-reference.galgas", 163)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_6210.readProperty_typeName (), var_typeDefinition_6210, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 165)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@weakReferenceDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_string /* constinArgument_inProductDirectory */,
                                                                const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_weakReferenceDeclarationAST temp_0 = this ;
  GGS_lstring var_weakRefTypeNameForUsefulness_7930 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 182)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_7930, var_weakRefTypeNameForUsefulness_7930, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 183)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_weakReferenceDeclarationAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_weakReferenceDeclarationAST temp_3 = this ;
      GGS_lstring var_superWeakRefNameForUsefulness_8183 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 185)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_7930, var_superWeakRefNameForUsefulness_8183 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 186)) ;
      }
    }
  }
  const GGS_weakReferenceDeclarationAST temp_4 = this ;
  GGS_unifiedTypeMapEntry var_selfType_8442 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 189)) ;
  const GGS_weakReferenceDeclarationAST temp_5 = this ;
  GGS_unifiedTypeMapEntry temp_6 ;
  const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_7) {
    temp_6 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-weak-reference.galgas", 192)) ;
  }else if (GalgasBool::boolFalse == test_7) {
    const GGS_weakReferenceDeclarationAST temp_8 = this ;
    temp_6 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_8.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 193)) ;
  }
  GGS_unifiedTypeMapEntry var_superClassEntry_8564 = temp_6 ;
  const GGS_weakReferenceDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_referenceClassType_8791 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 196)) ;
  const GGS_weakReferenceDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry var_optionalClassTypeOrNull_8925 = extensionGetter_typeMapEntryOrNullForLKey (ioArgument_ioTypeMap, function_makeOptionalTypeLName (temp_10.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 200)) ;
  const GGS_weakReferenceDeclarationAST temp_11 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("weak reference ").add_operation (temp_11.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 204)), GGS_weakReferenceTypeForGeneration::init_21__21__21__21__21_ (var_selfType_8442, var_referenceClassType_8791, var_superClassEntry_8564, extensionGetter_definition (var_selfType_8442, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 209)).readProperty_generateHeaderInSeparateFile (), var_optionalClassTypeOrNull_8925, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 203)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@weakReferenceTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_string & outArgument_outHeader,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_weakReferenceTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas", 229)).operator_not (SOURCE_FILE ("declaration-type-weak-reference.galgas", 229)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_weakReferenceTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 230)) ;
    }
  }
  const GGS_weakReferenceTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReferenceClassType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 232)) ;
  const GGS_weakReferenceTypeForGeneration temp_4 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_10397 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 233)) ;
  GGS_string var_optionalClassTypeNameRepresentation_10461 ;
  const GGS_weakReferenceTypeForGeneration temp_5 = this ;
  switch (temp_5.readProperty_optionalClassTypeOrNull ().enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      var_optionalClassTypeNameRepresentation_10461 = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_10610__0 ;
      temp_5.readProperty_optionalClassTypeOrNull ().getAssociatedValuesFor_element (extractedValue_10610__0) ;
      const GGS_weakReferenceTypeForGeneration temp_6 = this ;
      var_optionalClassTypeNameRepresentation_10461 = extensionGetter_identifierRepresentation (temp_6.readProperty_optionalClassTypeOrNull (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 239)) ;
    }
    break ;
  }
  const GGS_weakReferenceTypeForGeneration temp_7 = this ;
  const GGS_weakReferenceTypeForGeneration temp_8 = this ;
  const GGS_weakReferenceTypeForGeneration temp_9 = this ;
  GGS_string temp_10 ;
  const GalgasBool test_11 = temp_9.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas", 244)).boolEnum () ;
  if (GalgasBool::boolTrue == test_11) {
    temp_10 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_11) {
    const GGS_weakReferenceTypeForGeneration temp_12 = this ;
    temp_10 = extensionGetter_identifierRepresentation (temp_12.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 244)) ;
  }
  outArgument_outHeader = GGS_string (filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, extensionGetter_identifierRepresentation (temp_7.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 242)), extensionGetter_identifierRepresentation (temp_8.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 243)), temp_10, var_optionalClassTypeNameRepresentation_10461 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 241))) ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typeDefinition_10397.readProperty_typeName ().readProperty_string (), var_typeDefinition_10397.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas", 249)), var_typeDefinition_10397.readProperty_isConcrete (), var_typeDefinition_10397.readProperty_initializerMap (), var_typeDefinition_10397.readProperty_classFunctionMap (), var_typeDefinition_10397.readProperty_getterMap (), var_typeDefinition_10397.readProperty_setterMap (), var_typeDefinition_10397.readProperty_instanceMethodMap (), var_typeDefinition_10397.readProperty_classMethodMap (), var_typeDefinition_10397.readProperty_readSubscriptMap (), var_typeDefinition_10397.readProperty_enumerationDescriptorList (), var_typeDefinition_10397.readProperty_features (), var_typeDefinition_10397.readProperty_addAssignOperatorArguments (), var_typeDefinition_10397.readProperty_typeForEnumeratedElement (), var_typeDefinition_10397.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 247))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 247)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@weakReferenceTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_string & outArgument_outImplementation,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_weakReferenceTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 273)) ;
  const GGS_weakReferenceTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_12063 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 274)) ;
  GGS_string var_optionalClassTypeNameRepresentation_12127 ;
  const GGS_weakReferenceTypeForGeneration temp_2 = this ;
  switch (temp_2.readProperty_optionalClassTypeOrNull ().enumValue ()) {
  case GGS_unifiedTypeMapEntry::Enumeration::invalid:
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
    {
      var_optionalClassTypeNameRepresentation_12127 = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
    {
      GGS_unifiedTypeMapElementClass_2E_weak extractedValue_12276__0 ;
      temp_2.readProperty_optionalClassTypeOrNull ().getAssociatedValuesFor_element (extractedValue_12276__0) ;
      const GGS_weakReferenceTypeForGeneration temp_3 = this ;
      var_optionalClassTypeNameRepresentation_12127 = extensionGetter_identifierRepresentation (temp_3.readProperty_optionalClassTypeOrNull (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 280)) ;
      const GGS_weakReferenceTypeForGeneration temp_4 = this ;
      extensionMethod_addHeaderFileName (temp_4.readProperty_optionalClassTypeOrNull (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 281)) ;
    }
    break ;
  }
  const GGS_weakReferenceTypeForGeneration temp_5 = this ;
  const GGS_weakReferenceTypeForGeneration temp_6 = this ;
  GGS_string temp_7 ;
  const GalgasBool test_8 = temp_6.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("declaration-type-weak-reference.galgas", 286)).boolEnum () ;
  if (GalgasBool::boolTrue == test_8) {
    temp_7 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_8) {
    const GGS_weakReferenceTypeForGeneration temp_9 = this ;
    temp_7 = extensionGetter_identifierRepresentation (temp_9.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 286)) ;
  }
  outArgument_outImplementation = GGS_string (filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_5.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 284)), var_typeDefinition_12063.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-weak-reference.galgas", 285)), temp_7, var_optionalClassTypeNameRepresentation_12127 COMMA_SOURCE_FILE ("declaration-type-weak-reference.galgas", 283))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'weakClassGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- File '/galgas-predefined-types.ggs'

const char * gWrapperFileContent_0_weakClassGenerationTemplate = 
  "\n"
  "extern proc %usefull println (let @string inString)\n"
  "\n"
  "extern proc %usefull print (let @string inString)\n"
  "\n"
  "list @2lstringlist %usefull {\n"
  "  public var @lstring mValue0\n"
  "  public var @lstring mValue1\n"
  "}\n"
  "\n"
   ;

const cRegularFileWrapper gWrapperFile_0_weakClassGenerationTemplate (
  "galgas-predefined-types.ggs",
  "ggs",
  true, // Text file
 198, // Text length
  gWrapperFileContent_0_weakClassGenerationTemplate
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_weakClassGenerationTemplate_0 [2] = {
  & gWrapperFile_0_weakClassGenerationTemplate,
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_weakClassGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_weakClassGenerationTemplate (
  "",
  1,
  gWrapperAllFiles_weakClassGenerationTemplate_0,
  0,
  gWrapperAllDirectories_weakClassGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'weakClassGenerationTemplate weakReferenceClassTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeHeader_31_ (Compiler * inCompiler,
                                                                                             const GGS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                             const GGS_string & in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 2)).add_operation (GGS_string (" weak reference class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public ") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Constructor and assignment from strong reference\n  public: GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n  public: GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const class GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--------------------------------- Constructor and assignment from optional reference\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::notEqual, in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("  public: GGS_") ;
    result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (const class GGS_") ;
    result.appendString (in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------- nil initializer\n  public: inline static GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" init_nil (void) {\n    GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;\n    return result ;\n  }\n\n//--------------------------------- Bang operator\n  public: GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" bang_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;\n\n//--------------------------------- isValuated\n  public: inline bool isValuated (void) const {\n    return isValid () && (ptr () != nullptr) ;\n  }\n\n//--------------------------------- Unwrapped value\n  public: GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" unwrappedValue (void) const ;\n\n//--------------------------------- GALGAS read only properties\n  public: inline GGS_bool readProperty_isNil (void) const {\n    return GGS_bool (isValid (), ptr () == nullptr) ;\n  }\n\n  public: inline GGS_bool readProperty_isSome (void) const {\n    return GGS_bool (isValid (), ptr () != nullptr) ;\n  }\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'weakClassGenerationTemplate weakReferenceClassTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_weakClassGenerationTemplate_weakReferenceClassTypeSpecificImplementation (Compiler * /* inCompiler */,
                                                                                                         const GGS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const GGS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const GGS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                         const GGS_string & in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::objectCompare (const GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    cPtr_weakReference_proxy * myPtr = mProxyPtr ;\n    const size_t myObjectPtr = size_t (myPtr) ;\n    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;\n    const size_t operandObjectPtr = size_t (operandPtr) ;\n    if (myObjectPtr < operandObjectPtr) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (myObjectPtr > operandObjectPtr) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n  cPtr_weakReference_proxy * proxyPtr = nullptr ;\n  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;\n  if (p != nullptr) {\n    proxyPtr = p->getProxy () ;\n  }\n  macroAssignSharedObject (mProxyPtr, proxyPtr) ;\n  return *this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("AC_GALGAS_weak_reference") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("GGS_") ;
    result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" (inSource) {\n}\n\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::GGS_") ;
    result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (const class GGS_") ;
    result.appendString (in_OPTIONAL_5F_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) :\n") ;
    const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    switch (test_3) {
    case GalgasBool::boolTrue : {
      result.appendString ("AC_GALGAS_weak_reference") ;
      } break ;
    case GalgasBool::boolFalse : {
      result.appendString ("GGS_") ;
      result.appendString (in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString (" () {\n  if (inSource.isValid ()) {\n    if (inSource.isNil ()) {\n      macroMyNew (mProxyPtr, cPtr_weakReference_proxy (HERE)) ;\n    }else if (inSource.isValuated ()) {\n      const GGS_") ;
    result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" v = inSource.unwrappedValue () ;\n      acStrongPtr_class * ptr = (acStrongPtr_class *) v.ptr () ;\n      if (ptr != nullptr) {\n        cPtr_weakReference_proxy * proxy = ptr->getProxy () ;\n        macroAssignSharedObject (mProxyPtr, proxy) ;\n      }\n    }\n  }\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_nil (LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::unwrappedValue (void) const {\n  GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    const cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) ptr () ;\n    if (nullptr != p) {\n      result = GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (p) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::bang_") ;
  result.appendString (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCompiler COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mProxyPtr != nullptr) {\n    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;\n    if (strongPtr == nullptr) {\n      inCompiler->onTheFlySemanticError (\"weak reference is nil\" COMMA_THERE) ;\n    }else{\n      macroValidSharedObject (strongPtr, cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n      result = GGS_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ((cPtr_") ;
  result.appendString (in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) strongPtr) ;\n    }\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_enumDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_enumDeclarationAST temp_0 = this ;
  result_result = GGS_string ("enum @").add_operation (temp_0.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 202)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumDeclarationAST temp_0 = this ;
  UpEnumerator_enumConstantList enumerator_6969 (temp_0.readProperty_mConstantList ()) ;
  while (enumerator_6969.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_6969.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 209)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_enumDeclarationAST temp_2 = this ;
        GGS_lstring var_associatedTypeName_7057 = GGS_lstring::init_21__21_ (function_makeEmbeddedTypeName (temp_2.readProperty_enumTypeName ().readProperty_string (), enumerator_6969.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 211)), enumerator_6969.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
        GGS_propertyInCollectionListAST var_propertyListAST_7246 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_associatedValue_5D_ enumerator_7308 (enumerator_6969.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_7308.hasCurrentObject ()) {
          GGS_lstring temp_3 ;
          const GalgasBool test_4 = enumerator_7308.current (HERE).readProperty_weakQualifier ().boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            temp_3 = function_makeWeakTypeLName (enumerator_7308.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 217)) ;
          }else if (GalgasBool::boolFalse == test_4) {
            temp_3 = enumerator_7308.current (HERE).readProperty_typeName () ;
          }
          GGS_lstring var_associatedValueTypeName_7349 = temp_3 ;
          var_propertyListAST_7246.addAssignOperation (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-enum.galgas", 221)), var_associatedValueTypeName_7349, enumerator_7308.current (HERE).readProperty_valueName (), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-enum.galgas", 224)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-enum.galgas", 226))  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 220)) ;
          enumerator_7308.gotoNextObject () ;
        }
        const GGS_enumDeclarationAST temp_5 = this ;
        GGS_structDeclarationAST var_s_7792 = GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (false), var_associatedTypeName_7057, var_propertyListAST_7246, GGS_string::makeEmptyString (), temp_5.readProperty_comparison (), GGS_bool (true), inCompiler COMMA_HERE) ;
        ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (var_s_7792  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 236)) ;
        {
        GGS_lstring joker_8136 ; // Joker input parameter
        extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_8136, var_associatedTypeName_7057, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 237)) ;
        }
      }
    }
    enumerator_6969.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumDeclarationAST temp_0 = this ;
  const GGS_enumDeclarationAST temp_1 = this ;
  GGS_lstring var_key_8993 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 256)), temp_1.readProperty_enumTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_enumDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_8993, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 257)) ;
  }
  GGS_bool var_circularReference_9223 = GGS_bool (true) ;
  const GGS_enumDeclarationAST temp_3 = this ;
  UpEnumerator_enumConstantList enumerator_9273 (temp_3.readProperty_mConstantList ()) ;
  bool bool_4 = var_circularReference_9223.isValidAndTrue () ;
  if (enumerator_9273.hasCurrentObject () && bool_4) {
    while (enumerator_9273.hasCurrentObject () && bool_4) {
      GGS_bool var_namesCurrentType_9324 = GGS_bool (false) ;
      UpEnumerator__5B_associatedValue_5D_ enumerator_9387 (enumerator_9273.current (HERE).readProperty_associatedValueTypeList ()) ;
      bool bool_5 = var_namesCurrentType_9324.operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 262)).isValidAndTrue () ;
      if (enumerator_9387.hasCurrentObject () && bool_5) {
        while (enumerator_9387.hasCurrentObject () && bool_5) {
          GGS_lstring var_propertyKey_9453 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_9387.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 263)), enumerator_9387.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::equal, var_propertyKey_9453.readProperty_string ().objectCompare (var_key_8993.readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_namesCurrentType_9324 = GGS_bool (true) ;
            }
          }
          enumerator_9387.gotoNextObject () ;
          if (enumerator_9387.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_9324.operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 262)).isValidAndTrue () ;
          }
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_namesCurrentType_9324.operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 268)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_circularReference_9223 = GGS_bool (false) ;
        }
      }
      enumerator_9273.gotoNextObject () ;
      if (enumerator_9273.hasCurrentObject ()) {
        bool_4 = var_circularReference_9223.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_circularReference_9223.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_enumDeclarationAST temp_9 = this ;
      UpEnumerator_enumConstantList enumerator_9854 (temp_9.readProperty_mConstantList ()) ;
      while (enumerator_9854.hasCurrentObject ()) {
        UpEnumerator__5B_associatedValue_5D_ enumerator_9911 (enumerator_9854.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_9911.hasCurrentObject ()) {
          GGS_lstring var_propertyKey_9952 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_9911.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 276)), enumerator_9911.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            test_10 = GGS_bool (ComparisonKind::notEqual, var_propertyKey_9952.readProperty_string ().objectCompare (var_key_8993.readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_8993, var_propertyKey_9952 COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 278)) ;
              }
            }
          }
          enumerator_9911.gotoNextObject () ;
        }
        enumerator_9854.gotoNextObject () ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                        const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                        const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classFunctionMap var_classFunctionMap_10914 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_10956 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_enumTypeEntry_11054 ;
  {
  const GGS_enumDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_enumTypeName (), var_enumTypeEntry_11054, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 299)) ;
  }
  GGS_constantIndexMap var_constantMap_11119 = GGS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  GGS_bool var_hasAssociatedValues_11151 = GGS_bool (false) ;
  const GGS_enumDeclarationAST temp_1 = this ;
  UpEnumerator_enumConstantList enumerator_11204 (temp_1.readProperty_mConstantList ()) ;
  while (enumerator_11204.hasCurrentObject ()) {
    GGS_associatedValueDescriptorList var_associatedTypeList_11262 = GGS_associatedValueDescriptorList::init (inCompiler COMMA_HERE) ;
    GGS_functionSignature var_argumentTypeList_11316 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_associatedValue_5D_ enumerator_11377 (enumerator_11204.current (HERE).readProperty_associatedValueTypeList ()) ;
    while (enumerator_11377.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_associatedTypeEntry_11466 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11377.current (HERE).readProperty_typeName (), var_associatedTypeEntry_11466, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 307)) ;
      }
      var_argumentTypeList_11316.addAssignOperation (enumerator_11377.current (HERE).readProperty_valueName (), var_associatedTypeEntry_11466, enumerator_11377.current (HERE).readProperty_typeName ().readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 308)) ;
      var_associatedTypeList_11262.addAssignOperation (var_associatedTypeEntry_11466, enumerator_11377.current (HERE).readProperty_valueName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 309)) ;
      var_hasAssociatedValues_11151 = GGS_bool (true) ;
      enumerator_11377.gotoNextObject () ;
    }
    {
    var_constantMap_11119.setter_insertKey (enumerator_11204.current (HERE).readProperty_name (), var_constantMap_11119.getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 312)), var_associatedTypeList_11262, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 312)) ;
    }
    {
    var_classFunctionMap_10914.setter_insertOrReplace (enumerator_11204.current (HERE).readProperty_name (), var_argumentTypeList_11316, GGS_bool (false), var_enumTypeEntry_11054 COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 313)) ;
    }
    enumerator_11204.gotoNextObject () ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_12001 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumDeclarationAST temp_2 = this ;
  UpEnumerator_enumConstantList enumerator_12050 (temp_2.readProperty_mConstantList ()) ;
  while (enumerator_12050.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_12050.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 323)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_unifiedTypeMapEntryList var_associatedTypeList_12163 = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
        GGS_formalParameterSignature var_argumentTypeList_12226 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_associatedValue_5D_ enumerator_12289 (enumerator_12050.current (HERE).readProperty_associatedValueTypeList ()) ;
        while (enumerator_12289.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_associatedTypeEntry_12380 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_12289.current (HERE).readProperty_typeName (), var_associatedTypeEntry_12380, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 327)) ;
          }
          var_argumentTypeList_12226.addAssignOperation (enumerator_12289.current (HERE).readProperty_valueName (), var_associatedTypeEntry_12380, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-enum.galgas", 328)), enumerator_12289.current (HERE).readProperty_typeName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 328)) ;
          var_associatedTypeList_12163.addAssignOperation (var_associatedTypeEntry_12380  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 329)) ;
          var_hasAssociatedValues_11151 = GGS_bool (true) ;
          enumerator_12289.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_12001.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("extract").add_operation (enumerator_12050.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 333)), enumerator_12050.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-enum.galgas", 334)), var_argumentTypeList_12226, enumerator_12050.current (HERE).readProperty_name ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-enum.galgas", 338)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 332)) ;
        }
      }
    }
    enumerator_12050.gotoNextObject () ;
  }
  GGS_getterMap var_getterMap_13000 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_13000, inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 344)) ;
  }
  const GGS_enumDeclarationAST temp_4 = this ;
  UpEnumerator_enumConstantList enumerator_13036 (temp_4.readProperty_mConstantList ()) ;
  while (enumerator_13036.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_13036.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 346)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_enumDeclarationAST temp_6 = this ;
        GGS_string var_associatedTypeName_13124 = function_makeEmbeddedTypeName (temp_6.readProperty_enumTypeName ().readProperty_string (), enumerator_13036.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 347)) ;
        GGS_string var_optionalTypeName_13228 = function_makeOptionalTypeName (var_associatedTypeName_13124, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 348)) ;
        {
        routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13000, ioArgument_ioTypeMap, GGS_string ("get").add_operation (enumerator_13036.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 352)), GGS_string::makeEmptyString (), var_optionalTypeName_13228, GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 349)) ;
        }
      }
    }
    enumerator_13036.gotoNextObject () ;
  }
  const GGS_enumDeclarationAST temp_7 = this ;
  UpEnumerator_enumConstantList enumerator_13653 (temp_7.readProperty_mConstantList ()) ;
  while (enumerator_13653.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_13000, ioArgument_ioTypeMap, GGS_string ("is").add_operation (enumerator_13653.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-enum.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 364)), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 361)) ;
    }
    enumerator_13653.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_13978 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_enumDeclarationAST temp_8 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_8.readProperty_enumTypeName (), GGS_bool (false), var_initializerMap_13978, var_getterMap_13000, var_setterMap_10956, var_instanceMethodMap_12001, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 372)) ;
  }
  GGS_typeFeatures var_features_14442 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-enum.galgas", 388)) ;
  const GGS_enumDeclarationAST temp_9 = this ;
  switch (temp_9.readProperty_comparison ().enumValue ()) {
  case GGS_structComparison::Enumeration::invalid:
    break ;
  case GGS_structComparison::Enumeration::enum_none:
    break ;
  case GGS_structComparison::Enumeration::enum_equatable:
    {
      var_features_14442.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 393)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_14442.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas", 395)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas", 395)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 395)) ;
    }
    break ;
  }
  {
  const GGS_enumDeclarationAST temp_10 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_10.readProperty_enumTypeName (), var_features_14442, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 397)) ;
  }
  const GGS_enumDeclarationAST temp_11 = this ;
  const GGS_enumDeclarationAST temp_12 = this ;
  const GGS_enumDeclarationAST temp_13 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_14912 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_11.readProperty_enumTypeName (), temp_12.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas", 410)), GGS_typeKindEnum::class_func_enumType (var_constantMap_11119  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 411)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_13978, var_classFunctionMap_10914, var_getterMap_13000, var_setterMap_10956, var_instanceMethodMap_12001, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas", 422)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_14442, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-enum.galgas", 428)), GGS_string ("enum-").add_operation (temp_13.readProperty_enumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-enum.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 429)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-enum.galgas", 430)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14912.readProperty_typeName (), var_typeDefinition_14912, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 432)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument_inProductDirectory */,
                                                       const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_16641 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_enumTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 446)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16641, var_nameForUsefulness_16641, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 447)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_enumDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_16641  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 449)) ;
    }
  }
  GGS__5B_unifiedTypeMapEntry_5D_ var_associatedValuesTypes_16934 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_constantList_16970 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_enumConstantListForGeneration var_enumConstantListForGeneration_17039 = GGS_enumConstantListForGeneration::init (inCompiler COMMA_HERE) ;
  GGS_constantIndexMap var_constantMap_17083 = GGS_constantIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumDeclarationAST temp_3 = this ;
  UpEnumerator_enumConstantList enumerator_17143 (temp_3.readProperty_mConstantList ()) ;
  while (enumerator_17143.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_17143.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 457)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_enumDeclarationAST temp_5 = this ;
        GGS_string var_associatedTypeName_17231 = function_makeEmbeddedTypeName (temp_5.readProperty_enumTypeName ().readProperty_string (), enumerator_17143.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 458)) ;
        GGS_string var_optionalTypeName_17335 = function_makeOptionalTypeName (var_associatedTypeName_17231, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 459)) ;
        GGS_unifiedTypeMapEntry var_associatedType_17423 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (var_optionalTypeName_17335, enumerator_17143.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 460)) ;
        {
        var_associatedValuesTypes_16934.setter_append (var_associatedType_17423, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 461)) ;
        }
      }
    }
    var_constantList_16970.addAssignOperation (enumerator_17143.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 463)) ;
    GGS_associatedValueDescriptorList var_associatedTypeList_17664 = GGS_associatedValueDescriptorList::init (inCompiler COMMA_HERE) ;
    GGS_stringset var_associatedValueNameSet_17710 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_associatedValue_5D_ enumerator_17777 (enumerator_17143.current (HERE).readProperty_associatedValueTypeList ()) ;
    while (enumerator_17777.hasCurrentObject ()) {
      GGS_lstring var_propertyTypeNameForUsefulness_17816 = function_typeNameForUsefulEntitiesGraph (enumerator_17777.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 467)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16641, var_propertyTypeNameForUsefulness_17816 COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 468)) ;
      }
      GGS_unifiedTypeMapEntry var_associatedTypeEntry_18021 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_17777.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 469)) ;
      var_associatedTypeList_17664.addAssignOperation (var_associatedTypeEntry_18021, enumerator_17777.current (HERE).readProperty_valueName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 470)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_associatedValueNameSet_17710.getter_hasKey (enumerator_17777.current (HERE).readProperty_valueName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 471)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_17777.current (HERE).readProperty_valueName ().readProperty_location (), GGS_string ("duplicated name"), fixItArray7  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 472)) ;
        }
      }
      var_associatedValueNameSet_17710.plusPlusAssignOperation (enumerator_17777.current (HERE).readProperty_valueName ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 474)) ;
      const GGS_enumDeclarationAST temp_8 = this ;
      switch (temp_8.readProperty_comparison ().enumValue ()) {
      case GGS_structComparison::Enumeration::invalid:
        break ;
      case GGS_structComparison::Enumeration::enum_none:
        break ;
      case GGS_structComparison::Enumeration::enum_equatable:
        {
          GGS_unifiedTypeDefinition var_associatedType_18516 = extensionGetter_definition (var_associatedTypeEntry_18021, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 479)) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = var_associatedType_18516.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas", 480)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 480)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 480)).operator_and (var_associatedType_18516.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-enum.galgas", 481)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 481)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 481)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 480)).operator_and (var_associatedType_18516.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-enum.galgas", 482)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 482)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 482)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 481)).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_17777.current (HERE).readProperty_typeName ().readProperty_location (), GGS_string ("the @").add_operation (enumerator_17777.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 483)).add_operation (GGS_string (" should be equatable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 483)), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 483)) ;
            }
          }
        }
        break ;
      case GGS_structComparison::Enumeration::enum_comparable:
        {
          GGS_unifiedTypeDefinition var_associatedType_18936 = extensionGetter_definition (var_associatedTypeEntry_18021, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 486)) ;
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = var_associatedType_18936.readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-enum.galgas", 487)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 487)).operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 487)).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_17777.current (HERE).readProperty_typeName ().readProperty_location (), GGS_string ("the @").add_operation (enumerator_17777.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 488)).add_operation (GGS_string (" should be comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 488)), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 488)) ;
            }
          }
        }
        break ;
      }
      enumerator_17777.gotoNextObject () ;
    }
    {
    var_constantMap_17083.setter_insertKey (enumerator_17143.current (HERE).readProperty_name (), var_constantMap_17083.getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 492)), var_associatedTypeList_17664, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 492)) ;
    }
    var_enumConstantListForGeneration_17039.addAssignOperation (enumerator_17143.current (HERE).readProperty_name ().readProperty_string (), var_associatedTypeList_17664  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 493)) ;
    enumerator_17143.gotoNextObject () ;
  }
  const GGS_enumDeclarationAST temp_13 = this ;
  GGS_unifiedTypeMapEntry var_selfType_19393 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_13.readProperty_enumTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 496)) ;
  const GGS_enumDeclarationAST temp_14 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("enum ").add_operation (temp_14.readProperty_enumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 498)), GGS_enumTypeForGeneration::init_21__21__21_ (var_selfType_19393, var_enumConstantListForGeneration_17039, var_associatedValuesTypes_16934, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 497)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GGS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_hasAssociatedValues_20678 = GGS_bool (false) ;
  const GGS_enumTypeForGeneration temp_0 = this ;
  UpEnumerator_enumConstantListForGeneration enumerator_20731 (temp_0.readProperty_constantList ()) ;
  bool bool_1 = var_hasAssociatedValues_20678.operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 530)).isValidAndTrue () ;
  if (enumerator_20731.hasCurrentObject () && bool_1) {
    while (enumerator_20731.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_20678 = GGS_bool (ComparisonKind::greaterThan, enumerator_20731.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 531)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      enumerator_20731.gotoNextObject () ;
      if (enumerator_20731.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_20678.operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 530)).isValidAndTrue () ;
      }
    }
  }
  const GGS_enumTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_20866 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 533)) ;
  const GGS_enumTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, var_selfTypeDefinition_20866.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_20866.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas", 536)), temp_3.readProperty_constantList (), var_hasAssociatedValues_20678 COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 534))) ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_20866.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_20866.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas", 542)), var_selfTypeDefinition_20866.readProperty_isConcrete (), var_selfTypeDefinition_20866.readProperty_initializerMap (), var_selfTypeDefinition_20866.readProperty_classFunctionMap (), var_selfTypeDefinition_20866.readProperty_getterMap (), var_selfTypeDefinition_20866.readProperty_setterMap (), var_selfTypeDefinition_20866.readProperty_instanceMethodMap (), var_selfTypeDefinition_20866.readProperty_classMethodMap (), var_selfTypeDefinition_20866.readProperty_readSubscriptMap (), var_selfTypeDefinition_20866.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20866.readProperty_features (), var_selfTypeDefinition_20866.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_20866.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20866.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 540))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 540)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumTypeForGeneration temp_0 = this ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_22278 (temp_0.readProperty_associatedValuesTypes ()) ;
  while (enumerator_22278.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_22278.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 565)) ;
    enumerator_22278.gotoNextObject () ;
  }
  GGS_bool var_hasAssociatedValues_22373 = GGS_bool (false) ;
  const GGS_enumTypeForGeneration temp_1 = this ;
  UpEnumerator_enumConstantListForGeneration enumerator_22426 (temp_1.readProperty_constantList ()) ;
  bool bool_2 = var_hasAssociatedValues_22373.operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 568)).isValidAndTrue () ;
  if (enumerator_22426.hasCurrentObject () && bool_2) {
    while (enumerator_22426.hasCurrentObject () && bool_2) {
      var_hasAssociatedValues_22373 = GGS_bool (ComparisonKind::greaterThan, enumerator_22426.current (HERE).readProperty_associatedValueTypeList ().getter_count (SOURCE_FILE ("declaration-type-enum.galgas", 569)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      enumerator_22426.gotoNextObject () ;
      if (enumerator_22426.hasCurrentObject ()) {
        bool_2 = var_hasAssociatedValues_22373.operator_not (SOURCE_FILE ("declaration-type-enum.galgas", 568)).isValidAndTrue () ;
      }
    }
  }
  const GGS_enumTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 571)) ;
  const GGS_enumTypeForGeneration temp_4 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_22622 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 572)) ;
  const GGS_enumTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_22622.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_22622.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-enum.galgas", 575)), temp_5.readProperty_constantList (), var_hasAssociatedValues_22373, extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_22622.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 578)) COMMA_SOURCE_FILE ("declaration-type-enum.galgas", 573))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (Compiler * inCompiler,
                                                                          const GGS_string & /* in_TYPE_5F_NAME */,
                                                                          const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                          const GGS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                          const GGS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//   enum ") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Enumeration\n  public: enum class Enumeration {\n    invalid") ;
  GGS_uint index_525_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator_enumConstantListForGeneration enumerator_525 (in_CONSTANT_5F_LIST) ;
    while (enumerator_525.hasCurrentObject ()) {
      result.appendString (",\n    enum_") ;
      result.appendString (enumerator_525.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 13)).stringValue ()) ;
      enumerator_525.gotoNextObject () ;
      index_525_.increment () ;
    }
  }
  result.appendString ("\n  } ;\n  \n//--------------------------------- Private properties\n") ;
  const GalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  private: Enumeration mEnum ;\n\n//--------------------------------- Associated value extraction\n") ;
  GGS_uint index_936_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator_enumConstantListForGeneration enumerator_936 (in_CONSTANT_5F_LIST) ;
    while (enumerator_936.hasCurrentObject ()) {
      const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_936.current_associatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 28)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_") ;
        result.appendString (enumerator_936.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 29)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_1157_idx (0) ;
        if (enumerator_936.current_associatedValueTypeList (HERE).isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_1157 (enumerator_936.current_associatedValueTypeList (HERE)) ;
          while (enumerator_1157.hasCurrentObject ()) {
            result.appendString ("class GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_1157.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 31)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_1157.current_name (HERE).stringValue ()) ;
            enumerator_1157.gotoNextObject () ;
            if (enumerator_1157.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_1157_idx.increment () ;
          }
        }
        result.appendString (") const ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_936.gotoNextObject () ;
      index_936_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {\n    return Enumeration::invalid != mEnum ;\n  }\n\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override {\n    mEnum = Enumeration::invalid ;\n") ;
  const GalgasBool test_2 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("    mAssociatedValues.drop () ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n  public: inline Enumeration enumValue (void) const {\n    return mEnum ;\n  }\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (Compiler * inCompiler,
                                                                                      const GGS_string & in_TYPE_5F_NAME,
                                                                                      const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                                      const GGS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES,
                                                                                      const GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  Enum ") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\n") ;
  const GalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("mAssociatedValues (),\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("mEnum (Enumeration::invalid) {\n}\n\n\n") ;
  GGS_uint index_445_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator_enumConstantListForGeneration enumerator_445 (in_CONSTANT_5F_LIST) ;
    while (enumerator_445.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::class_func_") ;
      result.appendString (enumerator_445.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 17)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_445.current_associatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 18)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("UNUSED_LOCATION_ARGS") ;
        } break ;
      case GalgasBool::boolFalse : {
        GGS_uint index_803_idx (0) ;
        if (enumerator_445.current_associatedValueTypeList (HERE).isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_803 (enumerator_445.current_associatedValueTypeList (HERE)) ;
          while (enumerator_803.hasCurrentObject ()) {
            result.appendString ("const GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_803.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue ()) ;
            result.appendString (" & inAssociatedValue") ;
            result.appendString (index_803_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue ()) ;
            enumerator_803.gotoNextObject () ;
            if (enumerator_803.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_803_idx.increment () ;
          }
        }
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_UNUSED_LOCATION_ARGS") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (") {\n  GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" result ;\n  result.mEnum = Enumeration::enum_") ;
      result.appendString (enumerator_445.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" ;\n") ;
      const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_445.current_associatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 30)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("  AC_GALGAS_root * p = nullptr ;\n  macroMyNew (p, GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_445.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 32)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 32)).stringValue ()) ;
        result.appendString (" (") ;
        GGS_uint index_1362_idx (0) ;
        if (enumerator_445.current_associatedValueTypeList (HERE).isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_1362 (enumerator_445.current_associatedValueTypeList (HERE)) ;
          while (enumerator_1362.hasCurrentObject ()) {
            result.appendString ("inAssociatedValue") ;
            result.appendString (index_1362_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 34)).stringValue ()) ;
            enumerator_1362.gotoNextObject () ;
            if (enumerator_1362.hasCurrentObject ()) {
              result.appendString (", ") ;
            }
            index_1362_idx.increment () ;
          }
        }
        result.appendString (")) ;\n  EnumerationAssociatedValues * eav = nullptr ;\n  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;\n  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues\n  macroDetachSharedObject (eav) ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("  return result ;\n}\n\n") ;
      enumerator_445.gotoNextObject () ;
      index_445_.increment () ;
    }
  }
  GGS_uint index_1821_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator_enumConstantListForGeneration enumerator_1821 (in_CONSTANT_5F_LIST) ;
    while (enumerator_1821.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_1821.current_associatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 48)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::method_extract") ;
        result.appendString (enumerator_1821.current_name (HERE).getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 50)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 50)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_2157_ (0) ;
        if (enumerator_1821.current_associatedValueTypeList (HERE).isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_2157 (enumerator_1821.current_associatedValueTypeList (HERE)) ;
          while (enumerator_2157.hasCurrentObject ()) {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_2157.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 52)).stringValue ()) ;
            result.appendString (" & outAssociatedValue_") ;
            result.appendString (enumerator_2157.current_name (HERE).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            enumerator_2157.gotoNextObject () ;
            index_2157_.increment () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("Compiler * inCompiler\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (mEnum != Enumeration::enum_") ;
        result.appendString (enumerator_1821.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 56)).stringValue ()) ;
        result.appendString (") {\n") ;
        GGS_uint index_2462_idx (0) ;
        if (enumerator_1821.current_associatedValueTypeList (HERE).isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_2462 (enumerator_1821.current_associatedValueTypeList (HERE)) ;
          while (enumerator_2462.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue_") ;
            result.appendString (enumerator_2462.current_name (HERE).stringValue ()) ;
            result.appendString (".drop () ;\n") ;
            enumerator_2462.gotoNextObject () ;
            index_2462_idx.increment () ;
          }
        }
        result.appendString ("    String s ;\n    s.appendCString (\"method @") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString (".") ;
        result.appendString (enumerator_1821.current_name (HERE).stringValue ()) ;
        result.appendString (" invoked with an invalid enum value\") ;\n    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n  }else{\n    const auto ptr = (GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_1821.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 64)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 64)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n") ;
        GGS_uint index_2975_idx (0) ;
        if (enumerator_1821.current_associatedValueTypeList (HERE).isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_2975 (enumerator_1821.current_associatedValueTypeList (HERE)) ;
          while (enumerator_2975.hasCurrentObject ()) {
            result.appendString ("    outAssociatedValue_") ;
            result.appendString (enumerator_2975.current_name (HERE).stringValue ()) ;
            result.appendString (" = ptr->mProperty_") ;
            result.appendString (enumerator_2975.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).stringValue ()) ;
            result.appendString (" ;\n") ;
            enumerator_2975.gotoNextObject () ;
            index_2975_idx.increment () ;
          }
        }
        result.appendString ("  }\n}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1821.gotoNextObject () ;
      index_1821_.increment () ;
    }
  }
  GGS_uint index_3180_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator_enumConstantListForGeneration enumerator_3180 (in_CONSTANT_5F_LIST) ;
    while (enumerator_3180.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
      const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_3180.current_associatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3180.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).stringValue ()) ;
        result.appendString ("_3F_ GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::getter_get") ;
        result.appendString (enumerator_3180.current_name (HERE).getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 76)).stringValue ()) ;
        result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3180.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 77)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 77)).stringValue ()) ;
        result.appendString ("_3F_ result ;\n  if (mEnum == Enumeration::enum_") ;
        result.appendString (enumerator_3180.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (") {\n    const auto ptr = (const GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3180.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n    result = GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3180.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 80)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 80)).stringValue ()) ;
        result.appendString (" (*ptr) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::getAssociatedValuesFor_") ;
        result.appendString (enumerator_3180.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 85)).stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        GGS_uint index_4425_idx (0) ;
        if (enumerator_3180.current_associatedValueTypeList (HERE).isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_4425 (enumerator_3180.current_associatedValueTypeList (HERE)) ;
          while (enumerator_4425.hasCurrentObject ()) {
            result.appendString ("GGS_") ;
            result.appendString (extensionGetter_identifierRepresentation (enumerator_4425.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 87)).stringValue ()) ;
            result.appendString (" & out_") ;
            result.appendString (enumerator_4425.current_name (HERE).stringValue ()) ;
            enumerator_4425.gotoNextObject () ;
            if (enumerator_4425.hasCurrentObject ()) {
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_4425_idx.increment () ;
          }
        }
        result.appendString (") const {\n  const auto ptr = (const GGS_") ;
        result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_3180.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 91)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 91)).stringValue ()) ;
        result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n") ;
        GGS_uint index_4761_ (0) ;
        if (enumerator_3180.current_associatedValueTypeList (HERE).isValid ()) {
          UpEnumerator_associatedValueDescriptorList enumerator_4761 (enumerator_3180.current_associatedValueTypeList (HERE)) ;
          while (enumerator_4761.hasCurrentObject ()) {
            result.appendString ("  out_") ;
            result.appendString (enumerator_4761.current_name (HERE).stringValue ()) ;
            result.appendString (" = ptr->mProperty_") ;
            result.appendString (enumerator_4761.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 93)).stringValue ()) ;
            result.appendString (" ;\n") ;
            enumerator_4761.gotoNextObject () ;
            index_4761_.increment () ;
          }
        }
        result.appendString ("}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3180.gotoNextObject () ;
      index_3180_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nstatic const char * gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [") ;
  result.appendString (in_CONSTANT_5F_LIST.getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 101)).stringValue ()) ;
  result.appendString ("] = {\n  \"(not built)\"") ;
  GGS_uint index_5162_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator_enumConstantListForGeneration enumerator_5162 (in_CONSTANT_5F_LIST) ;
    while (enumerator_5162.hasCurrentObject ()) {
      result.appendString (",\n  ") ;
      result.appendString (enumerator_5162.current_name (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 104)).stringValue ()) ;
      enumerator_5162.gotoNextObject () ;
      index_5162_.increment () ;
    }
  }
  result.appendString ("\n} ;\n\n") ;
  GGS_uint index_5303_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    UpEnumerator_enumConstantListForGeneration enumerator_5303 (in_CONSTANT_5F_LIST) ;
    while (enumerator_5303.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_is") ;
      result.appendString (enumerator_5303.current_name (HERE).getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 113)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_") ;
      result.appendString (enumerator_5303.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" == mEnum) ;\n}\n\n") ;
      enumerator_5303.gotoNextObject () ;
      index_5303_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t ") ;
  const GalgasBool test_5 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("inIndentation") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("/* inIndentation */") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") const {\n  ioString.appendCString (\"<enum @") ;
  result.appendString (in_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (": \") ;\n  ioString.appendCString (gEnumNameArrayFor_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" [size_t (mEnum)]) ;\n") ;
  const GalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("  mAssociatedValues.description (ioString, inIndentation) ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  ioString.appendCString (\">\") ;\n}\n\n") ;
  const GalgasBool test_7 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (mEnum < inOperand.mEnum) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (mEnum > inOperand.mEnum) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n") ;
    const GalgasBool test_8 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
    switch (test_8) {
    case GalgasBool::boolTrue : {
      result.appendString ("      switch (mEnum) {\n") ;
      GGS_uint index_6959_ (0) ;
      if (in_CONSTANT_5F_LIST.isValid ()) {
        UpEnumerator_enumConstantListForGeneration enumerator_6959 (in_CONSTANT_5F_LIST) ;
        while (enumerator_6959.hasCurrentObject ()) {
          const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, enumerator_6959.current_associatedValueTypeList (HERE).getter_count (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 152)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          switch (test_9) {
          case GalgasBool::boolTrue : {
            result.appendString ("      case Enumeration::enum_") ;
            result.appendString (enumerator_6959.current_name (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 153)).stringValue ()) ;
            result.appendString (": {\n        const auto left = (GGS_") ;
            result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_6959.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).stringValue ()) ;
            result.appendString (" *) mAssociatedValues.associatedValuesPointer () ;\n        const auto right = (GGS_") ;
            result.appendString (function_makeEmbeddedTypeName (in_TYPE_5F_NAME, enumerator_6959.current_name (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue ()) ;
            result.appendString (" *) inOperand.mAssociatedValues.associatedValuesPointer () ;\n        result = left->objectCompare (*right) ;\n        }break ;\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_6959.gotoNextObject () ;
          index_6959_.increment () ;
        }
      }
      result.appendString ("      default:\n        result = ComparisonResult::operandEqual ;\n        break ;\n      }\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      result.appendString ("      result = ComparisonResult::operandEqual ;\n") ;
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("    }\n  }\n  return result ;\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                    GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                    GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                    GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                    GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                    GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationAST temp_0 = this ;
  const GGS_externTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_key_14139 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 368)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_14139, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 369)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_externTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_externTypeDeclarationAST temp_0 = this ;
  result_result = GGS_string ("extern @").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 375)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                              const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                              const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                              const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                              const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_getterMap var_getterMap_15215 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_15215, inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 389)) ;
  }
  GGS_setterMap var_setterMap_15297 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_15340 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_15409 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GGS_externTypeDeclarationAST temp_0 = this ;
  UpEnumerator_externTypeConstructorList enumerator_15458 (temp_0.readProperty_externTypeInitializerList ()) ;
  while (enumerator_15458.hasCurrentObject ()) {
    GGS_functionSignature var_arguments_15610 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_typeNameFormalParameterNameList enumerator_15661 (enumerator_15458.current (HERE).readProperty_mParameterList ()) ;
    while (enumerator_15661.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentTypeEntry_15751 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_15661.current (HERE).readProperty_mFormalParameterTypeName (), var_argumentTypeEntry_15751, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 400)) ;
      }
      var_arguments_15610.addAssignOperation (enumerator_15661.current (HERE).readProperty_mFormalSelector (), var_argumentTypeEntry_15751, enumerator_15661.current (HERE).readProperty_mFormalParameterName ().readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 401)) ;
      enumerator_15661.gotoNextObject () ;
    }
    const GGS_externTypeDeclarationAST temp_1 = this ;
    GGS_lstring var_initializerName_15912 = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (enumerator_15458.current (HERE).readProperty_mParameterList (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 404)), temp_1.readProperty_mExternTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    var_initializerMap_15409.setter_insertKey (var_initializerName_15912, var_arguments_15610, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 405)) ;
    }
    enumerator_15458.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_2 = this ;
  UpEnumerator_externTypeGetterList enumerator_16138 (temp_2.readProperty_mExternTypeGetterList ()) ;
  while (enumerator_16138.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_returnedTypeEntry_16238 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16138.current_mResultTypeName (HERE), var_returnedTypeEntry_16238, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 409)) ;
    }
    GGS_functionSignature var_arguments_16296 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_typeNameFormalParameterNameList enumerator_16364 (enumerator_16138.current_mParameterList (HERE)) ;
    while (enumerator_16364.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentTypeEntry_16469 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16364.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_16469, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 413)) ;
      }
      var_arguments_16296.addAssignOperation (enumerator_16364.current_mFormalSelector (HERE), var_argumentTypeEntry_16469, enumerator_16364.current_mFormalParameterName (HERE).readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 414)) ;
      enumerator_16364.gotoNextObject () ;
    }
    {
    var_getterMap_15215.setter_insertKey (enumerator_16138.current_mGetterName (HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas", 419)), var_arguments_16296, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 421)), GGS_bool (true), var_returnedTypeEntry_16238, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas", 424)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 417)) ;
    }
    enumerator_16138.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_3 = this ;
  UpEnumerator_externTypeSetterList enumerator_16966 (temp_3.readProperty_mExternTypeSetterList ()) ;
  while (enumerator_16966.hasCurrentObject ()) {
    GGS_formalParameterSignature var_routineSignature_17057 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalParameterListAST enumerator_17178 (enumerator_16966.current_mFormalParameterList (HERE)) ;
    while (enumerator_17178.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_17310 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17178.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_17310, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 432)) ;
      }
      var_routineSignature_17057.addAssignOperation (enumerator_17178.current_mFormalSelector (HERE), var_parameterTypeIndex_17310, enumerator_17178.current_mFormalArgumentPassingMode (HERE), enumerator_17178.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 436)) ;
      enumerator_17178.gotoNextObject () ;
    }
    {
    var_setterMap_15297.setter_insertKey (enumerator_16966.current_mSetterName (HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas", 441)), var_routineSignature_17057, GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas", 444)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 439)) ;
    }
    enumerator_16966.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_4 = this ;
  UpEnumerator_externTypeMethodList enumerator_17787 (temp_4.readProperty_mExternTypeMethodList ()) ;
  while (enumerator_17787.hasCurrentObject ()) {
    GGS_formalParameterSignature var_routineSignature_17852 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalParameterListAST enumerator_17998 (enumerator_17787.current_mFormalParameterList (HERE)) ;
    while (enumerator_17998.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_18109 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_17998.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_18109, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 452)) ;
      }
      var_routineSignature_17852.addAssignOperation (enumerator_17998.current_mFormalSelector (HERE), var_parameterTypeIndex_18109, enumerator_17998.current_mFormalArgumentPassingMode (HERE), enumerator_17998.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 456)) ;
      enumerator_17998.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_15340.setter_insertKey (enumerator_17787.current_mMethodName (HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-extern.galgas", 461)), var_routineSignature_17852, enumerator_17787.current_mDeclarationLocation (HERE), GGS_bool (true), GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("declaration-type-extern.galgas", 465)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 459)) ;
    }
    enumerator_17787.gotoNextObject () ;
  }
  GGS_typeFeatures var_features_18574 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  {
  const GGS_externTypeDeclarationAST temp_5 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_5.readProperty_mExternTypeName (), var_features_18574, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 470)) ;
  }
  const GGS_externTypeDeclarationAST temp_6 = this ;
  const GGS_externTypeDeclarationAST temp_7 = this ;
  const GGS_externTypeDeclarationAST temp_8 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_18826 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_6.readProperty_mExternTypeName (), temp_7.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas", 483)), GGS_typeKindEnum::class_func_externType (SOURCE_FILE ("declaration-type-extern.galgas", 484)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_15409, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_15215, var_setterMap_15297, var_instanceMethodMap_15340, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas", 495)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_18574, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-extern.galgas", 501)), GGS_string ("externtype-").add_operation (temp_8.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-extern.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 502)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-extern.galgas", 503)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_18826.readProperty_typeName (), var_typeDefinition_18826, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 505)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@externTypeDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_string /* constinArgument_inProductDirectory */,
                                                             const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                             GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_20698 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 526)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_20698, var_nameForUsefulness_20698, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 527)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externTypeDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_20698  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 529)) ;
    }
  }
  const GGS_externTypeDeclarationAST temp_3 = this ;
  UpEnumerator_externTypeConstructorList enumerator_20978 (temp_3.readProperty_externTypeInitializerList ()) ;
  while (enumerator_20978.hasCurrentObject ()) {
    const GGS_externTypeDeclarationAST temp_4 = this ;
    GGS_lstring var_initializerNameForUsefulness_21015 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mExternTypeName (), extensionGetter_initializerSignature (enumerator_20978.current (HERE).readProperty_mParameterList (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 533)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_21015, var_initializerNameForUsefulness_21015, inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 537)) ;
    }
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_21015, var_nameForUsefulness_20698 COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 538)) ;
    }
    enumerator_20978.gotoNextObject () ;
  }
  const GGS_externTypeDeclarationAST temp_5 = this ;
  const GGS_externTypeDeclarationAST temp_6 = this ;
  const GGS_externTypeDeclarationAST temp_7 = this ;
  const GGS_externTypeDeclarationAST temp_8 = this ;
  const GGS_externTypeDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("extern type ").add_operation (temp_5.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 542)), GGS_externTypeDeclarationForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_6.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 544)), temp_7.readProperty_mExternTypeName ().readProperty_string (), temp_8.readProperty_mCppPreDeclarationCode (), temp_9.readProperty_mCppClassCode (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 541)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GGS_string & outArgument_outHeader,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externTypeDeclarationForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_22357 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 566)) ;
  const GGS_externTypeDeclarationForGeneration temp_1 = this ;
  const GGS_externTypeDeclarationForGeneration temp_2 = this ;
  const GGS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, var_selfTypeDefinition_22357.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 569)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 567))) ;
  const GGS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_22357.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 575)), var_selfTypeDefinition_22357.readProperty_isConcrete (), var_selfTypeDefinition_22357.readProperty_initializerMap (), var_selfTypeDefinition_22357.readProperty_classFunctionMap (), var_selfTypeDefinition_22357.readProperty_getterMap (), var_selfTypeDefinition_22357.readProperty_setterMap (), var_selfTypeDefinition_22357.readProperty_instanceMethodMap (), var_selfTypeDefinition_22357.readProperty_classMethodMap (), var_selfTypeDefinition_22357.readProperty_readSubscriptMap (), var_selfTypeDefinition_22357.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_22357.readProperty_features (), var_selfTypeDefinition_22357.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_22357.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_22357.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 573))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas", 573)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                               GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                               GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationAST temp_0 = this ;
  const GGS_graphDeclarationAST temp_1 = this ;
  GGS_lstring var_key_4728 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 118)), temp_1.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4728, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 119)) ;
  }
  {
  const GGS_graphDeclarationAST temp_3 = this ;
  const GGS_graphDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4728, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 122)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 120)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@graphDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                         const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                         const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeEntry_5765 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringTypeEntry_5765, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 137)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringTypeEntry_5900 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("lstring"), var_lstringTypeEntry_5900, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 142)) ;
  }
  GGS_unifiedTypeMapEntry var_graphTypeEntry_6034 ;
  {
  const GGS_graphDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mGraphTypeName (), var_graphTypeEntry_6034, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 147)) ;
  }
  GGS_unifiedTypeMapEntry var_associatedListTypeEntry_6185 ;
  {
  const GGS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mAssociatedListTypeName (), var_associatedListTypeEntry_6185, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 152)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringListTypeEntry_6337 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("lstringlist"), var_lstringListTypeEntry_6337, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 157)) ;
  }
  GGS_getterMap var_getterMap_6432 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_6432, inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 162)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_6470 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_6512 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_6555 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_formalParameterList_6650 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6650.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 169)), var_associatedListTypeEntry_6185, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas", 171)), GGS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 168)) ;
  var_formalParameterList_6650.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 174)), var_lstringListTypeEntry_6337, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas", 176)), GGS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 173)) ;
  var_formalParameterList_6650.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 179)), var_associatedListTypeEntry_6185, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas", 181)), GGS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 178)) ;
  var_formalParameterList_6650.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 184)), var_lstringListTypeEntry_6337, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas", 186)), GGS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 183)) ;
  {
  var_instanceMethodMap_6555.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("topologicalSort"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 189)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 190)), var_formalParameterList_6650, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 192)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas", 194)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 188)) ;
  }
  {
  var_instanceMethodMap_6555.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("depthFirstTopologicalSort"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 198)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 199)), var_formalParameterList_6650, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 201)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas", 203)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 197)) ;
  }
  var_formalParameterList_6650 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6650.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 209)), var_associatedListTypeEntry_6185, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas", 211)), GGS_string ("outInformationList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 208)) ;
  var_formalParameterList_6650.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 214)), var_lstringListTypeEntry_6337, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-graph.galgas", 216)), GGS_string ("outLKeyList")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 213)) ;
  {
  var_instanceMethodMap_6555.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("circularities"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 219)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 220)), var_formalParameterList_6650, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 222)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas", 224)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 218)) ;
  }
  {
  var_instanceMethodMap_6555.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nodesWithNoSuccessor"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 228)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 229)), var_formalParameterList_6650, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 231)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas", 233)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 227)) ;
  }
  {
  var_instanceMethodMap_6555.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("nodesWithNoPredecessor"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 237)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 238)), var_formalParameterList_6650, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 240)), GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas", 242)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 236)) ;
  }
  {
  const GGS_graphDeclarationAST temp_2 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6432, ioArgument_ioTypeMap, GGS_string ("nodeList"), GGS_string::makeEmptyString (), temp_2.readProperty_mAssociatedListTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 246)) ;
  }
  {
  const GGS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6432, ioArgument_ioTypeMap, GGS_string ("reversedGraph"), GGS_string::makeEmptyString (), temp_3.readProperty_mGraphTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 255)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6432, ioArgument_ioTypeMap, GGS_string ("undefinedNodeCount"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 264)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6432, ioArgument_ioTypeMap, GGS_string ("undefinedNodeKeyList"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 273)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6432, ioArgument_ioTypeMap, GGS_string ("undefinedNodeReferenceList"), GGS_string::makeEmptyString (), GGS_string ("lstringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 282)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6432, ioArgument_ioTypeMap, GGS_string ("graphviz"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 291)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6432, ioArgument_ioTypeMap, GGS_string ("isNodeDefined"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 300)) ;
  }
  {
  routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6432, ioArgument_ioTypeMap, GGS_string ("locationForKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 310)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6432, ioArgument_ioTypeMap, GGS_string ("keyList"), GGS_string::makeEmptyString (), GGS_string ("stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 320)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6432, ioArgument_ioTypeMap, GGS_string ("lkeyList"), GGS_string::makeEmptyString (), GGS_string ("lstringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 329)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6432, ioArgument_ioTypeMap, GGS_string ("edges"), GGS_string::makeEmptyString (), GGS_string ("2stringlist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 338)) ;
  }
  {
  const GGS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6432, ioArgument_ioTypeMap, GGS_string ("subgraphFromNodes"), GGS_string::makeEmptyString (), GGS_string ("lstringlist"), GGS_string ("inStartNodeLStringList"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_string ("inNodesToExclude"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 347)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_6432, ioArgument_ioTypeMap, GGS_string ("accessibleNodesFrom"), GGS_string::makeEmptyString (), GGS_string ("lstringlist"), GGS_string ("inStartNodeStringList"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_string ("inNodesToExclude"), GGS_string ("lstringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 361)) ;
  }
  {
  var_classFunctionMap_6470.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("emptyGraph"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 372)), inCompiler COMMA_HERE), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_graphTypeEntry_6034, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 371)) ;
  }
  var_formalParameterList_6650 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6650.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 380)), var_lstringTypeEntry_5900, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas", 382)), GGS_string ("inLKey")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 379)) ;
  UpEnumerator_functionSignature enumerator_12999 (extensionGetter_definition (var_associatedListTypeEntry_6185, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 384)).readProperty_addAssignOperatorArguments ()) ;
  while (enumerator_12999.hasCurrentObject ()) {
    var_formalParameterList_6650.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 386)), enumerator_12999.current (HERE).readProperty_mFormalArgumentType (), GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas", 388)), enumerator_12999.current (HERE).readProperty_mFormalArgumentName ()  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 385)) ;
    enumerator_12999.gotoNextObject () ;
  }
  const GGS_graphDeclarationAST temp_5 = this ;
  UpEnumerator_graphInsertModifierList enumerator_13219 (temp_5.readProperty_mInsertModifierList ()) ;
  while (enumerator_13219.hasCurrentObject ()) {
    {
    var_setterMap_6512.setter_insertOrReplace (enumerator_13219.current_mInsertModifierName (HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 394)), var_formalParameterList_6650, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-graph.galgas", 397)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 392)) ;
    }
    enumerator_13219.gotoNextObject () ;
  }
  {
  var_setterMap_6512.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeEdgesToDominators"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 403)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 404)), GGS_formalParameterSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas", 407)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 402)) ;
  }
  var_formalParameterList_6650 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6650.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 412)), var_stringTypeEntry_5765, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas", 412)), GGS_string ("inNodeName")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 412)) ;
  {
  var_setterMap_6512.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("removeEdgesToNode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 414)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 415)), var_formalParameterList_6650, GGS_bool (true), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas", 418)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 413)) ;
  }
  var_formalParameterList_6650 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6650.addAssignOperation (GGS_string ("from").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 423)), var_lstringTypeEntry_5900, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas", 423)), GGS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 423)) ;
  var_formalParameterList_6650.addAssignOperation (GGS_string ("to").getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 424)), var_lstringTypeEntry_5900, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas", 424)), GGS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 424)) ;
  {
  var_setterMap_6512.setter_insertKey (GGS_string ("addEdge").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 426)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 427)), var_formalParameterList_6650, GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas", 430)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 425)) ;
  }
  var_formalParameterList_6650 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_formalParameterList_6650.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-graph.galgas", 436)), var_lstringTypeEntry_5900, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-graph.galgas", 438)), GGS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 435)) ;
  {
  var_setterMap_6512.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("noteNode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 441)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-graph.galgas", 442)), var_formalParameterList_6650, GGS_bool (false), GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("declaration-type-graph.galgas", 445)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 440)) ;
  }
  GGS_initializerMap var_initializerMap_15028 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorPropertyTypeList_15076 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_graphDeclarationAST temp_6 = this ;
  var_initializerMap_15028.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_15076, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 452)), temp_6.readProperty_mGraphTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_15076, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 451)) ;
  }
  {
  const GGS_graphDeclarationAST temp_7 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_7.readProperty_mGraphTypeName (), GGS_bool (false), var_initializerMap_15028, var_getterMap_6432, var_setterMap_6512, var_instanceMethodMap_6555, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 456)) ;
  }
  GGS_typeFeatures var_features_15716 = GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-graph.galgas", 471)) ;
  {
  const GGS_graphDeclarationAST temp_8 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_8.readProperty_mGraphTypeName (), var_features_15716, GGS_bool (false), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 472)) ;
  }
  const GGS_graphDeclarationAST temp_9 = this ;
  const GGS_graphDeclarationAST temp_10 = this ;
  const GGS_graphDeclarationAST temp_11 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_15993 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_9.readProperty_mGraphTypeName (), temp_10.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas", 485)), GGS_typeKindEnum::class_func_graphType (SOURCE_FILE ("declaration-type-graph.galgas", 486)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_15028, var_classFunctionMap_6470, var_getterMap_6432, var_setterMap_6512, var_instanceMethodMap_6555, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas", 497)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_15716, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-graph.galgas", 503)), GGS_string ("graph-").add_operation (temp_11.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-graph.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 504)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-graph.galgas", 505)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_15993.readProperty_typeName (), var_typeDefinition_15993, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 507)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@graphDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GGS_string /* constinArgument_inProductDirectory */,
                                                        const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                        const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_17830 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 521)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17830, var_nameForUsefulness_17830, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 522)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_graphDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_17830  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 524)) ;
    }
  }
  const GGS_graphDeclarationAST temp_3 = this ;
  GGS_lstring var_associatedTypeNameForUsefulness_18080 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 526)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_17830, var_associatedTypeNameForUsefulness_18080 COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 527)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_graphDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_associatedTypeNameForUsefulness_18080  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 529)) ;
    }
  }
  const GGS_graphDeclarationAST temp_6 = this ;
  GGS_lstring var_initializerNameForUsefulness_18458 = function_initializerNameForUsefulEntitiesGraph (temp_6.readProperty_mGraphTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 532)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_18458, var_initializerNameForUsefulness_18458, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 536)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_graphDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_18458  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 538)) ;
    }
  }
  const GGS_graphDeclarationAST temp_9 = this ;
  GGS_unifiedTypeMapEntry var_graphTypeEntry_18841 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_9.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 541)) ;
  const GGS_graphDeclarationAST temp_10 = this ;
  GGS_unifiedTypeMapEntry var_associatedListTypeEntry_18919 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 542)) ;
  const GGS_graphDeclarationAST temp_11 = this ;
  GGS_unifiedTypeMapEntry var_associatedListElementTypeEntry_19015 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_11.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 543)) ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_associatedListTypeEntry_18919, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 546)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-graph.galgas", 546)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_graphDeclarationAST temp_13 = this ;
      const GGS_graphDeclarationAST temp_14 = this ;
      GenericArray <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mAssociatedListTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_14.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 548)).add_operation (GGS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 548)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 547)) ;
    }
  }
  GGS_stringset temp_16 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 551)) ;
  temp_16.plusPlusAssignOperation (GGS_string ("noteNode")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 551)) ;
  temp_16.plusPlusAssignOperation (GGS_string ("addArc")  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 551)) ;
  GGS_stringset var_reservedModifierNames_19400 = temp_16 ;
  const GGS_graphDeclarationAST temp_17 = this ;
  UpEnumerator_graphInsertModifierList enumerator_19477 (temp_17.readProperty_mInsertModifierList ()) ;
  while (enumerator_19477.hasCurrentObject ()) {
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = var_reservedModifierNames_19400.getter_hasKey (enumerator_19477.current_mInsertModifierName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 553)).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_19477.current_mInsertModifierName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_19477.current_mInsertModifierName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 555)).add_operation (GGS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 555)), fixItArray19  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 554)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_19477.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 557)) ;
    }
    enumerator_19477.gotoNextObject () ;
  }
  const GGS_graphDeclarationAST temp_20 = this ;
  const GGS_graphDeclarationAST temp_21 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("graph ").add_operation (temp_20.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 561)), GGS_graphDeclarationForGeneration::init_21__21__21__21_ (var_graphTypeEntry_18841, var_associatedListTypeEntry_18919, var_associatedListElementTypeEntry_19015, temp_21.readProperty_mInsertModifierList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 560)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                       GGS_string & outArgument_outHeader,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_20917 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 587)) ;
  const GGS_graphDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, var_selfTypeDefinition_20917.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 590)) COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 588))) ;
  const GGS_graphDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_20917.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 594)), var_selfTypeDefinition_20917.readProperty_isConcrete (), var_selfTypeDefinition_20917.readProperty_initializerMap (), var_selfTypeDefinition_20917.readProperty_classFunctionMap (), var_selfTypeDefinition_20917.readProperty_getterMap (), var_selfTypeDefinition_20917.readProperty_setterMap (), var_selfTypeDefinition_20917.readProperty_instanceMethodMap (), var_selfTypeDefinition_20917.readProperty_classMethodMap (), var_selfTypeDefinition_20917.readProperty_readSubscriptMap (), var_selfTypeDefinition_20917.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_20917.readProperty_features (), var_selfTypeDefinition_20917.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_20917.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_20917.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 592))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 592)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_string & outArgument_outImplementation,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_graphDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 616)) ;
  const GGS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 617)) ;
  const GGS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedListElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 618)) ;
  const GGS_graphDeclarationForGeneration temp_3 = this ;
  const GGS_graphDeclarationForGeneration temp_4 = this ;
  const GGS_graphDeclarationForGeneration temp_5 = this ;
  const GGS_graphDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 621)), temp_5.readProperty_mAssociatedListTypeEntry (), temp_6.readProperty_mInsertModifierList () COMMA_SOURCE_FILE ("declaration-type-graph.galgas", 619))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@listDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_listDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_listDeclarationAST temp_0 = this ;
  result_result = GGS_string ("list @").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 134)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@listDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listDeclarationAST temp_0 = this ;
  const GGS_listDeclarationAST temp_1 = this ;
  GGS_lstring var_key_5508 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 147)), temp_1.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_listDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5508, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 148)) ;
  }
  const GGS_listDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_5662 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_5662.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_5662.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 150)), enumerator_5662.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-list.galgas", 150)) ;
    }
    enumerator_5662.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@listDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                        const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                        const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typedPropertyList var_typedAttributeList_6619 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  const GGS_listDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6717 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_6717.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = enumerator_6717.current_initialization (HERE).getter_isSome (SOURCE_FILE ("declaration-type-list.galgas", 170)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_6717.current_name (HERE).readProperty_location (), GGS_string ("property initialization is not handled for a list"), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 171)) ;
      }
    }
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_6932 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6717.current_typeName (HERE), var_attributeTypeIndex_6932, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 173)) ;
    }
    var_typedAttributeList_6619.addAssignOperation (var_attributeTypeIndex_6932, enumerator_6717.current_name (HERE), enumerator_6717.current_initialization (HERE), GGS_bool (true), enumerator_6717.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 174)) ;
    enumerator_6717.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_uintType_7148 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("uint"), var_uintType_7148, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 177)) ;
  }
  GGS_unifiedTypeMapEntry var_listTypeIndex_7230 ;
  {
  const GGS_listDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_mListTypeName (), var_listTypeIndex_7230, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 179)) ;
  }
  GGS_unifiedTypeMapEntry var_listElementType_7381 ;
  {
  const GGS_listDeclarationAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_4.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 182)), var_listElementType_7381, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 181)) ;
  }
  GGS_enumerationDescriptorList var_enumerationDescriptor_7461 = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorAttributeTypeList_7514 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterOutputFormalArgumentList_7581 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterInputFormalArgumentList_7650 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  UpEnumerator_typedPropertyList enumerator_7730 (var_typedAttributeList_6619) ;
  while (enumerator_7730.hasCurrentObject ()) {
    GGS_string temp_5 ;
    const GalgasBool test_6 = enumerator_7730.current_hasSelector (HERE).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      temp_5 = enumerator_7730.current_name (HERE).readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_6) {
      temp_5 = GGS_string::makeEmptyString () ;
    }
    GGS_string var_selector_7777 = temp_5 ;
    var_enumerationDescriptor_7461.addAssignOperation (enumerator_7730.current_typeEntry (HERE), enumerator_7730.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 192)) ;
    var_constructorAttributeTypeList_7514.addAssignOperation (var_selector_7777.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 194)), enumerator_7730.current_typeEntry (HERE), enumerator_7730.current_name (HERE).readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 193)) ;
    var_setterOutputFormalArgumentList_7581.addAssignOperation (var_selector_7777.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 199)), enumerator_7730.current_typeEntry (HERE), GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-list.galgas", 201)), enumerator_7730.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 198)) ;
    var_setterInputFormalArgumentList_7650.addAssignOperation (var_selector_7777.getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 204)), enumerator_7730.current_typeEntry (HERE), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas", 206)), enumerator_7730.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 203)) ;
    enumerator_7730.gotoNextObject () ;
  }
  GGS_classFunctionMap var_classFunctionMap_8375 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_listDeclarationAST temp_7 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_8375, ioArgument_ioTypeMap, GGS_string ("emptyList"), temp_7.readProperty_mListTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 211)) ;
  }
  {
  var_classFunctionMap_8375.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("listWithValue"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 219)), inCompiler COMMA_HERE), var_constructorAttributeTypeList_7514, GGS_bool (false), var_listTypeIndex_7230, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 218)) ;
  }
  GGS_getterMap var_getterMap_8793 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_8793, inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 225)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8793, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("length"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 226)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8793, ioArgument_ioTypeMap, GGS_string ("range"), GGS_string::makeEmptyString (), GGS_string ("range"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 234)) ;
  }
  {
  const GGS_listDeclarationAST temp_8 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8793, ioArgument_ioTypeMap, GGS_string ("subListFromIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), temp_8.readProperty_mListTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 242)) ;
  }
  {
  const GGS_listDeclarationAST temp_9 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8793, ioArgument_ioTypeMap, GGS_string ("subListToIndex"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_string ("inIndex"), temp_9.readProperty_mListTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 250)) ;
  }
  {
  const GGS_listDeclarationAST temp_10 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_8793, ioArgument_ioTypeMap, GGS_string ("subListWithRange"), GGS_string::makeEmptyString (), GGS_string ("range"), GGS_string ("inRange"), temp_10.readProperty_mListTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 258)) ;
  }
  UpEnumerator_typedPropertyList enumerator_9926 (var_typedAttributeList_6619) ;
  while (enumerator_9926.hasCurrentObject ()) {
    {
    GGS_functionSignature temp_11 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 270)) ;
    temp_11.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 270)), var_uintType_7148, GGS_string ("inIndex"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 270)) ;
    var_getterMap_8793.setter_insertOrReplace (GGS_lstring::init_21__21_ (enumerator_9926.current_name (HERE).readProperty_string ().add_operation (GGS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 268)), enumerator_9926.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 269)), temp_11, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 271)), GGS_bool (true), enumerator_9926.current_typeEntry (HERE), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 274)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 267)) ;
    }
    enumerator_9926.gotoNextObject () ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_10407 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_10407.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("first"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 281)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 282)), var_setterOutputFormalArgumentList_7581, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 284)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 286)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 280)) ;
  }
  {
  var_instanceMethodMap_10407.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("last"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 290)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 291)), var_setterOutputFormalArgumentList_7581, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 293)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 295)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 289)) ;
  }
  GGS_setterMap var_setterMap_10930 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  var_setterMap_10930.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("append"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 301)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 302)), var_setterInputFormalArgumentList_7650, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 305)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 300)) ;
  }
  {
  var_setterMap_10930.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popFirst"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 309)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 310)), var_setterOutputFormalArgumentList_7581, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 313)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 308)) ;
  }
  {
  var_setterMap_10930.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popLast"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 317)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 318)), var_setterOutputFormalArgumentList_7581, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 321)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 316)) ;
  }
  var_setterOutputFormalArgumentList_7581.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 324)), var_uintType_7148, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas", 324)), GGS_string ("inIndex")  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 324)) ;
  {
  var_setterMap_10930.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("removeAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 326)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 327)), var_setterOutputFormalArgumentList_7581, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 330)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 325)) ;
  }
  UpEnumerator_typedPropertyList enumerator_11876 (var_typedAttributeList_6619) ;
  while (enumerator_11876.hasCurrentObject ()) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = enumerator_11876.current_hasSetter (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GGS_formalParameterSignature var_setterFormalArgumentList_11937 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        var_setterFormalArgumentList_11937.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 336)), enumerator_11876.current_typeEntry (HERE), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas", 336)), enumerator_11876.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 336)) ;
        var_setterFormalArgumentList_11937.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 337)), var_uintType_7148, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas", 337)), enumerator_11876.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 337)) ;
        {
        var_setterMap_10930.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("set").add_operation (enumerator_11876.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-list.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 339)).add_operation (GGS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 339)), enumerator_11876.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 340)), var_setterFormalArgumentList_11937, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 343)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 338)) ;
        }
      }
    }
    enumerator_11876.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_7650.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-list.galgas", 349)), var_uintType_7148, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-list.galgas", 349)), GGS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 349)) ;
  {
  var_setterMap_10930.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insertAtIndex"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 351)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-list.galgas", 352)), var_setterInputFormalArgumentList_7650, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-list.galgas", 355)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 350)) ;
  }
  GGS_initializerMap var_initializerMap_12967 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_13013 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_listDeclarationAST temp_13 = this ;
  var_initializerMap_12967.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_13013, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 362)), temp_13.readProperty_mListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_13013, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 361)) ;
  }
  {
  const GGS_listDeclarationAST temp_14 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_14.readProperty_mListTypeName (), GGS_bool (false), var_initializerMap_12967, var_getterMap_8793, var_setterMap_10930, var_instanceMethodMap_10407, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 366)) ;
  }
  GGS_typeFeatures var_features_13595 = GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-list.galgas", 382)).operator_or (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-list.galgas", 382)) COMMA_SOURCE_FILE ("declaration-type-list.galgas", 382)) ;
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    const GGS_listDeclarationAST temp_16 = this ;
    test_15 = temp_16.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      var_features_13595.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-list.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 384)) ;
    }
  }
  {
  const GGS_listDeclarationAST temp_17 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_17.readProperty_mListTypeName (), var_features_13595, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 386)) ;
  }
  const GGS_listDeclarationAST temp_18 = this ;
  const GGS_listDeclarationAST temp_19 = this ;
  const GGS_listDeclarationAST temp_20 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_13929 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_18.readProperty_mListTypeName (), temp_19.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-list.galgas", 399)), GGS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-list.galgas", 400)), GGS_bool (true), var_typedAttributeList_6619, GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_12967, var_classFunctionMap_8375, var_getterMap_8793, var_setterMap_10930, var_instanceMethodMap_10407, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-list.galgas", 411)), GGS_subscriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_7461, var_features_13595, var_constructorAttributeTypeList_7514, GGS_bool (false), var_listElementType_7381, GGS_string ("list-").add_operation (temp_20.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-list.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 418)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-list.galgas", 419)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_13929.readProperty_typeName (), var_typeDefinition_13929, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 421)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@listDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_structAttributeList_15203 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GGS_listDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_15292 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_15292.hasCurrentObject ()) {
    var_structAttributeList_15203.addAssignOperation (enumerator_15292.current_mutability (HERE), enumerator_15292.current_typeName (HERE), enumerator_15292.current_name (HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-list.galgas", 434)), enumerator_15292.current_hasSelector (HERE), enumerator_15292.current_initialization (HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 430)) ;
    enumerator_15292.gotoNextObject () ;
  }
  const GGS_listDeclarationAST temp_1 = this ;
  const GGS_listDeclarationAST temp_2 = this ;
  const GGS_listDeclarationAST temp_3 = this ;
  GGS_structComparison temp_4 ;
  const GalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_5) {
    temp_4 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-list.galgas", 443)) ;
  }else if (GalgasBool::boolFalse == test_5) {
    temp_4 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-list.galgas", 443)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_1.readProperty_isPredefined (), function_makeEmbeddedElementTypeLName (temp_2.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 440)), var_structAttributeList_15203, GGS_string::makeEmptyString (), temp_4, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 438)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@listDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument_inProductDirectory */,
                                                       const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_16566 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 463)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16566, var_nameForUsefulness_16566, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 464)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_listDeclarationAST temp_2 = this ;
    GGS_bool test_3 = temp_2.readProperty_usefullList () ;
    if (GalgasBool::boolTrue != test_3.boolEnum ()) {
      const GGS_listDeclarationAST temp_4 = this ;
      test_3 = temp_4.readProperty_isPredefined () ;
    }
    test_1 = test_3.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_16566  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 466)) ;
    }
  }
  const GGS_listDeclarationAST temp_5 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_16825 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_5.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 468)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16566, var_elementTypeNameForUsefulness_16825 COMMA_SOURCE_FILE ("declaration-type-list.galgas", 471)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_listDeclarationAST temp_7 = this ;
    GGS_bool test_8 = temp_7.readProperty_usefullList () ;
    if (GalgasBool::boolTrue != test_8.boolEnum ()) {
      const GGS_listDeclarationAST temp_9 = this ;
      test_8 = temp_9.readProperty_isPredefined () ;
    }
    test_6 = test_8.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_elementTypeNameForUsefulness_16825  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 473)) ;
    }
  }
  const GGS_listDeclarationAST temp_10 = this ;
  GGS_lstring var_initializerNameForUsefulness_17232 = function_initializerNameForUsefulEntitiesGraph (temp_10.readProperty_mListTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 476)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_17232, var_initializerNameForUsefulness_17232, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 480)) ;
  }
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_17232, var_nameForUsefulness_16566 COMMA_SOURCE_FILE ("declaration-type-list.galgas", 481)) ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_listDeclarationAST temp_12 = this ;
    GGS_bool test_13 = temp_12.readProperty_usefullList () ;
    if (GalgasBool::boolTrue != test_13.boolEnum ()) {
      const GGS_listDeclarationAST temp_14 = this ;
      test_13 = temp_14.readProperty_isPredefined () ;
    }
    test_11 = test_13.boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_17232  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 483)) ;
    }
  }
  GGS_typedPropertyList var_typedAttributeList_17729 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_17778 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_listDeclarationAST temp_15 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_17869 (temp_15.readProperty_mPropertyList ()) ;
  while (enumerator_17869.hasCurrentObject ()) {
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = enumerator_17869.current_initialization (HERE).getter_isSome (SOURCE_FILE ("declaration-type-list.galgas", 489)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_17869.current_name (HERE).readProperty_location (), GGS_string ("property initialization is not handled for a list"), fixItArray17  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 490)) ;
      }
    }
    GGS_lstring var_propertyTypeNameForUsefulness_18041 = function_typeNameForUsefulEntitiesGraph (enumerator_17869.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 492)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16566, var_propertyTypeNameForUsefulness_18041 COMMA_SOURCE_FILE ("declaration-type-list.galgas", 493)) ;
    }
    GGS_unifiedTypeMapEntry var_t_18230 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_17869.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 494)) ;
    var_typedAttributeList_17729.addAssignOperation (var_t_18230, enumerator_17869.current_name (HERE), enumerator_17869.current_initialization (HERE), GGS_bool (true), enumerator_17869.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 495)) ;
    {
    var_attributeMap_17778.setter_insertKey (enumerator_17869.current_name (HERE), var_t_18230, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 501)) ;
    }
    enumerator_17869.gotoNextObject () ;
  }
  const GGS_listDeclarationAST temp_18 = this ;
  GGS_unifiedTypeMapEntry var_selfType_18500 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_18.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 504)) ;
  const GGS_listDeclarationAST temp_19 = this ;
  const GGS_listDeclarationAST temp_20 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("list type ").add_operation (temp_19.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 506)), GGS_listTypeForGeneration::init_21__21__21_ (var_selfType_18500, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_20.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 509)), var_typedAttributeList_17729, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 505)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@listTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GGS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_19460 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 529)) ;
  const GGS_listTypeForGeneration temp_1 = this ;
  const GGS_listTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, var_selfTypeDefinition_19460.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 532)), temp_2.readProperty_mTypedAttributeList (), var_selfTypeDefinition_19460.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_19460.readProperty_typeForEnumeratedElement (), extensionGetter_identifierRepresentation (var_selfTypeDefinition_19460.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 536)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_19460.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 537)) COMMA_SOURCE_FILE ("declaration-type-list.galgas", 530))) ;
  const GGS_listTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_19460.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 541)), var_selfTypeDefinition_19460.readProperty_isConcrete (), var_selfTypeDefinition_19460.readProperty_initializerMap (), var_selfTypeDefinition_19460.readProperty_classFunctionMap (), var_selfTypeDefinition_19460.readProperty_getterMap (), var_selfTypeDefinition_19460.readProperty_setterMap (), var_selfTypeDefinition_19460.readProperty_instanceMethodMap (), var_selfTypeDefinition_19460.readProperty_classMethodMap (), var_selfTypeDefinition_19460.readProperty_readSubscriptMap (), var_selfTypeDefinition_19460.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_19460.readProperty_features (), var_selfTypeDefinition_19460.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_19460.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_19460.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-list.galgas", 539))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-list.galgas", 539)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@listTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_listTypeForGeneration temp_0 = this ;
  UpEnumerator_typedPropertyList enumerator_21048 (temp_0.readProperty_mTypedAttributeList ()) ;
  while (enumerator_21048.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_21048.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 565)) ;
    enumerator_21048.gotoNextObject () ;
  }
  const GGS_listTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 567)) ;
  const GGS_listTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 568)) ;
  const GGS_listTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_21262 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 569)) ;
  const GGS_listTypeForGeneration temp_4 = this ;
  const GGS_listTypeForGeneration temp_5 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_21262.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 572)), temp_5.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (var_selfTypeDefinition_21262.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 574)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_21262.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-list.galgas", 575)) COMMA_SOURCE_FILE ("declaration-type-list.galgas", 570))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'listGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_listGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_listGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_listGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_listGenerationTemplate_0,
  0,
  gWrapperAllDirectories_listGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (Compiler * inCompiler,
                                                                          const GGS_string & in_TYPE_5F_NAME,
                                                                          const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                          const GGS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                          const GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                          const GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                          const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                          const GGS_bool & /* in_GENERATE_5F_COMPARISON */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 2)).add_operation (GGS_string (" list enumerator"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inList) ;\n\n  public: ~ DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: inline void gotoNextObject (void) { mIndex -= 1 ; }\n\n  public: inline void rewind (void) { mIndex = 0 ; }\n\n  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }\n\n") ;
  GGS_uint index_808_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_808 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_808.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_808.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_808.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      enumerator_808.gotoNextObject () ;
      index_808_.increment () ;
    }
  }
  const GalgasBool test_0 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 22)).operator_not (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 22)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--- Current element access\n  public: class GGS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 24)).stringValue ()) ;
    result.appendString (" current (LOCATION_ARGS) const ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mArray ;\n  private: int32_t mIndex ;\n\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inList)  ;\n\n  public: ~ UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }\n\n  public: inline void gotoNextObject (void) { mIndex += 1 ; }\n\n  public: inline void rewind (void) { mIndex = 0 ; }\n\n  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }\n\n") ;
  GGS_uint index_2132_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_2132 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_2132.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2132.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_2132.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      enumerator_2132.gotoNextObject () ;
      index_2132_.increment () ;
    }
  }
  const GalgasBool test_1 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 53)).operator_not (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 53)).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--- Current element access\n  public: class GGS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 55)).stringValue ()) ;
    result.appendString (" current (LOCATION_ARGS) const ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mArray ;\n  private: int32_t mIndex ;\n\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 66)).add_operation (GGS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 66)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--- Private property\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mArray ;\n\n//--- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- Destructor\n  public: virtual ~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n//--- Copy\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = default ;\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = default ;\n\n//--- Is valid\n  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }\n\n//--- Drop\n  public: inline virtual void drop (void) override { mArray.removeAll () ; }\n\n//--- Description\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--- Count\n  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }\n \n//--- sortedElementArray\n  public : inline GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> sortedElementArray (void) const {\n    return mArray ;\n  }\n\n//--- subList\n  private: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" subList (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inStart,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t inLength,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const ;\n\n\n//--- List constructor for graph\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const capCollectionElementArray & inSharedArray) ;\n\n//--- Element constructor\n  public: static void makeAttributesFromObjects (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("capCollectionElement & outAttributes") ;
  GGS_uint index_4618_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4618 (in_PROPERTY_5F_LIST) ;
    while (enumerator_4618.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4618.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_4618.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 114)).stringValue ()) ;
      enumerator_4618.gotoNextObject () ;
      index_4618_.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (Compiler * inCompiler,
                                                                                      const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                      const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                      const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 2)).add_operation (GGS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cCollectionElement {\n  public: GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" mObject ;\n\n//--- Class functions\n  public: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_527_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_527 (in_PROPERTY_5F_LIST) ;
    while (enumerator_527.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_527.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_527.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 11)).stringValue ()) ;
      enumerator_527.gotoNextObject () ;
      if (enumerator_527.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_527_.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) ;\n  public: cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement COMMA_LOCATION_ARGS) ;\n\n//--- Virtual method that checks that all attributes are valid\n  public: virtual bool isValid (void) const ;\n\n//--- Virtual method that returns a copy of current object\n  public: virtual cCollectionElement * copy (void) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_1289_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_1289 (in_PROPERTY_5F_LIST) ;
    while (enumerator_1289.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1289.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 29)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_1289.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 29)).stringValue ()) ;
      enumerator_1289.gotoNextObject () ;
      if (enumerator_1289.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1289_.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (") ;
  GGS_uint index_1537_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_1537 (in_PROPERTY_5F_LIST) ;
    while (enumerator_1537.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_1537.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue ()) ;
      enumerator_1537.gotoNextObject () ;
      if (enumerator_1537.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_1537_.increment () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmObject (") ;
  GGS_uint index_1947_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_1947 (in_PROPERTY_5F_LIST) ;
    while (enumerator_1947.hasCurrentObject ()) {
      result.appendString ("inElement.mProperty_") ;
      result.appendString (enumerator_1947.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 49)).stringValue ()) ;
      enumerator_1947.gotoNextObject () ;
      if (enumerator_1947.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_1947_.increment () ;
    }
  }
  result.appendString (") {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return true ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncCollectionElement * cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::copy (void) {\n  cCollectionElement * result = nullptr ;\n  macroMyNew (result, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_2576_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_2576 (in_PROPERTY_5F_LIST) ;
    while (enumerator_2576.hasCurrentObject ()) {
      result.appendString ("mObject.mProperty_") ;
      result.appendString (enumerator_2576.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 67)).stringValue ()) ;
      enumerator_2576.gotoNextObject () ;
      if (enumerator_2576.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_2576_.increment () ;
    }
  }
  result.appendString (" COMMA_HERE)) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n// List type @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nmArray () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const capCollectionElementArray & inArray) :\nmArray () {\n  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;\n  for (uint32_t i = 0 ; i < inArray.count () ; i++) {\n    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;\n    cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = (cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) v.ptr () ;\n    macroValidSharedObject (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n    const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" element (") ;
  GGS_uint index_3691_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3691 (in_PROPERTY_5F_LIST) ;
    while (enumerator_3691.hasCurrentObject ()) {
      result.appendString ("p->mObject.mProperty_") ;
      result.appendString (enumerator_3691.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 93)).stringValue ()) ;
      enumerator_3691.gotoNextObject () ;
      if (enumerator_3691.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_3691_.increment () ;
    }
  }
  result.appendString (") ;\n    mArray.appendObject (element) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::makeAttributesFromObjects (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("capCollectionElement & outAttributes") ;
  GGS_uint index_4097_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4097 (in_PROPERTY_5F_LIST) ;
    while (enumerator_4097.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4097.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 105)).stringValue ()) ;
      result.appendString (" & in_") ;
      result.appendString (enumerator_4097.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 105)).stringValue ()) ;
      enumerator_4097.gotoNextObject () ;
      index_4097_.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * p = nullptr ;\n  macroMyNew (p, cCollectionElement_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_4412_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4412 (in_PROPERTY_5F_LIST) ;
    while (enumerator_4412.hasCurrentObject ()) {
      result.appendString ("in_") ;
      result.appendString (enumerator_4412.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 112)).stringValue ()) ;
      enumerator_4412.gotoNextObject () ;
      if (enumerator_4412.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_4412_.increment () ;
    }
  }
  result.appendString (" COMMA_THERE)) ;\n  outAttributes.setPointer (p) ;\n  macroDetachSharedObject (p) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GGS_uint result ;\n  if (isValid ()) {\n    result = GGS_uint (count ()) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_range GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_range (UNUSED_LOCATION_ARGS) const {\n  GGS_range result ;\n  if (isValid ()) {\n    result = GGS_range (0, count ()) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"<list @\") ;\n  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  ioString.appendCString (\" (\") ;\n  ioString.appendUnsigned (count()) ;\n  ioString.appendCString (\" object\") ;\n  ioString.appendString ((count() > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\"):\") ;\n  if (isValid ()) {\n    for (uint32_t i = 0 ; i < count () ; i++) {\n      ioString.appendNewLine () ;\n      ioString.appendStringMultiple (\"| \", inIndentation) ;\n      ioString.appendString (\"|-at \") ;\n      ioString.appendUnsigned (i) ;\n") ;
  GGS_uint index_5935_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5935 (in_PROPERTY_5F_LIST) ;
    while (enumerator_5935.hasCurrentObject ()) {
      result.appendString ("      ioString.appendNewLine () ;\n      ioString.appendStringMultiple (\"| \", inIndentation + 1) ;\n      ioString.appendString (\"") ;
      result.appendString (enumerator_5935.current_name (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (":\") ;\n      mArray (int32_t (i) COMMA_HERE).mProperty_") ;
      result.appendString (enumerator_5935.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 162)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation + 1) ;\n") ;
      enumerator_5935.gotoNextObject () ;
      index_5935_.increment () ;
    }
  }
  result.appendString ("    }\n  }else{\n    ioString.appendCString (\" not built\") ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyList (UNUSED_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mArray.setCapacity (16) ; // Build\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mArray.setCapacity (16) ; // Build\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusPlusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inValue.isValid ()) {\n    mArray.appendObject (inValue) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_listWithValue (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_7504_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7504 (in_PROPERTY_5F_LIST) ;
    while (enumerator_7504.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7504.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 200)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_7504_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 200)).stringValue ()) ;
      enumerator_7504.gotoNextObject () ;
      if (enumerator_7504.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7504_IDX.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" element (") ;
  GGS_uint index_7738_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7738 (in_PROPERTY_5F_LIST) ;
    while (enumerator_7738.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_7738_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 206)).stringValue ()) ;
      enumerator_7738.gotoNextObject () ;
      if (enumerator_7738.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_7738_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (element.isValid ()) {\n    result.mArray.setCapacity (16) ; // Build\n    result.plusPlusAssignOperation (element COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_8198_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8198 (in_PROPERTY_5F_LIST) ;
    while (enumerator_8198.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8198.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 222)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_8198_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 222)).stringValue ()) ;
      enumerator_8198.gotoNextObject () ;
      if (enumerator_8198.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_8198_IDX.increment () ;
    }
  }
  result.appendString ("\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_8433_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8433 (in_PROPERTY_5F_LIST) ;
    while (enumerator_8433.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_8433_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 229)).stringValue ()) ;
      enumerator_8433.gotoNextObject () ;
      if (enumerator_8433.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_8433_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  plusPlusAssignOperation (newElement COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_append (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_8762_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8762 (in_PROPERTY_5F_LIST) ;
    while (enumerator_8762.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8762.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 240)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_8762_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 240)).stringValue ()) ;
      result.appendString (",") ;
      enumerator_8762.gotoNextObject () ;
      if (enumerator_8762.hasCurrentObject ()) {
        result.appendString ("\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_8762_IDX.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_9033_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9033 (in_PROPERTY_5F_LIST) ;
    while (enumerator_9033.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_9033_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 247)).stringValue ()) ;
      enumerator_9033.gotoNextObject () ;
      if (enumerator_9033.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_9033_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  if (isValid () && newElement.isValid ()) {\n    plusPlusAssignOperation (newElement COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insertAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_9418_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9418 (in_PROPERTY_5F_LIST) ;
    while (enumerator_9418.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9418.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 260)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_9418_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 260)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_9418.gotoNextObject () ;
      index_9418_IDX.increment () ;
    }
  }
  result.appendString ("const GGS_uint inInsertionIndex,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_9710_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9710 (in_PROPERTY_5F_LIST) ;
    while (enumerator_9710.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_9710_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 267)).stringValue ()) ;
      enumerator_9710.gotoNextObject () ;
      if (enumerator_9710.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_9710_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {\n    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;\n    if (idx <= mArray.count ()) {\n      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;\n    }else{\n      String message = \"cannot insert at index \" ;\n      message.appendSigned (idx) ;\n      message.appendCString (\", list count is \") ;\n      message.appendSigned (mArray.count ()) ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeAtIndex (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_10501_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_10501 (in_PROPERTY_5F_LIST) ;
    while (enumerator_10501.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_10501.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 289)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_10501_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 289)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_10501.gotoNextObject () ;
      index_10501_IDX.increment () ;
    }
  }
  result.appendString ("const GGS_uint inRemoveIndex,\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  bool removed = false ;\n  if (isValid () && inRemoveIndex.isValid ()) {\n    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;\n    if (idx < mArray.count ()) {\n      removed = true ;\n") ;
  GGS_uint index_10956_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_10956 (in_PROPERTY_5F_LIST) ;
    while (enumerator_10956.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_10956_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 301)).stringValue ()) ;
      result.appendString (" = mArray (idx COMMA_HERE).mProperty_") ;
      result.appendString (enumerator_10956.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 301)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_10956.gotoNextObject () ;
      index_10956_IDX.increment () ;
    }
  }
  result.appendString ("      mArray.removeObjectAtIndex (idx COMMA_HERE) ;\n    }else{\n      String message = \"cannot remove at index \" ;\n      message.appendSigned (idx) ;\n      message.appendCString (\", list count is \") ;\n      message.appendSigned (mArray.count ()) ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (!removed) {\n") ;
  GGS_uint index_11491_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_11491 (in_PROPERTY_5F_LIST) ;
    while (enumerator_11491.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_11491_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_11491.gotoNextObject () ;
      index_11491_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popFirst (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_11773_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_11773 (in_PROPERTY_5F_LIST) ;
    while (enumerator_11773.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11773.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 322)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_11773_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 322)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_11773.gotoNextObject () ;
      index_11773_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  bool removed = false ;\n  if (isValid ()) {\n    if (mArray.count () > 0) {\n      removed = true ;\n") ;
  GGS_uint index_12089_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_12089 (in_PROPERTY_5F_LIST) ;
    while (enumerator_12089.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_12089_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 332)).stringValue ()) ;
      result.appendString (" = mArray (0 COMMA_THERE).mProperty_") ;
      result.appendString (enumerator_12089.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 332)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_12089.gotoNextObject () ;
      index_12089_IDX.increment () ;
    }
  }
  result.appendString ("      mArray.removeObjectAtIndex (0 COMMA_HERE) ;\n    }else{\n      const String message = \"cannot remove first element, list is empty\" ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (!removed) {\n") ;
  GGS_uint index_12513_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_12513 (in_PROPERTY_5F_LIST) ;
    while (enumerator_12513.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_12513_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 342)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_12513.gotoNextObject () ;
      index_12513_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popLast (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_12794_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_12794 (in_PROPERTY_5F_LIST) ;
    while (enumerator_12794.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_12794.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 350)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_12794_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 350)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_12794.gotoNextObject () ;
      index_12794_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  bool removed = false ;\n  if (isValid ()) {\n    if (mArray.count () > 0) {\n      removed = true ;\n") ;
  GGS_uint index_13110_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_13110 (in_PROPERTY_5F_LIST) ;
    while (enumerator_13110.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_13110_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (" = mArray.lastObject (HERE).mProperty_") ;
      result.appendString (enumerator_13110.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_13110.gotoNextObject () ;
      index_13110_IDX.increment () ;
    }
  }
  result.appendString ("      mArray.removeLastObject (HERE) ;\n    }else{\n      const String message = \"cannot remove last element, list is empty\" ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (!removed) {\n") ;
  GGS_uint index_13524_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_13524 (in_PROPERTY_5F_LIST) ;
    while (enumerator_13524.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_13524_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_13524.gotoNextObject () ;
      index_13524_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_first (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_13803_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_13803 (in_PROPERTY_5F_LIST) ;
    while (enumerator_13803.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_13803.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 378)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_13803_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 378)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_13803.gotoNextObject () ;
      index_13803_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  bool found = false ;\n  if (isValid ()) {\n    if (mArray.count () > 0) {\n      found = true ;\n") ;
  GGS_uint index_14121_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_14121 (in_PROPERTY_5F_LIST) ;
    while (enumerator_14121.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_14121_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 388)).stringValue ()) ;
      result.appendString (" = mArray (0 COMMA_THERE).mProperty_") ;
      result.appendString (enumerator_14121.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 388)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_14121.gotoNextObject () ;
      index_14121_IDX.increment () ;
    }
  }
  result.appendString ("    }else{\n      const String message = \"cannot get first element, list is empty\" ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_14490_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_14490 (in_PROPERTY_5F_LIST) ;
    while (enumerator_14490.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_14490_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 397)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_14490.gotoNextObject () ;
      index_14490_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_last (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_14768_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_14768 (in_PROPERTY_5F_LIST) ;
    while (enumerator_14768.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_14768.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 405)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_14768_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 405)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_14768.gotoNextObject () ;
      index_14768_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n  ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  bool found = false ;\n  if (isValid ()) {\n    if (mArray.count () > 0) {\n      found = true ;\n") ;
  GGS_uint index_15086_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_15086 (in_PROPERTY_5F_LIST) ;
    while (enumerator_15086.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_15086_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 415)).stringValue ()) ;
      result.appendString (" = mArray.lastObject (HERE).mProperty_") ;
      result.appendString (enumerator_15086.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 415)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_15086.gotoNextObject () ;
      index_15086_IDX.increment () ;
    }
  }
  result.appendString ("    }else{\n      const String message = \"cannot get last element, list is empty\" ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_15456_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_15456 (in_PROPERTY_5F_LIST) ;
    while (enumerator_15456.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_15456_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 424)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_15456.gotoNextObject () ;
      index_15456_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::add_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n                                            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                                            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = *this ;\n    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;\n    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {\n      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::subList (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const int32_t inStart,\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t inLength,\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;\n  if (ok) {\n    result.mArray.setCapacity (std::max (16, inLength)) ;\n    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {\n      result.mArray.appendObject (mArray (i COMMA_HERE)) ;\n    }\n  }else{\n    String message = \"cannot get sublist [start: \" ;\n    message.appendSigned (inStart) ;\n    message.appendCString (\", length: \") ;\n    message.appendSigned (inLength) ;\n    message.appendCString (\"], list count is \") ;\n    message.appendSigned (mArray.count ()) ;\n    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListWithRange (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_range & inRange,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inRange.isValid ()) {\n    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;\n    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;\n    result = subList (start, length, inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListFromIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_uint & inIndex,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inIndex.isValid ()) {\n    const int32_t start  = int32_t (inIndex.uintValue ()) ;\n    const int32_t length = int32_t (count ()) - start ;\n    result = subList (start, length, inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_subListToIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_uint & inIndex,\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n        ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inIndex.isValid ()) {\n    const int32_t start  = 0 ;\n    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;\n    result = subList (start, length, inCompiler COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inList,\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inList.isValid ()) {\n    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;\n    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {\n      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;\n    }\n  }\n}\n\n") ;
  GGS_uint index_19558_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_19558 (in_PROPERTY_5F_LIST) ;
    while (enumerator_19558.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_19558.current_hasSetter (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
        result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("::setter_set") ;
        result.appendString (enumerator_19558.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 528)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 528)).stringValue ()) ;
        result.appendString ("AtIndex (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_19558.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 528)).stringValue ()) ;
        result.appendString (" inOperand,\n    ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("GGS_uint inIndex,\n    ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("Compiler * inCompiler\n    ") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {\n    const uint32_t idx = inIndex.uintValue () ;\n    if (idx < count ()) {\n      mArray (int32_t (idx) COMMA_HERE).mProperty_") ;
        result.appendString (enumerator_19558.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 535)).stringValue ()) ;
        result.appendString (" = inOperand ;\n    }else{\n      String message = \"cannot access at index \" ;\n      message.appendUnsigned (idx) ;\n      message.appendCString (\", list count is \") ;\n      message.appendSigned (mArray.count ()) ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n}\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("//--------------------------------------------------------------------------------------------------\n  \nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_19558.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 549)).stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_19558.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 549)).stringValue ()) ;
      result.appendString ("AtIndex (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GGS_uint & inIndex,\n    ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n    ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_19558.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 552)).stringValue ()) ;
      result.appendString (" result ;\n  if (isValid () && inIndex.isValid ()) {\n    const uint32_t idx = inIndex.uintValue () ;\n    if (idx < count ()) {\n      result = mArray (int32_t (idx) COMMA_HERE).mProperty_") ;
      result.appendString (enumerator_19558.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 556)).stringValue ()) ;
      result.appendString (" ;\n    }else{\n      String message = \"cannot access at index \" ;\n      message.appendUnsigned (idx) ;\n      message.appendCString (\", list count is \") ;\n      message.appendSigned (mArray.count ()) ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }\n  }\n  return result ;\n}\n") ;
      enumerator_19558.gotoNextObject () ;
      index_19558_IDX.increment () ;
    }
  }
  const GalgasBool test_1 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (count () < inOperand.count ()) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (count () > inOperand.count ()) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {\n        const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" left = mArray (int32_t (i) COMMA_HERE) ;\n        const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" right = inOperand.mArray (int32_t (i) COMMA_HERE) ;\n        result = left.objectCompare (right) ;\n      }\n    }\n  }\n  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n// Down Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nDownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject) :\nmArray (inEnumeratedObject.sortedElementArray ()),\nmIndex (0) {\n  mIndex = mArray.count () - 1 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mArray (mIndex COMMA_THERE) ;\n}\n\n") ;
  GGS_uint index_23172_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_23172 (in_PROPERTY_5F_LIST) ;
    while (enumerator_23172.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_23172.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 609)).stringValue ()) ;
      result.appendString (" DownEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_23172.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 609)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mArray (mIndex COMMA_THERE).mProperty_") ;
      result.appendString (enumerator_23172.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 610)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_23172.gotoNextObject () ;
      index_23172_IDX.increment () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n// Up Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nUpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject) :\nmArray (inEnumeratedObject.sortedElementArray ()),\nmIndex (0) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mArray (mIndex COMMA_THERE) ;\n}\n\n") ;
  GGS_uint index_24310_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_24310 (in_PROPERTY_5F_LIST) ;
    while (enumerator_24310.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_24310.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 632)).stringValue ()) ;
      result.appendString (" UpEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_24310.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 632)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mArray (mIndex COMMA_THERE).mProperty_") ;
      result.appendString (enumerator_24310.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 633)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_24310.gotoNextObject () ;
      index_24310_IDX.increment () ;
    }
  }
  result.appendString ("\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dictDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_dictDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_dictDeclarationAST temp_0 = this ;
  result_result = GGS_string ("dict @").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 32)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dictDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_structAttributeList_4611 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GGS_dictDeclarationAST temp_0 = this ;
  var_structAttributeList_4611.addAssignOperation (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-dict.galgas", 129)), temp_0.readProperty_mKeyTypeName (), GGS_string ("key").getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 131)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-dict.galgas", 132)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-dict.galgas", 134))  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 128)) ;
  const GGS_dictDeclarationAST temp_1 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_4865 (temp_1.readProperty_mPropertyList ()) ;
  while (enumerator_4865.hasCurrentObject ()) {
    var_structAttributeList_4611.addAssignOperation (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-dict.galgas", 137)), enumerator_4865.current_typeName (HERE), enumerator_4865.current_name (HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-dict.galgas", 140)), enumerator_4865.current_hasSelector (HERE), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-dict.galgas", 142))  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 136)) ;
    enumerator_4865.gotoNextObject () ;
  }
  const GGS_dictDeclarationAST temp_2 = this ;
  GGS_lstring var_elementTypeName_5096 = function_makeEmbeddedElementTypeLName (temp_2.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 144)) ;
  const GGS_dictDeclarationAST temp_3 = this ;
  const GGS_dictDeclarationAST temp_4 = this ;
  GGS_structComparison temp_5 ;
  const GalgasBool test_6 = temp_4.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-dict.galgas", 150)) ;
  }else if (GalgasBool::boolFalse == test_6) {
    temp_5 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-dict.galgas", 150)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_3.readProperty_isPredefined (), var_elementTypeName_5096, var_structAttributeList_4611, GGS_string::makeEmptyString (), temp_5, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 145)) ;
  {
  GGS_lstring joker_5509 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_5509, var_elementTypeName_5096, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 154)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dictDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                              GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                              GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictDeclarationAST temp_0 = this ;
  const GGS_dictDeclarationAST temp_1 = this ;
  GGS_lstring var_key_6410 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 170)), temp_1.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_dictDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6410, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 171)) ;
  }
  {
  const GGS_dictDeclarationAST temp_3 = this ;
  const GGS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 172)), temp_4.readProperty_mKeyTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 172)) ;
  }
  const GGS_dictDeclarationAST temp_5 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6657 (temp_5.readProperty_mPropertyList ()) ;
  while (enumerator_6657.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_6657.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 174)), enumerator_6657.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 174)) ;
    }
    enumerator_6657.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dictDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                        const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                        const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_keyTypeIndex_7628 ;
  {
  const GGS_dictDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_0.readProperty_mKeyTypeName ().readProperty_string (), var_keyTypeIndex_7628, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 191)) ;
  }
  GGS_enumerationDescriptorList var_enumerationDescriptor_7678 = GGS_enumerationDescriptorList::class_func_listWithValue (var_keyTypeIndex_7628, GGS_string ("key")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 193)) ;
  GGS_classFunctionMap var_classFunctionMap_7796 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_getterMap var_getterMap_7877 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7877, inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 196)) ;
  }
  GGS_setterMap var_setterMap_7906 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_7947 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictDeclarationAST temp_1 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_7796, ioArgument_ioTypeMap, GGS_string ("emptyDict"), temp_1.readProperty_mDictTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 200)) ;
  }
  {
  const GGS_dictDeclarationAST temp_2 = this ;
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7877, ioArgument_ioTypeMap, GGS_string ("hasKey"), GGS_string::makeEmptyString (), temp_2.readProperty_mKeyTypeName ().readProperty_string (), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 208)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_7877, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 216)) ;
  }
  GGS_formalParameterSignature var_insertSetterFormalArgumentList_8643 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_typedPropertyList_8705 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_8754 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_8754.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 228)), var_keyTypeIndex_7628, GGS_string ("key"), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 228)) ;
  var_insertSetterFormalArgumentList_8643.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 230)), var_keyTypeIndex_7628, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas", 232)), GGS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 229)) ;
  GGS_formalParameterSignature var_removeMethodFormalArgumentList_9052 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_removeMethodFormalArgumentList_9052.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 236)), var_keyTypeIndex_7628, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas", 238)), GGS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 235)) ;
  GGS_optionalMethodSignature var_optionalMethodSignature_9230 = GGS_optionalMethodSignature::init (inCompiler COMMA_HERE) ;
  var_optionalMethodSignature_9230.addAssignOperation (GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 243)), var_keyTypeIndex_7628, GGS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 241)) ;
  GGS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_9354 = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GGS_dictDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_9453 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_9453.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_9536 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_9453.current_typeName (HERE), var_attributeTypeIndex_9536, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 248)) ;
    }
    GGS_bool var_hasSetter_9564 = GGS_bool (true) ;
    GGS_bool var_hasSelector_9589 = GGS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_8754.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 251)), var_attributeTypeIndex_9536, enumerator_9453.current_name (HERE).readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 251)) ;
    var_typedPropertyList_8705.addAssignOperation (var_attributeTypeIndex_9536, enumerator_9453.current_name (HERE), enumerator_9453.current_initialization (HERE), var_hasSetter_9564, var_hasSelector_9589  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 252)) ;
    var_typesToIncludeInHeaderCompilation_9354.addAssignOperation (var_attributeTypeIndex_9536  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 253)) ;
    var_enumerationDescriptor_7678.addAssignOperation (var_attributeTypeIndex_9536, enumerator_9453.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 254)) ;
    var_insertSetterFormalArgumentList_8643.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 256)), var_attributeTypeIndex_9536, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas", 258)), enumerator_9453.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 255)) ;
    var_removeMethodFormalArgumentList_9052.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 261)), var_attributeTypeIndex_9536, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-dict.galgas", 263)), enumerator_9453.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 260)) ;
    var_optionalMethodSignature_9230.addAssignOperation (GGS_bool (false), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 267)), var_attributeTypeIndex_9536, enumerator_9453.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 265)) ;
    enumerator_9453.gotoNextObject () ;
  }
  {
  const GGS_dictDeclarationAST temp_4 = this ;
  var_setterMap_7906.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insert"), temp_4.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas", 274)), var_insertSetterFormalArgumentList_8643, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas", 277)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 272)) ;
  }
  {
  const GGS_dictDeclarationAST temp_5 = this ;
  var_setterMap_7906.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("removeKey"), temp_5.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas", 283)), var_removeMethodFormalArgumentList_9052, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas", 286)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 281)) ;
  }
  {
  const GGS_dictDeclarationAST temp_6 = this ;
  const GGS_dictDeclarationAST temp_7 = this ;
  var_instanceMethodMap_7947.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("searchKey"), temp_6.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas", 292)), var_removeMethodFormalArgumentList_9052, temp_7.readProperty_mDictTypeName ().readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas", 296)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 290)) ;
  }
  const GGS_dictDeclarationAST temp_8 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_11282 (temp_8.readProperty_mPropertyList ()) ;
  while (enumerator_11282.hasCurrentObject ()) {
    GGS_lstring var_accessorName_11318 = GGS_lstring::init_21__21_ (enumerator_11282.current_name (HERE).readProperty_string ().add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 301)), enumerator_11282.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_11444 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11282.current_typeName (HERE), var_attributeTypeIndex_11444, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 302)) ;
    }
    {
    GGS_functionSignature temp_9 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 306)) ;
    temp_9.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 306)), var_keyTypeIndex_7628, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 306)) ;
    var_getterMap_7877.setter_insertOrReplace (var_accessorName_11318, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas", 305)), temp_9, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 307)), GGS_bool (true), var_attributeTypeIndex_11444, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas", 310)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 303)) ;
    }
    enumerator_11282.gotoNextObject () ;
  }
  const GGS_dictDeclarationAST temp_10 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_11865 (temp_10.readProperty_mPropertyList ()) ;
  while (enumerator_11865.hasCurrentObject ()) {
    GGS_lstring var_accessorName_11901 = GGS_lstring::init_21__21_ (GGS_string ("set").add_operation (enumerator_11865.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-dict.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 317)).add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 317)), enumerator_11865.current_name (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_12114 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_11865.current_typeName (HERE), var_attributeTypeIndex_12114, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 320)) ;
    }
    GGS_formalParameterSignature var_accessorFormalArgumentList_12147 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    var_accessorFormalArgumentList_12147.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 325)), var_attributeTypeIndex_12114, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas", 325)), enumerator_11865.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 325)) ;
    var_accessorFormalArgumentList_12147.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 326)), var_keyTypeIndex_7628, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-dict.galgas", 326)), GGS_string ("key")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 326)) ;
    {
    var_setterMap_7906.setter_insertOrReplace (var_accessorName_11901, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-dict.galgas", 329)), var_accessorFormalArgumentList_12147, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-dict.galgas", 332)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 327)) ;
    }
    enumerator_11865.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_12675 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_12721 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_dictDeclarationAST temp_11 = this ;
  var_initializerMap_12675.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_12721, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 340)), temp_11.readProperty_mDictTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_12721, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 339)) ;
  }
  {
  const GGS_dictDeclarationAST temp_12 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_12.readProperty_mDictTypeName (), GGS_bool (false), var_initializerMap_12675, var_getterMap_7877, var_setterMap_7906, var_instanceMethodMap_7947, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 344)) ;
  }
  const GGS_dictDeclarationAST temp_13 = this ;
  GGS_lstring var_elementTypeName_13313 = function_makeEmbeddedElementTypeLName (temp_13.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 360)) ;
  GGS_unifiedTypeMapEntry var_elementTypeEntry_13458 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_elementTypeName_13313, var_elementTypeEntry_13458, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 361)) ;
  }
  GGS_typeFeatures var_features_13500 = GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-dict.galgas", 366)).operator_or (GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("declaration-type-dict.galgas", 366)) COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 366)) ;
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_dictDeclarationAST temp_15 = this ;
    test_14 = temp_15.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      var_features_13500.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-dict.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 368)) ;
    }
  }
  {
  const GGS_dictDeclarationAST temp_16 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_16.readProperty_mDictTypeName (), var_features_13500, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 370)) ;
  }
  GGS_lstring var_optionalElementTypeName_13870 = function_makeOptionalTypeLName (var_elementTypeName_13313, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 378)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_14035 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_optionalElementTypeName_13870, var_optionalElementTypeEntry_14035, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 379)) ;
  }
  GGS_subscriptMap var_readSubscriptMap_14106 = GGS_subscriptMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature temp_17 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 385)) ;
  temp_17.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 385)), var_keyTypeIndex_7628, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 385)) ;
  GGS_functionSignature var_argumentTypeList_14154 = temp_17 ;
  {
  var_readSubscriptMap_14106.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_argumentTypeList_14154, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 387)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-dict.galgas", 387)), inCompiler COMMA_HERE), var_argumentTypeList_14154, var_optionalElementTypeEntry_14035, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 386)) ;
  }
  const GGS_dictDeclarationAST temp_18 = this ;
  const GGS_dictDeclarationAST temp_19 = this ;
  const GGS_dictDeclarationAST temp_20 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_14394 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_18.readProperty_mDictTypeName (), temp_19.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dict.galgas", 397)), GGS_typeKindEnum::class_func_mapType (SOURCE_FILE ("declaration-type-dict.galgas", 398)), GGS_bool (true), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), var_typedPropertyList_8705, var_initializerMap_12675, var_classFunctionMap_7796, var_getterMap_7877, var_setterMap_7906, var_instanceMethodMap_7947, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-dict.galgas", 409)), var_readSubscriptMap_14106, var_enumerationDescriptor_7678, var_features_13500, var_argumentTypeListForAddAssignWithFieldExpressionList_8754, GGS_bool (false), var_elementTypeEntry_13458, GGS_string ("dict-").add_operation (temp_20.readProperty_mDictTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-dict.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 416)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-dict.galgas", 417)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_14394.readProperty_typeName (), var_typeDefinition_14394, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 419)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters_3F_ (const GGS_lstring constinArgument_inString,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_stringlist enumerator_15878 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GGS_string ("%%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 427))) ;
  while (enumerator_15878.hasCurrentObject ()) {
    GGS_stringlist var_explodedArray_15903 = enumerator_15878.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GGS_string ("%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 428)) ;
    {
    GGS_string joker_16002 ; // Joker input parameter
    var_explodedArray_15903.setter_popFirst (joker_16002, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 429)) ;
    }
    UpEnumerator_stringlist enumerator_16015 (var_explodedArray_15903) ;
    while (enumerator_16015.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_16015.current_mValue (HERE).getter_count (SOURCE_FILE ("declaration-type-dict.galgas", 431)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_char var_c_16094 = enumerator_16015.current_mValue (HERE).getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 432)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_c_16094.objectCompare (GGS_char (utf32 (75)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GGS_string ("only '%K' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 434)) ;
            }
          }
        }
      }
      enumerator_16015.gotoNextObject () ;
    }
    enumerator_15878.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'check_K_L_escapeCharacters?'
//
//--------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (const GGS_lstring constinArgument_inString,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_stringlist enumerator_16569 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GGS_string ("%%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 444))) ;
  while (enumerator_16569.hasCurrentObject ()) {
    GGS_stringlist var_explodedArray_16594 = enumerator_16569.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GGS_string ("%") COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 445)) ;
    {
    GGS_string joker_16693 ; // Joker input parameter
    var_explodedArray_16594.setter_popFirst (joker_16693, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 446)) ;
    }
    UpEnumerator_stringlist enumerator_16706 (var_explodedArray_16594) ;
    while (enumerator_16706.hasCurrentObject ()) {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_16706.current_mValue (HERE).getter_count (SOURCE_FILE ("declaration-type-dict.galgas", 448)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_char var_c_16785 = enumerator_16706.current_mValue (HERE).getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 449)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = GGS_bool (ComparisonKind::notEqual, var_c_16785.objectCompare (GGS_char (utf32 (75)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_c_16785.objectCompare (GGS_char (utf32 (76)))) COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 450)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GGS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message "), fixItArray2  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 451)) ;
            }
          }
        }
      }
      enumerator_16706.gotoNextObject () ;
    }
    enumerator_16569.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForMapAndDict'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_forbiddenKeysForMapAndDict (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 461)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("key")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 461)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("description")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 461)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 461)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = false ;
static GGS_stringset gOnceFunctionResult_forbiddenKeysForMapAndDict ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_forbiddenKeysForMapAndDict (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict) {
    gOnceFunctionResult_forbiddenKeysForMapAndDict = onceFunction_forbiddenKeysForMapAndDict (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForMapAndDict ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForMapAndDict (void) {
  gOnceFunctionResult_forbiddenKeysForMapAndDict.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForMapAndDict (nullptr,
                                                                      releaseOnceFunctionResult_forbiddenKeysForMapAndDict) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_forbiddenKeysForMapAndDict [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_forbiddenKeysForMapAndDict (Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GGS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForMapAndDict (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForMapAndDict ("forbiddenKeysForMapAndDict",
                                                                            functionWithGenericHeader_forbiddenKeysForMapAndDict,
                                                                            & kTypeDescriptor_GALGAS_stringset,
                                                                            0,
                                                                            functionArgs_forbiddenKeysForMapAndDict) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dictDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument_inProductDirectory */,
                                                       const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_keyType_17839 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mKeyTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 476)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_keyType_17839, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 477)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-dict.galgas", 477)) COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 477)).operator_not (SOURCE_FILE ("declaration-type-dict.galgas", 477)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_dictDeclarationAST temp_2 = this ;
      const GGS_dictDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mKeyTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 478)).add_operation (GGS_string (" type is not comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 478)), fixItArray4  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 478)) ;
    }
  }
  const GGS_dictDeclarationAST temp_5 = this ;
  GGS_lstring var_nameForUsefulness_18094 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 481)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_18094, var_nameForUsefulness_18094, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 482)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_dictDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_18094  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 484)) ;
    }
  }
  const GGS_dictDeclarationAST temp_8 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_18332 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_8.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 486)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_18094, var_elementTypeNameForUsefulness_18332 COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 489)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_dictDeclarationAST temp_10 = this ;
    test_9 = temp_10.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_elementTypeNameForUsefulness_18332  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 491)) ;
    }
  }
  const GGS_dictDeclarationAST temp_11 = this ;
  GGS_lstring var_initializerNameForUsefulness_18718 = function_initializerNameForUsefulEntitiesGraph (temp_11.readProperty_mDictTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 494)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_18718, var_initializerNameForUsefulness_18718, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 498)) ;
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_dictDeclarationAST temp_13 = this ;
    test_12 = temp_13.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_18718  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 500)) ;
    }
  }
  GGS_typedPropertyList var_typedAttributeList_19119 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_19168 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_dictDeclarationAST temp_14 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_19233 (temp_14.readProperty_mPropertyList ()) ;
  while (enumerator_19233.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_19282 = function_typeNameForUsefulEntitiesGraph (enumerator_19233.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 506)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_18094, var_propertyTypeNameForUsefulness_19282 COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 507)) ;
    }
    GGS_unifiedTypeMapEntry var_t_19484 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_19233.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 508)) ;
    GGS_bool var_hasSetter_19538 = GGS_bool (true) ;
    var_typedAttributeList_19119.addAssignOperation (var_t_19484, enumerator_19233.current_name (HERE), enumerator_19233.current_initialization (HERE), var_hasSetter_19538, enumerator_19233.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 510)) ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 516)).getter_hasKey (enumerator_19233.current_name (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 516)).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_string var_m_19784 = GGS_string ("a property cannot be named:") ;
        UpEnumerator_stringset enumerator_19861 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 518))) ;
        while (enumerator_19861.hasCurrentObject ()) {
          var_m_19784.plusAssignOperation(GGS_string (" ").add_operation (enumerator_19861.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 519)) ;
          enumerator_19861.gotoNextObject () ;
        }
        var_m_19784.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 521)) ;
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_19233.current_name (HERE).readProperty_location (), var_m_19784, fixItArray16  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 522)) ;
      }
    }
    {
    var_attributeMap_19168.setter_insertKey (enumerator_19233.current_name (HERE), var_t_19484, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 524)) ;
    }
    enumerator_19233.gotoNextObject () ;
  }
  const GGS_dictDeclarationAST temp_17 = this ;
  GGS_lstring var_elementTypeName_20069 = function_makeEmbeddedElementTypeLName (temp_17.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 527)) ;
  GGS_lstring var_optionalElementTypeName_20144 = function_makeOptionalTypeLName (var_elementTypeName_20069, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 528)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_20231 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_optionalElementTypeName_20144, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 529)) ;
  const GGS_dictDeclarationAST temp_18 = this ;
  const GGS_dictDeclarationAST temp_19 = this ;
  const GGS_dictDeclarationAST temp_20 = this ;
  const GGS_dictDeclarationAST temp_21 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("dict ").add_operation (temp_18.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 532)), GGS_dictTypeForGeneration::init_21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_19.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 534)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_elementTypeName_20069, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 535)), temp_20.readProperty_mDictTypeName (), var_typedAttributeList_19119, temp_21.readProperty_mKeyTypeName (), var_optionalElementTypeEntry_20231, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 531)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dictTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                               GGS_string & outArgument_outHeader,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 558)) ;
  const GGS_dictTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_1.readProperty_mOptionalElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 559)) ;
  const GGS_dictTypeForGeneration temp_2 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_21599 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 560)) ;
  const GGS_dictTypeForGeneration temp_3 = this ;
  const GGS_dictTypeForGeneration temp_4 = this ;
  const GGS_dictTypeForGeneration temp_5 = this ;
  const GGS_dictTypeForGeneration temp_6 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_dictGenerationTemplate_dictTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21599.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 563)), temp_4.readProperty_mTypedAttributeList (), var_selfTypeDefinition_21599.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_21599.readProperty_typeForEnumeratedElement (), temp_5.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-dict.galgas", 567)), extensionGetter_identifierRepresentation (temp_6.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 568)) COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 561))) ;
  const GGS_dictTypeForGeneration temp_7 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_21599.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_7.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 572)), var_selfTypeDefinition_21599.readProperty_isConcrete (), var_selfTypeDefinition_21599.readProperty_initializerMap (), var_selfTypeDefinition_21599.readProperty_classFunctionMap (), var_selfTypeDefinition_21599.readProperty_getterMap (), var_selfTypeDefinition_21599.readProperty_setterMap (), var_selfTypeDefinition_21599.readProperty_instanceMethodMap (), var_selfTypeDefinition_21599.readProperty_classMethodMap (), var_selfTypeDefinition_21599.readProperty_readSubscriptMap (), var_selfTypeDefinition_21599.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_21599.readProperty_features (), var_selfTypeDefinition_21599.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_21599.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_21599.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 570))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 570)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dictTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_string & outArgument_outImplementation,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_dictTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 595)) ;
  const GGS_dictTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_23250 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 596)) ;
  const GGS_dictTypeForGeneration temp_2 = this ;
  const GGS_dictTypeForGeneration temp_3 = this ;
  const GGS_dictTypeForGeneration temp_4 = this ;
  const GGS_dictTypeForGeneration temp_5 = this ;
  const GGS_dictTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_dictGenerationTemplate_dictTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 598)), temp_3.readProperty_mTypedAttributeList (), var_selfTypeDefinition_23250.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_23250.readProperty_typeForEnumeratedElement (), temp_4.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-dict.galgas", 602)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_23250.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 603)), extensionGetter_identifierRepresentation (temp_5.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 604)), extensionGetter_identifierRepresentation (temp_6.readProperty_mOptionalElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 605)) COMMA_SOURCE_FILE ("declaration-type-dict.galgas", 597))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'dictGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_dictGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_dictGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_dictGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_dictGenerationTemplate_0,
  0,
  gWrapperAllDirectories_dictGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'dictGenerationTemplate dictTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_dictGenerationTemplate_dictTypeHeader_31_ (Compiler * inCompiler,
                                                                          const GGS_string & in_TYPE_5F_NAME,
                                                                          const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                          const GGS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                          const GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                          const GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                          const GGS_string & in_KEY_5F_TYPE_5F_IDENTIFIER,
                                                                          const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 2)).add_operation (GGS_string (" dictionary enumerator"), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n#include \"GALGAS_GenericDictionary.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: inline void gotoNextObject (void) { mIndex -= 1 ; }\n\n") ;
  GGS_uint index_767_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_767 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_767.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_767.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 18)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_767.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 18)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const ;\n\n") ;
      enumerator_767.gotoNextObject () ;
      index_767_.increment () ;
    }
  }
  result.appendString ("\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 24)).stringValue ()) ;
  result.appendString (" current (UNUSED_LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> mInfoArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand)  ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }\n\n  public: inline void gotoNextObject (void) { mIndex += 1 ; }\n\n") ;
  GGS_uint index_1944_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_1944 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_1944.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1944.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_1944.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const ;\n") ;
      enumerator_1944.gotoNextObject () ;
      index_1944_.increment () ;
    }
  }
  result.appendString ("//--- Current element access\n  public: class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 50)).stringValue ()) ;
  result.appendString (" current (UNUSED_LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> mInfoArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 62)).add_operation (GGS_string (" dict"), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 62)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public GenericDictionary <GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (", GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> {\n\n//--------------------------------- Virtual destructor\n  public: virtual ~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n//--------------------------------- Build\n  protected: static GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" builtDictionary (LOCATION_ARGS) ;\n\n//--------------------------------- Implementation of reader 'description'\n  public: VIRTUAL_IN_DEBUG void description (String & ioString,\n                                             const int32_t inIndentation) const override ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'dictGenerationTemplate dictTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_dictGenerationTemplate_dictTypeSpecificImplementation (Compiler * inCompiler,
                                                                                      const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                      const GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                      const GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                                      const GGS_string & in_KEY_5F_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_bool & /* in_GENERATE_5F_COMPARISON */,
                                                                                      const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_string & in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::builtDictionary (LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.build (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyDict (LOCATION_ARGS) {\n  return GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::builtDictionary (THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  return GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::builtDictionary (THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                          const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<dict @\") ;\n  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  ioString.appendCString (\": \") ;\n  if (isValid ()) {\n    ioString.appendSigned (count ()) ;\n    ioString.appendCString (\" node(s)\") ;\n  }else{\n    ioString.appendCString (\"not built\") ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GGS_uint result ;\n  if (isValid ()) {\n    result = GGS_uint (uint32_t (count ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::\nreadSubscript__3F_ (const class GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey,\n                    Compiler * /* inCompiler */\n                    COMMA_UNUSED_LOCATION_ARGS) const {\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> object = infoForKey (inKey) ;\n    if (object.isNotNil ()) {\n      return GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (object.value ()) ;\n    }else{\n      return GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init_nil () ;\n    }\n  }else{\n    return GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusPlusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inValue.mProperty_key.isValid ()) {\n    insertOrReplace (inValue.mProperty_key, inValue COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey") ;
  GGS_uint index_3010_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3010 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_3010.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_3010.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 78)).stringValue ()) ;
      result.appendString (" & inArgument") ;
      result.appendString (index_3010_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 78)).stringValue ()) ;
      enumerator_3010.gotoNextObject () ;
      index_3010_IDX.increment () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (inKey") ;
  GGS_uint index_3277_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3277 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_3277.hasCurrentObject ()) {
      result.appendString (", inArgument") ;
      result.appendString (index_3277_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 84)).stringValue ()) ;
      enumerator_3277.gotoNextObject () ;
      index_3277_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  if (isValid () && inKey.isValid ()) {\n    insertOrReplace (inKey, newElement COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey") ;
  GGS_uint index_3668_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3668 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_3668.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_3668.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 96)).stringValue ()) ;
      result.appendString (" inArgument") ;
      result.appendString (index_3668_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 96)).stringValue ()) ;
      enumerator_3668.gotoNextObject () ;
      index_3668_IDX.increment () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (inKey") ;
  GGS_uint index_3933_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3933 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_3933.hasCurrentObject ()) {
      result.appendString (", inArgument") ;
      result.appendString (index_3933_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 102)).stringValue ()) ;
      enumerator_3933.gotoNextObject () ;
      index_3933_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  if (isValid () && inKey.isValid ()) {\n    insertOrReplace (inKey, newElement COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_hasKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inKey\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    result = GGS_bool (hasKey (inKey)) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_searchKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey") ;
  GGS_uint index_4687_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4687 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_4687.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4687.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 125)).stringValue ()) ;
      result.appendString (" & outArgument") ;
      result.appendString (index_4687_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 125)).stringValue ()) ;
      enumerator_4687.gotoNextObject () ;
      index_4687_IDX.increment () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> object = infoForKey (inKey) ;\n    if (object.isNil ()) {\n    //--- Build error message\n      const String message = \"cannot search in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    //--- Drop out arguments\n") ;
  GGS_uint index_5299_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5299 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5299.hasCurrentObject ()) {
      result.appendString ("      outArgument") ;
      result.appendString (index_5299_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 139)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_5299.gotoNextObject () ;
      index_5299_IDX.increment () ;
    }
  }
  result.appendString ("    }else{\n") ;
  GGS_uint index_5424_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5424 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5424.hasCurrentObject ()) {
      result.appendString ("      outArgument") ;
      result.appendString (index_5424_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 144)).stringValue ()) ;
      result.appendString (" = object->mProperty_") ;
      result.appendString (enumerator_5424.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 144)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_5424.gotoNextObject () ;
      index_5424_IDX.increment () ;
    }
  }
  result.appendString ("    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GGS_") ;
  result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inKey") ;
  GGS_uint index_5801_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5801 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5801.hasCurrentObject ()) {
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_5801.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 153)).stringValue ()) ;
      result.appendString (" & outArgument") ;
      result.appendString (index_5801_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 153)).stringValue ()) ;
      enumerator_5801.gotoNextObject () ;
      index_5801_IDX.increment () ;
    }
  }
  result.appendString (",\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> removedObject\n                    = removeAndReturnRemovedInfo (inKey COMMA_THERE) ;\n    if (removedObject.isNil ()) { // Not found\n    //--- Build error message\n      const String message = \"cannot remove in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    //--- Drop output arguments\n") ;
  GGS_uint index_6485_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6485 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_6485.hasCurrentObject ()) {
      result.appendString ("      outArgument") ;
      result.appendString (index_6485_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 168)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_6485.gotoNextObject () ;
      index_6485_IDX.increment () ;
    }
  }
  result.appendString ("    }else{\n    //--- Assign output arguments\n") ;
  GGS_uint index_6644_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6644 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_6644.hasCurrentObject ()) {
      result.appendString ("      outArgument") ;
      result.appendString (index_6644_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 174)).stringValue ()) ;
      result.appendString (" = removedObject->mProperty_") ;
      result.appendString (enumerator_6644.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 174)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_6644.gotoNextObject () ;
      index_6644_IDX.increment () ;
    }
  }
  result.appendString ("    }\n  }\n}\n\n") ;
  GGS_uint index_6844_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6844 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_6844.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6844.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 182)).stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_6844.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 182)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GGS_") ;
      result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" & inKey,\n                                                 ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                                                 ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6844.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 185)).stringValue ()) ;
      result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("> object = infoForKey (inKey) ;\n    if (object.isNil ()) { // Not found\n    //--- Build error message\n      const String message = \"cannot get ") ;
      result.appendString (enumerator_6844.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 190)).stringValue ()) ;
      result.appendString (" ForKey in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      result = object->mProperty_") ;
      result.appendString (enumerator_6844.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 194)).stringValue ()) ;
      result.appendString (" ;\n    }\n  }\n  return result ;\n}\n") ;
      enumerator_6844.gotoNextObject () ;
      index_6844_.increment () ;
    }
  }
  GGS_uint index_7987_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7987 (in_CURRENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_7987.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_set") ;
      result.appendString (enumerator_7987.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 203)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 203)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7987.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 203)).stringValue ()) ;
      result.appendString (" inPropertyValue,\n                             ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GGS_") ;
      result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" inKey,\n                             ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n                             ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    OptionalSharedRef <GenericDictionaryNode <GGS_") ;
      result.appendString (in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (", GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (">> modifiedNode = nodeForKey (inKey) ;\n    if (modifiedNode.isNil ()) { // Not found\n    //--- Build error message\n     const String message = \"cannot set") ;
      result.appendString (enumerator_7987.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 211)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 211)).stringValue ()) ;
      result.appendString ("ForKey in dict: the key does not exist\" ;\n    //--- Emit error message\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      modifiedNode->mSharedInfo->mProperty_") ;
      result.appendString (enumerator_7987.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 215)).stringValue ()) ;
      result.appendString (" = inPropertyValue ;\n    }\n  }\n}\n\n") ;
      enumerator_7987.gotoNextObject () ;
      index_7987_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n// Up Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nUpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmInfoArray (inOperand.sortedInfoArray ()),\nmIndex (0) {\n}\n\n") ;
  GGS_uint index_9602_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_9602 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_9602.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9602.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 234)).stringValue ()) ;
      result.appendString (" UpEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_9602.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 234)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_HERE)->mProperty_") ;
      result.appendString (enumerator_9602.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 235)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_9602.gotoNextObject () ;
      index_9602_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 242)).stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (UNUSED_LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_HERE).value () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n// Down Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nDownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand) :\nmInfoArray (inOperand.sortedInfoArray ()),\nmIndex () {\n  mIndex = mInfoArray.count () - 1 ;\n}\n\n") ;
  GGS_uint index_10802_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_10802 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_10802.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_10802.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 259)).stringValue ()) ;
      result.appendString (" DownEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_10802.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 259)).stringValue ()) ;
      result.appendString (" (UNUSED_LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_HERE)->mProperty_") ;
      result.appendString (enumerator_10802.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 260)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_10802.gotoNextObject () ;
      index_10802_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 268)).stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (UNUSED_LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_HERE).value () ;\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@mapDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_mapDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_mapDeclarationAST temp_0 = this ;
  result_result = GGS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 331)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@mapDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_structAttributeList_12207 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_structAttributeList_12207.addAssignOperation (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-map.galgas", 339)), GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 340)), GGS_string ("lkey").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 341)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-map.galgas", 342)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-map.galgas", 344))  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 338)) ;
  const GGS_mapDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_12508 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_12508.hasCurrentObject ()) {
    var_structAttributeList_12207.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-type-map.galgas", 347)), enumerator_12508.current_typeName (HERE), enumerator_12508.current_name (HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-map.galgas", 350)), enumerator_12508.current_hasSelector (HERE), enumerator_12508.current_initialization (HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 346)) ;
    enumerator_12508.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeName_12778 = function_makeEmbeddedElementTypeLName (temp_1.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 354)) ;
  const GGS_mapDeclarationAST temp_2 = this ;
  const GGS_mapDeclarationAST temp_3 = this ;
  GGS_structComparison temp_4 ;
  const GalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_5) {
    temp_4 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-map.galgas", 360)) ;
  }else if (GalgasBool::boolFalse == test_5) {
    temp_4 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-map.galgas", 360)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_2.readProperty_isPredefined (), var_elementTypeName_12778, var_structAttributeList_12207, GGS_string::makeEmptyString (), temp_4, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 355)) ;
  {
  GGS_lstring joker_13210 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_13210, var_elementTypeName_12778, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 364)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@mapDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                             GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                             GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                             GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                             GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                             GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapDeclarationAST temp_0 = this ;
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_key_13989 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 377)), temp_1.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_13989, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 378)) ;
  }
  const GGS_mapDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_14145 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_14145.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_14145.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 380)), enumerator_14145.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-map.galgas", 380)) ;
    }
    enumerator_14145.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@mapDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                       const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                       const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeIndex_15011 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringTypeIndex_15011, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 396)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringTypeIndex_15108 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("lstring"), var_lstringTypeIndex_15108, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 398)) ;
  }
  GGS_enumerationDescriptorList temp_0 = GGS_enumerationDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 400)) ;
  temp_0.plusPlusAssignOperation (GGS_enumerationDescriptorList_2E_element::init_21__21_ (var_lstringTypeIndex_15108, GGS_string ("lkey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 400)) ;
  GGS_enumerationDescriptorList var_enumerationDescriptor_15193 = temp_0 ;
  GGS_classFunctionMap var_classFunctionMap_15282 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_getterMap var_getterMap_15365 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_15365, inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 403)) ;
  }
  GGS_setterMap var_setterMap_15395 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_15438 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_1 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_15282, ioArgument_ioTypeMap, GGS_string ("emptyMap"), temp_1.readProperty_mMapTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 407)) ;
  }
  {
  const GGS_mapDeclarationAST temp_2 = this ;
  const GGS_mapDeclarationAST temp_3 = this ;
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_15282, ioArgument_ioTypeMap, GGS_string ("mapWithMapToOverride"), temp_2.readProperty_mMapTypeName ().readProperty_string (), GGS_string ("inMap"), temp_3.readProperty_mMapTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 414)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("levels"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 424)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("hasKeyAtLevel"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("uint"), GGS_string ("inLevel"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 432)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("keySet"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 443)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("keyList"), GGS_string::makeEmptyString (), GGS_string ("lstringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 451)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("hasKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 459)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("locationForKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 468)) ;
  }
  {
  const GGS_mapDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("overriddenMap"), GGS_string::makeEmptyString (), temp_4.readProperty_mMapTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 477)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 485)) ;
  }
  GGS_formalParameterSignature var_insertMethodFormalArgumentList_17705 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_typedPropertyList_17775 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_optionalMethodSignature var_optionalMethodSignature_17850 = GGS_optionalMethodSignature::init (inCompiler COMMA_HERE) ;
  var_optionalMethodSignature_17850.addAssignOperation (GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 499)), var_stringTypeIndex_15011, GGS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 497)) ;
  GGS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_18007 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_18007.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 504)), var_lstringTypeIndex_15108, GGS_string ("lkey"), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 503)) ;
  var_insertMethodFormalArgumentList_17705.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 509)), var_lstringTypeIndex_15108, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 511)), GGS_string ("inLKey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 508)) ;
  GGS_formalParameterSignature var_removeMethodFormalArgumentList_18382 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_removeMethodFormalArgumentList_18382.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 515)), var_lstringTypeIndex_15108, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 517)), GGS_string ("inLKey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 514)) ;
  GGS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_18606 = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_5 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_18702 (temp_5.readProperty_mPropertyList ()) ;
  while (enumerator_18702.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = enumerator_18702.current_initialization (HERE).getter_isSome (SOURCE_FILE ("declaration-type-map.galgas", 521)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_18702.current_name (HERE).readProperty_location (), GGS_string ("property initialization is not handled for a map"), fixItArray7  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 522)) ;
      }
    }
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_18924 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18702.current_typeName (HERE), var_attributeTypeIndex_18924, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 524)) ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_18007.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 525)), var_attributeTypeIndex_18924, enumerator_18702.current_name (HERE).readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 525)) ;
    var_typedPropertyList_17775.addAssignOperation (var_attributeTypeIndex_18924, enumerator_18702.current_name (HERE), enumerator_18702.current_initialization (HERE), GGS_bool (true), enumerator_18702.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 526)) ;
    var_typesToIncludeInHeaderCompilation_18606.addAssignOperation (var_attributeTypeIndex_18924  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 527)) ;
    var_enumerationDescriptor_15193.addAssignOperation (var_attributeTypeIndex_18924, enumerator_18702.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 528)) ;
    GGS_lstring temp_8 ;
    const GalgasBool test_9 = enumerator_18702.current_hasSelector (HERE).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      temp_8 = enumerator_18702.current_name (HERE) ;
    }else if (GalgasBool::boolFalse == test_9) {
      temp_8 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 530)) ;
    }
    var_insertMethodFormalArgumentList_17705.addAssignOperation (temp_8, var_attributeTypeIndex_18924, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 532)), enumerator_18702.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 529)) ;
    GGS_lstring temp_10 ;
    const GalgasBool test_11 = enumerator_18702.current_hasSelector (HERE).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      temp_10 = enumerator_18702.current_name (HERE) ;
    }else if (GalgasBool::boolFalse == test_11) {
      temp_10 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 535)) ;
    }
    var_removeMethodFormalArgumentList_18382.addAssignOperation (temp_10, var_attributeTypeIndex_18924, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-map.galgas", 537)), enumerator_18702.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 534)) ;
    GGS_lstring temp_12 ;
    const GalgasBool test_13 = enumerator_18702.current_hasSelector (HERE).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      temp_12 = enumerator_18702.current_name (HERE) ;
    }else if (GalgasBool::boolFalse == test_13) {
      temp_12 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 541)) ;
    }
    var_optionalMethodSignature_17850.addAssignOperation (GGS_bool (false), temp_12, var_attributeTypeIndex_18924, enumerator_18702.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 539)) ;
    enumerator_18702.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_14 = this ;
  UpEnumerator_insertSetterListAST enumerator_19939 (temp_14.readProperty_mInsertSetterList ()) ;
  while (enumerator_19939.hasCurrentObject ()) {
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = var_setterMap_15395.getter_hasKey (enumerator_19939.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 547)).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_19939.current_mInsertMethodName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_19939.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 548)).add_operation (GGS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 548)), fixItArray16  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 548)) ;
      }
    }
    if (GalgasBool::boolFalse == test_15) {
      {
      var_setterMap_15395.setter_insertOrReplace (enumerator_19939.current_mInsertMethodName (HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 552)), var_insertMethodFormalArgumentList_17705, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 555)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 550)) ;
      }
    }
    enumerator_19939.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_17 = this ;
  GGS_lstring var_elementTypeName_20390 = function_makeEmbeddedElementTypeLName (temp_17.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 561)) ;
  GGS_unifiedTypeMapEntry var_elementTypeEntry_20540 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_elementTypeName_20390, var_elementTypeEntry_20540, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 562)) ;
  }
  const GGS_mapDeclarationAST temp_18 = this ;
  UpEnumerator_mapAccessorListAST enumerator_20616 (temp_18.readProperty_mReplaceSetterList ()) ;
  while (enumerator_20616.hasCurrentObject ()) {
    GGS_formalParameterSignature temp_19 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 569)) ;
    temp_19.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("with").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 569)), var_elementTypeEntry_20540, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 569)), GGS_string ("inEntry"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 569)) ;
    GGS_formalParameterSignature var_replaceSetterFormalArgumentList_20674 = temp_19 ;
    {
    var_setterMap_15395.setter_insertOrReplace (enumerator_20616.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 573)), var_replaceSetterFormalArgumentList_20674, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 576)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 571)) ;
    }
    enumerator_20616.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_20 = this ;
  UpEnumerator_mapAccessorListAST enumerator_21030 (temp_20.readProperty_mRemoveSetterList ()) ;
  while (enumerator_21030.hasCurrentObject ()) {
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = var_setterMap_15395.getter_hasKey (enumerator_21030.current (HERE).readProperty_mName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 582)).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_21030.current (HERE).readProperty_mName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_21030.current (HERE).readProperty_mName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 584)).add_operation (GGS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 584)), fixItArray22  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 583)) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      {
      var_setterMap_15395.setter_insertOrReplace (enumerator_21030.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 589)), var_removeMethodFormalArgumentList_18382, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 592)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 587)) ;
      }
    }
    enumerator_21030.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_23 = this ;
  UpEnumerator_mapAccessorListAST enumerator_21569 (temp_23.readProperty_mSearchMethodList ()) ;
  while (enumerator_21569.hasCurrentObject ()) {
    {
    var_instanceMethodMap_15438.setter_insertKey (enumerator_21569.current_mName (HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 601)), var_removeMethodFormalArgumentList_18382, enumerator_21569.current_mName (HERE).readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 605)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 599)) ;
    }
    enumerator_21569.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_24 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_21912 (temp_24.readProperty_mPropertyList ()) ;
  while (enumerator_21912.hasCurrentObject ()) {
    GGS_lstring var_accessorName_21939 = GGS_lstring::init_21__21_ (enumerator_21912.current (HERE).readProperty_name ().readProperty_string ().add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 611)), enumerator_21912.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_22075 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_21912.current (HERE).readProperty_typeName (), var_attributeTypeIndex_22075, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 612)) ;
    }
    {
    GGS_functionSignature temp_25 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 616)) ;
    temp_25.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 616)), var_stringTypeIndex_15011, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 616)) ;
    var_getterMap_15365.setter_insertOrReplace (var_accessorName_21939, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 615)), temp_25, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 617)), GGS_bool (true), var_attributeTypeIndex_22075, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 620)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 613)) ;
    }
    enumerator_21912.gotoNextObject () ;
  }
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    const GGS_mapDeclarationAST temp_27 = this ;
    test_26 = GGS_bool (ComparisonKind::greaterOrEqual, temp_27.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("declaration-type-map.galgas", 625)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      GGS_location var_insertOrReplaceLocation_22583 ;
      const GGS_mapDeclarationAST temp_28 = this ;
      temp_28.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceLocation_22583, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 626)) ;
      {
      var_setterMap_15395.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insertOrReplace"), var_insertOrReplaceLocation_22583, inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 629)), var_insertMethodFormalArgumentList_17705, GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 632)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 627)) ;
      }
    }
  }
  const GGS_mapDeclarationAST temp_29 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_22955 (temp_29.readProperty_mPropertyList ()) ;
  while (enumerator_22955.hasCurrentObject ()) {
    GGS_lstring var_accessorName_22982 = GGS_lstring::init_21__21_ (GGS_string ("set").add_operation (enumerator_22955.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-map.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 639)).add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 639)), enumerator_22955.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_23216 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_22955.current (HERE).readProperty_typeName (), var_attributeTypeIndex_23216, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 642)) ;
    }
    GGS_formalParameterSignature var_accessorFormalArgumentList_23279 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    var_accessorFormalArgumentList_23279.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 647)), var_attributeTypeIndex_23216, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 647)), enumerator_22955.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 647)) ;
    var_accessorFormalArgumentList_23279.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 648)), var_stringTypeIndex_15011, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 648)), GGS_string ("key")  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 648)) ;
    {
    var_setterMap_15395.setter_insertOrReplace (var_accessorName_22982, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 651)), var_accessorFormalArgumentList_23279, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 654)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 649)) ;
    }
    enumerator_22955.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_23811 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_23859 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_30 = this ;
  var_initializerMap_23811.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_23859, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 662)), temp_30.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_23859, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 661)) ;
  }
  GGS_typeFeatures var_features_24042 = GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("declaration-type-map.galgas", 666)).operator_or (GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-map.galgas", 667)) COMMA_SOURCE_FILE ("declaration-type-map.galgas", 666)) ;
  GalgasBool test_31 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_31) {
    const GGS_mapDeclarationAST temp_32 = this ;
    test_31 = temp_32.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_31) {
      var_features_24042.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-map.galgas", 669)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 669)) ;
    }
  }
  {
  const GGS_mapDeclarationAST temp_33 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_33.readProperty_mMapTypeName (), var_features_24042, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 671)) ;
  }
  {
  const GGS_mapDeclarationAST temp_34 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_34.readProperty_mMapTypeName (), GGS_bool (false), var_initializerMap_23811, var_getterMap_15365, var_setterMap_15395, var_instanceMethodMap_15438, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 679)) ;
  }
  GGS_lstring var_optionalElementTypeName_24889 = function_makeOptionalTypeLName (var_elementTypeName_20390, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 695)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_25060 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_optionalElementTypeName_24889, var_optionalElementTypeEntry_25060, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 696)) ;
  }
  GGS_subscriptMap var_readSubscriptMap_25137 = GGS_subscriptMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature temp_35 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 702)) ;
  temp_35.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 702)), var_stringTypeIndex_15011, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 702)) ;
  GGS_functionSignature var_argumentTypeList_25187 = temp_35 ;
  {
  var_readSubscriptMap_25137.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_argumentTypeList_25187, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 704)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 704)), inCompiler COMMA_HERE), var_argumentTypeList_25187, var_optionalElementTypeEntry_25060, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 703)) ;
  }
  const GGS_mapDeclarationAST temp_36 = this ;
  UpEnumerator_mapAccessorListAST enumerator_25437 (temp_36.readProperty_mSearchSubscriptList ()) ;
  while (enumerator_25437.hasCurrentObject ()) {
    GGS_functionSignature temp_37 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 709)) ;
    temp_37.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (enumerator_25437.current_mName (HERE), var_lstringTypeIndex_15108, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 709)) ;
    GGS_functionSignature var_subscriptArgumentTypeList_25502 = temp_37 ;
    {
    var_readSubscriptMap_25137.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_subscriptArgumentTypeList_25502, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 711)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 711)), inCompiler COMMA_HERE), var_subscriptArgumentTypeList_25502, var_elementTypeEntry_20540, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 710)) ;
    }
    enumerator_25437.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_38 = this ;
  const GGS_mapDeclarationAST temp_39 = this ;
  const GGS_mapDeclarationAST temp_40 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_25803 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_38.readProperty_mMapTypeName (), temp_39.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-map.galgas", 722)), GGS_typeKindEnum::class_func_mapType (SOURCE_FILE ("declaration-type-map.galgas", 723)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), var_typedPropertyList_17775, var_initializerMap_23811, var_classFunctionMap_15282, var_getterMap_15365, var_setterMap_15395, var_instanceMethodMap_15438, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-map.galgas", 734)), var_readSubscriptMap_25137, var_enumerationDescriptor_15193, var_features_24042, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_elementTypeEntry_20540, GGS_string ("map-").add_operation (temp_40.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-map.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 741)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-map.galgas", 742)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_25803.readProperty_typeName (), var_typeDefinition_25803, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 744)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@mapDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      const GGS_string /* constinArgument_inProductDirectory */,
                                                      const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                      GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_27507 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 759)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_27507, var_nameForUsefulness_27507, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 760)) ;
  }
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_27663 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_1.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 761)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_27507, var_elementTypeNameForUsefulness_27663 COMMA_SOURCE_FILE ("declaration-type-map.galgas", 764)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_mapDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_27507  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 766)) ;
    }
  }
  const GGS_mapDeclarationAST temp_4 = this ;
  GGS_lstring var_initializerNameForUsefulness_28053 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mMapTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 771)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 769)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_28053, var_initializerNameForUsefulness_28053, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 773)) ;
  }
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_28053, var_nameForUsefulness_27507 COMMA_SOURCE_FILE ("declaration-type-map.galgas", 774)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_mapDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_28053  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 776)) ;
    }
  }
  GGS_typedPropertyList var_typedAttributeList_28566 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_28617 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_7 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_28681 (temp_7.readProperty_mPropertyList ()) ;
  while (enumerator_28681.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_28732 = function_typeNameForUsefulEntitiesGraph (enumerator_28681.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 782)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_27507, var_propertyTypeNameForUsefulness_28732 COMMA_SOURCE_FILE ("declaration-type-map.galgas", 783)) ;
    }
    GGS_unifiedTypeMapEntry var_t_28946 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_28681.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 784)) ;
    GGS_bool var_hasSelector_29010 = GGS_bool (false) ;
    var_typedAttributeList_28566.addAssignOperation (var_t_28946, enumerator_28681.current_name (HERE), enumerator_28681.current_initialization (HERE), GGS_bool (true), var_hasSelector_29010  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 786)) ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 792)).getter_hasKey (enumerator_28681.current_name (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 792)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GGS_string var_m_29270 = GGS_string ("a property cannot be named:") ;
        UpEnumerator_stringset enumerator_29349 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 794))) ;
        while (enumerator_29349.hasCurrentObject ()) {
          var_m_29270.plusAssignOperation(GGS_string (" ").add_operation (enumerator_29349.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 795)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 795)) ;
          enumerator_29349.gotoNextObject () ;
        }
        var_m_29270.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 797)) ;
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_28681.current_name (HERE).readProperty_location (), var_m_29270, fixItArray9  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 798)) ;
      }
    }
    {
    var_attributeMap_28617.setter_insertKey (enumerator_28681.current_name (HERE), var_t_28946, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 800)) ;
    }
    enumerator_28681.gotoNextObject () ;
  }
  GGS_insertMethodMap var_insertMethodMap_29585 = GGS_insertMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_10 = this ;
  UpEnumerator_insertSetterListAST enumerator_29648 (temp_10.readProperty_mInsertSetterList ()) ;
  while (enumerator_29648.hasCurrentObject ()) {
    {
    var_insertMethodMap_29585.setter_insertKey (enumerator_29648.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 805)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_29648.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 806)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters_3F_ (enumerator_29648.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 807)) ;
    }
    enumerator_29648.gotoNextObject () ;
  }
  GGS_searchMethodMap var_searchMethodMap_29923 = GGS_searchMethodMap::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_11 = this ;
  UpEnumerator_mapAccessorListAST enumerator_29972 (temp_11.readProperty_mSearchMethodList ()) ;
  while (enumerator_29972.hasCurrentObject ()) {
    {
    var_searchMethodMap_29923.setter_insertKey (enumerator_29972.current_mName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 812)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_29972.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 813)) ;
    }
    enumerator_29972.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_12 = this ;
  UpEnumerator_mapAccessorListAST enumerator_30178 (temp_12.readProperty_mRemoveSetterList ()) ;
  while (enumerator_30178.hasCurrentObject ()) {
    {
    var_insertMethodMap_29585.setter_insertKey (enumerator_30178.current_mName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 817)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters_3F_ (enumerator_30178.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 818)) ;
    }
    enumerator_30178.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_13 = this ;
  UpEnumerator_insertOrReplaceDeclarationListAST enumerator_30406 (temp_13.readProperty_mInsertOrReplaceDeclarationListAST ()) ;
  GGS_uint index_30401 (uint32_t (0)) ;
  while (enumerator_30406.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::greaterThan, index_30401.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_30406.current_mInsertOrReplaceDeclarationLocation (HERE), GGS_string ("the 'insertOrReplace' setter is already declared"), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 823)) ;
      }
    }
    enumerator_30406.gotoNextObject () ;
    index_30401.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 821)) ;
  }
  const GGS_mapDeclarationAST temp_16 = this ;
  GGS_bool var_hasInsertOrReplaceModifier_30652 = GGS_bool (ComparisonKind::greaterThan, temp_16.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("declaration-type-map.galgas", 826)).objectCompare (GGS_uint (uint32_t (0U)))) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = var_hasInsertOrReplaceModifier_30652.operator_and (var_insertMethodMap_29585.getter_hasKey (GGS_string ("insertOrReplace") COMMA_SOURCE_FILE ("declaration-type-map.galgas", 827)) COMMA_SOURCE_FILE ("declaration-type-map.galgas", 827)).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      GGS_location var_insertOrReplaceDeclarationLocation_30876 ;
      const GGS_mapDeclarationAST temp_18 = this ;
      temp_18.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceDeclarationLocation_30876, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 828)) ;
      GenericArray <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_30876, GGS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray19  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 829)) ;
    }
  }
  const GGS_mapDeclarationAST temp_20 = this ;
  GGS_lstring var_elementTypeName_31139 = function_makeEmbeddedElementTypeLName (temp_20.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 833)) ;
  GGS_unifiedTypeMapEntry var_elementTypeEntry_31215 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_elementTypeName_31139, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 834)) ;
  GGS_lstring var_optionalElementTypeName_31291 = function_makeOptionalTypeLName (var_elementTypeName_31139, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 835)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_31380 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, var_optionalElementTypeName_31291, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 836)) ;
  const GGS_mapDeclarationAST temp_21 = this ;
  const GGS_mapDeclarationAST temp_22 = this ;
  const GGS_mapDeclarationAST temp_23 = this ;
  const GGS_mapDeclarationAST temp_24 = this ;
  const GGS_mapDeclarationAST temp_25 = this ;
  const GGS_mapDeclarationAST temp_26 = this ;
  const GGS_mapDeclarationAST temp_27 = this ;
  const GGS_mapDeclarationAST temp_28 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("map ").add_operation (temp_21.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 839)), GGS_mapTypeForGeneration::init_21__21__21__21__21__21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_22.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 841)), var_elementTypeEntry_31215, temp_23.readProperty_mMapTypeName (), var_typedAttributeList_28566, temp_24.readProperty_mInsertSetterList (), temp_25.readProperty_mSearchMethodList (), temp_26.readProperty_mSearchSubscriptList (), temp_27.readProperty_mRemoveSetterList (), temp_28.readProperty_mReplaceSetterList (), var_hasInsertOrReplaceModifier_30652, var_optionalElementTypeEntry_31380, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 838)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@mapTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                              GGS_string & outArgument_outHeader,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_33158 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 879)) ;
  const GGS_mapTypeForGeneration temp_1 = this ;
  const GGS_mapTypeForGeneration temp_2 = this ;
  const GGS_mapTypeForGeneration temp_3 = this ;
  const GGS_mapTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_mapGenerationTemplate_mapTypeHeader_31_ (inCompiler, var_selfTypeDefinition_33158.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 882)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList (), var_selfTypeDefinition_33158.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_33158.readProperty_typeForEnumeratedElement (), extensionGetter_identifierRepresentation (temp_4.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 887)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_33158.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 888)) COMMA_SOURCE_FILE ("declaration-type-map.galgas", 880))) ;
  const GGS_mapTypeForGeneration temp_5 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_33158.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 892)), var_selfTypeDefinition_33158.readProperty_isConcrete (), var_selfTypeDefinition_33158.readProperty_initializerMap (), var_selfTypeDefinition_33158.readProperty_classFunctionMap (), var_selfTypeDefinition_33158.readProperty_getterMap (), var_selfTypeDefinition_33158.readProperty_setterMap (), var_selfTypeDefinition_33158.readProperty_instanceMethodMap (), var_selfTypeDefinition_33158.readProperty_classMethodMap (), var_selfTypeDefinition_33158.readProperty_readSubscriptMap (), var_selfTypeDefinition_33158.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_33158.readProperty_features (), var_selfTypeDefinition_33158.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_33158.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_33158.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 890))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 890)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@mapTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_string & outArgument_outImplementation,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 914)) ;
  const GGS_mapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mOptionalElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 915)) ;
  const GGS_mapTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 916)) ;
  const GGS_mapTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_34956 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 917)) ;
  const GGS_mapTypeForGeneration temp_4 = this ;
  const GGS_mapTypeForGeneration temp_5 = this ;
  const GGS_mapTypeForGeneration temp_6 = this ;
  const GGS_mapTypeForGeneration temp_7 = this ;
  const GGS_mapTypeForGeneration temp_8 = this ;
  const GGS_mapTypeForGeneration temp_9 = this ;
  const GGS_mapTypeForGeneration temp_10 = this ;
  const GGS_mapTypeForGeneration temp_11 = this ;
  const GGS_mapTypeForGeneration temp_12 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_mapGenerationTemplate_mapTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_34956.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-map.galgas", 919)), temp_4.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (temp_5.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 921)), temp_6.readProperty_mInsertSetterList (), extensionGetter_identifierRepresentation (temp_7.readProperty_mOptionalElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 923)), temp_8.readProperty_mSearchMethodList (), temp_9.readProperty_mSearchSubscriptList (), temp_10.readProperty_mRemoveSetterList (), temp_11.readProperty_mReplaceSetterList (), temp_12.readProperty_mHasInsertOrReplaceModifier (), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_34956.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 929)) COMMA_SOURCE_FILE ("declaration-type-map.galgas", 918))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'mapGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_mapGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_mapGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_mapGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_mapGenerationTemplate_0,
  0,
  gWrapperAllDirectories_mapGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'mapGenerationTemplate mapTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_mapGenerationTemplate_mapTypeHeader_31_ (Compiler * inCompiler,
                                                                        const GGS_string & /* in_TYPE_5F_NAME */,
                                                                        const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                        const GGS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                        const GGS_mapAccessorListAST & /* in_SEARCH_5F_METHOD_5F_LIST */,
                                                                        const GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                        const GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                        const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                        const GGS_bool & in_GENERATE_5F_COMPARISON
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 2)).add_operation (GGS_string (" map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n#include \"SharedGenericPtrWithValueSemantics.h\"\n\ntemplate <typename INFO> class GenericMapRoot ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n\n  public: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inMap) ;\n\n  public: ~ DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: inline void gotoNextObject (void) { mIndex -= 1 ; }\n\n") ;
  GGS_uint index_871_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_871 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_871.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_871.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 23)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_871.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 23)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n\n") ;
      enumerator_871.gotoNextObject () ;
      index_871_.increment () ;
    }
  }
  const GalgasBool test_0 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 25)).operator_not (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 25)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("  public: class GGS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 26)).stringValue ()) ;
    result.appendString (" current (LOCATION_ARGS) const ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> mInfoArray ;\n  private: int32_t mIndex ;\n\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n  public: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inMap)  ;\n\n  public: ~ UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }\n\n  public: inline void gotoNextObject (void) { mIndex += 1 ; }\n\n  public: inline void rewind (void) { mIndex = 0 ; }\n\n") ;
  GGS_uint index_2137_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_2137 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_2137.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_2137.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_2137.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      enumerator_2137.gotoNextObject () ;
      index_2137_.increment () ;
    }
  }
  const GalgasBool test_1 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 53)).operator_not (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 53)).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("  public: class GGS_") ;
    result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 54)).stringValue ()) ;
    result.appendString (" current (LOCATION_ARGS) const ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> mInfoArray ;\n  private: int32_t mIndex ;\n\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n\n//--- Private property\n  private: OptionalSharedRef <GenericMapRoot <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> mSharedRoot ;\n\n//--- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- Virtual destructor\n  public: virtual ~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- Handle copy\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--- Build\n  protected: void build (LOCATION_ARGS) ;\n\n//--- isValid\n  public: bool isValid (void) const override ;\n\n//--- Drop\n  public: void drop (void) override ;\n\n//--- Description\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n") ;
  const GalgasBool test_2 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--- Compare\n  public: ComparisonResult objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const ;\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n//--- performInsert\n  protected: void performInsert (const class GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement,\n                                 const char * inInsertErrorMessage,\n                                 const char * inShadowErrorMessage,\n                                 Compiler * inCompiler\n                                 COMMA_LOCATION_ARGS) ;\n \n//--- infoForKey\n  protected: const SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> infoForKey (const String & inKey) const ;\n \n//--- Count\n  public: int32_t count (void) const ;\n \n//--- sortedInfoArray\n  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> sortedInfoArray (void) const ;\n\n//--- findNearestKey\n  protected: void findNearestKey (const String & inKey,\n                                  GenericUniqueArray <String> & outNearestKeyArray) const ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'mapGenerationTemplate mapTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_mapGenerationTemplate_mapTypeSpecificImplementation (Compiler * inCompiler,
                                                                                    const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const GGS_typedPropertyList & in_PROPERTY_5F_LIST,
                                                                                    const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                    const GGS_insertSetterListAST & in_INSERT_5F_SETTER_5F_LIST,
                                                                                    const GGS_string & in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                    const GGS_mapAccessorListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                    const GGS_mapAccessorListAST & in_SEARCH_5F_SUBSCRIPT_5F_LIST,
                                                                                    const GGS_mapAccessorListAST & in_REMOVE_5F_SETTER_5F_LIST,
                                                                                    const GGS_mapAccessorListAST & in_REPLACE_5F_SETTER_5F_LIST,
                                                                                    const GGS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE,
                                                                                    const GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  Map type @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n#include \"GALGAS_GenericMapRoot.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nmSharedRoot () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nmSharedRoot (inSource.mSharedRoot) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) {\n  mSharedRoot = inSource.mSharedRoot ;\n  return * this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.build (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptyMap (LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.build (THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_hasKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_string & inKey\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_bool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_hasKeyAtLevel (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_string & inKey,\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_uint & inLevel\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_bool result ;\n  if (isValid () && inKey.isValid ()) {\n    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GGS_uint result ;\n  if (isValid ()) {\n    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_levels (UNUSED_LOCATION_ARGS) const {\n  GGS_uint result ;\n  if (isValid ()) {\n    result = GGS_uint (mSharedRoot->levels ()) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_location GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_locationForKey (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_string & inKey,\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_location result ;\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> info = infoForKey (inKey.stringValue ()) ;\n    if (info.isNil ()) {\n      String message = \"'locationForKey' map reader run-time error: the '\" ;\n      message.appendString (inKey.stringValue ()) ;\n      message.appendCString (\"' does not exist in map\") ;\n      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;\n    }else{\n      result = info->mProperty_lkey.mProperty_location ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_lstringlist GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_keyList (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_lstringlist result ;\n  if (isValid ()) {\n    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;\n    mSharedRoot->populateKeyList (result) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mSharedRoot.isNotNil () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void)  {\n  mSharedRoot.setToNil () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::build (LOCATION_ARGS) {\n  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">>::make (THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::performInsert (const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement,\n                                 const char * inInsertErrorMessage,\n                                 const char * inShadowErrorMessage,\n                                 Compiler * inCompiler\n                                 COMMA_LOCATION_ARGS) {\n  if (isValid () && inElement.mProperty_lkey.isValid ()) {\n    OptionalSharedRef <GenericMapNode <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> existingNode ;\n    const bool allowReplacing = false ;\n    mSharedRoot.insulate (THERE) ;\n    mSharedRoot->insertOrReplaceInfo (\n      inElement,\n      allowReplacing,\n      existingNode\n      COMMA_THERE\n    ) ;\n    const GGS_lstring lkey = inElement.mProperty_lkey ;\n    if (existingNode.isNotNil ()) {\n      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;\n      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;\n    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {\n      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;\n      if (existingInfo.isNotNil ()) {\n        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;\n        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;\n      }\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nconst SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::infoForKey (const String & inKey) const {\n  if (mSharedRoot.isNotNil ()) {\n    return mSharedRoot->infoForKey (inKey) ;\n  }else{\n    return SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nint32_t GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::count (void) const  {\n  if (mSharedRoot.isNotNil ()) {\n    return mSharedRoot->count () ;\n  }else{\n    return 0 ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">>\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::sortedInfoArray (void) const {\n  if (mSharedRoot.isNotNil ()) {\n    return mSharedRoot->sortedInfoArray () ;\n  }else{\n    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_stringset GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_keySet (Compiler * inCompiler\n                                                       COMMA_LOCATION_ARGS) const {\n  GGS_stringset result ;\n  if (isValid ()) {\n    result = GGS_stringset::init (inCompiler COMMA_THERE) ;\n    mSharedRoot->populateKeySet (result, inCompiler) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::findNearestKey (const String & inKey,\n                                  GenericUniqueArray <String> & outNearestKeyArray) const {\n  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n::readSubscript__3F_ (const class GGS_string & inKey,\n                      Compiler * /* inCompiler */\n                      COMMA_UNUSED_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> info = infoForKey (inKey.stringValue ()) ;\n    if (info.isNil ()) {\n      result = GGS_") ;
  result.appendString (in_OPTIONAL_5F_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init_nil () ;\n    }else{\n      GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" element ;\n      element.mProperty_lkey = info->mProperty_lkey ;\n") ;
  GGS_uint index_9246_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9246 (in_PROPERTY_5F_LIST) ;
    while (enumerator_9246.hasCurrentObject ()) {
      result.appendString ("      element.mProperty_") ;
      result.appendString (enumerator_9246.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 237)).stringValue ()) ;
      result.appendString (" = info->mProperty_") ;
      result.appendString (enumerator_9246.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 237)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_9246.gotoNextObject () ;
      index_9246_.increment () ;
    }
  }
  result.appendString ("      result = element ;\n    }\n  }\n  return result ;\n}\n\n") ;
  GGS_uint index_9518_ (0) ;
  if (in_SEARCH_5F_SUBSCRIPT_5F_LIST.isValid ()) {
    UpEnumerator_mapAccessorListAST enumerator_9518 (in_SEARCH_5F_SUBSCRIPT_5F_LIST) ;
    while (enumerator_9518.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("\n::readSubscript__3F_") ;
      result.appendString (enumerator_9518.current_mName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 249)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GGS_lstring & inLKey,\n    ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n    ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" result ;\n  if (isValid () && inLKey.isValid ()) {\n    const String key = inLKey.mProperty_string.stringValue () ;\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("> info = infoForKey (key) ;\n    if (info.isNotNil ()) {\n      result = info.value () ;\n    }else{\n      const char * kErrorMessage = ") ;
      result.appendString (enumerator_9518.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 259)).stringValue ()) ;
      result.appendString (" ;\n      GenericUniqueArray <String> nearestKeyArray ;\n      findNearestKey (key, nearestKeyArray) ;\n      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kErrorMessage COMMA_THERE) ;\n    }\n  }\n  return result ;\n}\n\n") ;
      enumerator_9518.gotoNextObject () ;
      index_9518_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_mapWithMapToOverride (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inMapToOverride\n       ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (inMapToOverride.isValid ()) {\n    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_overriddenMap (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid ()) {\n    result.mSharedRoot = mSharedRoot->overriddenRoot () ;\n    if (result.mSharedRoot.isNil ()) {\n      inCompiler->onTheFlySemanticError (\"getter 'overriddenMap': no overriden map\" COMMA_THERE) ;\n    }\n  }\n  return result ;\n}\n\n") ;
  GGS_uint index_11603_ (0) ;
  if (in_INSERT_5F_SETTER_5F_LIST.isValid ()) {
    UpEnumerator_insertSetterListAST enumerator_11603 (in_INSERT_5F_SETTER_5F_LIST) ;
    while (enumerator_11603.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_11603.current_mInsertMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 298)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_lstring inLKey") ;
      GGS_uint index_11865_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_11865 (in_PROPERTY_5F_LIST) ;
        while (enumerator_11865.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_11865.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 300)).stringValue ()) ;
          result.appendString (" inArgument") ;
          result.appendString (index_11865_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 300)).stringValue ()) ;
          enumerator_11865.gotoNextObject () ;
          index_11865_IDX.increment () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n  ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" element (inLKey") ;
      GGS_uint index_12107_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_12107 (in_PROPERTY_5F_LIST) ;
        while (enumerator_12107.hasCurrentObject ()) {
          result.appendString (", inArgument") ;
          result.appendString (index_12107_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 305)).stringValue ()) ;
          enumerator_12107.gotoNextObject () ;
          index_12107_IDX.increment () ;
        }
      }
      result.appendString (") ;\n  const char * kInsertErrorMessage = ") ;
      result.appendString (enumerator_11603.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 306)).stringValue ()) ;
      result.appendString (" ;\n") ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_11603.current_mShadowErrorMessage (HERE).readProperty_string ().getter_count (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 308)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  const char * kShadowErrorMessage = nullptr ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("  const char * kShadowErrorMessage = ") ;
        result.appendString (enumerator_11603.current_mShadowErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 311)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;\n}\n\n") ;
      enumerator_11603.gotoNextObject () ;
      index_11603_.increment () ;
    }
  }
  GGS_uint index_12613_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    UpEnumerator_mapAccessorListAST enumerator_12613 (in_SEARCH_5F_METHOD_5F_LIST) ;
    while (enumerator_12613.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::method_") ;
      result.appendString (enumerator_12613.current_mName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 321)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_lstring inLKey") ;
      GGS_uint index_12920_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_12920 (in_PROPERTY_5F_LIST) ;
        while (enumerator_12920.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_12920.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 323)).stringValue ()) ;
          result.appendString (" & outArgument") ;
          result.appendString (index_12920_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 323)).stringValue ()) ;
          enumerator_12920.gotoNextObject () ;
          index_12920_IDX.increment () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n       ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("> info ;\n  if (isValid () && inLKey.isValid ()) {\n    const String key = inLKey.mProperty_string.stringValue () ;\n    info = infoForKey (key) ;\n    if (info.isNil ()) {\n      GenericUniqueArray <String> nearestKeyArray ;\n      findNearestKey (key, nearestKeyArray) ;\n      const char * kSearchErrorMessage = ") ;
      result.appendString (enumerator_12613.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 334)).stringValue ()) ;
      result.appendString (" ;\n      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;\n    }\n  }\n  if (info.isNil ()) {\n") ;
      GGS_uint index_13700_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_13700 (in_PROPERTY_5F_LIST) ;
        while (enumerator_13700.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_13700_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 340)).stringValue ()) ;
          result.appendString (".drop () ;\n") ;
          enumerator_13700.gotoNextObject () ;
          index_13700_IDX.increment () ;
        }
      }
      result.appendString ("  }else{\n") ;
      GGS_uint index_13817_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_13817 (in_PROPERTY_5F_LIST) ;
        while (enumerator_13817.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_13817_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 344)).stringValue ()) ;
          result.appendString (" = info->mProperty_") ;
          result.appendString (enumerator_13817.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 344)).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_13817.gotoNextObject () ;
          index_13817_IDX.increment () ;
        }
      }
      result.appendString ("  }\n}\n") ;
      enumerator_12613.gotoNextObject () ;
      index_12613_.increment () ;
    }
  }
  GGS_uint index_13999_ (0) ;
  if (in_REMOVE_5F_SETTER_5F_LIST.isValid ()) {
    UpEnumerator_mapAccessorListAST enumerator_13999 (in_REMOVE_5F_SETTER_5F_LIST) ;
    while (enumerator_13999.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_13999.current_mName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 353)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_lstring inLKey") ;
      GGS_uint index_14268_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_14268 (in_PROPERTY_5F_LIST) ;
        while (enumerator_14268.hasCurrentObject ()) {
          result.appendString (",\n") ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result.appendString ("GGS_") ;
          result.appendString (extensionGetter_identifierRepresentation (enumerator_14268.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 355)).stringValue ()) ;
          result.appendString (" & outArgument") ;
          result.appendString (index_14268_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 355)).stringValue ()) ;
          enumerator_14268.gotoNextObject () ;
          index_14268_IDX.increment () ;
        }
      }
      result.appendString (",\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("> info ;\n  if (isValid () && inLKey.isValid ()) {\n    const char * kRemoveErrorMessage = ") ;
      result.appendString (enumerator_13999.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 361)).stringValue ()) ;
      result.appendString (" ;\n    const String key = inLKey.mProperty_string.stringValue () ;\n    mSharedRoot.insulate (THERE) ;\n    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;\n    if (info.isNil ()) {\n      GenericUniqueArray <String> nearestKeyArray ;\n      findNearestKey (key, nearestKeyArray) ;\n      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;\n    }\n  }\n  if (info.isNil ()) {\n") ;
      GGS_uint index_15108_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_15108 (in_PROPERTY_5F_LIST) ;
        while (enumerator_15108.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_15108_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 373)).stringValue ()) ;
          result.appendString (".drop () ;\n") ;
          enumerator_15108.gotoNextObject () ;
          index_15108_IDX.increment () ;
        }
      }
      result.appendString ("  }else{\n") ;
      GGS_uint index_15225_IDX (0) ;
      if (in_PROPERTY_5F_LIST.isValid ()) {
        UpEnumerator_typedPropertyList enumerator_15225 (in_PROPERTY_5F_LIST) ;
        while (enumerator_15225.hasCurrentObject ()) {
          result.appendString ("    outArgument") ;
          result.appendString (index_15225_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 377)).stringValue ()) ;
          result.appendString (" = info->mProperty_") ;
          result.appendString (enumerator_15225.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 377)).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_15225.gotoNextObject () ;
          index_15225_IDX.increment () ;
        }
      }
      result.appendString ("  }\n}\n") ;
      enumerator_13999.gotoNextObject () ;
      index_13999_.increment () ;
    }
  }
  GGS_uint index_15409_ (0) ;
  if (in_REPLACE_5F_SETTER_5F_LIST.isValid ()) {
    UpEnumerator_mapAccessorListAST enumerator_15409 (in_REPLACE_5F_SETTER_5F_LIST) ;
    while (enumerator_15409.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_") ;
      result.appendString (enumerator_15409.current_mName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 388)).stringValue ()) ;
      result.appendString (" (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" inElement,\n       ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n       ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inElement.isValid ()) {\n    const char * kReplaceErrorMessage = ") ;
      result.appendString (enumerator_15409.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 392)).stringValue ()) ;
      result.appendString (" ;\n    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;\n    mSharedRoot.insulate (HERE) ;\n    OptionalSharedRef <GenericMapNode <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (">> node = mSharedRoot->searchNode (key) ;\n    if (node.isNil ()) {\n      GenericUniqueArray <String> nearestKeyArray ;\n      findNearestKey (key, nearestKeyArray) ;\n      inCompiler->semanticErrorWith_K_message (\n        inElement.mProperty_lkey,\n        nearestKeyArray,\n        kReplaceErrorMessage\n        COMMA_THERE\n      ) ;\n    }else{\n      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (">::make (inElement COMMA_THERE) ;\n    }\n  }\n}\n") ;
      enumerator_15409.gotoNextObject () ;
      index_15409_.increment () ;
    }
  }
  const GalgasBool test_1 = in_HAS_5F_INSERT_5F_OR_5F_REPLACE.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::setter_insertOrReplace (") ;
    columnMarker = result.currentColumn () ;
    result.appendString ("GGS_lstring inLKey") ;
    GGS_uint index_16836_IDX (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_16836 (in_PROPERTY_5F_LIST) ;
      while (enumerator_16836.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("GGS_") ;
        result.appendString (extensionGetter_identifierRepresentation (enumerator_16836.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 417)).stringValue ()) ;
        result.appendString (" inArgument") ;
        result.appendString (index_16836_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 417)).stringValue ()) ;
        enumerator_16836.gotoNextObject () ;
        index_16836_IDX.increment () ;
      }
    }
    result.appendString ("\n ") ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" element (inLKey") ;
    GGS_uint index_17054_IDX (0) ;
    if (in_PROPERTY_5F_LIST.isValid ()) {
      UpEnumerator_typedPropertyList enumerator_17054 (in_PROPERTY_5F_LIST) ;
      while (enumerator_17054.hasCurrentObject ()) {
        result.appendString (", inArgument") ;
        result.appendString (index_17054_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 421)).stringValue ()) ;
        enumerator_17054.gotoNextObject () ;
        index_17054_IDX.increment () ;
      }
    }
    result.appendString (") ;\n  OptionalSharedRef <GenericMapNode <GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (">> unusedExistingNode ;\n  const bool allowReplacing = true ;\n  mSharedRoot.insulate (THERE) ;\n  mSharedRoot->insertOrReplaceInfo (element, allowReplacing, unusedExistingNode COMMA_THERE) ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_17424_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_17424 (in_PROPERTY_5F_LIST) ;
    while (enumerator_17424.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_17424.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 434)).stringValue ()) ;
      result.appendString (" GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::getter_") ;
      result.appendString (enumerator_17424.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 434)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("const GGS_string & inKey,\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) const {\n  GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_17424.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 437)).stringValue ()) ;
      result.appendString (" result ;\n  if (isValid () && inKey.isValid ()) {\n    const String key = inKey.stringValue () ;\n    const SharedGenericPtrWithValueSemantics <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("> info = infoForKey (key) ;\n    if (info.isNil ()) {\n      String message = \"cannot read property in map: the '\" ;\n      message.appendString (key) ;\n      message.appendCString (\"' key does not exist\") ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      result = info->mProperty_") ;
      result.appendString (enumerator_17424.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 447)).stringValue ()) ;
      result.appendString (" ;\n    }\n  }\n  return result ;\n}\n") ;
      enumerator_17424.gotoNextObject () ;
      index_17424_IDX.increment () ;
    }
  }
  GGS_uint index_18456_IDX (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_18456 (in_PROPERTY_5F_LIST) ;
    while (enumerator_18456.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::setter_set") ;
      result.appendString (enumerator_18456.current_name (HERE).readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 457)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 457)).stringValue ()) ;
      result.appendString ("ForKey (") ;
      columnMarker = result.currentColumn () ;
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_18456.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 457)).stringValue ()) ;
      result.appendString (" inValue,\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("GGS_string inKey,\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("Compiler * inCompiler\n         ") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inKey.isValid ()) {\n    const String key = inKey.stringValue () ;\n    mSharedRoot.insulate (HERE) ;\n    OptionalSharedRef <GenericMapNode <GGS_") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (">> node = mSharedRoot->searchNode (key) ;\n    if (node.isNil ()) {\n      String message = \"cannot write property in map: the '\" ;\n      message.appendString (key) ;\n      message.appendCString (\"' key does not exist\") ;\n      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n    }else{\n      node->mSharedInfo->mProperty_") ;
      result.appendString (enumerator_18456.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 471)).stringValue ()) ;
      result.appendString (" = inValue ;\n    }\n  }\n}\n") ;
      enumerator_18456.gotoNextObject () ;
      index_18456_IDX.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nstatic void GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> & inArray,\n                                                        String & ioString,\n                                                        const int32_t inIndentation) {\n  const int32_t n = inArray.count () ;\n  ioString.appendString (\" (\") ;\n  ioString.appendSigned (n) ;\n  ioString.appendString (\" object\") ;\n  if (n > 1) {\n    ioString.appendString (\"s\") ;\n  }\n  ioString.appendString (\"):\") ;\n  for (int32_t i = 0 ; i < n ; i++) {\n    ioString.appendNewLine () ;\n    ioString.appendStringMultiple (\"| \", inIndentation) ;\n    ioString.appendString (\"|-at \") ;\n    ioString.appendSigned (i) ;\n    ioString.appendString (\": key '\") ;\n    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;\n    ioString.appendString (\"'\") ;\n") ;
  GGS_uint index_20509_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_20509 (in_PROPERTY_5F_LIST) ;
    while (enumerator_20509.hasCurrentObject ()) {
      result.appendString ("    ioString.appendNewLine () ;\n    ioString.appendStringMultiple (\"| \", inIndentation + 2) ;\n    ioString.appendString (\"") ;
      result.appendString (enumerator_20509.current_name (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (":\") ;\n    inArray (i COMMA_HERE)->mProperty_") ;
      result.appendString (enumerator_20509.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 504)).stringValue ()) ;
      result.appendString (".description (ioString, inIndentation + 1) ;\n") ;
      enumerator_20509.gotoNextObject () ;
      index_20509_.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                          const int32_t inIndentation) const {\n  ioString.appendCString (\"<map @\") ;\n  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  if (isValid ()) {\n    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> array = sortedInfoArray () ;\n    GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_internalDescription (array, ioString, inIndentation) ;\n    OptionalSharedRef <GenericMapRoot <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (">> subRoot = mSharedRoot->overriddenRoot () ;\n    uint32_t idx = 0 ;\n    while (subRoot.isNotNil ()) {\n     idx += 1 ;\n     ioString.appendNewLine () ;\n     ioString.appendStringMultiple (\"| \", inIndentation + 1) ;\n     ioString.appendString (\" override #\") ;\n     ioString.appendUnsigned (idx) ;\n     const auto subRootArray = subRoot->sortedInfoArray () ;\n     GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_internalDescription (subRootArray, ioString, inIndentation) ;\n     subRoot = subRoot->overriddenRoot () ;\n    }\n  }else{\n    ioString.appendCString (\" not built\") ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  const GalgasBool test_2 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (count () < inOperand.count ()) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (count () > inOperand.count ()) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n      const GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (">> left = sortedInfoArray () ;\n      const GenericArray <SharedGenericPtrWithValueSemantics <GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (">> right = inOperand.sortedInfoArray () ;\n      for (int32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {\n        result = left (i COMMA_HERE).value ().objectCompare (right (i COMMA_HERE).value ()) ;\n      }\n    }\n  }\n  return result ;\n}\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//  Down Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nDownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inMap) :\nmInfoArray (inMap.sortedInfoArray ()),\nmIndex (0) {\n  mIndex = mInfoArray.count () - 1 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_THERE).value () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_lstring DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_lkey (LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;\n}\n\n") ;
  GGS_uint index_24161_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_24161 (in_PROPERTY_5F_LIST) ;
    while (enumerator_24161.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_24161.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 585)).stringValue ()) ;
      result.appendString (" DownEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_24161.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 585)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_THERE)->mProperty_") ;
      result.appendString (enumerator_24161.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 586)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_24161.gotoNextObject () ;
      index_24161_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  Up Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nUpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inMap) :\nmInfoArray (inMap.sortedInfoArray ()),\nmIndex (0) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_THERE).value () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_lstring UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current_lkey (LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;\n}\n\n") ;
  GGS_uint index_25509_ (0) ;
  if (in_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_25509 (in_PROPERTY_5F_LIST) ;
    while (enumerator_25509.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_25509.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 616)).stringValue ()) ;
      result.appendString (" UpEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_25509.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 616)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mInfoArray (mIndex COMMA_THERE)->mProperty_") ;
      result.appendString (enumerator_25509.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 617)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_25509.gotoNextObject () ;
      index_25509_.increment () ;
    }
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionalTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_optionalTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  result_result = GGS_string ("optional @").add_operation (temp_0.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 28)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionalTypeDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  const GGS_optionalTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_selfKey_2333 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 41)), temp_1.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_selfKey_2333, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 42)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_3 = this ;
  const GGS_optionalTypeDeclarationAST temp_4 = this ;
  GGS_lstring var_unwrappedKey_2484 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_unwrappedTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 43)), temp_4.readProperty_unwrappedTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_selfKey_2333, var_unwrappedKey_2484 COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 44)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionalTypeDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                                const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_getterMap var_getterMap_3366 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_3366, inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 58)) ;
  }
  GGS_unifiedTypeMapEntry var_boolTypeEntry_3446 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GGS_string ("bool").getter_nowhere (SOURCE_FILE ("declaration-type-optional.galgas", 60)), var_boolTypeEntry_3446, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 60)) ;
  }
  GGS_propertyMap var_propertyMap_3482 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  var_propertyMap_3482.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("isSome"), temp_0.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_AccessControl::class_func_publicAccess (SOURCE_FILE ("declaration-type-optional.galgas", 64)), GGS_bool (true), var_boolTypeEntry_3446, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 62)) ;
  }
  {
  const GGS_optionalTypeDeclarationAST temp_1 = this ;
  var_propertyMap_3482.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("isNil"), temp_1.readProperty_optionalTypeName ().readProperty_location (), inCompiler COMMA_HERE), GGS_AccessControl::class_func_publicAccess (SOURCE_FILE ("declaration-type-optional.galgas", 70)), GGS_bool (true), var_boolTypeEntry_3446, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 68)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_3811 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_setterMap var_setterMap_3854 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_3894 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_optionalTypeDeclarationAST temp_2 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_2.readProperty_optionalTypeName (), GGS_bool (false), var_initializerMap_3894, var_getterMap_3366, var_setterMap_3854, var_instanceMethodMap_3811, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 78)) ;
  }
  GGS_unifiedTypeMapEntry var_unwrappedType_4422 ;
  {
  const GGS_optionalTypeDeclarationAST temp_3 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_3.readProperty_unwrappedTypeName (), var_unwrappedType_4422, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 94)) ;
  }
  GGS_typeFeatures var_features_4462 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_unwrappedType_4422, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optional.galgas", 97)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-optional.galgas", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 97)).operator_or (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-optional.galgas", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 97)) COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_features_4462.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-optional.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 98)) ;
    }
  }
  {
  const GGS_optionalTypeDeclarationAST temp_5 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_5.readProperty_optionalTypeName (), var_features_4462, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 100)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_6 = this ;
  const GGS_optionalTypeDeclarationAST temp_7 = this ;
  const GGS_optionalTypeDeclarationAST temp_8 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_4855 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_6.readProperty_optionalTypeName (), temp_7.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optional.galgas", 113)), GGS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-optional.galgas", 114)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_propertyMap_3482, GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_3894, GGS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_3366, var_setterMap_3854, var_instanceMethodMap_3811, GGS_classMethodMap::init (inCompiler COMMA_HERE), var_unwrappedType_4422, GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_4462, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-optional.galgas", 131)), GGS_string ("optional-").add_operation (temp_8.readProperty_optionalTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-optional.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 132)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-optional.galgas", 133)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_4855.readProperty_typeName (), var_typeDefinition_4855, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 135)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionalTypeDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionalTypeDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_string /* constinArgument_inProductDirectory */,
                                                               const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_6623 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_optionalTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 155)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6623, var_nameForUsefulness_6623, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 156)) ;
  }
  const GGS_optionalTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_unwrappedTypeNameForUsefulness_6783 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_unwrappedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 157)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_6623, var_unwrappedTypeNameForUsefulness_6783 COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 158)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_optionalTypeDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isUsefull ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_nameForUsefulness_6623  COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 160)) ;
    }
  }
  const GGS_optionalTypeDeclarationAST temp_4 = this ;
  GGS_unifiedTypeMapEntry var_optionalType_7076 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_optionalTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 163)) ;
  const GGS_optionalTypeDeclarationAST temp_5 = this ;
  GGS_unifiedTypeMapEntry var_unwrappedType_7154 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_unwrappedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 164)) ;
  GGS_lstring var_correspondingWeakTypeName_7234 = function_makeWeakTypeLName (extensionGetter_definition (var_unwrappedType_7154, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 165)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 165)) ;
  GGS_unifiedTypeMapEntry var_correspondingWeakTypeOrNull_7329 = extensionGetter_typeMapEntryOrNullForLKey (ioArgument_ioTypeMap, var_correspondingWeakTypeName_7234, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 166)) ;
  const GGS_optionalTypeDeclarationAST temp_6 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("optional type ").add_operation (temp_6.readProperty_optionalTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 168)), GGS_optionalTypeForGeneration::init_21__21__21_ (var_optionalType_7076, var_unwrappedType_7154, var_correspondingWeakTypeOrNull_7329, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 167)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionalTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_string & outArgument_outHeader,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName_31_ (temp_0.readProperty_unwrappedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 188)) ;
  const GGS_optionalTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_8443 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 189)) ;
  const GGS_optionalTypeForGeneration temp_2 = this ;
  const GGS_optionalTypeForGeneration temp_3 = this ;
  const GGS_optionalTypeForGeneration temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = temp_4.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas", 194)).boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_6) {
    const GGS_optionalTypeForGeneration temp_7 = this ;
    temp_5 = extensionGetter_identifierRepresentation (temp_7.readProperty_weakType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 194)) ;
  }
  outArgument_outHeader = GGS_string (filewrapperTemplate_optionalTypeGenerationTemplate_optionalTypeHeader_31_ (inCompiler, var_selfTypeDefinition_8443.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 192)), extensionGetter_identifierRepresentation (temp_3.readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 193)), temp_5 COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 190))) ;
  const GGS_optionalTypeForGeneration temp_8 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_8443.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_8.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 198)), var_selfTypeDefinition_8443.readProperty_isConcrete (), var_selfTypeDefinition_8443.readProperty_initializerMap (), var_selfTypeDefinition_8443.readProperty_classFunctionMap (), var_selfTypeDefinition_8443.readProperty_getterMap (), var_selfTypeDefinition_8443.readProperty_setterMap (), var_selfTypeDefinition_8443.readProperty_instanceMethodMap (), var_selfTypeDefinition_8443.readProperty_classMethodMap (), var_selfTypeDefinition_8443.readProperty_readSubscriptMap (), var_selfTypeDefinition_8443.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_8443.readProperty_features (), var_selfTypeDefinition_8443.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_8443.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_8443.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 196))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 196)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionalTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_string & outArgument_outImplementation,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionalTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_unwrappedType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 220)) ;
  const GGS_optionalTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 221)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_optionalTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas", 222)).operator_not (SOURCE_FILE ("declaration-type-optional.galgas", 222)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_optionalTypeForGeneration temp_4 = this ;
      extensionMethod_addHeaderFileName (temp_4.readProperty_weakType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 223)) ;
    }
  }
  const GGS_optionalTypeForGeneration temp_5 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_10130 = extensionGetter_definition (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 225)) ;
  const GGS_optionalTypeForGeneration temp_6 = this ;
  const GGS_optionalTypeForGeneration temp_7 = this ;
  const GGS_optionalTypeForGeneration temp_8 = this ;
  GGS_string temp_9 ;
  const GalgasBool test_10 = temp_8.readProperty_weakType ().getter_isNull (SOURCE_FILE ("declaration-type-optional.galgas", 231)).boolEnum () ;
  if (GalgasBool::boolTrue == test_10) {
    temp_9 = GGS_string::makeEmptyString () ;
  }else if (GalgasBool::boolFalse == test_10) {
    const GGS_optionalTypeForGeneration temp_11 = this ;
    temp_9 = extensionGetter_identifierRepresentation (temp_11.readProperty_weakType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 231)) ;
  }
  outArgument_outImplementation = GGS_string (filewrapperTemplate_optionalTypeGenerationTemplate_optionalTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_10130.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 228)), extensionGetter_identifierRepresentation (temp_7.readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 229)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_10130.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 230)), temp_9 COMMA_SOURCE_FILE ("declaration-type-optional.galgas", 226))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'optionalTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_optionalTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_optionalTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_optionalTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_optionalTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_optionalTypeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionalTypeGenerationTemplate optionalTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionalTypeGenerationTemplate_optionalTypeHeader_31_ (Compiler * inCompiler,
                                                                                      const GGS_string & in_TYPE_5F_NAME,
                                                                                      const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_string & in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_string & in_WEAK_5F_TYPE_5F_IDENTIFIER
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: ").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_optional.h1.galgasTemplate", 2)).add_operation (GGS_string (" optional"), inCompiler COMMA_SOURCE_FILE ("GALGAS_optional.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Private property\n  private: GGS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" mValue ;\n  private: OptionalState mState ;\n\n//--------------------------------- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Constructor from unwrapped type\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--------------------------------- Constructor from weak type\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::notEqual, in_WEAK_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("  public: GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (const class GGS_") ;
    result.appendString (in_WEAK_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) ;") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------- nil initializer\n  public: static GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" init_nil (void) ;\n\n  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }\n\n  public: bool isValuated (void) const ;\n  public: inline GGS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" unwrappedValue (void) const {\n    return mValue ;\n  }\n\n//--------------------------------- GALGAS read only properties\n  public: inline GGS_bool readProperty_isNil (void) const {\n    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;\n  }\n\n  public: inline GGS_bool readProperty_isSome (void) const {\n    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;\n  }\n\n  \n//--- Methods that every type should implement\n  public: virtual bool isValid (void) const override ;\n  \n  public: virtual void drop (void) override ;\n\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionalTypeGenerationTemplate optionalTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionalTypeGenerationTemplate_optionalTypeSpecificImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                                  const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                  const GGS_string & in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER,
                                                                                                  const GGS_bool & in_GENERATE_5F_COMPARISON,
                                                                                                  const GGS_string & in_WEAK_5F_TYPE_5F_IDENTIFIER
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("Optional @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_optional.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmValue (),\nmState (OptionalState::invalid) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmValue (inSource),\nmState (OptionalState::valuated) {\n}\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::notEqual, in_WEAK_5F_TYPE_5F_IDENTIFIER.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" (const GGS_") ;
    result.appendString (in_WEAK_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmValue (),\nmState (OptionalState::invalid) {\n  if (inSource.isValid ()) {\n    const acStrongPtr_class * p = inSource.ptr () ;\n    if (p == nullptr) {\n      mState = OptionalState::isNil ;\n    }else{\n      mValue = * ((GGS_") ;
    result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" *) p) ;\n      mState = OptionalState::valuated ;\n    }\n  }\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init_nil (void) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mState = OptionalState::isNil ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  bool result = false ;\n  switch (mState) {\n  case OptionalState::invalid :\n    break ;\n  case OptionalState::isNil :\n    result = true ;\n    break ;\n  case OptionalState::valuated :\n    result = mValue.isValid () ;\n    break ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValuated (void) const {\n  return (mState == OptionalState::valuated) && mValue.isValid () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n  mState = OptionalState::invalid ;\n  mValue = GGS_") ;
  result.appendString (in_UNWRAPPED_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" () ;\n}\n\n") ;
  const GalgasBool test_1 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n  ComparisonResult result = ComparisonResult::invalid ;\n  if (isValid () && inOperand.isValid ()) {\n    if (mState < inOperand.mState) {\n      result = ComparisonResult::firstOperandLowerThanSecond ;\n    }else if (mState > inOperand.mState) {\n      result = ComparisonResult::firstOperandGreaterThanSecond ;\n    }else if (mState == OptionalState::valuated) {\n      result = mValue.objectCompare (inOperand.mValue) ;\n    }else{\n      result = ComparisonResult::operandEqual ;\n    }\n  }\n  return result ;\n}\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t inIndentation) const {\n  ioString.appendCString (\"<optional @\") ;\n  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  ioString.appendCString (\": \") ;\n  switch (mState) {\n  case OptionalState::invalid :\n    ioString.appendCString (\"invalid\") ;\n    break ;\n  case OptionalState::isNil :\n    ioString.appendCString (\"nil\") ;\n    break ;\n  case OptionalState::valuated :\n    mValue.description (ioString, inIndentation) ;\n    break ;\n  }\n  ioString.appendCString (\">\") ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sortedListDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                    GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                    GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                    GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                    GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                    GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedListDeclarationAST temp_0 = this ;
  const GGS_sortedListDeclarationAST temp_1 = this ;
  GGS_lstring var_key_5990 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 164)), temp_1.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_sortedListDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5990, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 165)) ;
  }
  const GGS_sortedListDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6160 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_6160.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_6160.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 167)), enumerator_6160.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 167)) ;
    }
    enumerator_6160.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sortedListDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_structAttributeList_6536 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6627 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_6627.hasCurrentObject ()) {
    var_structAttributeList_6536.addAssignOperation (enumerator_6627.current_mutability (HERE), enumerator_6627.current_typeName (HERE), enumerator_6627.current_name (HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-sorted-list.galgas", 181)), enumerator_6627.current_hasSelector (HERE), enumerator_6627.current_initialization (HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 177)) ;
    enumerator_6627.gotoNextObject () ;
  }
  const GGS_sortedListDeclarationAST temp_1 = this ;
  const GGS_sortedListDeclarationAST temp_2 = this ;
  const GGS_sortedListDeclarationAST temp_3 = this ;
  GGS_structComparison temp_4 ;
  const GalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_5) {
    temp_4 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-sorted-list.galgas", 190)) ;
  }else if (GalgasBool::boolFalse == test_5) {
    temp_4 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-sorted-list.galgas", 190)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_1.readProperty_isPredefined (), function_makeEmbeddedElementTypeLName (temp_2.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 187)), var_structAttributeList_6536, GGS_string::makeEmptyString (), temp_4, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 185)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sortedListDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                              const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                              const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                              const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                              const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_listTypeIndex_7935 ;
  {
  const GGS_sortedListDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mSortedListTypeName (), var_listTypeIndex_7935, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 207)) ;
  }
  GGS_unifiedTypeMapEntry var_listElementTypeIndex_8100 ;
  {
  const GGS_sortedListDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_1.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 210)), var_listElementTypeIndex_8100, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 209)) ;
  }
  GGS_enumerationDescriptorList var_enumerationDescriptor_8194 = GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorAttributeTypeList_8249 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterFormalOutputArgumentList_8318 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_formalParameterSignature var_setterFormalInputArgumentList_8389 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_typedAttributeList_8452 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_2 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_8522 (temp_2.readProperty_mPropertyList ()) ;
  while (enumerator_8522.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_8615 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_8522.current_typeName (HERE), var_attributeTypeIndex_8615, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 220)) ;
    }
    GGS_bool var_hasSelector_8645 = GGS_bool (false) ;
    var_typedAttributeList_8452.addAssignOperation (var_attributeTypeIndex_8615, enumerator_8522.current_name (HERE), enumerator_8522.current_initialization (HERE), GGS_bool (true), var_hasSelector_8645  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 222)) ;
    var_enumerationDescriptor_8194.addAssignOperation (var_attributeTypeIndex_8615, enumerator_8522.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 223)) ;
    var_constructorAttributeTypeList_8249.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-list.galgas", 224)), var_attributeTypeIndex_8615, enumerator_8522.current_name (HERE).readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 224)) ;
    var_setterFormalOutputArgumentList_8318.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-list.galgas", 225)), var_attributeTypeIndex_8615, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-sorted-list.galgas", 225)), enumerator_8522.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 225)) ;
    var_setterFormalInputArgumentList_8389.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-sorted-list.galgas", 226)), var_attributeTypeIndex_8615, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-type-sorted-list.galgas", 226)), enumerator_8522.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 226)) ;
    enumerator_8522.gotoNextObject () ;
  }
  GGS_classFunctionMap var_classFunctionMap_9239 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_sortedListDeclarationAST temp_3 = this ;
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_9239, ioArgument_ioTypeMap, GGS_string ("emptySortedList"), temp_3.readProperty_mSortedListTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 230)) ;
  }
  {
  var_classFunctionMap_9239.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("sortedListWithValue"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 238)), inCompiler COMMA_HERE), var_constructorAttributeTypeList_8249, GGS_bool (false), var_listTypeIndex_7935, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 237)) ;
  }
  GGS_getterMap var_getterMap_9705 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_9705, inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 244)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_9705, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string ("length"), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 245)) ;
  }
  GGS_setterMap var_setterMap_9951 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  var_setterMap_9951.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popGreatest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 256)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas", 257)), var_setterFormalOutputArgumentList_8318, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas", 260)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 255)) ;
  }
  {
  var_setterMap_9951.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("popSmallest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 264)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas", 265)), var_setterFormalOutputArgumentList_8318, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas", 268)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 263)) ;
  }
  {
  var_setterMap_9951.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insert"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 272)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas", 273)), var_setterFormalInputArgumentList_8389, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas", 276)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 271)) ;
  }
  GGS_instanceMethodMap var_instanceMethodMap_10718 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_10718.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("greatest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 282)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas", 283)), var_setterFormalOutputArgumentList_8318, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 285)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas", 287)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 281)) ;
  }
  {
  var_instanceMethodMap_10718.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("smallest"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 291)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-sorted-list.galgas", 292)), var_setterFormalOutputArgumentList_8318, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 294)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-sorted-list.galgas", 296)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 290)) ;
  }
  GGS_initializerMap var_initializerMap_11319 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_11367 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_sortedListDeclarationAST temp_4 = this ;
  var_initializerMap_11319.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_11367, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 303)), temp_4.readProperty_mSortedListTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_11367, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 302)) ;
  }
  {
  const GGS_sortedListDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_mSortedListTypeName (), GGS_bool (false), var_initializerMap_11319, var_getterMap_9705, var_setterMap_9951, var_instanceMethodMap_10718, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 307)) ;
  }
  GGS_typeFeatures var_features_12005 = GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-sorted-list.galgas", 323)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_sortedListDeclarationAST temp_7 = this ;
    test_6 = temp_7.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_features_12005.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-sorted-list.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 325)) ;
    }
  }
  {
  const GGS_sortedListDeclarationAST temp_8 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_8.readProperty_mSortedListTypeName (), var_features_12005, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 327)) ;
  }
  const GGS_sortedListDeclarationAST temp_9 = this ;
  const GGS_sortedListDeclarationAST temp_10 = this ;
  const GGS_sortedListDeclarationAST temp_11 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_12349 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_9.readProperty_mSortedListTypeName (), temp_10.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-sorted-list.galgas", 340)), GGS_typeKindEnum::class_func_sortedListType (SOURCE_FILE ("declaration-type-sorted-list.galgas", 341)), GGS_bool (true), var_typedAttributeList_8452, GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_11319, var_classFunctionMap_9239, var_getterMap_9705, var_setterMap_9951, var_instanceMethodMap_10718, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-sorted-list.galgas", 352)), GGS_subscriptMap::init (inCompiler COMMA_HERE), var_enumerationDescriptor_8194, var_features_12005, var_constructorAttributeTypeList_8249, GGS_bool (false), var_listElementTypeIndex_8100, GGS_string ("-sortedlist-").add_operation (temp_11.readProperty_mSortedListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-sorted-list.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 359)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-sorted-list.galgas", 360)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_12349.readProperty_typeName (), var_typeDefinition_12349, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 362)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sortedListDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GGS_string /* constinArgument_inProductDirectory */,
                                                             const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                             GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedListDeclarationAST temp_0 = this ;
  GGS_lstring var_sortedListNameForUsefulness_14078 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 377)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_14078, var_sortedListNameForUsefulness_14078, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 378)) ;
  }
  const GGS_sortedListDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeNameForUsefulness_14271 = function_typeNameForUsefulEntitiesGraph (function_makeEmbeddedElementTypeLName (temp_1.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 379)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_14078, var_elementTypeNameForUsefulness_14271 COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 382)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_sortedListDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_sortedListNameForUsefulness_14078  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 384)) ;
    }
  }
  const GGS_sortedListDeclarationAST temp_4 = this ;
  GGS_lstring var_initializerNameForUsefulness_14688 = function_initializerNameForUsefulEntitiesGraph (temp_4.readProperty_mSortedListTypeName (), extensionGetter_initializerSignature (GGS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 387)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_14688, var_initializerNameForUsefulness_14688, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 391)) ;
  }
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerNameForUsefulness_14688, var_sortedListNameForUsefulness_14078 COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 392)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_sortedListDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerNameForUsefulness_14688  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 394)) ;
    }
  }
  GGS_typedPropertyList var_typedAttributeList_15192 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_attributeMap_15261 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_7 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_15325 (temp_7.readProperty_mPropertyList ()) ;
  while (enumerator_15325.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_15376 = function_typeNameForUsefulEntitiesGraph (enumerator_15325.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 400)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_14078, var_propertyTypeNameForUsefulness_15376 COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 401)) ;
    }
    GGS_unifiedTypeMapEntry var_t_15579 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_15325.current_typeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 402)) ;
    GGS_bool var_hasSelector_15643 = GGS_bool (true) ;
    var_typedAttributeList_15192.addAssignOperation (var_t_15579, enumerator_15325.current_name (HERE), enumerator_15325.current_initialization (HERE), GGS_bool (true), var_hasSelector_15643  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 404)) ;
    {
    var_attributeMap_15261.setter_insertKey (enumerator_15325.current_name (HERE), var_t_15579, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 410)) ;
    }
    enumerator_15325.gotoNextObject () ;
  }
  GGS_stringset var_attributesUsedForSorting_15909 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_sortDescriptorListForGeneration var_sortDescriptorList_15981 = GGS_sortDescriptorListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_sortedListDeclarationAST temp_8 = this ;
  UpEnumerator_sortedListSortDescriptorListAST enumerator_16036 (temp_8.readProperty_mSortDescriptorList ()) ;
  while (enumerator_16036.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_type_16157 ;
    var_attributeMap_15261.method_searchKey (enumerator_16036.current_mSortedAttributeName (HERE), var_type_16157, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 416)) ;
    var_sortDescriptorList_15981.addAssignOperation (var_type_16157, enumerator_16036.current_mSortedAttributeName (HERE).readProperty_string (), enumerator_16036.current_mAscending (HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 417)) ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_attributesUsedForSorting_15909.getter_hasKey (enumerator_16036.current_mSortedAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 418)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_16036.current_mSortedAttributeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_16036.current_mSortedAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 419)).add_operation (GGS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 419)), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 419)) ;
      }
    }
    var_attributesUsedForSorting_15909.plusPlusAssignOperation (enumerator_16036.current_mSortedAttributeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 421)) ;
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = extensionGetter_definition (var_type_16157, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 422)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-sorted-list.galgas", 422)) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 422)).operator_not (SOURCE_FILE ("declaration-type-sorted-list.galgas", 422)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_16036.current_mSortedAttributeName (HERE).readProperty_location (), GGS_string ("the @").add_operation (extensionGetter_definition (var_type_16157, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 423)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 423)).add_operation (GGS_string (" type is not comparable"), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 423)), fixItArray12  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 423)) ;
      }
    }
    enumerator_16036.gotoNextObject () ;
  }
  const GGS_sortedListDeclarationAST temp_13 = this ;
  const GGS_sortedListDeclarationAST temp_14 = this ;
  const GGS_sortedListDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("sorted list ").add_operation (temp_13.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 428)), GGS_sortedListTypeForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_14.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 430)), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, function_makeEmbeddedElementTypeLName (temp_15.readProperty_mSortedListTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 431)), var_typedAttributeList_15192, var_sortDescriptorList_15981, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 427)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sortedListTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                     GGS_string & outArgument_outHeader,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedListTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_18161 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 464)) ;
  const GGS_sortedListTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_elementTypeDefinition_18221 = extensionGetter_definition (temp_1.readProperty_mListElementTypeIndex (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 465)) ;
  const GGS_sortedListTypeForGeneration temp_2 = this ;
  const GGS_sortedListTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, var_selfTypeDefinition_18161.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 468)), temp_3.readProperty_mTypedAttributeList (), var_selfTypeDefinition_18161.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_18161.readProperty_typeForEnumeratedElement (), var_elementTypeDefinition_18221.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-sorted-list.galgas", 472)) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 466))) ;
  const GGS_sortedListTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_18161.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 476)), var_selfTypeDefinition_18161.readProperty_isConcrete (), var_selfTypeDefinition_18161.readProperty_initializerMap (), var_selfTypeDefinition_18161.readProperty_classFunctionMap (), var_selfTypeDefinition_18161.readProperty_getterMap (), var_selfTypeDefinition_18161.readProperty_setterMap (), var_selfTypeDefinition_18161.readProperty_instanceMethodMap (), var_selfTypeDefinition_18161.readProperty_classMethodMap (), var_selfTypeDefinition_18161.readProperty_readSubscriptMap (), var_selfTypeDefinition_18161.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_18161.readProperty_features (), var_selfTypeDefinition_18161.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_18161.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_18161.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 474))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 474)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sortedListTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_string & outArgument_outImplementation,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sortedListTypeForGeneration temp_0 = this ;
  UpEnumerator_typedPropertyList enumerator_19646 (temp_0.readProperty_mTypedAttributeList ()) ;
  while (enumerator_19646.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19646.current_typeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 500)) ;
    enumerator_19646.gotoNextObject () ;
  }
  const GGS_sortedListTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 502)) ;
  const GGS_sortedListTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 503)) ;
  const GGS_sortedListTypeForGeneration temp_3 = this ;
  GGS_unifiedTypeDefinition var_elementTypeDefinition_19860 = extensionGetter_definition (temp_3.readProperty_mListElementTypeIndex (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 504)) ;
  const GGS_sortedListTypeForGeneration temp_4 = this ;
  const GGS_sortedListTypeForGeneration temp_5 = this ;
  const GGS_sortedListTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GGS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 506)), temp_5.readProperty_mTypedAttributeList (), temp_6.readProperty_mSortDescriptorList (), var_elementTypeDefinition_19860.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-type-sorted-list.galgas", 509)), extensionGetter_generateCppObjectComparison (var_elementTypeDefinition_19860.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 510)) COMMA_SOURCE_FILE ("declaration-type-sorted-list.galgas", 505))) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'sortedListGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_sortedListGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_sortedListGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_sortedListGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_sortedListGenerationTemplate_0,
  0,
  gWrapperAllDirectories_sortedListGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sortedListGenerationTemplate sortedlistTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (Compiler * inCompiler,
                                                                                      const GGS_string & /* in_TYPE_5F_NAME */,
                                                                                      const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GGS_typedPropertyList & /* in_ATTRIBUTE_5F_LIST */,
                                                                                      const GGS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                      const GGS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE,
                                                                                      const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 2)).add_operation (GGS_string (" sorted list enumerator"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n//--- Constructor\n  public: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject) ;\n\n//--- Accessors\n  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }\n\n  public: inline void gotoNextObject (void) { mIndex -= 1 ; }\n") ;
  GGS_uint index_669_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_669 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_669.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_669.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 15)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_669.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 15)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      enumerator_669.gotoNextObject () ;
      index_669_.increment () ;
    }
  }
  result.appendString ("\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 19)).stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mElementArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n//--- Constructor\n  public: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const class GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject) ;\n\n//--- Accessors\n  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }\n\n  public: inline void gotoNextObject (void) { mIndex += 1 ; }\n\n  public: inline void rewind (void) { mIndex = 0 ; }\n") ;
  GGS_uint index_1896_ (0) ;
  if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
    UpEnumerator_enumerationDescriptorList enumerator_1896 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST) ;
    while (enumerator_1896.hasCurrentObject ()) {
      result.appendString ("  public: class GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_1896.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" current_") ;
      result.appendString (enumerator_1896.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const ;\n") ;
      enumerator_1896.gotoNextObject () ;
      index_1896_.increment () ;
    }
  }
  result.appendString ("\n//--- Current element access\n  public: class GGS_") ;
  result.appendString (extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 48)).stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n\n//--- Private properties\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mElementArray ;\n  private: int32_t mIndex ;\n\n//--- No copy\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 60)).add_operation (GGS_string (" sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 60)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final : public AC_GALGAS_root {\n//--- Private property\n  private: GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n\n//--- Default constructor\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--- Destructor\n  public: virtual ~ GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) = default ;\n\n//--- Handle copy\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = default ;\n  public: GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = default ;\n\n//--- Is valid\n  public: inline bool isValid (void) const override { return mSharedArray.isAllocated () ; }\n\n//--- Drop\n  public: inline virtual void drop (void) override { mSharedArray.removeAll () ; }\n\n//--- Description\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--- Count\n  public: inline int32_t count (void) const { return mSharedArray.count () ; }\n \n//--- sortedElementArray\n  public : inline GenericArray <GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> sortedElementArray (void) const {\n    return mSharedArray ;\n  }\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'sortedListGenerationTemplate sortedlistTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (Compiler * inCompiler,
                                                                                                  const GGS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                  const GGS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                  const GGS_sortDescriptorListForGeneration & in_SORT_5F_ATTRIBUTE_5F_LIST,
                                                                                                  const GGS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                                  const GGS_bool & in_GENERATE_5F_COMPARISON
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//") ;
  result.appendString (GGS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 2)).add_operation (GGS_string ("' sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 2)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nstatic int32_t compareForSorting_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inLeft,\n                            ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inRight) {\n  ComparisonResult result = ComparisonResult::operandEqual ;\n") ;
  GGS_uint index_577_ (0) ;
  if (in_SORT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_sortDescriptorListForGeneration enumerator_577 (in_SORT_5F_ATTRIBUTE_5F_LIST) ;
    while (enumerator_577.hasCurrentObject ()) {
      result.appendString ("  if (result == ComparisonResult::operandEqual) {\n    result = ") ;
      const GalgasBool test_0 = enumerator_577.current_mAscendingOrder (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("inLeft.mProperty_") ;
        result.appendString (enumerator_577.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (".objectCompare (inRight.mProperty_") ;
        result.appendString (enumerator_577.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 12)).stringValue ()) ;
        result.appendString (")") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("inRight.mProperty_") ;
        result.appendString (enumerator_577.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 14)).stringValue ()) ;
        result.appendString (".objectCompare (inLeft.mProperty_") ;
        result.appendString (enumerator_577.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 14)).stringValue ()) ;
        result.appendString (")") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (" ;\n  }\n") ;
      enumerator_577.gotoNextObject () ;
      index_577_.increment () ;
    }
  }
  result.appendString ("  return int32_t (result) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nmSharedArray () {\n}\n\n") ;
  const GalgasBool test_1 = in_GENERATE_5F_COMPARISON.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("//--------------------------------------------------------------------------------------------------\n\nComparisonResult GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("::objectCompare (const GGS_") ;
    result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" & inOperand) const {\n    ComparisonResult result = ComparisonResult::invalid ;\n    if (isValid () && inOperand.isValid ()) {\n      if (count () < inOperand.count ()) {\n        result = ComparisonResult::firstOperandLowerThanSecond ;\n      }else if (count () > inOperand.count ()) {\n        result = ComparisonResult::firstOperandGreaterThanSecond ;\n      }else{\n        result = ComparisonResult::operandEqual ;\n        for (int32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {\n          const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" left = mSharedArray (i COMMA_HERE) ;\n          const GGS_") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString (" right = inOperand.mSharedArray (i COMMA_HERE) ;\n          result = left.objectCompare (right) ;\n        }\n      }\n    }\n    return result ;\n  }\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_uint GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GGS_uint result ;\n  if (isValid ()) {\n    result = GGS_uint (uint32_t (count ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusPlusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inElement\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inElement.isValid ()) {\n    mSharedArray.appendObject (inElement) ;\n    mSharedArray.quickSortUsingFunction (compareForSorting_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_emptySortedList (UNUSED_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mSharedArray.setCapacity (16) ; // Build\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mSharedArray.setCapacity (16) ; // Build\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::class_func_sortedListWithValue (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_3848_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_3848 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_3848.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_3848.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 90)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_3848_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 90)).stringValue ()) ;
      enumerator_3848.gotoNextObject () ;
      if (enumerator_3848.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_3848_IDX.increment () ;
    }
  }
  result.appendString ("\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result = class_func_emptySortedList (THERE) ;\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_4210_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4210 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_4210.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_4210_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 97)).stringValue ()) ;
      enumerator_4210.gotoNextObject () ;
      if (enumerator_4210.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_4210_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  result.plusPlusAssignOperation (newElement COMMA_THERE) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::addAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_4572_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4572 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_4572.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_4572.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 109)).stringValue ()) ;
      result.appendString (" & inOperand") ;
      result.appendString (index_4572_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 109)).stringValue ()) ;
      enumerator_4572.gotoNextObject () ;
      if (enumerator_4572.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_4572_IDX.increment () ;
    }
  }
  result.appendString ("\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_4864_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_4864 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_4864.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_4864_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 116)).stringValue ()) ;
      enumerator_4864.gotoNextObject () ;
      if (enumerator_4864.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_4864_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  plusPlusAssignOperation (newElement COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insert (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_5196_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5196 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_5196.hasCurrentObject ()) {
      result.appendString ("const GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_5196.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 127)).stringValue ()) ;
      result.appendString (" inOperand") ;
      result.appendString (index_5196_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 127)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_5196.gotoNextObject () ;
      index_5196_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * /* inCompiler */\n    ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  const GGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" newElement (") ;
  GGS_uint index_5502_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_5502 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_5502.hasCurrentObject ()) {
      result.appendString ("inOperand") ;
      result.appendString (index_5502_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 133)).stringValue ()) ;
      enumerator_5502.gotoNextObject () ;
      if (enumerator_5502.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_5502_IDX.increment () ;
    }
  }
  result.appendString (") ;\n  plusPlusAssignOperation (newElement COMMA_THERE) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusAssignOperation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inSortedList,\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n                          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inSortedList.isValid ()) {\n    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;\n    for (int32_t i=0 ; i<inSortedList.count () ; i++) {\n      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;\n    }\n    mSharedArray.quickSortUsingFunction (compareForSorting_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popSmallest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_6551_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6551 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_6551.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_6551.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 158)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_6551_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 158)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_6551.gotoNextObject () ;
      index_6551_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  bool found = false ;\n  if (isValid ()) {\n    if (count () == 0) {\n      inCompiler->onTheFlyRunTimeError (\"'popSmallest' method invoked on an empty list\" COMMA_THERE) ;\n    }else{\n") ;
  GGS_uint index_6993_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_6993 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_6993.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_6993_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 168)).stringValue ()) ;
      result.appendString (" = mSharedArray (0 COMMA_HERE).mProperty_") ;
      result.appendString (enumerator_6993.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 168)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_6993.gotoNextObject () ;
      index_6993_IDX.increment () ;
    }
  }
  result.appendString ("      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;\n      found = true ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_7267_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7267 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_7267.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_7267_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_7267.gotoNextObject () ;
      index_7267_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popGreatest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_7581_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_7581 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_7581.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_7581.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 185)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_7581_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 185)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_7581.gotoNextObject () ;
      index_7581_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  bool found = false ;\n  if (isValid ()) {\n    if (count () == 0) {\n      inCompiler->onTheFlyRunTimeError (\"'popGreatest' method invoked on an empty list\" COMMA_THERE) ;\n    }else{\n") ;
  GGS_uint index_8023_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8023 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_8023.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_8023_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 195)).stringValue ()) ;
      result.appendString (" = mSharedArray.lastObject (HERE).mProperty_") ;
      result.appendString (enumerator_8023.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 195)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_8023.gotoNextObject () ;
      index_8023_IDX.increment () ;
    }
  }
  result.appendString ("      mSharedArray.removeLastObject (HERE) ;\n      found = true ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_8289_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8289 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_8289.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_8289_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 203)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_8289.gotoNextObject () ;
      index_8289_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_smallest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_8600_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_8600 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_8600.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_8600.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 212)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_8600_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 212)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_8600.gotoNextObject () ;
      index_8600_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  bool found = false ;\n  if (isValid ()) {\n    if (count () == 0) {\n      inCompiler->onTheFlyRunTimeError (\"'smallest' method invoked on an empty list\" COMMA_THERE) ;\n    }else{\n") ;
  GGS_uint index_9035_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9035 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_9035.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_9035_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 222)).stringValue ()) ;
      result.appendString (" = mSharedArray (0 COMMA_HERE).mProperty_") ;
      result.appendString (enumerator_9035.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 222)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_9035.gotoNextObject () ;
      index_9035_IDX.increment () ;
    }
  }
  result.appendString ("      found = true ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_9253_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9253 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_9253.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_9253_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 229)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_9253.gotoNextObject () ;
      index_9253_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_greatest (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_9541_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9541 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_9541.hasCurrentObject ()) {
      result.appendString ("GGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_9541.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 238)).stringValue ()) ;
      result.appendString (" & outOperand") ;
      result.appendString (index_9541_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 238)).stringValue ()) ;
      result.appendString (",\n") ;
      result.appendSpacesUntilColumn (columnMarker) ;
      enumerator_9541.gotoNextObject () ;
      index_9541_IDX.increment () ;
    }
  }
  result.appendString ("Compiler * inCompiler\n") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  bool found = false ;\n  if (isValid ()) {\n    if (count () == 0) {\n      inCompiler->onTheFlyRunTimeError (\"'greatest' method invoked on an empty list\" COMMA_THERE) ;\n    }else{\n") ;
  GGS_uint index_9976_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_9976 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_9976.hasCurrentObject ()) {
      result.appendString ("      outOperand") ;
      result.appendString (index_9976_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 248)).stringValue ()) ;
      result.appendString (" = mSharedArray.lastObject (HERE).mProperty_") ;
      result.appendString (enumerator_9976.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 248)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_9976.gotoNextObject () ;
      index_9976_IDX.increment () ;
    }
  }
  result.appendString ("      found = true ;\n    }\n  }\n  if (!found) {\n") ;
  GGS_uint index_10197_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_10197 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_10197.hasCurrentObject ()) {
      result.appendString ("    outOperand") ;
      result.appendString (index_10197_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 255)).stringValue ()) ;
      result.appendString (".drop () ;\n") ;
      enumerator_10197.gotoNextObject () ;
      index_10197_IDX.increment () ;
    }
  }
  result.appendString ("  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (String & ioString,\n                                          const int32_t /* inIndentation */) const {\n  ioString.appendCString (\" (\") ;\n  ioString.appendSigned (count ()) ;\n  ioString.appendCString (\" object\") ;\n  ioString.appendString ((count () > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\")>\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n// Down Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nDownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject) :\nmElementArray (inEnumeratedObject.sortedElementArray ()),\nmIndex (0) {\n  mIndex = mElementArray.count () - 1 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" DownEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mElementArray (mIndex COMMA_THERE) ;\n}\n\n") ;
  GGS_uint index_11515_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_11515 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_11515.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_11515.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 289)).stringValue ()) ;
      result.appendString (" DownEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_11515.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 289)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mElementArray (mIndex COMMA_THERE).mProperty_") ;
      result.appendString (enumerator_11515.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_11515.gotoNextObject () ;
      index_11515_IDX.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n// Up Enumerator for @") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nUpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GGS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject) :\nmElementArray (inEnumeratedObject.sortedElementArray ()),\nmIndex (0) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" UpEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  return mElementArray (mIndex COMMA_THERE) ;\n}\n\n") ;
  GGS_uint index_12673_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    UpEnumerator_typedPropertyList enumerator_12673 (in_ATTRIBUTE_5F_LIST) ;
    while (enumerator_12673.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_") ;
      result.appendString (extensionGetter_identifierRepresentation (enumerator_12673.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 310)).stringValue ()) ;
      result.appendString (" UpEnumerator_") ;
      result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::current_") ;
      result.appendString (enumerator_12673.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 310)).stringValue ()) ;
      result.appendString (" (LOCATION_ARGS) const {\n  return mElementArray (mIndex COMMA_THERE).mProperty_") ;
      result.appendString (enumerator_12673.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 311)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      enumerator_12673.gotoNextObject () ;
      index_12673_IDX.increment () ;
    }
  }
  result.appendString ("\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForStruct'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_forbiddenKeysForStruct (Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 105)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("description")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 105)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("object")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 105)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("dynamicType")  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 105)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForStruct = false ;
static GGS_stringset gOnceFunctionResult_forbiddenKeysForStruct ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_forbiddenKeysForStruct (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForStruct) {
    gOnceFunctionResult_forbiddenKeysForStruct = onceFunction_forbiddenKeysForStruct (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForStruct = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForStruct ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForStruct (void) {
  gOnceFunctionResult_forbiddenKeysForStruct.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForStruct (nullptr,
                                                                  releaseOnceFunctionResult_forbiddenKeysForStruct) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_forbiddenKeysForStruct [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_forbiddenKeysForStruct (Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForStruct (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForStruct ("forbiddenKeysForStruct",
                                                                        functionWithGenericHeader_forbiddenKeysForStruct,
                                                                        & kTypeDescriptor_GALGAS_stringset,
                                                                        0,
                                                                        functionArgs_forbiddenKeysForStruct) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@structDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structDeclarationAST temp_0 = this ;
  const GGS_structDeclarationAST temp_1 = this ;
  GGS_lstring var_key_5059 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 136)), temp_1.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5059, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 137)) ;
  }
  const GGS_structDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_5215 (temp_3.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_5215.hasCurrentObject ()) {
    GGS_lstring var_propertyKey_5254 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_5215.current (HERE).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 139)), enumerator_5215.current (HERE).readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5059, var_propertyKey_5254 COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 140)) ;
    }
    enumerator_5215.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_structDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_structDeclarationAST temp_0 = this ;
  result_result = GGS_string ("struct @").add_operation (temp_0.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 147)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@structDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                          const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                          const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_structTypeIndex_6342 ;
  {
  const GGS_structDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), var_structTypeIndex_6342, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 161)) ;
  }
  GGS_propertyMap var_propertyMap_6421 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
  GGS_classFunctionMap var_classFunctionMap_6465 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_constructorPropertyTypeList_6515 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_typedPropertyList_6576 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_6633 = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_1 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_6698 (temp_1.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_6698.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_propertyTypeEntry_6780 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6698.current (HERE).readProperty_typeName (), var_propertyTypeEntry_6780, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 169)) ;
    }
    GGS_string temp_2 ;
    const GalgasBool test_3 = enumerator_6698.current (HERE).readProperty_hasSelector ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      temp_2 = enumerator_6698.current (HERE).readProperty_name ().readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_3) {
      temp_2 = GGS_string::makeEmptyString () ;
    }
    GGS_lstring var_selector_6809 = temp_2.getter_nowhere (SOURCE_FILE ("declaration-type-struct.galgas", 170)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = enumerator_6698.current (HERE).readProperty_initialization ().getter_isNone (SOURCE_FILE ("declaration-type-struct.galgas", 171)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_constructorPropertyTypeList_6515.addAssignOperation (var_selector_6809, var_propertyTypeEntry_6780, enumerator_6698.current (HERE).readProperty_name ().readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 172)) ;
      }
    }
    var_typesToIncludeInHeaderCompilation_6633.addAssignOperation (var_propertyTypeEntry_6780  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 174)) ;
    var_typedPropertyList_6576.addAssignOperation (var_propertyTypeEntry_6780, enumerator_6698.current (HERE).readProperty_name (), enumerator_6698.current (HERE).readProperty_initialization (), enumerator_6698.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas", 179)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 179)), enumerator_6698.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 175)) ;
    {
    var_propertyMap_6421.setter_insertKey (enumerator_6698.current (HERE).readProperty_name (), extensionGetter_accessControl (enumerator_6698.current (HERE).readProperty_accessControl (), var_structTypeIndex_6342, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 183)), enumerator_6698.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas", 184)), var_propertyTypeEntry_6780, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 181)) ;
    }
    enumerator_6698.gotoNextObject () ;
  }
  {
  var_classFunctionMap_6465.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("new"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 189)), inCompiler COMMA_HERE), var_constructorPropertyTypeList_6515, GGS_bool (true), var_structTypeIndex_6342, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 188)) ;
  }
  GGS_getterMap var_getterMap_7773 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_7773, inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 195)) ;
  }
  GGS_setterMap var_setterMap_7826 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_7866 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_7914 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_structDeclarationAST temp_5 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_5.readProperty_structTypeName (), GGS_bool (false), var_initializerMap_7866, var_getterMap_7773, var_setterMap_7826, var_instanceMethodMap_7914, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 200)) ;
  }
  GGS_typeFeatures var_features_8366 = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-type-struct.galgas", 215)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, var_initializerMap_7866.getter_count (SOURCE_FILE ("declaration-type-struct.galgas", 217)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_features_8366.orAssignOperation(GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 218)) ;
      {
      const GGS_structDeclarationAST temp_7 = this ;
      var_initializerMap_7866.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_constructorPropertyTypeList_6515, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 220)), temp_7.readProperty_structTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorPropertyTypeList_6515, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 219)) ;
      }
    }
  }
  const GGS_structDeclarationAST temp_8 = this ;
  switch (temp_8.readProperty_comparison ().enumValue ()) {
  case GGS_structComparison::Enumeration::invalid:
    break ;
  case GGS_structComparison::Enumeration::enum_none:
    break ;
  case GGS_structComparison::Enumeration::enum_equatable:
    {
      var_features_8366.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 228)) ;
    }
    break ;
  case GGS_structComparison::Enumeration::enum_comparable:
    {
      var_features_8366.orAssignOperation(GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas", 230)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas", 230)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 230)) ;
    }
    break ;
  }
  {
  const GGS_structDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_structTypeName (), var_features_8366, GGS_bool (true), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 232)) ;
  }
  GGS_unifiedTypeMapEntry var_enumeratedType_9196 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_structDeclarationAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_enumeratedElementTypeName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      var_enumeratedType_9196 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas", 242)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    {
    const GGS_structDeclarationAST temp_12 = this ;
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_12.readProperty_enumeratedElementTypeName (), var_enumeratedType_9196, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 244)) ;
    }
  }
  const GGS_structDeclarationAST temp_13 = this ;
  const GGS_structDeclarationAST temp_14 = this ;
  const GGS_structDeclarationAST temp_15 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_9427 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_13.readProperty_structTypeName (), temp_14.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas", 252)), GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("declaration-type-struct.galgas", 253)), GGS_bool (false), var_typedPropertyList_6576, var_propertyMap_6421, var_typedPropertyList_6576, var_initializerMap_7866, var_classFunctionMap_6465, var_getterMap_7773, var_setterMap_7826, var_instanceMethodMap_7914, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-struct.galgas", 264)), GGS_subscriptMap::init (inCompiler COMMA_HERE), GGS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_8366, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_enumeratedType_9196, GGS_string ("struct-").add_operation (temp_15.readProperty_structTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-struct.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 271)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-struct.galgas", 272)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_9427.readProperty_typeName (), var_typeDefinition_9427, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 274)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@structDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::method_semanticAnalysis (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                         const GGS_string /* constinArgument_inProductDirectory */,
                                                         const GGS_semanticContext constinArgument_inSemanticContext,
                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                         const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                         GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_structType_11068 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 287)) ;
  const GGS_structDeclarationAST temp_1 = this ;
  GGS_lstring var_structNameForUsefulness_11142 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_structTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 288)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_structDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mStructurePropertyListAST ().getter_count (SOURCE_FILE ("declaration-type-struct.galgas", 290)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_structDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_structTypeName ().readProperty_location (), GGS_string ("a structure cannot be empty: it must have at least one property"), fixItArray5  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 291)) ;
    }
  }
  GGS_typedPropertyList var_typedPropertyList_11420 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_constructorArgumentList_11471 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_propertyIndexMap var_propertyMap_11527 = GGS_propertyIndexMap::init (inCompiler COMMA_HERE) ;
  const GGS_structDeclarationAST temp_6 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_11570 (temp_6.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_11570.hasCurrentObject ()) {
    GGS_lstring var_propertyTypeNameForUsefulness_11609 = function_typeNameForUsefulEntitiesGraph (enumerator_11570.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 297)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_11142, var_propertyTypeNameForUsefulness_11609 COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 298)) ;
    }
    GGS_unifiedTypeMapEntry var_t_11809 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11570.current (HERE).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 299)) ;
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 300)).getter_hasKey (enumerator_11570.current (HERE).readProperty_name ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 300)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GGS_string var_m_11955 = GGS_string ("an property cannot be named:") ;
        UpEnumerator_stringset enumerator_12031 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 302))) ;
        while (enumerator_12031.hasCurrentObject ()) {
          var_m_11955.plusAssignOperation(GGS_string (" ").add_operation (enumerator_12031.current (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 303)) ;
          enumerator_12031.gotoNextObject () ;
        }
        var_m_11955.plusAssignOperation(GGS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 305)) ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_11570.current (HERE).readProperty_name ().readProperty_location (), var_m_11955, fixItArray8  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 306)) ;
      }
    }
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = enumerator_11570.current (HERE).readProperty_mutability ().getter_isWeakProperty (SOURCE_FILE ("declaration-type-struct.galgas", 308)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        switch (extensionGetter_definition (var_t_11809, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 309)).readProperty_unwrappedType ().enumValue ()) {
        case GGS_unifiedTypeMapEntry::Enumeration::invalid:
          break ;
        case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
          {
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_11570.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the weak property type should be an optional class"), fixItArray10  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 311)) ;
          }
          break ;
        case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
          {
            GGS_unifiedTypeMapElementClass_2E_weak extractedValue_12378_aWeakType_0 ;
            extensionGetter_definition (var_t_11809, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 309)).readProperty_unwrappedType ().getAssociatedValuesFor_element (extractedValue_12378_aWeakType_0) ;
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              const GGS_unifiedTypeMapElementClass var_aType_12408 = extractedValue_12378_aWeakType_0.unwrappedValue () ;
              if (!extractedValue_12378_aWeakType_0.isValuated ()) {
                test_11 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_11) {
                const GGS_typeKindEnum_2E_classType var_ref_12431 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) var_aType_12408.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 313)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("declaration-type-struct.galgas", 313)).unwrappedValue () ;
                if (!callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) var_aType_12408.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 313)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("declaration-type-struct.galgas", 313)).isValuated ()) {
                  test_11 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_11) {
                  GalgasBool test_12 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_12) {
                    test_12 = var_ref_12431.readProperty_isReference ().operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 314)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_12) {
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (enumerator_11570.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the weak property type should be an optional refclass"), fixItArray13  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 315)) ;
                    }
                  }
                }
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              GenericArray <FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (enumerator_11570.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the weak property type should be an optional class"), fixItArray14  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 318)) ;
            }
          }
          break ;
        }
      }
    }
    {
    var_propertyMap_11527.setter_insertKey (enumerator_11570.current (HERE).readProperty_name (), var_t_11809, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 322)) ;
    }
    switch (enumerator_11570.current (HERE).readProperty_initialization ().enumValue ()) {
    case GGS_propertyInCollectionInitializationAST::Enumeration::invalid:
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_none:
      {
        var_constructorArgumentList_11471.addAssignOperation (var_t_11809, enumerator_11570.current (HERE).readProperty_name (), enumerator_11570.current (HERE).readProperty_initialization (), enumerator_11570.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas", 329)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 329)), enumerator_11570.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 325)) ;
      }
      break ;
    case GGS_propertyInCollectionInitializationAST::Enumeration::enum_some:
      break ;
    }
    var_typedPropertyList_11420.addAssignOperation (var_t_11809, enumerator_11570.current (HERE).readProperty_name (), enumerator_11570.current (HERE).readProperty_initialization (), enumerator_11570.current (HERE).readProperty_mutability ().getter_isConstantProperty (SOURCE_FILE ("declaration-type-struct.galgas", 337)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 337)), enumerator_11570.current (HERE).readProperty_hasSelector ()  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 333)) ;
    const GGS_structDeclarationAST temp_15 = this ;
    switch (temp_15.readProperty_comparison ().enumValue ()) {
    case GGS_structComparison::Enumeration::invalid:
      break ;
    case GGS_structComparison::Enumeration::enum_none:
      break ;
    case GGS_structComparison::Enumeration::enum_equatable:
      {
        GGS_typeFeatures var_propertyFeatures_13441 = extensionGetter_definition (var_t_11809, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 343)).readProperty_features () ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = var_propertyFeatures_13441.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-struct.galgas", 344)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 344)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 344)).operator_and (var_propertyFeatures_13441.getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas", 345)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 345)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 345)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 344)).operator_and (var_propertyFeatures_13441.getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("declaration-type-struct.galgas", 346)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 346)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 346)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 345)).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            GenericArray <FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_11570.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not equatable, because '").add_operation (enumerator_11570.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 348)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 348)), fixItArray17  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 347)) ;
          }
        }
      }
      break ;
    case GGS_structComparison::Enumeration::enum_comparable:
      {
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = extensionGetter_definition (var_t_11809, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 351)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-type-struct.galgas", 351)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 351)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 351)).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            GenericArray <FixItDescription> fixItArray19 ;
            inCompiler->emitSemanticError (enumerator_11570.current (HERE).readProperty_name ().readProperty_location (), GGS_string ("the structure is not comparable, because '").add_operation (enumerator_11570.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 353)).add_operation (GGS_string ("' is not"), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 353)), fixItArray19  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 352)) ;
          }
        }
      }
      break ;
    }
    enumerator_11570.gotoNextObject () ;
  }
  GGS_stringset var_unusedVariableCppNameSet_14288 ;
  GGS_string var_initializationCode_14324 ;
  const GGS_structDeclarationAST temp_20 = this ;
  extensionMethod_buildPropertyInitializationCode (temp_20.readProperty_mStructurePropertyListAST (), var_structNameForUsefulness_11142, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, ioArgument_ioUsefulEntitiesGraph, ioArgument_ioTypeMap, var_unusedVariableCppNameSet_14288, var_initializationCode_14324, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 358)) ;
  GGS_bool var_constructorNeedsCompilerVar_14365 = var_unusedVariableCppNameSet_14288.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 368)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 368)).operator_not (SOURCE_FILE ("declaration-type-struct.galgas", 368)) ;
  const GGS_structDeclarationAST temp_21 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("struct ").add_operation (temp_21.readProperty_structTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 370)), GGS_structTypeForGeneration::init_21__21__21__21__21__21_ (var_structType_11068, var_typedPropertyList_11420, var_constructorArgumentList_11471, var_initializationCode_14324, var_constructorNeedsCompilerVar_14365, extensionGetter_definition (var_structType_11068, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 377)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas", 377)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 377)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 369)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_11142, var_structNameForUsefulness_11142, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 380)) ;
  }
  GalgasBool test_22 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_22) {
    const GGS_structDeclarationAST temp_23 = this ;
    GGS_bool test_24 = temp_23.readProperty_isUsefullStruct () ;
    if (GalgasBool::boolTrue != test_24.boolEnum ()) {
      const GGS_structDeclarationAST temp_25 = this ;
      test_24 = temp_25.readProperty_isPredefined () ;
    }
    test_22 = test_24.boolEnum () ;
    if (GalgasBool::boolTrue == test_22) {
      ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_structNameForUsefulness_11142  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 382)) ;
    }
  }
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    test_26 = extensionGetter_definition (var_structType_11068, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 385)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_generateSynthetizedInitializer (SOURCE_FILE ("declaration-type-struct.galgas", 385)) COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 385)).boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      const GGS_structDeclarationAST temp_27 = this ;
      GGS_lstring var_initializerForUsefulness_15200 = function_initializerNameForUsefulEntitiesGraph (temp_27.readProperty_structTypeName (), extensionGetter_initializerSignature (var_constructorArgumentList_11471, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 386)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerForUsefulness_15200, var_initializerForUsefulness_15200, inCompiler COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 390)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_initializerForUsefulness_15200, var_structNameForUsefulness_11142 COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 391)) ;
      }
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_structDeclarationAST temp_29 = this ;
        GGS_bool test_30 = temp_29.readProperty_isUsefullStruct () ;
        if (GalgasBool::boolTrue != test_30.boolEnum ()) {
          const GGS_structDeclarationAST temp_31 = this ;
          test_30 = temp_31.readProperty_isPredefined () ;
        }
        test_28 = test_30.boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_initializerForUsefulness_15200  COMMA_SOURCE_FILE ("declaration-type-struct.galgas", 393)) ;
        }
      }
    }
  }
}

